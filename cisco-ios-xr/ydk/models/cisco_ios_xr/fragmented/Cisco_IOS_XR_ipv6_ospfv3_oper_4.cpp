
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ipv6_ospfv3_oper_4.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ipv6_ospfv3_oper {

Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LsaSummaryInfo::LsaSummaryInfo()
    :
    links{YType::uint16, "links"},
    router_la_bits{YType::uint8, "router-la-bits"},
    reference_type{YType::uint16, "reference-type"},
    reference_lsa_id{YType::uint32, "reference-lsa-id"},
    lsa_router_id{YType::uint32, "lsa-router-id"},
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint8, "prefix-length"},
    interface_name{YType::str, "interface-name"},
    is_virtual_link{YType::boolean, "is-virtual-link"},
    virtual_link_id{YType::uint32, "virtual-link-id"},
    is_sham_link{YType::boolean, "is-sham-link"},
    sham_link_id{YType::uint32, "sham-link-id"}
    	,
    lsa_header(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LsaSummaryInfo::LsaHeader>())
	,lsa_detail(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LsaSummaryInfo::LsaDetail>())
{
    lsa_header->parent = this;
    lsa_detail->parent = this;

    yang_name = "lsa-summary-info"; yang_parent_name = "lsa-info"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LsaSummaryInfo::~LsaSummaryInfo()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LsaSummaryInfo::has_data() const
{
    return links.is_set
	|| router_la_bits.is_set
	|| reference_type.is_set
	|| reference_lsa_id.is_set
	|| lsa_router_id.is_set
	|| prefix.is_set
	|| prefix_length.is_set
	|| interface_name.is_set
	|| is_virtual_link.is_set
	|| virtual_link_id.is_set
	|| is_sham_link.is_set
	|| sham_link_id.is_set
	|| (lsa_header !=  nullptr && lsa_header->has_data())
	|| (lsa_detail !=  nullptr && lsa_detail->has_data());
}

bool Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LsaSummaryInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(links.yfilter)
	|| ydk::is_set(router_la_bits.yfilter)
	|| ydk::is_set(reference_type.yfilter)
	|| ydk::is_set(reference_lsa_id.yfilter)
	|| ydk::is_set(lsa_router_id.yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(is_virtual_link.yfilter)
	|| ydk::is_set(virtual_link_id.yfilter)
	|| ydk::is_set(is_sham_link.yfilter)
	|| ydk::is_set(sham_link_id.yfilter)
	|| (lsa_header !=  nullptr && lsa_header->has_operation())
	|| (lsa_detail !=  nullptr && lsa_detail->has_operation());
}

std::string Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LsaSummaryInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-summary-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LsaSummaryInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (links.is_set || is_set(links.yfilter)) leaf_name_data.push_back(links.get_name_leafdata());
    if (router_la_bits.is_set || is_set(router_la_bits.yfilter)) leaf_name_data.push_back(router_la_bits.get_name_leafdata());
    if (reference_type.is_set || is_set(reference_type.yfilter)) leaf_name_data.push_back(reference_type.get_name_leafdata());
    if (reference_lsa_id.is_set || is_set(reference_lsa_id.yfilter)) leaf_name_data.push_back(reference_lsa_id.get_name_leafdata());
    if (lsa_router_id.is_set || is_set(lsa_router_id.yfilter)) leaf_name_data.push_back(lsa_router_id.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (is_virtual_link.is_set || is_set(is_virtual_link.yfilter)) leaf_name_data.push_back(is_virtual_link.get_name_leafdata());
    if (virtual_link_id.is_set || is_set(virtual_link_id.yfilter)) leaf_name_data.push_back(virtual_link_id.get_name_leafdata());
    if (is_sham_link.is_set || is_set(is_sham_link.yfilter)) leaf_name_data.push_back(is_sham_link.get_name_leafdata());
    if (sham_link_id.is_set || is_set(sham_link_id.yfilter)) leaf_name_data.push_back(sham_link_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LsaSummaryInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsa-header")
    {
        if(lsa_header == nullptr)
        {
            lsa_header = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LsaSummaryInfo::LsaHeader>();
        }
        return lsa_header;
    }

    if(child_yang_name == "lsa-detail")
    {
        if(lsa_detail == nullptr)
        {
            lsa_detail = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LsaSummaryInfo::LsaDetail>();
        }
        return lsa_detail;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LsaSummaryInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(lsa_header != nullptr)
    {
        children["lsa-header"] = lsa_header;
    }

    if(lsa_detail != nullptr)
    {
        children["lsa-detail"] = lsa_detail;
    }

    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LsaSummaryInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "links")
    {
        links = value;
        links.value_namespace = name_space;
        links.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "router-la-bits")
    {
        router_la_bits = value;
        router_la_bits.value_namespace = name_space;
        router_la_bits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reference-type")
    {
        reference_type = value;
        reference_type.value_namespace = name_space;
        reference_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reference-lsa-id")
    {
        reference_lsa_id = value;
        reference_lsa_id.value_namespace = name_space;
        reference_lsa_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-router-id")
    {
        lsa_router_id = value;
        lsa_router_id.value_namespace = name_space;
        lsa_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-virtual-link")
    {
        is_virtual_link = value;
        is_virtual_link.value_namespace = name_space;
        is_virtual_link.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtual-link-id")
    {
        virtual_link_id = value;
        virtual_link_id.value_namespace = name_space;
        virtual_link_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-sham-link")
    {
        is_sham_link = value;
        is_sham_link.value_namespace = name_space;
        is_sham_link.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sham-link-id")
    {
        sham_link_id = value;
        sham_link_id.value_namespace = name_space;
        sham_link_id.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LsaSummaryInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "links")
    {
        links.yfilter = yfilter;
    }
    if(value_path == "router-la-bits")
    {
        router_la_bits.yfilter = yfilter;
    }
    if(value_path == "reference-type")
    {
        reference_type.yfilter = yfilter;
    }
    if(value_path == "reference-lsa-id")
    {
        reference_lsa_id.yfilter = yfilter;
    }
    if(value_path == "lsa-router-id")
    {
        lsa_router_id.yfilter = yfilter;
    }
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "is-virtual-link")
    {
        is_virtual_link.yfilter = yfilter;
    }
    if(value_path == "virtual-link-id")
    {
        virtual_link_id.yfilter = yfilter;
    }
    if(value_path == "is-sham-link")
    {
        is_sham_link.yfilter = yfilter;
    }
    if(value_path == "sham-link-id")
    {
        sham_link_id.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LsaSummaryInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsa-header" || name == "lsa-detail" || name == "links" || name == "router-la-bits" || name == "reference-type" || name == "reference-lsa-id" || name == "lsa-router-id" || name == "prefix" || name == "prefix-length" || name == "interface-name" || name == "is-virtual-link" || name == "virtual-link-id" || name == "is-sham-link" || name == "sham-link-id")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LsaSummaryInfo::LsaHeader::LsaHeader()
    :
    lsa_type{YType::uint16, "lsa-type"},
    lsa_area_id{YType::str, "lsa-area-id"},
    lsa_age{YType::uint16, "lsa-age"},
    is_do_not_age_lsa{YType::boolean, "is-do-not-age-lsa"},
    ls_id{YType::uint32, "ls-id"},
    advertising_router{YType::str, "advertising-router"},
    sequence_number{YType::uint32, "sequence-number"},
    checksum{YType::uint16, "checksum"},
    is_graceful_restart_active{YType::boolean, "is-graceful-restart-active"}
{

    yang_name = "lsa-header"; yang_parent_name = "lsa-summary-info"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LsaSummaryInfo::LsaHeader::~LsaHeader()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LsaSummaryInfo::LsaHeader::has_data() const
{
    return lsa_type.is_set
	|| lsa_area_id.is_set
	|| lsa_age.is_set
	|| is_do_not_age_lsa.is_set
	|| ls_id.is_set
	|| advertising_router.is_set
	|| sequence_number.is_set
	|| checksum.is_set
	|| is_graceful_restart_active.is_set;
}

bool Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LsaSummaryInfo::LsaHeader::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lsa_type.yfilter)
	|| ydk::is_set(lsa_area_id.yfilter)
	|| ydk::is_set(lsa_age.yfilter)
	|| ydk::is_set(is_do_not_age_lsa.yfilter)
	|| ydk::is_set(ls_id.yfilter)
	|| ydk::is_set(advertising_router.yfilter)
	|| ydk::is_set(sequence_number.yfilter)
	|| ydk::is_set(checksum.yfilter)
	|| ydk::is_set(is_graceful_restart_active.yfilter);
}

std::string Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LsaSummaryInfo::LsaHeader::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-header";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LsaSummaryInfo::LsaHeader::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsa_type.is_set || is_set(lsa_type.yfilter)) leaf_name_data.push_back(lsa_type.get_name_leafdata());
    if (lsa_area_id.is_set || is_set(lsa_area_id.yfilter)) leaf_name_data.push_back(lsa_area_id.get_name_leafdata());
    if (lsa_age.is_set || is_set(lsa_age.yfilter)) leaf_name_data.push_back(lsa_age.get_name_leafdata());
    if (is_do_not_age_lsa.is_set || is_set(is_do_not_age_lsa.yfilter)) leaf_name_data.push_back(is_do_not_age_lsa.get_name_leafdata());
    if (ls_id.is_set || is_set(ls_id.yfilter)) leaf_name_data.push_back(ls_id.get_name_leafdata());
    if (advertising_router.is_set || is_set(advertising_router.yfilter)) leaf_name_data.push_back(advertising_router.get_name_leafdata());
    if (sequence_number.is_set || is_set(sequence_number.yfilter)) leaf_name_data.push_back(sequence_number.get_name_leafdata());
    if (checksum.is_set || is_set(checksum.yfilter)) leaf_name_data.push_back(checksum.get_name_leafdata());
    if (is_graceful_restart_active.is_set || is_set(is_graceful_restart_active.yfilter)) leaf_name_data.push_back(is_graceful_restart_active.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LsaSummaryInfo::LsaHeader::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LsaSummaryInfo::LsaHeader::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LsaSummaryInfo::LsaHeader::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsa-type")
    {
        lsa_type = value;
        lsa_type.value_namespace = name_space;
        lsa_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-area-id")
    {
        lsa_area_id = value;
        lsa_area_id.value_namespace = name_space;
        lsa_area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-age")
    {
        lsa_age = value;
        lsa_age.value_namespace = name_space;
        lsa_age.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-do-not-age-lsa")
    {
        is_do_not_age_lsa = value;
        is_do_not_age_lsa.value_namespace = name_space;
        is_do_not_age_lsa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ls-id")
    {
        ls_id = value;
        ls_id.value_namespace = name_space;
        ls_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advertising-router")
    {
        advertising_router = value;
        advertising_router.value_namespace = name_space;
        advertising_router.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequence-number")
    {
        sequence_number = value;
        sequence_number.value_namespace = name_space;
        sequence_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "checksum")
    {
        checksum = value;
        checksum.value_namespace = name_space;
        checksum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-graceful-restart-active")
    {
        is_graceful_restart_active = value;
        is_graceful_restart_active.value_namespace = name_space;
        is_graceful_restart_active.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LsaSummaryInfo::LsaHeader::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsa-type")
    {
        lsa_type.yfilter = yfilter;
    }
    if(value_path == "lsa-area-id")
    {
        lsa_area_id.yfilter = yfilter;
    }
    if(value_path == "lsa-age")
    {
        lsa_age.yfilter = yfilter;
    }
    if(value_path == "is-do-not-age-lsa")
    {
        is_do_not_age_lsa.yfilter = yfilter;
    }
    if(value_path == "ls-id")
    {
        ls_id.yfilter = yfilter;
    }
    if(value_path == "advertising-router")
    {
        advertising_router.yfilter = yfilter;
    }
    if(value_path == "sequence-number")
    {
        sequence_number.yfilter = yfilter;
    }
    if(value_path == "checksum")
    {
        checksum.yfilter = yfilter;
    }
    if(value_path == "is-graceful-restart-active")
    {
        is_graceful_restart_active.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LsaSummaryInfo::LsaHeader::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsa-type" || name == "lsa-area-id" || name == "lsa-age" || name == "is-do-not-age-lsa" || name == "ls-id" || name == "advertising-router" || name == "sequence-number" || name == "checksum" || name == "is-graceful-restart-active")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LsaSummaryInfo::LsaDetail::LsaDetail()
    :
    second_table_index{YType::uint8, "second-table-index"},
    minute_table_index{YType::uint8, "minute-table-index"},
    free_time{YType::uint32, "free-time"},
    is_deleted{YType::boolean, "is-deleted"},
    is_routing_bit{YType::boolean, "is-routing-bit"},
    is_advertising_router_reachable{YType::boolean, "is-advertising-router-reachable"},
    is_no_delete{YType::boolean, "is-no-delete"},
    is_neighbor_exchange{YType::boolean, "is-neighbor-exchange"},
    is_routing_table{YType::boolean, "is-routing-table"},
    is_acknowledged{YType::boolean, "is-acknowledged"},
    is_maximum_aged{YType::boolean, "is-maximum-aged"},
    is_partial_spf{YType::boolean, "is-partial-spf"},
    is_flood_pending{YType::boolean, "is-flood-pending"},
    rate_limit{YType::boolean, "rate-limit"},
    is_nsr_ack_pending{YType::boolean, "is-nsr-ack-pending"},
    nsr_flood_required{YType::boolean, "nsr-flood-required"},
    lsa_flood_required_post_fail_over{YType::boolean, "lsa-flood-required-post-fail-over"},
    lsa_length{YType::uint16, "lsa-length"},
    lsa_sync_state{YType::enumeration, "lsa-sync-state"}
{

    yang_name = "lsa-detail"; yang_parent_name = "lsa-summary-info"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LsaSummaryInfo::LsaDetail::~LsaDetail()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LsaSummaryInfo::LsaDetail::has_data() const
{
    return second_table_index.is_set
	|| minute_table_index.is_set
	|| free_time.is_set
	|| is_deleted.is_set
	|| is_routing_bit.is_set
	|| is_advertising_router_reachable.is_set
	|| is_no_delete.is_set
	|| is_neighbor_exchange.is_set
	|| is_routing_table.is_set
	|| is_acknowledged.is_set
	|| is_maximum_aged.is_set
	|| is_partial_spf.is_set
	|| is_flood_pending.is_set
	|| rate_limit.is_set
	|| is_nsr_ack_pending.is_set
	|| nsr_flood_required.is_set
	|| lsa_flood_required_post_fail_over.is_set
	|| lsa_length.is_set
	|| lsa_sync_state.is_set;
}

bool Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LsaSummaryInfo::LsaDetail::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(second_table_index.yfilter)
	|| ydk::is_set(minute_table_index.yfilter)
	|| ydk::is_set(free_time.yfilter)
	|| ydk::is_set(is_deleted.yfilter)
	|| ydk::is_set(is_routing_bit.yfilter)
	|| ydk::is_set(is_advertising_router_reachable.yfilter)
	|| ydk::is_set(is_no_delete.yfilter)
	|| ydk::is_set(is_neighbor_exchange.yfilter)
	|| ydk::is_set(is_routing_table.yfilter)
	|| ydk::is_set(is_acknowledged.yfilter)
	|| ydk::is_set(is_maximum_aged.yfilter)
	|| ydk::is_set(is_partial_spf.yfilter)
	|| ydk::is_set(is_flood_pending.yfilter)
	|| ydk::is_set(rate_limit.yfilter)
	|| ydk::is_set(is_nsr_ack_pending.yfilter)
	|| ydk::is_set(nsr_flood_required.yfilter)
	|| ydk::is_set(lsa_flood_required_post_fail_over.yfilter)
	|| ydk::is_set(lsa_length.yfilter)
	|| ydk::is_set(lsa_sync_state.yfilter);
}

std::string Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LsaSummaryInfo::LsaDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LsaSummaryInfo::LsaDetail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (second_table_index.is_set || is_set(second_table_index.yfilter)) leaf_name_data.push_back(second_table_index.get_name_leafdata());
    if (minute_table_index.is_set || is_set(minute_table_index.yfilter)) leaf_name_data.push_back(minute_table_index.get_name_leafdata());
    if (free_time.is_set || is_set(free_time.yfilter)) leaf_name_data.push_back(free_time.get_name_leafdata());
    if (is_deleted.is_set || is_set(is_deleted.yfilter)) leaf_name_data.push_back(is_deleted.get_name_leafdata());
    if (is_routing_bit.is_set || is_set(is_routing_bit.yfilter)) leaf_name_data.push_back(is_routing_bit.get_name_leafdata());
    if (is_advertising_router_reachable.is_set || is_set(is_advertising_router_reachable.yfilter)) leaf_name_data.push_back(is_advertising_router_reachable.get_name_leafdata());
    if (is_no_delete.is_set || is_set(is_no_delete.yfilter)) leaf_name_data.push_back(is_no_delete.get_name_leafdata());
    if (is_neighbor_exchange.is_set || is_set(is_neighbor_exchange.yfilter)) leaf_name_data.push_back(is_neighbor_exchange.get_name_leafdata());
    if (is_routing_table.is_set || is_set(is_routing_table.yfilter)) leaf_name_data.push_back(is_routing_table.get_name_leafdata());
    if (is_acknowledged.is_set || is_set(is_acknowledged.yfilter)) leaf_name_data.push_back(is_acknowledged.get_name_leafdata());
    if (is_maximum_aged.is_set || is_set(is_maximum_aged.yfilter)) leaf_name_data.push_back(is_maximum_aged.get_name_leafdata());
    if (is_partial_spf.is_set || is_set(is_partial_spf.yfilter)) leaf_name_data.push_back(is_partial_spf.get_name_leafdata());
    if (is_flood_pending.is_set || is_set(is_flood_pending.yfilter)) leaf_name_data.push_back(is_flood_pending.get_name_leafdata());
    if (rate_limit.is_set || is_set(rate_limit.yfilter)) leaf_name_data.push_back(rate_limit.get_name_leafdata());
    if (is_nsr_ack_pending.is_set || is_set(is_nsr_ack_pending.yfilter)) leaf_name_data.push_back(is_nsr_ack_pending.get_name_leafdata());
    if (nsr_flood_required.is_set || is_set(nsr_flood_required.yfilter)) leaf_name_data.push_back(nsr_flood_required.get_name_leafdata());
    if (lsa_flood_required_post_fail_over.is_set || is_set(lsa_flood_required_post_fail_over.yfilter)) leaf_name_data.push_back(lsa_flood_required_post_fail_over.get_name_leafdata());
    if (lsa_length.is_set || is_set(lsa_length.yfilter)) leaf_name_data.push_back(lsa_length.get_name_leafdata());
    if (lsa_sync_state.is_set || is_set(lsa_sync_state.yfilter)) leaf_name_data.push_back(lsa_sync_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LsaSummaryInfo::LsaDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LsaSummaryInfo::LsaDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LsaSummaryInfo::LsaDetail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "second-table-index")
    {
        second_table_index = value;
        second_table_index.value_namespace = name_space;
        second_table_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minute-table-index")
    {
        minute_table_index = value;
        minute_table_index.value_namespace = name_space;
        minute_table_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "free-time")
    {
        free_time = value;
        free_time.value_namespace = name_space;
        free_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-deleted")
    {
        is_deleted = value;
        is_deleted.value_namespace = name_space;
        is_deleted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-routing-bit")
    {
        is_routing_bit = value;
        is_routing_bit.value_namespace = name_space;
        is_routing_bit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-advertising-router-reachable")
    {
        is_advertising_router_reachable = value;
        is_advertising_router_reachable.value_namespace = name_space;
        is_advertising_router_reachable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-no-delete")
    {
        is_no_delete = value;
        is_no_delete.value_namespace = name_space;
        is_no_delete.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-neighbor-exchange")
    {
        is_neighbor_exchange = value;
        is_neighbor_exchange.value_namespace = name_space;
        is_neighbor_exchange.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-routing-table")
    {
        is_routing_table = value;
        is_routing_table.value_namespace = name_space;
        is_routing_table.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-acknowledged")
    {
        is_acknowledged = value;
        is_acknowledged.value_namespace = name_space;
        is_acknowledged.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-maximum-aged")
    {
        is_maximum_aged = value;
        is_maximum_aged.value_namespace = name_space;
        is_maximum_aged.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-partial-spf")
    {
        is_partial_spf = value;
        is_partial_spf.value_namespace = name_space;
        is_partial_spf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-flood-pending")
    {
        is_flood_pending = value;
        is_flood_pending.value_namespace = name_space;
        is_flood_pending.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rate-limit")
    {
        rate_limit = value;
        rate_limit.value_namespace = name_space;
        rate_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-nsr-ack-pending")
    {
        is_nsr_ack_pending = value;
        is_nsr_ack_pending.value_namespace = name_space;
        is_nsr_ack_pending.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-flood-required")
    {
        nsr_flood_required = value;
        nsr_flood_required.value_namespace = name_space;
        nsr_flood_required.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-flood-required-post-fail-over")
    {
        lsa_flood_required_post_fail_over = value;
        lsa_flood_required_post_fail_over.value_namespace = name_space;
        lsa_flood_required_post_fail_over.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-length")
    {
        lsa_length = value;
        lsa_length.value_namespace = name_space;
        lsa_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-sync-state")
    {
        lsa_sync_state = value;
        lsa_sync_state.value_namespace = name_space;
        lsa_sync_state.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LsaSummaryInfo::LsaDetail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "second-table-index")
    {
        second_table_index.yfilter = yfilter;
    }
    if(value_path == "minute-table-index")
    {
        minute_table_index.yfilter = yfilter;
    }
    if(value_path == "free-time")
    {
        free_time.yfilter = yfilter;
    }
    if(value_path == "is-deleted")
    {
        is_deleted.yfilter = yfilter;
    }
    if(value_path == "is-routing-bit")
    {
        is_routing_bit.yfilter = yfilter;
    }
    if(value_path == "is-advertising-router-reachable")
    {
        is_advertising_router_reachable.yfilter = yfilter;
    }
    if(value_path == "is-no-delete")
    {
        is_no_delete.yfilter = yfilter;
    }
    if(value_path == "is-neighbor-exchange")
    {
        is_neighbor_exchange.yfilter = yfilter;
    }
    if(value_path == "is-routing-table")
    {
        is_routing_table.yfilter = yfilter;
    }
    if(value_path == "is-acknowledged")
    {
        is_acknowledged.yfilter = yfilter;
    }
    if(value_path == "is-maximum-aged")
    {
        is_maximum_aged.yfilter = yfilter;
    }
    if(value_path == "is-partial-spf")
    {
        is_partial_spf.yfilter = yfilter;
    }
    if(value_path == "is-flood-pending")
    {
        is_flood_pending.yfilter = yfilter;
    }
    if(value_path == "rate-limit")
    {
        rate_limit.yfilter = yfilter;
    }
    if(value_path == "is-nsr-ack-pending")
    {
        is_nsr_ack_pending.yfilter = yfilter;
    }
    if(value_path == "nsr-flood-required")
    {
        nsr_flood_required.yfilter = yfilter;
    }
    if(value_path == "lsa-flood-required-post-fail-over")
    {
        lsa_flood_required_post_fail_over.yfilter = yfilter;
    }
    if(value_path == "lsa-length")
    {
        lsa_length.yfilter = yfilter;
    }
    if(value_path == "lsa-sync-state")
    {
        lsa_sync_state.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LsaSummaryInfo::LsaDetail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "second-table-index" || name == "minute-table-index" || name == "free-time" || name == "is-deleted" || name == "is-routing-bit" || name == "is-advertising-router-reachable" || name == "is-no-delete" || name == "is-neighbor-exchange" || name == "is-routing-table" || name == "is-acknowledged" || name == "is-maximum-aged" || name == "is-partial-spf" || name == "is-flood-pending" || name == "rate-limit" || name == "is-nsr-ack-pending" || name == "nsr-flood-required" || name == "lsa-flood-required-post-fail-over" || name == "lsa-length" || name == "lsa-sync-state")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::RouterLsaType()
    :
    router_la_bits{YType::uint8, "router-la-bits"}
    	,
    lsa_header(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::LsaHeader>())
	,lsa_detail(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::LsaDetail>())
	,rpf_path(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::RpfPath>())
{
    lsa_header->parent = this;
    lsa_detail->parent = this;
    rpf_path->parent = this;

    yang_name = "router-lsa-type"; yang_parent_name = "lsa-info"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::~RouterLsaType()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::has_data() const
{
    for (std::size_t index=0; index<link.size(); index++)
    {
        if(link[index]->has_data())
            return true;
    }
    return router_la_bits.is_set
	|| (lsa_header !=  nullptr && lsa_header->has_data())
	|| (lsa_detail !=  nullptr && lsa_detail->has_data())
	|| (rpf_path !=  nullptr && rpf_path->has_data());
}

bool Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::has_operation() const
{
    for (std::size_t index=0; index<link.size(); index++)
    {
        if(link[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(router_la_bits.yfilter)
	|| (lsa_header !=  nullptr && lsa_header->has_operation())
	|| (lsa_detail !=  nullptr && lsa_detail->has_operation())
	|| (rpf_path !=  nullptr && rpf_path->has_operation());
}

std::string Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "router-lsa-type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (router_la_bits.is_set || is_set(router_la_bits.yfilter)) leaf_name_data.push_back(router_la_bits.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsa-header")
    {
        if(lsa_header == nullptr)
        {
            lsa_header = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::LsaHeader>();
        }
        return lsa_header;
    }

    if(child_yang_name == "lsa-detail")
    {
        if(lsa_detail == nullptr)
        {
            lsa_detail = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::LsaDetail>();
        }
        return lsa_detail;
    }

    if(child_yang_name == "rpf-path")
    {
        if(rpf_path == nullptr)
        {
            rpf_path = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::RpfPath>();
        }
        return rpf_path;
    }

    if(child_yang_name == "link")
    {
        auto c = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::Link>();
        c->parent = this;
        link.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(lsa_header != nullptr)
    {
        children["lsa-header"] = lsa_header;
    }

    if(lsa_detail != nullptr)
    {
        children["lsa-detail"] = lsa_detail;
    }

    if(rpf_path != nullptr)
    {
        children["rpf-path"] = rpf_path;
    }

    count = 0;
    for (auto const & c : link)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "router-la-bits")
    {
        router_la_bits = value;
        router_la_bits.value_namespace = name_space;
        router_la_bits.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "router-la-bits")
    {
        router_la_bits.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsa-header" || name == "lsa-detail" || name == "rpf-path" || name == "link" || name == "router-la-bits")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::LsaHeader::LsaHeader()
    :
    lsa_type{YType::uint16, "lsa-type"},
    lsa_area_id{YType::str, "lsa-area-id"},
    lsa_age{YType::uint16, "lsa-age"},
    is_do_not_age_lsa{YType::boolean, "is-do-not-age-lsa"},
    ls_id{YType::uint32, "ls-id"},
    advertising_router{YType::str, "advertising-router"},
    sequence_number{YType::uint32, "sequence-number"},
    checksum{YType::uint16, "checksum"},
    is_graceful_restart_active{YType::boolean, "is-graceful-restart-active"}
{

    yang_name = "lsa-header"; yang_parent_name = "router-lsa-type"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::LsaHeader::~LsaHeader()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::LsaHeader::has_data() const
{
    return lsa_type.is_set
	|| lsa_area_id.is_set
	|| lsa_age.is_set
	|| is_do_not_age_lsa.is_set
	|| ls_id.is_set
	|| advertising_router.is_set
	|| sequence_number.is_set
	|| checksum.is_set
	|| is_graceful_restart_active.is_set;
}

bool Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::LsaHeader::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lsa_type.yfilter)
	|| ydk::is_set(lsa_area_id.yfilter)
	|| ydk::is_set(lsa_age.yfilter)
	|| ydk::is_set(is_do_not_age_lsa.yfilter)
	|| ydk::is_set(ls_id.yfilter)
	|| ydk::is_set(advertising_router.yfilter)
	|| ydk::is_set(sequence_number.yfilter)
	|| ydk::is_set(checksum.yfilter)
	|| ydk::is_set(is_graceful_restart_active.yfilter);
}

std::string Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::LsaHeader::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-header";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::LsaHeader::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsa_type.is_set || is_set(lsa_type.yfilter)) leaf_name_data.push_back(lsa_type.get_name_leafdata());
    if (lsa_area_id.is_set || is_set(lsa_area_id.yfilter)) leaf_name_data.push_back(lsa_area_id.get_name_leafdata());
    if (lsa_age.is_set || is_set(lsa_age.yfilter)) leaf_name_data.push_back(lsa_age.get_name_leafdata());
    if (is_do_not_age_lsa.is_set || is_set(is_do_not_age_lsa.yfilter)) leaf_name_data.push_back(is_do_not_age_lsa.get_name_leafdata());
    if (ls_id.is_set || is_set(ls_id.yfilter)) leaf_name_data.push_back(ls_id.get_name_leafdata());
    if (advertising_router.is_set || is_set(advertising_router.yfilter)) leaf_name_data.push_back(advertising_router.get_name_leafdata());
    if (sequence_number.is_set || is_set(sequence_number.yfilter)) leaf_name_data.push_back(sequence_number.get_name_leafdata());
    if (checksum.is_set || is_set(checksum.yfilter)) leaf_name_data.push_back(checksum.get_name_leafdata());
    if (is_graceful_restart_active.is_set || is_set(is_graceful_restart_active.yfilter)) leaf_name_data.push_back(is_graceful_restart_active.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::LsaHeader::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::LsaHeader::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::LsaHeader::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsa-type")
    {
        lsa_type = value;
        lsa_type.value_namespace = name_space;
        lsa_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-area-id")
    {
        lsa_area_id = value;
        lsa_area_id.value_namespace = name_space;
        lsa_area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-age")
    {
        lsa_age = value;
        lsa_age.value_namespace = name_space;
        lsa_age.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-do-not-age-lsa")
    {
        is_do_not_age_lsa = value;
        is_do_not_age_lsa.value_namespace = name_space;
        is_do_not_age_lsa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ls-id")
    {
        ls_id = value;
        ls_id.value_namespace = name_space;
        ls_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advertising-router")
    {
        advertising_router = value;
        advertising_router.value_namespace = name_space;
        advertising_router.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequence-number")
    {
        sequence_number = value;
        sequence_number.value_namespace = name_space;
        sequence_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "checksum")
    {
        checksum = value;
        checksum.value_namespace = name_space;
        checksum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-graceful-restart-active")
    {
        is_graceful_restart_active = value;
        is_graceful_restart_active.value_namespace = name_space;
        is_graceful_restart_active.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::LsaHeader::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsa-type")
    {
        lsa_type.yfilter = yfilter;
    }
    if(value_path == "lsa-area-id")
    {
        lsa_area_id.yfilter = yfilter;
    }
    if(value_path == "lsa-age")
    {
        lsa_age.yfilter = yfilter;
    }
    if(value_path == "is-do-not-age-lsa")
    {
        is_do_not_age_lsa.yfilter = yfilter;
    }
    if(value_path == "ls-id")
    {
        ls_id.yfilter = yfilter;
    }
    if(value_path == "advertising-router")
    {
        advertising_router.yfilter = yfilter;
    }
    if(value_path == "sequence-number")
    {
        sequence_number.yfilter = yfilter;
    }
    if(value_path == "checksum")
    {
        checksum.yfilter = yfilter;
    }
    if(value_path == "is-graceful-restart-active")
    {
        is_graceful_restart_active.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::LsaHeader::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsa-type" || name == "lsa-area-id" || name == "lsa-age" || name == "is-do-not-age-lsa" || name == "ls-id" || name == "advertising-router" || name == "sequence-number" || name == "checksum" || name == "is-graceful-restart-active")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::LsaDetail::LsaDetail()
    :
    second_table_index{YType::uint8, "second-table-index"},
    minute_table_index{YType::uint8, "minute-table-index"},
    free_time{YType::uint32, "free-time"},
    is_deleted{YType::boolean, "is-deleted"},
    is_routing_bit{YType::boolean, "is-routing-bit"},
    is_advertising_router_reachable{YType::boolean, "is-advertising-router-reachable"},
    is_no_delete{YType::boolean, "is-no-delete"},
    is_neighbor_exchange{YType::boolean, "is-neighbor-exchange"},
    is_routing_table{YType::boolean, "is-routing-table"},
    is_acknowledged{YType::boolean, "is-acknowledged"},
    is_maximum_aged{YType::boolean, "is-maximum-aged"},
    is_partial_spf{YType::boolean, "is-partial-spf"},
    is_flood_pending{YType::boolean, "is-flood-pending"},
    rate_limit{YType::boolean, "rate-limit"},
    is_nsr_ack_pending{YType::boolean, "is-nsr-ack-pending"},
    nsr_flood_required{YType::boolean, "nsr-flood-required"},
    lsa_flood_required_post_fail_over{YType::boolean, "lsa-flood-required-post-fail-over"},
    lsa_length{YType::uint16, "lsa-length"},
    lsa_sync_state{YType::enumeration, "lsa-sync-state"}
{

    yang_name = "lsa-detail"; yang_parent_name = "router-lsa-type"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::LsaDetail::~LsaDetail()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::LsaDetail::has_data() const
{
    return second_table_index.is_set
	|| minute_table_index.is_set
	|| free_time.is_set
	|| is_deleted.is_set
	|| is_routing_bit.is_set
	|| is_advertising_router_reachable.is_set
	|| is_no_delete.is_set
	|| is_neighbor_exchange.is_set
	|| is_routing_table.is_set
	|| is_acknowledged.is_set
	|| is_maximum_aged.is_set
	|| is_partial_spf.is_set
	|| is_flood_pending.is_set
	|| rate_limit.is_set
	|| is_nsr_ack_pending.is_set
	|| nsr_flood_required.is_set
	|| lsa_flood_required_post_fail_over.is_set
	|| lsa_length.is_set
	|| lsa_sync_state.is_set;
}

bool Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::LsaDetail::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(second_table_index.yfilter)
	|| ydk::is_set(minute_table_index.yfilter)
	|| ydk::is_set(free_time.yfilter)
	|| ydk::is_set(is_deleted.yfilter)
	|| ydk::is_set(is_routing_bit.yfilter)
	|| ydk::is_set(is_advertising_router_reachable.yfilter)
	|| ydk::is_set(is_no_delete.yfilter)
	|| ydk::is_set(is_neighbor_exchange.yfilter)
	|| ydk::is_set(is_routing_table.yfilter)
	|| ydk::is_set(is_acknowledged.yfilter)
	|| ydk::is_set(is_maximum_aged.yfilter)
	|| ydk::is_set(is_partial_spf.yfilter)
	|| ydk::is_set(is_flood_pending.yfilter)
	|| ydk::is_set(rate_limit.yfilter)
	|| ydk::is_set(is_nsr_ack_pending.yfilter)
	|| ydk::is_set(nsr_flood_required.yfilter)
	|| ydk::is_set(lsa_flood_required_post_fail_over.yfilter)
	|| ydk::is_set(lsa_length.yfilter)
	|| ydk::is_set(lsa_sync_state.yfilter);
}

std::string Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::LsaDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::LsaDetail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (second_table_index.is_set || is_set(second_table_index.yfilter)) leaf_name_data.push_back(second_table_index.get_name_leafdata());
    if (minute_table_index.is_set || is_set(minute_table_index.yfilter)) leaf_name_data.push_back(minute_table_index.get_name_leafdata());
    if (free_time.is_set || is_set(free_time.yfilter)) leaf_name_data.push_back(free_time.get_name_leafdata());
    if (is_deleted.is_set || is_set(is_deleted.yfilter)) leaf_name_data.push_back(is_deleted.get_name_leafdata());
    if (is_routing_bit.is_set || is_set(is_routing_bit.yfilter)) leaf_name_data.push_back(is_routing_bit.get_name_leafdata());
    if (is_advertising_router_reachable.is_set || is_set(is_advertising_router_reachable.yfilter)) leaf_name_data.push_back(is_advertising_router_reachable.get_name_leafdata());
    if (is_no_delete.is_set || is_set(is_no_delete.yfilter)) leaf_name_data.push_back(is_no_delete.get_name_leafdata());
    if (is_neighbor_exchange.is_set || is_set(is_neighbor_exchange.yfilter)) leaf_name_data.push_back(is_neighbor_exchange.get_name_leafdata());
    if (is_routing_table.is_set || is_set(is_routing_table.yfilter)) leaf_name_data.push_back(is_routing_table.get_name_leafdata());
    if (is_acknowledged.is_set || is_set(is_acknowledged.yfilter)) leaf_name_data.push_back(is_acknowledged.get_name_leafdata());
    if (is_maximum_aged.is_set || is_set(is_maximum_aged.yfilter)) leaf_name_data.push_back(is_maximum_aged.get_name_leafdata());
    if (is_partial_spf.is_set || is_set(is_partial_spf.yfilter)) leaf_name_data.push_back(is_partial_spf.get_name_leafdata());
    if (is_flood_pending.is_set || is_set(is_flood_pending.yfilter)) leaf_name_data.push_back(is_flood_pending.get_name_leafdata());
    if (rate_limit.is_set || is_set(rate_limit.yfilter)) leaf_name_data.push_back(rate_limit.get_name_leafdata());
    if (is_nsr_ack_pending.is_set || is_set(is_nsr_ack_pending.yfilter)) leaf_name_data.push_back(is_nsr_ack_pending.get_name_leafdata());
    if (nsr_flood_required.is_set || is_set(nsr_flood_required.yfilter)) leaf_name_data.push_back(nsr_flood_required.get_name_leafdata());
    if (lsa_flood_required_post_fail_over.is_set || is_set(lsa_flood_required_post_fail_over.yfilter)) leaf_name_data.push_back(lsa_flood_required_post_fail_over.get_name_leafdata());
    if (lsa_length.is_set || is_set(lsa_length.yfilter)) leaf_name_data.push_back(lsa_length.get_name_leafdata());
    if (lsa_sync_state.is_set || is_set(lsa_sync_state.yfilter)) leaf_name_data.push_back(lsa_sync_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::LsaDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::LsaDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::LsaDetail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "second-table-index")
    {
        second_table_index = value;
        second_table_index.value_namespace = name_space;
        second_table_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minute-table-index")
    {
        minute_table_index = value;
        minute_table_index.value_namespace = name_space;
        minute_table_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "free-time")
    {
        free_time = value;
        free_time.value_namespace = name_space;
        free_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-deleted")
    {
        is_deleted = value;
        is_deleted.value_namespace = name_space;
        is_deleted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-routing-bit")
    {
        is_routing_bit = value;
        is_routing_bit.value_namespace = name_space;
        is_routing_bit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-advertising-router-reachable")
    {
        is_advertising_router_reachable = value;
        is_advertising_router_reachable.value_namespace = name_space;
        is_advertising_router_reachable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-no-delete")
    {
        is_no_delete = value;
        is_no_delete.value_namespace = name_space;
        is_no_delete.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-neighbor-exchange")
    {
        is_neighbor_exchange = value;
        is_neighbor_exchange.value_namespace = name_space;
        is_neighbor_exchange.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-routing-table")
    {
        is_routing_table = value;
        is_routing_table.value_namespace = name_space;
        is_routing_table.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-acknowledged")
    {
        is_acknowledged = value;
        is_acknowledged.value_namespace = name_space;
        is_acknowledged.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-maximum-aged")
    {
        is_maximum_aged = value;
        is_maximum_aged.value_namespace = name_space;
        is_maximum_aged.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-partial-spf")
    {
        is_partial_spf = value;
        is_partial_spf.value_namespace = name_space;
        is_partial_spf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-flood-pending")
    {
        is_flood_pending = value;
        is_flood_pending.value_namespace = name_space;
        is_flood_pending.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rate-limit")
    {
        rate_limit = value;
        rate_limit.value_namespace = name_space;
        rate_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-nsr-ack-pending")
    {
        is_nsr_ack_pending = value;
        is_nsr_ack_pending.value_namespace = name_space;
        is_nsr_ack_pending.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-flood-required")
    {
        nsr_flood_required = value;
        nsr_flood_required.value_namespace = name_space;
        nsr_flood_required.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-flood-required-post-fail-over")
    {
        lsa_flood_required_post_fail_over = value;
        lsa_flood_required_post_fail_over.value_namespace = name_space;
        lsa_flood_required_post_fail_over.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-length")
    {
        lsa_length = value;
        lsa_length.value_namespace = name_space;
        lsa_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-sync-state")
    {
        lsa_sync_state = value;
        lsa_sync_state.value_namespace = name_space;
        lsa_sync_state.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::LsaDetail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "second-table-index")
    {
        second_table_index.yfilter = yfilter;
    }
    if(value_path == "minute-table-index")
    {
        minute_table_index.yfilter = yfilter;
    }
    if(value_path == "free-time")
    {
        free_time.yfilter = yfilter;
    }
    if(value_path == "is-deleted")
    {
        is_deleted.yfilter = yfilter;
    }
    if(value_path == "is-routing-bit")
    {
        is_routing_bit.yfilter = yfilter;
    }
    if(value_path == "is-advertising-router-reachable")
    {
        is_advertising_router_reachable.yfilter = yfilter;
    }
    if(value_path == "is-no-delete")
    {
        is_no_delete.yfilter = yfilter;
    }
    if(value_path == "is-neighbor-exchange")
    {
        is_neighbor_exchange.yfilter = yfilter;
    }
    if(value_path == "is-routing-table")
    {
        is_routing_table.yfilter = yfilter;
    }
    if(value_path == "is-acknowledged")
    {
        is_acknowledged.yfilter = yfilter;
    }
    if(value_path == "is-maximum-aged")
    {
        is_maximum_aged.yfilter = yfilter;
    }
    if(value_path == "is-partial-spf")
    {
        is_partial_spf.yfilter = yfilter;
    }
    if(value_path == "is-flood-pending")
    {
        is_flood_pending.yfilter = yfilter;
    }
    if(value_path == "rate-limit")
    {
        rate_limit.yfilter = yfilter;
    }
    if(value_path == "is-nsr-ack-pending")
    {
        is_nsr_ack_pending.yfilter = yfilter;
    }
    if(value_path == "nsr-flood-required")
    {
        nsr_flood_required.yfilter = yfilter;
    }
    if(value_path == "lsa-flood-required-post-fail-over")
    {
        lsa_flood_required_post_fail_over.yfilter = yfilter;
    }
    if(value_path == "lsa-length")
    {
        lsa_length.yfilter = yfilter;
    }
    if(value_path == "lsa-sync-state")
    {
        lsa_sync_state.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::LsaDetail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "second-table-index" || name == "minute-table-index" || name == "free-time" || name == "is-deleted" || name == "is-routing-bit" || name == "is-advertising-router-reachable" || name == "is-no-delete" || name == "is-neighbor-exchange" || name == "is-routing-table" || name == "is-acknowledged" || name == "is-maximum-aged" || name == "is-partial-spf" || name == "is-flood-pending" || name == "rate-limit" || name == "is-nsr-ack-pending" || name == "nsr-flood-required" || name == "lsa-flood-required-post-fail-over" || name == "lsa-length" || name == "lsa-sync-state")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::RpfPath::RpfPath()
    :
    rpf_multicast_next_hop{YType::uint32, "rpf-multicast-next-hop"},
    interface_name{YType::str, "interface-name"}
{

    yang_name = "rpf-path"; yang_parent_name = "router-lsa-type"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::RpfPath::~RpfPath()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::RpfPath::has_data() const
{
    return rpf_multicast_next_hop.is_set
	|| interface_name.is_set;
}

bool Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::RpfPath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rpf_multicast_next_hop.yfilter)
	|| ydk::is_set(interface_name.yfilter);
}

std::string Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::RpfPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpf-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::RpfPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rpf_multicast_next_hop.is_set || is_set(rpf_multicast_next_hop.yfilter)) leaf_name_data.push_back(rpf_multicast_next_hop.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::RpfPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::RpfPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::RpfPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rpf-multicast-next-hop")
    {
        rpf_multicast_next_hop = value;
        rpf_multicast_next_hop.value_namespace = name_space;
        rpf_multicast_next_hop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::RpfPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rpf-multicast-next-hop")
    {
        rpf_multicast_next_hop.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::RpfPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rpf-multicast-next-hop" || name == "interface-name")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::Link::Link()
    :
    link_type{YType::enumeration, "link-type"},
    link_metric{YType::uint16, "link-metric"},
    link_interface_id{YType::uint32, "link-interface-id"},
    link_neighbor_interface_id{YType::uint32, "link-neighbor-interface-id"},
    link_neighbor_router_id{YType::uint32, "link-neighbor-router-id"}
{

    yang_name = "link"; yang_parent_name = "router-lsa-type"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::Link::~Link()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::Link::has_data() const
{
    return link_type.is_set
	|| link_metric.is_set
	|| link_interface_id.is_set
	|| link_neighbor_interface_id.is_set
	|| link_neighbor_router_id.is_set;
}

bool Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::Link::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(link_type.yfilter)
	|| ydk::is_set(link_metric.yfilter)
	|| ydk::is_set(link_interface_id.yfilter)
	|| ydk::is_set(link_neighbor_interface_id.yfilter)
	|| ydk::is_set(link_neighbor_router_id.yfilter);
}

std::string Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::Link::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::Link::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link_type.is_set || is_set(link_type.yfilter)) leaf_name_data.push_back(link_type.get_name_leafdata());
    if (link_metric.is_set || is_set(link_metric.yfilter)) leaf_name_data.push_back(link_metric.get_name_leafdata());
    if (link_interface_id.is_set || is_set(link_interface_id.yfilter)) leaf_name_data.push_back(link_interface_id.get_name_leafdata());
    if (link_neighbor_interface_id.is_set || is_set(link_neighbor_interface_id.yfilter)) leaf_name_data.push_back(link_neighbor_interface_id.get_name_leafdata());
    if (link_neighbor_router_id.is_set || is_set(link_neighbor_router_id.yfilter)) leaf_name_data.push_back(link_neighbor_router_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::Link::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::Link::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::Link::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "link-type")
    {
        link_type = value;
        link_type.value_namespace = name_space;
        link_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-metric")
    {
        link_metric = value;
        link_metric.value_namespace = name_space;
        link_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-interface-id")
    {
        link_interface_id = value;
        link_interface_id.value_namespace = name_space;
        link_interface_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-neighbor-interface-id")
    {
        link_neighbor_interface_id = value;
        link_neighbor_interface_id.value_namespace = name_space;
        link_neighbor_interface_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-neighbor-router-id")
    {
        link_neighbor_router_id = value;
        link_neighbor_router_id.value_namespace = name_space;
        link_neighbor_router_id.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::Link::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "link-type")
    {
        link_type.yfilter = yfilter;
    }
    if(value_path == "link-metric")
    {
        link_metric.yfilter = yfilter;
    }
    if(value_path == "link-interface-id")
    {
        link_interface_id.yfilter = yfilter;
    }
    if(value_path == "link-neighbor-interface-id")
    {
        link_neighbor_interface_id.yfilter = yfilter;
    }
    if(value_path == "link-neighbor-router-id")
    {
        link_neighbor_router_id.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::RouterLsaType::Link::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "link-type" || name == "link-metric" || name == "link-interface-id" || name == "link-neighbor-interface-id" || name == "link-neighbor-router-id")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NetworkLsaType::NetworkLsaType()
    :
    neighbor_router{YType::str, "neighbor-router"}
    	,
    lsa_header(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NetworkLsaType::LsaHeader>())
	,lsa_detail(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NetworkLsaType::LsaDetail>())
{
    lsa_header->parent = this;
    lsa_detail->parent = this;

    yang_name = "network-lsa-type"; yang_parent_name = "lsa-info"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NetworkLsaType::~NetworkLsaType()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NetworkLsaType::has_data() const
{
    for (auto const & leaf : neighbor_router.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return (lsa_header !=  nullptr && lsa_header->has_data())
	|| (lsa_detail !=  nullptr && lsa_detail->has_data());
}

bool Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NetworkLsaType::has_operation() const
{
    for (auto const & leaf : neighbor_router.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(neighbor_router.yfilter)
	|| (lsa_header !=  nullptr && lsa_header->has_operation())
	|| (lsa_detail !=  nullptr && lsa_detail->has_operation());
}

std::string Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NetworkLsaType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "network-lsa-type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NetworkLsaType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto neighbor_router_name_datas = neighbor_router.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), neighbor_router_name_datas.begin(), neighbor_router_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NetworkLsaType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsa-header")
    {
        if(lsa_header == nullptr)
        {
            lsa_header = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NetworkLsaType::LsaHeader>();
        }
        return lsa_header;
    }

    if(child_yang_name == "lsa-detail")
    {
        if(lsa_detail == nullptr)
        {
            lsa_detail = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NetworkLsaType::LsaDetail>();
        }
        return lsa_detail;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NetworkLsaType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(lsa_header != nullptr)
    {
        children["lsa-header"] = lsa_header;
    }

    if(lsa_detail != nullptr)
    {
        children["lsa-detail"] = lsa_detail;
    }

    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NetworkLsaType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "neighbor-router")
    {
        neighbor_router.append(value);
    }
}

void Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NetworkLsaType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "neighbor-router")
    {
        neighbor_router.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NetworkLsaType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsa-header" || name == "lsa-detail" || name == "neighbor-router")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NetworkLsaType::LsaHeader::LsaHeader()
    :
    lsa_type{YType::uint16, "lsa-type"},
    lsa_area_id{YType::str, "lsa-area-id"},
    lsa_age{YType::uint16, "lsa-age"},
    is_do_not_age_lsa{YType::boolean, "is-do-not-age-lsa"},
    ls_id{YType::uint32, "ls-id"},
    advertising_router{YType::str, "advertising-router"},
    sequence_number{YType::uint32, "sequence-number"},
    checksum{YType::uint16, "checksum"},
    is_graceful_restart_active{YType::boolean, "is-graceful-restart-active"}
{

    yang_name = "lsa-header"; yang_parent_name = "network-lsa-type"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NetworkLsaType::LsaHeader::~LsaHeader()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NetworkLsaType::LsaHeader::has_data() const
{
    return lsa_type.is_set
	|| lsa_area_id.is_set
	|| lsa_age.is_set
	|| is_do_not_age_lsa.is_set
	|| ls_id.is_set
	|| advertising_router.is_set
	|| sequence_number.is_set
	|| checksum.is_set
	|| is_graceful_restart_active.is_set;
}

bool Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NetworkLsaType::LsaHeader::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lsa_type.yfilter)
	|| ydk::is_set(lsa_area_id.yfilter)
	|| ydk::is_set(lsa_age.yfilter)
	|| ydk::is_set(is_do_not_age_lsa.yfilter)
	|| ydk::is_set(ls_id.yfilter)
	|| ydk::is_set(advertising_router.yfilter)
	|| ydk::is_set(sequence_number.yfilter)
	|| ydk::is_set(checksum.yfilter)
	|| ydk::is_set(is_graceful_restart_active.yfilter);
}

std::string Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NetworkLsaType::LsaHeader::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-header";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NetworkLsaType::LsaHeader::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsa_type.is_set || is_set(lsa_type.yfilter)) leaf_name_data.push_back(lsa_type.get_name_leafdata());
    if (lsa_area_id.is_set || is_set(lsa_area_id.yfilter)) leaf_name_data.push_back(lsa_area_id.get_name_leafdata());
    if (lsa_age.is_set || is_set(lsa_age.yfilter)) leaf_name_data.push_back(lsa_age.get_name_leafdata());
    if (is_do_not_age_lsa.is_set || is_set(is_do_not_age_lsa.yfilter)) leaf_name_data.push_back(is_do_not_age_lsa.get_name_leafdata());
    if (ls_id.is_set || is_set(ls_id.yfilter)) leaf_name_data.push_back(ls_id.get_name_leafdata());
    if (advertising_router.is_set || is_set(advertising_router.yfilter)) leaf_name_data.push_back(advertising_router.get_name_leafdata());
    if (sequence_number.is_set || is_set(sequence_number.yfilter)) leaf_name_data.push_back(sequence_number.get_name_leafdata());
    if (checksum.is_set || is_set(checksum.yfilter)) leaf_name_data.push_back(checksum.get_name_leafdata());
    if (is_graceful_restart_active.is_set || is_set(is_graceful_restart_active.yfilter)) leaf_name_data.push_back(is_graceful_restart_active.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NetworkLsaType::LsaHeader::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NetworkLsaType::LsaHeader::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NetworkLsaType::LsaHeader::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsa-type")
    {
        lsa_type = value;
        lsa_type.value_namespace = name_space;
        lsa_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-area-id")
    {
        lsa_area_id = value;
        lsa_area_id.value_namespace = name_space;
        lsa_area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-age")
    {
        lsa_age = value;
        lsa_age.value_namespace = name_space;
        lsa_age.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-do-not-age-lsa")
    {
        is_do_not_age_lsa = value;
        is_do_not_age_lsa.value_namespace = name_space;
        is_do_not_age_lsa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ls-id")
    {
        ls_id = value;
        ls_id.value_namespace = name_space;
        ls_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advertising-router")
    {
        advertising_router = value;
        advertising_router.value_namespace = name_space;
        advertising_router.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequence-number")
    {
        sequence_number = value;
        sequence_number.value_namespace = name_space;
        sequence_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "checksum")
    {
        checksum = value;
        checksum.value_namespace = name_space;
        checksum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-graceful-restart-active")
    {
        is_graceful_restart_active = value;
        is_graceful_restart_active.value_namespace = name_space;
        is_graceful_restart_active.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NetworkLsaType::LsaHeader::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsa-type")
    {
        lsa_type.yfilter = yfilter;
    }
    if(value_path == "lsa-area-id")
    {
        lsa_area_id.yfilter = yfilter;
    }
    if(value_path == "lsa-age")
    {
        lsa_age.yfilter = yfilter;
    }
    if(value_path == "is-do-not-age-lsa")
    {
        is_do_not_age_lsa.yfilter = yfilter;
    }
    if(value_path == "ls-id")
    {
        ls_id.yfilter = yfilter;
    }
    if(value_path == "advertising-router")
    {
        advertising_router.yfilter = yfilter;
    }
    if(value_path == "sequence-number")
    {
        sequence_number.yfilter = yfilter;
    }
    if(value_path == "checksum")
    {
        checksum.yfilter = yfilter;
    }
    if(value_path == "is-graceful-restart-active")
    {
        is_graceful_restart_active.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NetworkLsaType::LsaHeader::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsa-type" || name == "lsa-area-id" || name == "lsa-age" || name == "is-do-not-age-lsa" || name == "ls-id" || name == "advertising-router" || name == "sequence-number" || name == "checksum" || name == "is-graceful-restart-active")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NetworkLsaType::LsaDetail::LsaDetail()
    :
    second_table_index{YType::uint8, "second-table-index"},
    minute_table_index{YType::uint8, "minute-table-index"},
    free_time{YType::uint32, "free-time"},
    is_deleted{YType::boolean, "is-deleted"},
    is_routing_bit{YType::boolean, "is-routing-bit"},
    is_advertising_router_reachable{YType::boolean, "is-advertising-router-reachable"},
    is_no_delete{YType::boolean, "is-no-delete"},
    is_neighbor_exchange{YType::boolean, "is-neighbor-exchange"},
    is_routing_table{YType::boolean, "is-routing-table"},
    is_acknowledged{YType::boolean, "is-acknowledged"},
    is_maximum_aged{YType::boolean, "is-maximum-aged"},
    is_partial_spf{YType::boolean, "is-partial-spf"},
    is_flood_pending{YType::boolean, "is-flood-pending"},
    rate_limit{YType::boolean, "rate-limit"},
    is_nsr_ack_pending{YType::boolean, "is-nsr-ack-pending"},
    nsr_flood_required{YType::boolean, "nsr-flood-required"},
    lsa_flood_required_post_fail_over{YType::boolean, "lsa-flood-required-post-fail-over"},
    lsa_length{YType::uint16, "lsa-length"},
    lsa_sync_state{YType::enumeration, "lsa-sync-state"}
{

    yang_name = "lsa-detail"; yang_parent_name = "network-lsa-type"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NetworkLsaType::LsaDetail::~LsaDetail()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NetworkLsaType::LsaDetail::has_data() const
{
    return second_table_index.is_set
	|| minute_table_index.is_set
	|| free_time.is_set
	|| is_deleted.is_set
	|| is_routing_bit.is_set
	|| is_advertising_router_reachable.is_set
	|| is_no_delete.is_set
	|| is_neighbor_exchange.is_set
	|| is_routing_table.is_set
	|| is_acknowledged.is_set
	|| is_maximum_aged.is_set
	|| is_partial_spf.is_set
	|| is_flood_pending.is_set
	|| rate_limit.is_set
	|| is_nsr_ack_pending.is_set
	|| nsr_flood_required.is_set
	|| lsa_flood_required_post_fail_over.is_set
	|| lsa_length.is_set
	|| lsa_sync_state.is_set;
}

bool Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NetworkLsaType::LsaDetail::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(second_table_index.yfilter)
	|| ydk::is_set(minute_table_index.yfilter)
	|| ydk::is_set(free_time.yfilter)
	|| ydk::is_set(is_deleted.yfilter)
	|| ydk::is_set(is_routing_bit.yfilter)
	|| ydk::is_set(is_advertising_router_reachable.yfilter)
	|| ydk::is_set(is_no_delete.yfilter)
	|| ydk::is_set(is_neighbor_exchange.yfilter)
	|| ydk::is_set(is_routing_table.yfilter)
	|| ydk::is_set(is_acknowledged.yfilter)
	|| ydk::is_set(is_maximum_aged.yfilter)
	|| ydk::is_set(is_partial_spf.yfilter)
	|| ydk::is_set(is_flood_pending.yfilter)
	|| ydk::is_set(rate_limit.yfilter)
	|| ydk::is_set(is_nsr_ack_pending.yfilter)
	|| ydk::is_set(nsr_flood_required.yfilter)
	|| ydk::is_set(lsa_flood_required_post_fail_over.yfilter)
	|| ydk::is_set(lsa_length.yfilter)
	|| ydk::is_set(lsa_sync_state.yfilter);
}

std::string Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NetworkLsaType::LsaDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NetworkLsaType::LsaDetail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (second_table_index.is_set || is_set(second_table_index.yfilter)) leaf_name_data.push_back(second_table_index.get_name_leafdata());
    if (minute_table_index.is_set || is_set(minute_table_index.yfilter)) leaf_name_data.push_back(minute_table_index.get_name_leafdata());
    if (free_time.is_set || is_set(free_time.yfilter)) leaf_name_data.push_back(free_time.get_name_leafdata());
    if (is_deleted.is_set || is_set(is_deleted.yfilter)) leaf_name_data.push_back(is_deleted.get_name_leafdata());
    if (is_routing_bit.is_set || is_set(is_routing_bit.yfilter)) leaf_name_data.push_back(is_routing_bit.get_name_leafdata());
    if (is_advertising_router_reachable.is_set || is_set(is_advertising_router_reachable.yfilter)) leaf_name_data.push_back(is_advertising_router_reachable.get_name_leafdata());
    if (is_no_delete.is_set || is_set(is_no_delete.yfilter)) leaf_name_data.push_back(is_no_delete.get_name_leafdata());
    if (is_neighbor_exchange.is_set || is_set(is_neighbor_exchange.yfilter)) leaf_name_data.push_back(is_neighbor_exchange.get_name_leafdata());
    if (is_routing_table.is_set || is_set(is_routing_table.yfilter)) leaf_name_data.push_back(is_routing_table.get_name_leafdata());
    if (is_acknowledged.is_set || is_set(is_acknowledged.yfilter)) leaf_name_data.push_back(is_acknowledged.get_name_leafdata());
    if (is_maximum_aged.is_set || is_set(is_maximum_aged.yfilter)) leaf_name_data.push_back(is_maximum_aged.get_name_leafdata());
    if (is_partial_spf.is_set || is_set(is_partial_spf.yfilter)) leaf_name_data.push_back(is_partial_spf.get_name_leafdata());
    if (is_flood_pending.is_set || is_set(is_flood_pending.yfilter)) leaf_name_data.push_back(is_flood_pending.get_name_leafdata());
    if (rate_limit.is_set || is_set(rate_limit.yfilter)) leaf_name_data.push_back(rate_limit.get_name_leafdata());
    if (is_nsr_ack_pending.is_set || is_set(is_nsr_ack_pending.yfilter)) leaf_name_data.push_back(is_nsr_ack_pending.get_name_leafdata());
    if (nsr_flood_required.is_set || is_set(nsr_flood_required.yfilter)) leaf_name_data.push_back(nsr_flood_required.get_name_leafdata());
    if (lsa_flood_required_post_fail_over.is_set || is_set(lsa_flood_required_post_fail_over.yfilter)) leaf_name_data.push_back(lsa_flood_required_post_fail_over.get_name_leafdata());
    if (lsa_length.is_set || is_set(lsa_length.yfilter)) leaf_name_data.push_back(lsa_length.get_name_leafdata());
    if (lsa_sync_state.is_set || is_set(lsa_sync_state.yfilter)) leaf_name_data.push_back(lsa_sync_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NetworkLsaType::LsaDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NetworkLsaType::LsaDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NetworkLsaType::LsaDetail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "second-table-index")
    {
        second_table_index = value;
        second_table_index.value_namespace = name_space;
        second_table_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minute-table-index")
    {
        minute_table_index = value;
        minute_table_index.value_namespace = name_space;
        minute_table_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "free-time")
    {
        free_time = value;
        free_time.value_namespace = name_space;
        free_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-deleted")
    {
        is_deleted = value;
        is_deleted.value_namespace = name_space;
        is_deleted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-routing-bit")
    {
        is_routing_bit = value;
        is_routing_bit.value_namespace = name_space;
        is_routing_bit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-advertising-router-reachable")
    {
        is_advertising_router_reachable = value;
        is_advertising_router_reachable.value_namespace = name_space;
        is_advertising_router_reachable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-no-delete")
    {
        is_no_delete = value;
        is_no_delete.value_namespace = name_space;
        is_no_delete.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-neighbor-exchange")
    {
        is_neighbor_exchange = value;
        is_neighbor_exchange.value_namespace = name_space;
        is_neighbor_exchange.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-routing-table")
    {
        is_routing_table = value;
        is_routing_table.value_namespace = name_space;
        is_routing_table.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-acknowledged")
    {
        is_acknowledged = value;
        is_acknowledged.value_namespace = name_space;
        is_acknowledged.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-maximum-aged")
    {
        is_maximum_aged = value;
        is_maximum_aged.value_namespace = name_space;
        is_maximum_aged.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-partial-spf")
    {
        is_partial_spf = value;
        is_partial_spf.value_namespace = name_space;
        is_partial_spf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-flood-pending")
    {
        is_flood_pending = value;
        is_flood_pending.value_namespace = name_space;
        is_flood_pending.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rate-limit")
    {
        rate_limit = value;
        rate_limit.value_namespace = name_space;
        rate_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-nsr-ack-pending")
    {
        is_nsr_ack_pending = value;
        is_nsr_ack_pending.value_namespace = name_space;
        is_nsr_ack_pending.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-flood-required")
    {
        nsr_flood_required = value;
        nsr_flood_required.value_namespace = name_space;
        nsr_flood_required.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-flood-required-post-fail-over")
    {
        lsa_flood_required_post_fail_over = value;
        lsa_flood_required_post_fail_over.value_namespace = name_space;
        lsa_flood_required_post_fail_over.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-length")
    {
        lsa_length = value;
        lsa_length.value_namespace = name_space;
        lsa_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-sync-state")
    {
        lsa_sync_state = value;
        lsa_sync_state.value_namespace = name_space;
        lsa_sync_state.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NetworkLsaType::LsaDetail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "second-table-index")
    {
        second_table_index.yfilter = yfilter;
    }
    if(value_path == "minute-table-index")
    {
        minute_table_index.yfilter = yfilter;
    }
    if(value_path == "free-time")
    {
        free_time.yfilter = yfilter;
    }
    if(value_path == "is-deleted")
    {
        is_deleted.yfilter = yfilter;
    }
    if(value_path == "is-routing-bit")
    {
        is_routing_bit.yfilter = yfilter;
    }
    if(value_path == "is-advertising-router-reachable")
    {
        is_advertising_router_reachable.yfilter = yfilter;
    }
    if(value_path == "is-no-delete")
    {
        is_no_delete.yfilter = yfilter;
    }
    if(value_path == "is-neighbor-exchange")
    {
        is_neighbor_exchange.yfilter = yfilter;
    }
    if(value_path == "is-routing-table")
    {
        is_routing_table.yfilter = yfilter;
    }
    if(value_path == "is-acknowledged")
    {
        is_acknowledged.yfilter = yfilter;
    }
    if(value_path == "is-maximum-aged")
    {
        is_maximum_aged.yfilter = yfilter;
    }
    if(value_path == "is-partial-spf")
    {
        is_partial_spf.yfilter = yfilter;
    }
    if(value_path == "is-flood-pending")
    {
        is_flood_pending.yfilter = yfilter;
    }
    if(value_path == "rate-limit")
    {
        rate_limit.yfilter = yfilter;
    }
    if(value_path == "is-nsr-ack-pending")
    {
        is_nsr_ack_pending.yfilter = yfilter;
    }
    if(value_path == "nsr-flood-required")
    {
        nsr_flood_required.yfilter = yfilter;
    }
    if(value_path == "lsa-flood-required-post-fail-over")
    {
        lsa_flood_required_post_fail_over.yfilter = yfilter;
    }
    if(value_path == "lsa-length")
    {
        lsa_length.yfilter = yfilter;
    }
    if(value_path == "lsa-sync-state")
    {
        lsa_sync_state.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NetworkLsaType::LsaDetail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "second-table-index" || name == "minute-table-index" || name == "free-time" || name == "is-deleted" || name == "is-routing-bit" || name == "is-advertising-router-reachable" || name == "is-no-delete" || name == "is-neighbor-exchange" || name == "is-routing-table" || name == "is-acknowledged" || name == "is-maximum-aged" || name == "is-partial-spf" || name == "is-flood-pending" || name == "rate-limit" || name == "is-nsr-ack-pending" || name == "nsr-flood-required" || name == "lsa-flood-required-post-fail-over" || name == "lsa-length" || name == "lsa-sync-state")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaPrefixLsaType::InterAreaPrefixLsaType()
    :
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint8, "prefix-length"},
    priority{YType::enumeration, "priority"}
    	,
    lsa_header(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaHeader>())
	,lsa_detail(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaDetail>())
{
    lsa_header->parent = this;
    lsa_detail->parent = this;

    yang_name = "inter-area-prefix-lsa-type"; yang_parent_name = "lsa-info"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaPrefixLsaType::~InterAreaPrefixLsaType()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaPrefixLsaType::has_data() const
{
    return prefix.is_set
	|| prefix_length.is_set
	|| priority.is_set
	|| (lsa_header !=  nullptr && lsa_header->has_data())
	|| (lsa_detail !=  nullptr && lsa_detail->has_data());
}

bool Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaPrefixLsaType::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| (lsa_header !=  nullptr && lsa_header->has_operation())
	|| (lsa_detail !=  nullptr && lsa_detail->has_operation());
}

std::string Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaPrefixLsaType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inter-area-prefix-lsa-type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaPrefixLsaType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaPrefixLsaType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsa-header")
    {
        if(lsa_header == nullptr)
        {
            lsa_header = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaHeader>();
        }
        return lsa_header;
    }

    if(child_yang_name == "lsa-detail")
    {
        if(lsa_detail == nullptr)
        {
            lsa_detail = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaDetail>();
        }
        return lsa_detail;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaPrefixLsaType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(lsa_header != nullptr)
    {
        children["lsa-header"] = lsa_header;
    }

    if(lsa_detail != nullptr)
    {
        children["lsa-detail"] = lsa_detail;
    }

    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaPrefixLsaType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaPrefixLsaType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaPrefixLsaType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsa-header" || name == "lsa-detail" || name == "prefix" || name == "prefix-length" || name == "priority")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaHeader::LsaHeader()
    :
    lsa_type{YType::uint16, "lsa-type"},
    lsa_area_id{YType::str, "lsa-area-id"},
    lsa_age{YType::uint16, "lsa-age"},
    is_do_not_age_lsa{YType::boolean, "is-do-not-age-lsa"},
    ls_id{YType::uint32, "ls-id"},
    advertising_router{YType::str, "advertising-router"},
    sequence_number{YType::uint32, "sequence-number"},
    checksum{YType::uint16, "checksum"},
    is_graceful_restart_active{YType::boolean, "is-graceful-restart-active"}
{

    yang_name = "lsa-header"; yang_parent_name = "inter-area-prefix-lsa-type"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaHeader::~LsaHeader()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaHeader::has_data() const
{
    return lsa_type.is_set
	|| lsa_area_id.is_set
	|| lsa_age.is_set
	|| is_do_not_age_lsa.is_set
	|| ls_id.is_set
	|| advertising_router.is_set
	|| sequence_number.is_set
	|| checksum.is_set
	|| is_graceful_restart_active.is_set;
}

bool Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaHeader::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lsa_type.yfilter)
	|| ydk::is_set(lsa_area_id.yfilter)
	|| ydk::is_set(lsa_age.yfilter)
	|| ydk::is_set(is_do_not_age_lsa.yfilter)
	|| ydk::is_set(ls_id.yfilter)
	|| ydk::is_set(advertising_router.yfilter)
	|| ydk::is_set(sequence_number.yfilter)
	|| ydk::is_set(checksum.yfilter)
	|| ydk::is_set(is_graceful_restart_active.yfilter);
}

std::string Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaHeader::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-header";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaHeader::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsa_type.is_set || is_set(lsa_type.yfilter)) leaf_name_data.push_back(lsa_type.get_name_leafdata());
    if (lsa_area_id.is_set || is_set(lsa_area_id.yfilter)) leaf_name_data.push_back(lsa_area_id.get_name_leafdata());
    if (lsa_age.is_set || is_set(lsa_age.yfilter)) leaf_name_data.push_back(lsa_age.get_name_leafdata());
    if (is_do_not_age_lsa.is_set || is_set(is_do_not_age_lsa.yfilter)) leaf_name_data.push_back(is_do_not_age_lsa.get_name_leafdata());
    if (ls_id.is_set || is_set(ls_id.yfilter)) leaf_name_data.push_back(ls_id.get_name_leafdata());
    if (advertising_router.is_set || is_set(advertising_router.yfilter)) leaf_name_data.push_back(advertising_router.get_name_leafdata());
    if (sequence_number.is_set || is_set(sequence_number.yfilter)) leaf_name_data.push_back(sequence_number.get_name_leafdata());
    if (checksum.is_set || is_set(checksum.yfilter)) leaf_name_data.push_back(checksum.get_name_leafdata());
    if (is_graceful_restart_active.is_set || is_set(is_graceful_restart_active.yfilter)) leaf_name_data.push_back(is_graceful_restart_active.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaHeader::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaHeader::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaHeader::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsa-type")
    {
        lsa_type = value;
        lsa_type.value_namespace = name_space;
        lsa_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-area-id")
    {
        lsa_area_id = value;
        lsa_area_id.value_namespace = name_space;
        lsa_area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-age")
    {
        lsa_age = value;
        lsa_age.value_namespace = name_space;
        lsa_age.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-do-not-age-lsa")
    {
        is_do_not_age_lsa = value;
        is_do_not_age_lsa.value_namespace = name_space;
        is_do_not_age_lsa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ls-id")
    {
        ls_id = value;
        ls_id.value_namespace = name_space;
        ls_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advertising-router")
    {
        advertising_router = value;
        advertising_router.value_namespace = name_space;
        advertising_router.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequence-number")
    {
        sequence_number = value;
        sequence_number.value_namespace = name_space;
        sequence_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "checksum")
    {
        checksum = value;
        checksum.value_namespace = name_space;
        checksum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-graceful-restart-active")
    {
        is_graceful_restart_active = value;
        is_graceful_restart_active.value_namespace = name_space;
        is_graceful_restart_active.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaHeader::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsa-type")
    {
        lsa_type.yfilter = yfilter;
    }
    if(value_path == "lsa-area-id")
    {
        lsa_area_id.yfilter = yfilter;
    }
    if(value_path == "lsa-age")
    {
        lsa_age.yfilter = yfilter;
    }
    if(value_path == "is-do-not-age-lsa")
    {
        is_do_not_age_lsa.yfilter = yfilter;
    }
    if(value_path == "ls-id")
    {
        ls_id.yfilter = yfilter;
    }
    if(value_path == "advertising-router")
    {
        advertising_router.yfilter = yfilter;
    }
    if(value_path == "sequence-number")
    {
        sequence_number.yfilter = yfilter;
    }
    if(value_path == "checksum")
    {
        checksum.yfilter = yfilter;
    }
    if(value_path == "is-graceful-restart-active")
    {
        is_graceful_restart_active.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaHeader::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsa-type" || name == "lsa-area-id" || name == "lsa-age" || name == "is-do-not-age-lsa" || name == "ls-id" || name == "advertising-router" || name == "sequence-number" || name == "checksum" || name == "is-graceful-restart-active")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaDetail::LsaDetail()
    :
    second_table_index{YType::uint8, "second-table-index"},
    minute_table_index{YType::uint8, "minute-table-index"},
    free_time{YType::uint32, "free-time"},
    is_deleted{YType::boolean, "is-deleted"},
    is_routing_bit{YType::boolean, "is-routing-bit"},
    is_advertising_router_reachable{YType::boolean, "is-advertising-router-reachable"},
    is_no_delete{YType::boolean, "is-no-delete"},
    is_neighbor_exchange{YType::boolean, "is-neighbor-exchange"},
    is_routing_table{YType::boolean, "is-routing-table"},
    is_acknowledged{YType::boolean, "is-acknowledged"},
    is_maximum_aged{YType::boolean, "is-maximum-aged"},
    is_partial_spf{YType::boolean, "is-partial-spf"},
    is_flood_pending{YType::boolean, "is-flood-pending"},
    rate_limit{YType::boolean, "rate-limit"},
    is_nsr_ack_pending{YType::boolean, "is-nsr-ack-pending"},
    nsr_flood_required{YType::boolean, "nsr-flood-required"},
    lsa_flood_required_post_fail_over{YType::boolean, "lsa-flood-required-post-fail-over"},
    lsa_length{YType::uint16, "lsa-length"},
    lsa_sync_state{YType::enumeration, "lsa-sync-state"}
{

    yang_name = "lsa-detail"; yang_parent_name = "inter-area-prefix-lsa-type"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaDetail::~LsaDetail()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaDetail::has_data() const
{
    return second_table_index.is_set
	|| minute_table_index.is_set
	|| free_time.is_set
	|| is_deleted.is_set
	|| is_routing_bit.is_set
	|| is_advertising_router_reachable.is_set
	|| is_no_delete.is_set
	|| is_neighbor_exchange.is_set
	|| is_routing_table.is_set
	|| is_acknowledged.is_set
	|| is_maximum_aged.is_set
	|| is_partial_spf.is_set
	|| is_flood_pending.is_set
	|| rate_limit.is_set
	|| is_nsr_ack_pending.is_set
	|| nsr_flood_required.is_set
	|| lsa_flood_required_post_fail_over.is_set
	|| lsa_length.is_set
	|| lsa_sync_state.is_set;
}

bool Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaDetail::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(second_table_index.yfilter)
	|| ydk::is_set(minute_table_index.yfilter)
	|| ydk::is_set(free_time.yfilter)
	|| ydk::is_set(is_deleted.yfilter)
	|| ydk::is_set(is_routing_bit.yfilter)
	|| ydk::is_set(is_advertising_router_reachable.yfilter)
	|| ydk::is_set(is_no_delete.yfilter)
	|| ydk::is_set(is_neighbor_exchange.yfilter)
	|| ydk::is_set(is_routing_table.yfilter)
	|| ydk::is_set(is_acknowledged.yfilter)
	|| ydk::is_set(is_maximum_aged.yfilter)
	|| ydk::is_set(is_partial_spf.yfilter)
	|| ydk::is_set(is_flood_pending.yfilter)
	|| ydk::is_set(rate_limit.yfilter)
	|| ydk::is_set(is_nsr_ack_pending.yfilter)
	|| ydk::is_set(nsr_flood_required.yfilter)
	|| ydk::is_set(lsa_flood_required_post_fail_over.yfilter)
	|| ydk::is_set(lsa_length.yfilter)
	|| ydk::is_set(lsa_sync_state.yfilter);
}

std::string Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaDetail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (second_table_index.is_set || is_set(second_table_index.yfilter)) leaf_name_data.push_back(second_table_index.get_name_leafdata());
    if (minute_table_index.is_set || is_set(minute_table_index.yfilter)) leaf_name_data.push_back(minute_table_index.get_name_leafdata());
    if (free_time.is_set || is_set(free_time.yfilter)) leaf_name_data.push_back(free_time.get_name_leafdata());
    if (is_deleted.is_set || is_set(is_deleted.yfilter)) leaf_name_data.push_back(is_deleted.get_name_leafdata());
    if (is_routing_bit.is_set || is_set(is_routing_bit.yfilter)) leaf_name_data.push_back(is_routing_bit.get_name_leafdata());
    if (is_advertising_router_reachable.is_set || is_set(is_advertising_router_reachable.yfilter)) leaf_name_data.push_back(is_advertising_router_reachable.get_name_leafdata());
    if (is_no_delete.is_set || is_set(is_no_delete.yfilter)) leaf_name_data.push_back(is_no_delete.get_name_leafdata());
    if (is_neighbor_exchange.is_set || is_set(is_neighbor_exchange.yfilter)) leaf_name_data.push_back(is_neighbor_exchange.get_name_leafdata());
    if (is_routing_table.is_set || is_set(is_routing_table.yfilter)) leaf_name_data.push_back(is_routing_table.get_name_leafdata());
    if (is_acknowledged.is_set || is_set(is_acknowledged.yfilter)) leaf_name_data.push_back(is_acknowledged.get_name_leafdata());
    if (is_maximum_aged.is_set || is_set(is_maximum_aged.yfilter)) leaf_name_data.push_back(is_maximum_aged.get_name_leafdata());
    if (is_partial_spf.is_set || is_set(is_partial_spf.yfilter)) leaf_name_data.push_back(is_partial_spf.get_name_leafdata());
    if (is_flood_pending.is_set || is_set(is_flood_pending.yfilter)) leaf_name_data.push_back(is_flood_pending.get_name_leafdata());
    if (rate_limit.is_set || is_set(rate_limit.yfilter)) leaf_name_data.push_back(rate_limit.get_name_leafdata());
    if (is_nsr_ack_pending.is_set || is_set(is_nsr_ack_pending.yfilter)) leaf_name_data.push_back(is_nsr_ack_pending.get_name_leafdata());
    if (nsr_flood_required.is_set || is_set(nsr_flood_required.yfilter)) leaf_name_data.push_back(nsr_flood_required.get_name_leafdata());
    if (lsa_flood_required_post_fail_over.is_set || is_set(lsa_flood_required_post_fail_over.yfilter)) leaf_name_data.push_back(lsa_flood_required_post_fail_over.get_name_leafdata());
    if (lsa_length.is_set || is_set(lsa_length.yfilter)) leaf_name_data.push_back(lsa_length.get_name_leafdata());
    if (lsa_sync_state.is_set || is_set(lsa_sync_state.yfilter)) leaf_name_data.push_back(lsa_sync_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaDetail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "second-table-index")
    {
        second_table_index = value;
        second_table_index.value_namespace = name_space;
        second_table_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minute-table-index")
    {
        minute_table_index = value;
        minute_table_index.value_namespace = name_space;
        minute_table_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "free-time")
    {
        free_time = value;
        free_time.value_namespace = name_space;
        free_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-deleted")
    {
        is_deleted = value;
        is_deleted.value_namespace = name_space;
        is_deleted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-routing-bit")
    {
        is_routing_bit = value;
        is_routing_bit.value_namespace = name_space;
        is_routing_bit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-advertising-router-reachable")
    {
        is_advertising_router_reachable = value;
        is_advertising_router_reachable.value_namespace = name_space;
        is_advertising_router_reachable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-no-delete")
    {
        is_no_delete = value;
        is_no_delete.value_namespace = name_space;
        is_no_delete.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-neighbor-exchange")
    {
        is_neighbor_exchange = value;
        is_neighbor_exchange.value_namespace = name_space;
        is_neighbor_exchange.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-routing-table")
    {
        is_routing_table = value;
        is_routing_table.value_namespace = name_space;
        is_routing_table.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-acknowledged")
    {
        is_acknowledged = value;
        is_acknowledged.value_namespace = name_space;
        is_acknowledged.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-maximum-aged")
    {
        is_maximum_aged = value;
        is_maximum_aged.value_namespace = name_space;
        is_maximum_aged.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-partial-spf")
    {
        is_partial_spf = value;
        is_partial_spf.value_namespace = name_space;
        is_partial_spf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-flood-pending")
    {
        is_flood_pending = value;
        is_flood_pending.value_namespace = name_space;
        is_flood_pending.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rate-limit")
    {
        rate_limit = value;
        rate_limit.value_namespace = name_space;
        rate_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-nsr-ack-pending")
    {
        is_nsr_ack_pending = value;
        is_nsr_ack_pending.value_namespace = name_space;
        is_nsr_ack_pending.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-flood-required")
    {
        nsr_flood_required = value;
        nsr_flood_required.value_namespace = name_space;
        nsr_flood_required.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-flood-required-post-fail-over")
    {
        lsa_flood_required_post_fail_over = value;
        lsa_flood_required_post_fail_over.value_namespace = name_space;
        lsa_flood_required_post_fail_over.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-length")
    {
        lsa_length = value;
        lsa_length.value_namespace = name_space;
        lsa_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-sync-state")
    {
        lsa_sync_state = value;
        lsa_sync_state.value_namespace = name_space;
        lsa_sync_state.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaDetail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "second-table-index")
    {
        second_table_index.yfilter = yfilter;
    }
    if(value_path == "minute-table-index")
    {
        minute_table_index.yfilter = yfilter;
    }
    if(value_path == "free-time")
    {
        free_time.yfilter = yfilter;
    }
    if(value_path == "is-deleted")
    {
        is_deleted.yfilter = yfilter;
    }
    if(value_path == "is-routing-bit")
    {
        is_routing_bit.yfilter = yfilter;
    }
    if(value_path == "is-advertising-router-reachable")
    {
        is_advertising_router_reachable.yfilter = yfilter;
    }
    if(value_path == "is-no-delete")
    {
        is_no_delete.yfilter = yfilter;
    }
    if(value_path == "is-neighbor-exchange")
    {
        is_neighbor_exchange.yfilter = yfilter;
    }
    if(value_path == "is-routing-table")
    {
        is_routing_table.yfilter = yfilter;
    }
    if(value_path == "is-acknowledged")
    {
        is_acknowledged.yfilter = yfilter;
    }
    if(value_path == "is-maximum-aged")
    {
        is_maximum_aged.yfilter = yfilter;
    }
    if(value_path == "is-partial-spf")
    {
        is_partial_spf.yfilter = yfilter;
    }
    if(value_path == "is-flood-pending")
    {
        is_flood_pending.yfilter = yfilter;
    }
    if(value_path == "rate-limit")
    {
        rate_limit.yfilter = yfilter;
    }
    if(value_path == "is-nsr-ack-pending")
    {
        is_nsr_ack_pending.yfilter = yfilter;
    }
    if(value_path == "nsr-flood-required")
    {
        nsr_flood_required.yfilter = yfilter;
    }
    if(value_path == "lsa-flood-required-post-fail-over")
    {
        lsa_flood_required_post_fail_over.yfilter = yfilter;
    }
    if(value_path == "lsa-length")
    {
        lsa_length.yfilter = yfilter;
    }
    if(value_path == "lsa-sync-state")
    {
        lsa_sync_state.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaPrefixLsaType::LsaDetail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "second-table-index" || name == "minute-table-index" || name == "free-time" || name == "is-deleted" || name == "is-routing-bit" || name == "is-advertising-router-reachable" || name == "is-no-delete" || name == "is-neighbor-exchange" || name == "is-routing-table" || name == "is-acknowledged" || name == "is-maximum-aged" || name == "is-partial-spf" || name == "is-flood-pending" || name == "rate-limit" || name == "is-nsr-ack-pending" || name == "nsr-flood-required" || name == "lsa-flood-required-post-fail-over" || name == "lsa-length" || name == "lsa-sync-state")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaRouterLsaType::InterAreaRouterLsaType()
    :
    lsa_router_id{YType::uint32, "lsa-router-id"}
    	,
    lsa_header(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaHeader>())
	,lsa_detail(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaDetail>())
{
    lsa_header->parent = this;
    lsa_detail->parent = this;

    yang_name = "inter-area-router-lsa-type"; yang_parent_name = "lsa-info"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaRouterLsaType::~InterAreaRouterLsaType()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaRouterLsaType::has_data() const
{
    return lsa_router_id.is_set
	|| (lsa_header !=  nullptr && lsa_header->has_data())
	|| (lsa_detail !=  nullptr && lsa_detail->has_data());
}

bool Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaRouterLsaType::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lsa_router_id.yfilter)
	|| (lsa_header !=  nullptr && lsa_header->has_operation())
	|| (lsa_detail !=  nullptr && lsa_detail->has_operation());
}

std::string Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaRouterLsaType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inter-area-router-lsa-type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaRouterLsaType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsa_router_id.is_set || is_set(lsa_router_id.yfilter)) leaf_name_data.push_back(lsa_router_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaRouterLsaType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsa-header")
    {
        if(lsa_header == nullptr)
        {
            lsa_header = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaHeader>();
        }
        return lsa_header;
    }

    if(child_yang_name == "lsa-detail")
    {
        if(lsa_detail == nullptr)
        {
            lsa_detail = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaDetail>();
        }
        return lsa_detail;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaRouterLsaType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(lsa_header != nullptr)
    {
        children["lsa-header"] = lsa_header;
    }

    if(lsa_detail != nullptr)
    {
        children["lsa-detail"] = lsa_detail;
    }

    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaRouterLsaType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsa-router-id")
    {
        lsa_router_id = value;
        lsa_router_id.value_namespace = name_space;
        lsa_router_id.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaRouterLsaType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsa-router-id")
    {
        lsa_router_id.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaRouterLsaType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsa-header" || name == "lsa-detail" || name == "lsa-router-id")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaHeader::LsaHeader()
    :
    lsa_type{YType::uint16, "lsa-type"},
    lsa_area_id{YType::str, "lsa-area-id"},
    lsa_age{YType::uint16, "lsa-age"},
    is_do_not_age_lsa{YType::boolean, "is-do-not-age-lsa"},
    ls_id{YType::uint32, "ls-id"},
    advertising_router{YType::str, "advertising-router"},
    sequence_number{YType::uint32, "sequence-number"},
    checksum{YType::uint16, "checksum"},
    is_graceful_restart_active{YType::boolean, "is-graceful-restart-active"}
{

    yang_name = "lsa-header"; yang_parent_name = "inter-area-router-lsa-type"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaHeader::~LsaHeader()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaHeader::has_data() const
{
    return lsa_type.is_set
	|| lsa_area_id.is_set
	|| lsa_age.is_set
	|| is_do_not_age_lsa.is_set
	|| ls_id.is_set
	|| advertising_router.is_set
	|| sequence_number.is_set
	|| checksum.is_set
	|| is_graceful_restart_active.is_set;
}

bool Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaHeader::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lsa_type.yfilter)
	|| ydk::is_set(lsa_area_id.yfilter)
	|| ydk::is_set(lsa_age.yfilter)
	|| ydk::is_set(is_do_not_age_lsa.yfilter)
	|| ydk::is_set(ls_id.yfilter)
	|| ydk::is_set(advertising_router.yfilter)
	|| ydk::is_set(sequence_number.yfilter)
	|| ydk::is_set(checksum.yfilter)
	|| ydk::is_set(is_graceful_restart_active.yfilter);
}

std::string Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaHeader::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-header";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaHeader::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsa_type.is_set || is_set(lsa_type.yfilter)) leaf_name_data.push_back(lsa_type.get_name_leafdata());
    if (lsa_area_id.is_set || is_set(lsa_area_id.yfilter)) leaf_name_data.push_back(lsa_area_id.get_name_leafdata());
    if (lsa_age.is_set || is_set(lsa_age.yfilter)) leaf_name_data.push_back(lsa_age.get_name_leafdata());
    if (is_do_not_age_lsa.is_set || is_set(is_do_not_age_lsa.yfilter)) leaf_name_data.push_back(is_do_not_age_lsa.get_name_leafdata());
    if (ls_id.is_set || is_set(ls_id.yfilter)) leaf_name_data.push_back(ls_id.get_name_leafdata());
    if (advertising_router.is_set || is_set(advertising_router.yfilter)) leaf_name_data.push_back(advertising_router.get_name_leafdata());
    if (sequence_number.is_set || is_set(sequence_number.yfilter)) leaf_name_data.push_back(sequence_number.get_name_leafdata());
    if (checksum.is_set || is_set(checksum.yfilter)) leaf_name_data.push_back(checksum.get_name_leafdata());
    if (is_graceful_restart_active.is_set || is_set(is_graceful_restart_active.yfilter)) leaf_name_data.push_back(is_graceful_restart_active.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaHeader::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaHeader::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaHeader::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsa-type")
    {
        lsa_type = value;
        lsa_type.value_namespace = name_space;
        lsa_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-area-id")
    {
        lsa_area_id = value;
        lsa_area_id.value_namespace = name_space;
        lsa_area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-age")
    {
        lsa_age = value;
        lsa_age.value_namespace = name_space;
        lsa_age.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-do-not-age-lsa")
    {
        is_do_not_age_lsa = value;
        is_do_not_age_lsa.value_namespace = name_space;
        is_do_not_age_lsa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ls-id")
    {
        ls_id = value;
        ls_id.value_namespace = name_space;
        ls_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advertising-router")
    {
        advertising_router = value;
        advertising_router.value_namespace = name_space;
        advertising_router.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequence-number")
    {
        sequence_number = value;
        sequence_number.value_namespace = name_space;
        sequence_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "checksum")
    {
        checksum = value;
        checksum.value_namespace = name_space;
        checksum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-graceful-restart-active")
    {
        is_graceful_restart_active = value;
        is_graceful_restart_active.value_namespace = name_space;
        is_graceful_restart_active.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaHeader::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsa-type")
    {
        lsa_type.yfilter = yfilter;
    }
    if(value_path == "lsa-area-id")
    {
        lsa_area_id.yfilter = yfilter;
    }
    if(value_path == "lsa-age")
    {
        lsa_age.yfilter = yfilter;
    }
    if(value_path == "is-do-not-age-lsa")
    {
        is_do_not_age_lsa.yfilter = yfilter;
    }
    if(value_path == "ls-id")
    {
        ls_id.yfilter = yfilter;
    }
    if(value_path == "advertising-router")
    {
        advertising_router.yfilter = yfilter;
    }
    if(value_path == "sequence-number")
    {
        sequence_number.yfilter = yfilter;
    }
    if(value_path == "checksum")
    {
        checksum.yfilter = yfilter;
    }
    if(value_path == "is-graceful-restart-active")
    {
        is_graceful_restart_active.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaHeader::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsa-type" || name == "lsa-area-id" || name == "lsa-age" || name == "is-do-not-age-lsa" || name == "ls-id" || name == "advertising-router" || name == "sequence-number" || name == "checksum" || name == "is-graceful-restart-active")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaDetail::LsaDetail()
    :
    second_table_index{YType::uint8, "second-table-index"},
    minute_table_index{YType::uint8, "minute-table-index"},
    free_time{YType::uint32, "free-time"},
    is_deleted{YType::boolean, "is-deleted"},
    is_routing_bit{YType::boolean, "is-routing-bit"},
    is_advertising_router_reachable{YType::boolean, "is-advertising-router-reachable"},
    is_no_delete{YType::boolean, "is-no-delete"},
    is_neighbor_exchange{YType::boolean, "is-neighbor-exchange"},
    is_routing_table{YType::boolean, "is-routing-table"},
    is_acknowledged{YType::boolean, "is-acknowledged"},
    is_maximum_aged{YType::boolean, "is-maximum-aged"},
    is_partial_spf{YType::boolean, "is-partial-spf"},
    is_flood_pending{YType::boolean, "is-flood-pending"},
    rate_limit{YType::boolean, "rate-limit"},
    is_nsr_ack_pending{YType::boolean, "is-nsr-ack-pending"},
    nsr_flood_required{YType::boolean, "nsr-flood-required"},
    lsa_flood_required_post_fail_over{YType::boolean, "lsa-flood-required-post-fail-over"},
    lsa_length{YType::uint16, "lsa-length"},
    lsa_sync_state{YType::enumeration, "lsa-sync-state"}
{

    yang_name = "lsa-detail"; yang_parent_name = "inter-area-router-lsa-type"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaDetail::~LsaDetail()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaDetail::has_data() const
{
    return second_table_index.is_set
	|| minute_table_index.is_set
	|| free_time.is_set
	|| is_deleted.is_set
	|| is_routing_bit.is_set
	|| is_advertising_router_reachable.is_set
	|| is_no_delete.is_set
	|| is_neighbor_exchange.is_set
	|| is_routing_table.is_set
	|| is_acknowledged.is_set
	|| is_maximum_aged.is_set
	|| is_partial_spf.is_set
	|| is_flood_pending.is_set
	|| rate_limit.is_set
	|| is_nsr_ack_pending.is_set
	|| nsr_flood_required.is_set
	|| lsa_flood_required_post_fail_over.is_set
	|| lsa_length.is_set
	|| lsa_sync_state.is_set;
}

bool Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaDetail::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(second_table_index.yfilter)
	|| ydk::is_set(minute_table_index.yfilter)
	|| ydk::is_set(free_time.yfilter)
	|| ydk::is_set(is_deleted.yfilter)
	|| ydk::is_set(is_routing_bit.yfilter)
	|| ydk::is_set(is_advertising_router_reachable.yfilter)
	|| ydk::is_set(is_no_delete.yfilter)
	|| ydk::is_set(is_neighbor_exchange.yfilter)
	|| ydk::is_set(is_routing_table.yfilter)
	|| ydk::is_set(is_acknowledged.yfilter)
	|| ydk::is_set(is_maximum_aged.yfilter)
	|| ydk::is_set(is_partial_spf.yfilter)
	|| ydk::is_set(is_flood_pending.yfilter)
	|| ydk::is_set(rate_limit.yfilter)
	|| ydk::is_set(is_nsr_ack_pending.yfilter)
	|| ydk::is_set(nsr_flood_required.yfilter)
	|| ydk::is_set(lsa_flood_required_post_fail_over.yfilter)
	|| ydk::is_set(lsa_length.yfilter)
	|| ydk::is_set(lsa_sync_state.yfilter);
}

std::string Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaDetail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (second_table_index.is_set || is_set(second_table_index.yfilter)) leaf_name_data.push_back(second_table_index.get_name_leafdata());
    if (minute_table_index.is_set || is_set(minute_table_index.yfilter)) leaf_name_data.push_back(minute_table_index.get_name_leafdata());
    if (free_time.is_set || is_set(free_time.yfilter)) leaf_name_data.push_back(free_time.get_name_leafdata());
    if (is_deleted.is_set || is_set(is_deleted.yfilter)) leaf_name_data.push_back(is_deleted.get_name_leafdata());
    if (is_routing_bit.is_set || is_set(is_routing_bit.yfilter)) leaf_name_data.push_back(is_routing_bit.get_name_leafdata());
    if (is_advertising_router_reachable.is_set || is_set(is_advertising_router_reachable.yfilter)) leaf_name_data.push_back(is_advertising_router_reachable.get_name_leafdata());
    if (is_no_delete.is_set || is_set(is_no_delete.yfilter)) leaf_name_data.push_back(is_no_delete.get_name_leafdata());
    if (is_neighbor_exchange.is_set || is_set(is_neighbor_exchange.yfilter)) leaf_name_data.push_back(is_neighbor_exchange.get_name_leafdata());
    if (is_routing_table.is_set || is_set(is_routing_table.yfilter)) leaf_name_data.push_back(is_routing_table.get_name_leafdata());
    if (is_acknowledged.is_set || is_set(is_acknowledged.yfilter)) leaf_name_data.push_back(is_acknowledged.get_name_leafdata());
    if (is_maximum_aged.is_set || is_set(is_maximum_aged.yfilter)) leaf_name_data.push_back(is_maximum_aged.get_name_leafdata());
    if (is_partial_spf.is_set || is_set(is_partial_spf.yfilter)) leaf_name_data.push_back(is_partial_spf.get_name_leafdata());
    if (is_flood_pending.is_set || is_set(is_flood_pending.yfilter)) leaf_name_data.push_back(is_flood_pending.get_name_leafdata());
    if (rate_limit.is_set || is_set(rate_limit.yfilter)) leaf_name_data.push_back(rate_limit.get_name_leafdata());
    if (is_nsr_ack_pending.is_set || is_set(is_nsr_ack_pending.yfilter)) leaf_name_data.push_back(is_nsr_ack_pending.get_name_leafdata());
    if (nsr_flood_required.is_set || is_set(nsr_flood_required.yfilter)) leaf_name_data.push_back(nsr_flood_required.get_name_leafdata());
    if (lsa_flood_required_post_fail_over.is_set || is_set(lsa_flood_required_post_fail_over.yfilter)) leaf_name_data.push_back(lsa_flood_required_post_fail_over.get_name_leafdata());
    if (lsa_length.is_set || is_set(lsa_length.yfilter)) leaf_name_data.push_back(lsa_length.get_name_leafdata());
    if (lsa_sync_state.is_set || is_set(lsa_sync_state.yfilter)) leaf_name_data.push_back(lsa_sync_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaDetail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "second-table-index")
    {
        second_table_index = value;
        second_table_index.value_namespace = name_space;
        second_table_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minute-table-index")
    {
        minute_table_index = value;
        minute_table_index.value_namespace = name_space;
        minute_table_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "free-time")
    {
        free_time = value;
        free_time.value_namespace = name_space;
        free_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-deleted")
    {
        is_deleted = value;
        is_deleted.value_namespace = name_space;
        is_deleted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-routing-bit")
    {
        is_routing_bit = value;
        is_routing_bit.value_namespace = name_space;
        is_routing_bit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-advertising-router-reachable")
    {
        is_advertising_router_reachable = value;
        is_advertising_router_reachable.value_namespace = name_space;
        is_advertising_router_reachable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-no-delete")
    {
        is_no_delete = value;
        is_no_delete.value_namespace = name_space;
        is_no_delete.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-neighbor-exchange")
    {
        is_neighbor_exchange = value;
        is_neighbor_exchange.value_namespace = name_space;
        is_neighbor_exchange.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-routing-table")
    {
        is_routing_table = value;
        is_routing_table.value_namespace = name_space;
        is_routing_table.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-acknowledged")
    {
        is_acknowledged = value;
        is_acknowledged.value_namespace = name_space;
        is_acknowledged.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-maximum-aged")
    {
        is_maximum_aged = value;
        is_maximum_aged.value_namespace = name_space;
        is_maximum_aged.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-partial-spf")
    {
        is_partial_spf = value;
        is_partial_spf.value_namespace = name_space;
        is_partial_spf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-flood-pending")
    {
        is_flood_pending = value;
        is_flood_pending.value_namespace = name_space;
        is_flood_pending.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rate-limit")
    {
        rate_limit = value;
        rate_limit.value_namespace = name_space;
        rate_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-nsr-ack-pending")
    {
        is_nsr_ack_pending = value;
        is_nsr_ack_pending.value_namespace = name_space;
        is_nsr_ack_pending.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-flood-required")
    {
        nsr_flood_required = value;
        nsr_flood_required.value_namespace = name_space;
        nsr_flood_required.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-flood-required-post-fail-over")
    {
        lsa_flood_required_post_fail_over = value;
        lsa_flood_required_post_fail_over.value_namespace = name_space;
        lsa_flood_required_post_fail_over.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-length")
    {
        lsa_length = value;
        lsa_length.value_namespace = name_space;
        lsa_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-sync-state")
    {
        lsa_sync_state = value;
        lsa_sync_state.value_namespace = name_space;
        lsa_sync_state.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaDetail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "second-table-index")
    {
        second_table_index.yfilter = yfilter;
    }
    if(value_path == "minute-table-index")
    {
        minute_table_index.yfilter = yfilter;
    }
    if(value_path == "free-time")
    {
        free_time.yfilter = yfilter;
    }
    if(value_path == "is-deleted")
    {
        is_deleted.yfilter = yfilter;
    }
    if(value_path == "is-routing-bit")
    {
        is_routing_bit.yfilter = yfilter;
    }
    if(value_path == "is-advertising-router-reachable")
    {
        is_advertising_router_reachable.yfilter = yfilter;
    }
    if(value_path == "is-no-delete")
    {
        is_no_delete.yfilter = yfilter;
    }
    if(value_path == "is-neighbor-exchange")
    {
        is_neighbor_exchange.yfilter = yfilter;
    }
    if(value_path == "is-routing-table")
    {
        is_routing_table.yfilter = yfilter;
    }
    if(value_path == "is-acknowledged")
    {
        is_acknowledged.yfilter = yfilter;
    }
    if(value_path == "is-maximum-aged")
    {
        is_maximum_aged.yfilter = yfilter;
    }
    if(value_path == "is-partial-spf")
    {
        is_partial_spf.yfilter = yfilter;
    }
    if(value_path == "is-flood-pending")
    {
        is_flood_pending.yfilter = yfilter;
    }
    if(value_path == "rate-limit")
    {
        rate_limit.yfilter = yfilter;
    }
    if(value_path == "is-nsr-ack-pending")
    {
        is_nsr_ack_pending.yfilter = yfilter;
    }
    if(value_path == "nsr-flood-required")
    {
        nsr_flood_required.yfilter = yfilter;
    }
    if(value_path == "lsa-flood-required-post-fail-over")
    {
        lsa_flood_required_post_fail_over.yfilter = yfilter;
    }
    if(value_path == "lsa-length")
    {
        lsa_length.yfilter = yfilter;
    }
    if(value_path == "lsa-sync-state")
    {
        lsa_sync_state.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::InterAreaRouterLsaType::LsaDetail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "second-table-index" || name == "minute-table-index" || name == "free-time" || name == "is-deleted" || name == "is-routing-bit" || name == "is-advertising-router-reachable" || name == "is-no-delete" || name == "is-neighbor-exchange" || name == "is-routing-table" || name == "is-acknowledged" || name == "is-maximum-aged" || name == "is-partial-spf" || name == "is-flood-pending" || name == "rate-limit" || name == "is-nsr-ack-pending" || name == "nsr-flood-required" || name == "lsa-flood-required-post-fail-over" || name == "lsa-length" || name == "lsa-sync-state")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::ExternalLsaType::ExternalLsaType()
    :
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint8, "prefix-length"},
    metric_type{YType::enumeration, "metric-type"},
    tos_cost{YType::uint32, "tos-cost"},
    is_forwarding_address_set{YType::boolean, "is-forwarding-address-set"},
    forwarding_address{YType::str, "forwarding-address"},
    external_tag{YType::uint32, "external-tag"},
    priority{YType::enumeration, "priority"}
    	,
    lsa_header(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::ExternalLsaType::LsaHeader>())
	,lsa_detail(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::ExternalLsaType::LsaDetail>())
{
    lsa_header->parent = this;
    lsa_detail->parent = this;

    yang_name = "external-lsa-type"; yang_parent_name = "lsa-info"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::ExternalLsaType::~ExternalLsaType()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::ExternalLsaType::has_data() const
{
    return prefix.is_set
	|| prefix_length.is_set
	|| metric_type.is_set
	|| tos_cost.is_set
	|| is_forwarding_address_set.is_set
	|| forwarding_address.is_set
	|| external_tag.is_set
	|| priority.is_set
	|| (lsa_header !=  nullptr && lsa_header->has_data())
	|| (lsa_detail !=  nullptr && lsa_detail->has_data());
}

bool Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::ExternalLsaType::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(tos_cost.yfilter)
	|| ydk::is_set(is_forwarding_address_set.yfilter)
	|| ydk::is_set(forwarding_address.yfilter)
	|| ydk::is_set(external_tag.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| (lsa_header !=  nullptr && lsa_header->has_operation())
	|| (lsa_detail !=  nullptr && lsa_detail->has_operation());
}

std::string Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::ExternalLsaType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "external-lsa-type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::ExternalLsaType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (tos_cost.is_set || is_set(tos_cost.yfilter)) leaf_name_data.push_back(tos_cost.get_name_leafdata());
    if (is_forwarding_address_set.is_set || is_set(is_forwarding_address_set.yfilter)) leaf_name_data.push_back(is_forwarding_address_set.get_name_leafdata());
    if (forwarding_address.is_set || is_set(forwarding_address.yfilter)) leaf_name_data.push_back(forwarding_address.get_name_leafdata());
    if (external_tag.is_set || is_set(external_tag.yfilter)) leaf_name_data.push_back(external_tag.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::ExternalLsaType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsa-header")
    {
        if(lsa_header == nullptr)
        {
            lsa_header = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::ExternalLsaType::LsaHeader>();
        }
        return lsa_header;
    }

    if(child_yang_name == "lsa-detail")
    {
        if(lsa_detail == nullptr)
        {
            lsa_detail = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::ExternalLsaType::LsaDetail>();
        }
        return lsa_detail;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::ExternalLsaType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(lsa_header != nullptr)
    {
        children["lsa-header"] = lsa_header;
    }

    if(lsa_detail != nullptr)
    {
        children["lsa-detail"] = lsa_detail;
    }

    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::ExternalLsaType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tos-cost")
    {
        tos_cost = value;
        tos_cost.value_namespace = name_space;
        tos_cost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-forwarding-address-set")
    {
        is_forwarding_address_set = value;
        is_forwarding_address_set.value_namespace = name_space;
        is_forwarding_address_set.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forwarding-address")
    {
        forwarding_address = value;
        forwarding_address.value_namespace = name_space;
        forwarding_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "external-tag")
    {
        external_tag = value;
        external_tag.value_namespace = name_space;
        external_tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::ExternalLsaType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "tos-cost")
    {
        tos_cost.yfilter = yfilter;
    }
    if(value_path == "is-forwarding-address-set")
    {
        is_forwarding_address_set.yfilter = yfilter;
    }
    if(value_path == "forwarding-address")
    {
        forwarding_address.yfilter = yfilter;
    }
    if(value_path == "external-tag")
    {
        external_tag.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::ExternalLsaType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsa-header" || name == "lsa-detail" || name == "prefix" || name == "prefix-length" || name == "metric-type" || name == "tos-cost" || name == "is-forwarding-address-set" || name == "forwarding-address" || name == "external-tag" || name == "priority")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::ExternalLsaType::LsaHeader::LsaHeader()
    :
    lsa_type{YType::uint16, "lsa-type"},
    lsa_area_id{YType::str, "lsa-area-id"},
    lsa_age{YType::uint16, "lsa-age"},
    is_do_not_age_lsa{YType::boolean, "is-do-not-age-lsa"},
    ls_id{YType::uint32, "ls-id"},
    advertising_router{YType::str, "advertising-router"},
    sequence_number{YType::uint32, "sequence-number"},
    checksum{YType::uint16, "checksum"},
    is_graceful_restart_active{YType::boolean, "is-graceful-restart-active"}
{

    yang_name = "lsa-header"; yang_parent_name = "external-lsa-type"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::ExternalLsaType::LsaHeader::~LsaHeader()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::ExternalLsaType::LsaHeader::has_data() const
{
    return lsa_type.is_set
	|| lsa_area_id.is_set
	|| lsa_age.is_set
	|| is_do_not_age_lsa.is_set
	|| ls_id.is_set
	|| advertising_router.is_set
	|| sequence_number.is_set
	|| checksum.is_set
	|| is_graceful_restart_active.is_set;
}

bool Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::ExternalLsaType::LsaHeader::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lsa_type.yfilter)
	|| ydk::is_set(lsa_area_id.yfilter)
	|| ydk::is_set(lsa_age.yfilter)
	|| ydk::is_set(is_do_not_age_lsa.yfilter)
	|| ydk::is_set(ls_id.yfilter)
	|| ydk::is_set(advertising_router.yfilter)
	|| ydk::is_set(sequence_number.yfilter)
	|| ydk::is_set(checksum.yfilter)
	|| ydk::is_set(is_graceful_restart_active.yfilter);
}

std::string Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::ExternalLsaType::LsaHeader::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-header";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::ExternalLsaType::LsaHeader::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsa_type.is_set || is_set(lsa_type.yfilter)) leaf_name_data.push_back(lsa_type.get_name_leafdata());
    if (lsa_area_id.is_set || is_set(lsa_area_id.yfilter)) leaf_name_data.push_back(lsa_area_id.get_name_leafdata());
    if (lsa_age.is_set || is_set(lsa_age.yfilter)) leaf_name_data.push_back(lsa_age.get_name_leafdata());
    if (is_do_not_age_lsa.is_set || is_set(is_do_not_age_lsa.yfilter)) leaf_name_data.push_back(is_do_not_age_lsa.get_name_leafdata());
    if (ls_id.is_set || is_set(ls_id.yfilter)) leaf_name_data.push_back(ls_id.get_name_leafdata());
    if (advertising_router.is_set || is_set(advertising_router.yfilter)) leaf_name_data.push_back(advertising_router.get_name_leafdata());
    if (sequence_number.is_set || is_set(sequence_number.yfilter)) leaf_name_data.push_back(sequence_number.get_name_leafdata());
    if (checksum.is_set || is_set(checksum.yfilter)) leaf_name_data.push_back(checksum.get_name_leafdata());
    if (is_graceful_restart_active.is_set || is_set(is_graceful_restart_active.yfilter)) leaf_name_data.push_back(is_graceful_restart_active.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::ExternalLsaType::LsaHeader::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::ExternalLsaType::LsaHeader::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::ExternalLsaType::LsaHeader::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsa-type")
    {
        lsa_type = value;
        lsa_type.value_namespace = name_space;
        lsa_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-area-id")
    {
        lsa_area_id = value;
        lsa_area_id.value_namespace = name_space;
        lsa_area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-age")
    {
        lsa_age = value;
        lsa_age.value_namespace = name_space;
        lsa_age.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-do-not-age-lsa")
    {
        is_do_not_age_lsa = value;
        is_do_not_age_lsa.value_namespace = name_space;
        is_do_not_age_lsa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ls-id")
    {
        ls_id = value;
        ls_id.value_namespace = name_space;
        ls_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advertising-router")
    {
        advertising_router = value;
        advertising_router.value_namespace = name_space;
        advertising_router.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequence-number")
    {
        sequence_number = value;
        sequence_number.value_namespace = name_space;
        sequence_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "checksum")
    {
        checksum = value;
        checksum.value_namespace = name_space;
        checksum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-graceful-restart-active")
    {
        is_graceful_restart_active = value;
        is_graceful_restart_active.value_namespace = name_space;
        is_graceful_restart_active.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::ExternalLsaType::LsaHeader::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsa-type")
    {
        lsa_type.yfilter = yfilter;
    }
    if(value_path == "lsa-area-id")
    {
        lsa_area_id.yfilter = yfilter;
    }
    if(value_path == "lsa-age")
    {
        lsa_age.yfilter = yfilter;
    }
    if(value_path == "is-do-not-age-lsa")
    {
        is_do_not_age_lsa.yfilter = yfilter;
    }
    if(value_path == "ls-id")
    {
        ls_id.yfilter = yfilter;
    }
    if(value_path == "advertising-router")
    {
        advertising_router.yfilter = yfilter;
    }
    if(value_path == "sequence-number")
    {
        sequence_number.yfilter = yfilter;
    }
    if(value_path == "checksum")
    {
        checksum.yfilter = yfilter;
    }
    if(value_path == "is-graceful-restart-active")
    {
        is_graceful_restart_active.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::ExternalLsaType::LsaHeader::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsa-type" || name == "lsa-area-id" || name == "lsa-age" || name == "is-do-not-age-lsa" || name == "ls-id" || name == "advertising-router" || name == "sequence-number" || name == "checksum" || name == "is-graceful-restart-active")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::ExternalLsaType::LsaDetail::LsaDetail()
    :
    second_table_index{YType::uint8, "second-table-index"},
    minute_table_index{YType::uint8, "minute-table-index"},
    free_time{YType::uint32, "free-time"},
    is_deleted{YType::boolean, "is-deleted"},
    is_routing_bit{YType::boolean, "is-routing-bit"},
    is_advertising_router_reachable{YType::boolean, "is-advertising-router-reachable"},
    is_no_delete{YType::boolean, "is-no-delete"},
    is_neighbor_exchange{YType::boolean, "is-neighbor-exchange"},
    is_routing_table{YType::boolean, "is-routing-table"},
    is_acknowledged{YType::boolean, "is-acknowledged"},
    is_maximum_aged{YType::boolean, "is-maximum-aged"},
    is_partial_spf{YType::boolean, "is-partial-spf"},
    is_flood_pending{YType::boolean, "is-flood-pending"},
    rate_limit{YType::boolean, "rate-limit"},
    is_nsr_ack_pending{YType::boolean, "is-nsr-ack-pending"},
    nsr_flood_required{YType::boolean, "nsr-flood-required"},
    lsa_flood_required_post_fail_over{YType::boolean, "lsa-flood-required-post-fail-over"},
    lsa_length{YType::uint16, "lsa-length"},
    lsa_sync_state{YType::enumeration, "lsa-sync-state"}
{

    yang_name = "lsa-detail"; yang_parent_name = "external-lsa-type"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::ExternalLsaType::LsaDetail::~LsaDetail()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::ExternalLsaType::LsaDetail::has_data() const
{
    return second_table_index.is_set
	|| minute_table_index.is_set
	|| free_time.is_set
	|| is_deleted.is_set
	|| is_routing_bit.is_set
	|| is_advertising_router_reachable.is_set
	|| is_no_delete.is_set
	|| is_neighbor_exchange.is_set
	|| is_routing_table.is_set
	|| is_acknowledged.is_set
	|| is_maximum_aged.is_set
	|| is_partial_spf.is_set
	|| is_flood_pending.is_set
	|| rate_limit.is_set
	|| is_nsr_ack_pending.is_set
	|| nsr_flood_required.is_set
	|| lsa_flood_required_post_fail_over.is_set
	|| lsa_length.is_set
	|| lsa_sync_state.is_set;
}

bool Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::ExternalLsaType::LsaDetail::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(second_table_index.yfilter)
	|| ydk::is_set(minute_table_index.yfilter)
	|| ydk::is_set(free_time.yfilter)
	|| ydk::is_set(is_deleted.yfilter)
	|| ydk::is_set(is_routing_bit.yfilter)
	|| ydk::is_set(is_advertising_router_reachable.yfilter)
	|| ydk::is_set(is_no_delete.yfilter)
	|| ydk::is_set(is_neighbor_exchange.yfilter)
	|| ydk::is_set(is_routing_table.yfilter)
	|| ydk::is_set(is_acknowledged.yfilter)
	|| ydk::is_set(is_maximum_aged.yfilter)
	|| ydk::is_set(is_partial_spf.yfilter)
	|| ydk::is_set(is_flood_pending.yfilter)
	|| ydk::is_set(rate_limit.yfilter)
	|| ydk::is_set(is_nsr_ack_pending.yfilter)
	|| ydk::is_set(nsr_flood_required.yfilter)
	|| ydk::is_set(lsa_flood_required_post_fail_over.yfilter)
	|| ydk::is_set(lsa_length.yfilter)
	|| ydk::is_set(lsa_sync_state.yfilter);
}

std::string Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::ExternalLsaType::LsaDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::ExternalLsaType::LsaDetail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (second_table_index.is_set || is_set(second_table_index.yfilter)) leaf_name_data.push_back(second_table_index.get_name_leafdata());
    if (minute_table_index.is_set || is_set(minute_table_index.yfilter)) leaf_name_data.push_back(minute_table_index.get_name_leafdata());
    if (free_time.is_set || is_set(free_time.yfilter)) leaf_name_data.push_back(free_time.get_name_leafdata());
    if (is_deleted.is_set || is_set(is_deleted.yfilter)) leaf_name_data.push_back(is_deleted.get_name_leafdata());
    if (is_routing_bit.is_set || is_set(is_routing_bit.yfilter)) leaf_name_data.push_back(is_routing_bit.get_name_leafdata());
    if (is_advertising_router_reachable.is_set || is_set(is_advertising_router_reachable.yfilter)) leaf_name_data.push_back(is_advertising_router_reachable.get_name_leafdata());
    if (is_no_delete.is_set || is_set(is_no_delete.yfilter)) leaf_name_data.push_back(is_no_delete.get_name_leafdata());
    if (is_neighbor_exchange.is_set || is_set(is_neighbor_exchange.yfilter)) leaf_name_data.push_back(is_neighbor_exchange.get_name_leafdata());
    if (is_routing_table.is_set || is_set(is_routing_table.yfilter)) leaf_name_data.push_back(is_routing_table.get_name_leafdata());
    if (is_acknowledged.is_set || is_set(is_acknowledged.yfilter)) leaf_name_data.push_back(is_acknowledged.get_name_leafdata());
    if (is_maximum_aged.is_set || is_set(is_maximum_aged.yfilter)) leaf_name_data.push_back(is_maximum_aged.get_name_leafdata());
    if (is_partial_spf.is_set || is_set(is_partial_spf.yfilter)) leaf_name_data.push_back(is_partial_spf.get_name_leafdata());
    if (is_flood_pending.is_set || is_set(is_flood_pending.yfilter)) leaf_name_data.push_back(is_flood_pending.get_name_leafdata());
    if (rate_limit.is_set || is_set(rate_limit.yfilter)) leaf_name_data.push_back(rate_limit.get_name_leafdata());
    if (is_nsr_ack_pending.is_set || is_set(is_nsr_ack_pending.yfilter)) leaf_name_data.push_back(is_nsr_ack_pending.get_name_leafdata());
    if (nsr_flood_required.is_set || is_set(nsr_flood_required.yfilter)) leaf_name_data.push_back(nsr_flood_required.get_name_leafdata());
    if (lsa_flood_required_post_fail_over.is_set || is_set(lsa_flood_required_post_fail_over.yfilter)) leaf_name_data.push_back(lsa_flood_required_post_fail_over.get_name_leafdata());
    if (lsa_length.is_set || is_set(lsa_length.yfilter)) leaf_name_data.push_back(lsa_length.get_name_leafdata());
    if (lsa_sync_state.is_set || is_set(lsa_sync_state.yfilter)) leaf_name_data.push_back(lsa_sync_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::ExternalLsaType::LsaDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::ExternalLsaType::LsaDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::ExternalLsaType::LsaDetail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "second-table-index")
    {
        second_table_index = value;
        second_table_index.value_namespace = name_space;
        second_table_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minute-table-index")
    {
        minute_table_index = value;
        minute_table_index.value_namespace = name_space;
        minute_table_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "free-time")
    {
        free_time = value;
        free_time.value_namespace = name_space;
        free_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-deleted")
    {
        is_deleted = value;
        is_deleted.value_namespace = name_space;
        is_deleted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-routing-bit")
    {
        is_routing_bit = value;
        is_routing_bit.value_namespace = name_space;
        is_routing_bit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-advertising-router-reachable")
    {
        is_advertising_router_reachable = value;
        is_advertising_router_reachable.value_namespace = name_space;
        is_advertising_router_reachable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-no-delete")
    {
        is_no_delete = value;
        is_no_delete.value_namespace = name_space;
        is_no_delete.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-neighbor-exchange")
    {
        is_neighbor_exchange = value;
        is_neighbor_exchange.value_namespace = name_space;
        is_neighbor_exchange.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-routing-table")
    {
        is_routing_table = value;
        is_routing_table.value_namespace = name_space;
        is_routing_table.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-acknowledged")
    {
        is_acknowledged = value;
        is_acknowledged.value_namespace = name_space;
        is_acknowledged.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-maximum-aged")
    {
        is_maximum_aged = value;
        is_maximum_aged.value_namespace = name_space;
        is_maximum_aged.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-partial-spf")
    {
        is_partial_spf = value;
        is_partial_spf.value_namespace = name_space;
        is_partial_spf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-flood-pending")
    {
        is_flood_pending = value;
        is_flood_pending.value_namespace = name_space;
        is_flood_pending.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rate-limit")
    {
        rate_limit = value;
        rate_limit.value_namespace = name_space;
        rate_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-nsr-ack-pending")
    {
        is_nsr_ack_pending = value;
        is_nsr_ack_pending.value_namespace = name_space;
        is_nsr_ack_pending.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-flood-required")
    {
        nsr_flood_required = value;
        nsr_flood_required.value_namespace = name_space;
        nsr_flood_required.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-flood-required-post-fail-over")
    {
        lsa_flood_required_post_fail_over = value;
        lsa_flood_required_post_fail_over.value_namespace = name_space;
        lsa_flood_required_post_fail_over.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-length")
    {
        lsa_length = value;
        lsa_length.value_namespace = name_space;
        lsa_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-sync-state")
    {
        lsa_sync_state = value;
        lsa_sync_state.value_namespace = name_space;
        lsa_sync_state.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::ExternalLsaType::LsaDetail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "second-table-index")
    {
        second_table_index.yfilter = yfilter;
    }
    if(value_path == "minute-table-index")
    {
        minute_table_index.yfilter = yfilter;
    }
    if(value_path == "free-time")
    {
        free_time.yfilter = yfilter;
    }
    if(value_path == "is-deleted")
    {
        is_deleted.yfilter = yfilter;
    }
    if(value_path == "is-routing-bit")
    {
        is_routing_bit.yfilter = yfilter;
    }
    if(value_path == "is-advertising-router-reachable")
    {
        is_advertising_router_reachable.yfilter = yfilter;
    }
    if(value_path == "is-no-delete")
    {
        is_no_delete.yfilter = yfilter;
    }
    if(value_path == "is-neighbor-exchange")
    {
        is_neighbor_exchange.yfilter = yfilter;
    }
    if(value_path == "is-routing-table")
    {
        is_routing_table.yfilter = yfilter;
    }
    if(value_path == "is-acknowledged")
    {
        is_acknowledged.yfilter = yfilter;
    }
    if(value_path == "is-maximum-aged")
    {
        is_maximum_aged.yfilter = yfilter;
    }
    if(value_path == "is-partial-spf")
    {
        is_partial_spf.yfilter = yfilter;
    }
    if(value_path == "is-flood-pending")
    {
        is_flood_pending.yfilter = yfilter;
    }
    if(value_path == "rate-limit")
    {
        rate_limit.yfilter = yfilter;
    }
    if(value_path == "is-nsr-ack-pending")
    {
        is_nsr_ack_pending.yfilter = yfilter;
    }
    if(value_path == "nsr-flood-required")
    {
        nsr_flood_required.yfilter = yfilter;
    }
    if(value_path == "lsa-flood-required-post-fail-over")
    {
        lsa_flood_required_post_fail_over.yfilter = yfilter;
    }
    if(value_path == "lsa-length")
    {
        lsa_length.yfilter = yfilter;
    }
    if(value_path == "lsa-sync-state")
    {
        lsa_sync_state.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::ExternalLsaType::LsaDetail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "second-table-index" || name == "minute-table-index" || name == "free-time" || name == "is-deleted" || name == "is-routing-bit" || name == "is-advertising-router-reachable" || name == "is-no-delete" || name == "is-neighbor-exchange" || name == "is-routing-table" || name == "is-acknowledged" || name == "is-maximum-aged" || name == "is-partial-spf" || name == "is-flood-pending" || name == "rate-limit" || name == "is-nsr-ack-pending" || name == "nsr-flood-required" || name == "lsa-flood-required-post-fail-over" || name == "lsa-length" || name == "lsa-sync-state")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NssalsaType::NssalsaType()
    :
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint8, "prefix-length"},
    metric_type{YType::enumeration, "metric-type"},
    tos_cost{YType::uint32, "tos-cost"},
    is_forwarding_address_set{YType::boolean, "is-forwarding-address-set"},
    forwarding_address{YType::str, "forwarding-address"},
    external_tag{YType::uint32, "external-tag"},
    priority{YType::enumeration, "priority"}
    	,
    lsa_header(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NssalsaType::LsaHeader>())
	,lsa_detail(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NssalsaType::LsaDetail>())
{
    lsa_header->parent = this;
    lsa_detail->parent = this;

    yang_name = "nssalsa-type"; yang_parent_name = "lsa-info"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NssalsaType::~NssalsaType()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NssalsaType::has_data() const
{
    return prefix.is_set
	|| prefix_length.is_set
	|| metric_type.is_set
	|| tos_cost.is_set
	|| is_forwarding_address_set.is_set
	|| forwarding_address.is_set
	|| external_tag.is_set
	|| priority.is_set
	|| (lsa_header !=  nullptr && lsa_header->has_data())
	|| (lsa_detail !=  nullptr && lsa_detail->has_data());
}

bool Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NssalsaType::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(tos_cost.yfilter)
	|| ydk::is_set(is_forwarding_address_set.yfilter)
	|| ydk::is_set(forwarding_address.yfilter)
	|| ydk::is_set(external_tag.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| (lsa_header !=  nullptr && lsa_header->has_operation())
	|| (lsa_detail !=  nullptr && lsa_detail->has_operation());
}

std::string Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NssalsaType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nssalsa-type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NssalsaType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (tos_cost.is_set || is_set(tos_cost.yfilter)) leaf_name_data.push_back(tos_cost.get_name_leafdata());
    if (is_forwarding_address_set.is_set || is_set(is_forwarding_address_set.yfilter)) leaf_name_data.push_back(is_forwarding_address_set.get_name_leafdata());
    if (forwarding_address.is_set || is_set(forwarding_address.yfilter)) leaf_name_data.push_back(forwarding_address.get_name_leafdata());
    if (external_tag.is_set || is_set(external_tag.yfilter)) leaf_name_data.push_back(external_tag.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NssalsaType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsa-header")
    {
        if(lsa_header == nullptr)
        {
            lsa_header = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NssalsaType::LsaHeader>();
        }
        return lsa_header;
    }

    if(child_yang_name == "lsa-detail")
    {
        if(lsa_detail == nullptr)
        {
            lsa_detail = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NssalsaType::LsaDetail>();
        }
        return lsa_detail;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NssalsaType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(lsa_header != nullptr)
    {
        children["lsa-header"] = lsa_header;
    }

    if(lsa_detail != nullptr)
    {
        children["lsa-detail"] = lsa_detail;
    }

    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NssalsaType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tos-cost")
    {
        tos_cost = value;
        tos_cost.value_namespace = name_space;
        tos_cost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-forwarding-address-set")
    {
        is_forwarding_address_set = value;
        is_forwarding_address_set.value_namespace = name_space;
        is_forwarding_address_set.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forwarding-address")
    {
        forwarding_address = value;
        forwarding_address.value_namespace = name_space;
        forwarding_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "external-tag")
    {
        external_tag = value;
        external_tag.value_namespace = name_space;
        external_tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NssalsaType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "tos-cost")
    {
        tos_cost.yfilter = yfilter;
    }
    if(value_path == "is-forwarding-address-set")
    {
        is_forwarding_address_set.yfilter = yfilter;
    }
    if(value_path == "forwarding-address")
    {
        forwarding_address.yfilter = yfilter;
    }
    if(value_path == "external-tag")
    {
        external_tag.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NssalsaType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsa-header" || name == "lsa-detail" || name == "prefix" || name == "prefix-length" || name == "metric-type" || name == "tos-cost" || name == "is-forwarding-address-set" || name == "forwarding-address" || name == "external-tag" || name == "priority")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NssalsaType::LsaHeader::LsaHeader()
    :
    lsa_type{YType::uint16, "lsa-type"},
    lsa_area_id{YType::str, "lsa-area-id"},
    lsa_age{YType::uint16, "lsa-age"},
    is_do_not_age_lsa{YType::boolean, "is-do-not-age-lsa"},
    ls_id{YType::uint32, "ls-id"},
    advertising_router{YType::str, "advertising-router"},
    sequence_number{YType::uint32, "sequence-number"},
    checksum{YType::uint16, "checksum"},
    is_graceful_restart_active{YType::boolean, "is-graceful-restart-active"}
{

    yang_name = "lsa-header"; yang_parent_name = "nssalsa-type"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NssalsaType::LsaHeader::~LsaHeader()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NssalsaType::LsaHeader::has_data() const
{
    return lsa_type.is_set
	|| lsa_area_id.is_set
	|| lsa_age.is_set
	|| is_do_not_age_lsa.is_set
	|| ls_id.is_set
	|| advertising_router.is_set
	|| sequence_number.is_set
	|| checksum.is_set
	|| is_graceful_restart_active.is_set;
}

bool Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NssalsaType::LsaHeader::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lsa_type.yfilter)
	|| ydk::is_set(lsa_area_id.yfilter)
	|| ydk::is_set(lsa_age.yfilter)
	|| ydk::is_set(is_do_not_age_lsa.yfilter)
	|| ydk::is_set(ls_id.yfilter)
	|| ydk::is_set(advertising_router.yfilter)
	|| ydk::is_set(sequence_number.yfilter)
	|| ydk::is_set(checksum.yfilter)
	|| ydk::is_set(is_graceful_restart_active.yfilter);
}

std::string Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NssalsaType::LsaHeader::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-header";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NssalsaType::LsaHeader::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsa_type.is_set || is_set(lsa_type.yfilter)) leaf_name_data.push_back(lsa_type.get_name_leafdata());
    if (lsa_area_id.is_set || is_set(lsa_area_id.yfilter)) leaf_name_data.push_back(lsa_area_id.get_name_leafdata());
    if (lsa_age.is_set || is_set(lsa_age.yfilter)) leaf_name_data.push_back(lsa_age.get_name_leafdata());
    if (is_do_not_age_lsa.is_set || is_set(is_do_not_age_lsa.yfilter)) leaf_name_data.push_back(is_do_not_age_lsa.get_name_leafdata());
    if (ls_id.is_set || is_set(ls_id.yfilter)) leaf_name_data.push_back(ls_id.get_name_leafdata());
    if (advertising_router.is_set || is_set(advertising_router.yfilter)) leaf_name_data.push_back(advertising_router.get_name_leafdata());
    if (sequence_number.is_set || is_set(sequence_number.yfilter)) leaf_name_data.push_back(sequence_number.get_name_leafdata());
    if (checksum.is_set || is_set(checksum.yfilter)) leaf_name_data.push_back(checksum.get_name_leafdata());
    if (is_graceful_restart_active.is_set || is_set(is_graceful_restart_active.yfilter)) leaf_name_data.push_back(is_graceful_restart_active.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NssalsaType::LsaHeader::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NssalsaType::LsaHeader::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NssalsaType::LsaHeader::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsa-type")
    {
        lsa_type = value;
        lsa_type.value_namespace = name_space;
        lsa_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-area-id")
    {
        lsa_area_id = value;
        lsa_area_id.value_namespace = name_space;
        lsa_area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-age")
    {
        lsa_age = value;
        lsa_age.value_namespace = name_space;
        lsa_age.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-do-not-age-lsa")
    {
        is_do_not_age_lsa = value;
        is_do_not_age_lsa.value_namespace = name_space;
        is_do_not_age_lsa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ls-id")
    {
        ls_id = value;
        ls_id.value_namespace = name_space;
        ls_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advertising-router")
    {
        advertising_router = value;
        advertising_router.value_namespace = name_space;
        advertising_router.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequence-number")
    {
        sequence_number = value;
        sequence_number.value_namespace = name_space;
        sequence_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "checksum")
    {
        checksum = value;
        checksum.value_namespace = name_space;
        checksum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-graceful-restart-active")
    {
        is_graceful_restart_active = value;
        is_graceful_restart_active.value_namespace = name_space;
        is_graceful_restart_active.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NssalsaType::LsaHeader::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsa-type")
    {
        lsa_type.yfilter = yfilter;
    }
    if(value_path == "lsa-area-id")
    {
        lsa_area_id.yfilter = yfilter;
    }
    if(value_path == "lsa-age")
    {
        lsa_age.yfilter = yfilter;
    }
    if(value_path == "is-do-not-age-lsa")
    {
        is_do_not_age_lsa.yfilter = yfilter;
    }
    if(value_path == "ls-id")
    {
        ls_id.yfilter = yfilter;
    }
    if(value_path == "advertising-router")
    {
        advertising_router.yfilter = yfilter;
    }
    if(value_path == "sequence-number")
    {
        sequence_number.yfilter = yfilter;
    }
    if(value_path == "checksum")
    {
        checksum.yfilter = yfilter;
    }
    if(value_path == "is-graceful-restart-active")
    {
        is_graceful_restart_active.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NssalsaType::LsaHeader::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsa-type" || name == "lsa-area-id" || name == "lsa-age" || name == "is-do-not-age-lsa" || name == "ls-id" || name == "advertising-router" || name == "sequence-number" || name == "checksum" || name == "is-graceful-restart-active")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NssalsaType::LsaDetail::LsaDetail()
    :
    second_table_index{YType::uint8, "second-table-index"},
    minute_table_index{YType::uint8, "minute-table-index"},
    free_time{YType::uint32, "free-time"},
    is_deleted{YType::boolean, "is-deleted"},
    is_routing_bit{YType::boolean, "is-routing-bit"},
    is_advertising_router_reachable{YType::boolean, "is-advertising-router-reachable"},
    is_no_delete{YType::boolean, "is-no-delete"},
    is_neighbor_exchange{YType::boolean, "is-neighbor-exchange"},
    is_routing_table{YType::boolean, "is-routing-table"},
    is_acknowledged{YType::boolean, "is-acknowledged"},
    is_maximum_aged{YType::boolean, "is-maximum-aged"},
    is_partial_spf{YType::boolean, "is-partial-spf"},
    is_flood_pending{YType::boolean, "is-flood-pending"},
    rate_limit{YType::boolean, "rate-limit"},
    is_nsr_ack_pending{YType::boolean, "is-nsr-ack-pending"},
    nsr_flood_required{YType::boolean, "nsr-flood-required"},
    lsa_flood_required_post_fail_over{YType::boolean, "lsa-flood-required-post-fail-over"},
    lsa_length{YType::uint16, "lsa-length"},
    lsa_sync_state{YType::enumeration, "lsa-sync-state"}
{

    yang_name = "lsa-detail"; yang_parent_name = "nssalsa-type"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NssalsaType::LsaDetail::~LsaDetail()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NssalsaType::LsaDetail::has_data() const
{
    return second_table_index.is_set
	|| minute_table_index.is_set
	|| free_time.is_set
	|| is_deleted.is_set
	|| is_routing_bit.is_set
	|| is_advertising_router_reachable.is_set
	|| is_no_delete.is_set
	|| is_neighbor_exchange.is_set
	|| is_routing_table.is_set
	|| is_acknowledged.is_set
	|| is_maximum_aged.is_set
	|| is_partial_spf.is_set
	|| is_flood_pending.is_set
	|| rate_limit.is_set
	|| is_nsr_ack_pending.is_set
	|| nsr_flood_required.is_set
	|| lsa_flood_required_post_fail_over.is_set
	|| lsa_length.is_set
	|| lsa_sync_state.is_set;
}

bool Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NssalsaType::LsaDetail::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(second_table_index.yfilter)
	|| ydk::is_set(minute_table_index.yfilter)
	|| ydk::is_set(free_time.yfilter)
	|| ydk::is_set(is_deleted.yfilter)
	|| ydk::is_set(is_routing_bit.yfilter)
	|| ydk::is_set(is_advertising_router_reachable.yfilter)
	|| ydk::is_set(is_no_delete.yfilter)
	|| ydk::is_set(is_neighbor_exchange.yfilter)
	|| ydk::is_set(is_routing_table.yfilter)
	|| ydk::is_set(is_acknowledged.yfilter)
	|| ydk::is_set(is_maximum_aged.yfilter)
	|| ydk::is_set(is_partial_spf.yfilter)
	|| ydk::is_set(is_flood_pending.yfilter)
	|| ydk::is_set(rate_limit.yfilter)
	|| ydk::is_set(is_nsr_ack_pending.yfilter)
	|| ydk::is_set(nsr_flood_required.yfilter)
	|| ydk::is_set(lsa_flood_required_post_fail_over.yfilter)
	|| ydk::is_set(lsa_length.yfilter)
	|| ydk::is_set(lsa_sync_state.yfilter);
}

std::string Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NssalsaType::LsaDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NssalsaType::LsaDetail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (second_table_index.is_set || is_set(second_table_index.yfilter)) leaf_name_data.push_back(second_table_index.get_name_leafdata());
    if (minute_table_index.is_set || is_set(minute_table_index.yfilter)) leaf_name_data.push_back(minute_table_index.get_name_leafdata());
    if (free_time.is_set || is_set(free_time.yfilter)) leaf_name_data.push_back(free_time.get_name_leafdata());
    if (is_deleted.is_set || is_set(is_deleted.yfilter)) leaf_name_data.push_back(is_deleted.get_name_leafdata());
    if (is_routing_bit.is_set || is_set(is_routing_bit.yfilter)) leaf_name_data.push_back(is_routing_bit.get_name_leafdata());
    if (is_advertising_router_reachable.is_set || is_set(is_advertising_router_reachable.yfilter)) leaf_name_data.push_back(is_advertising_router_reachable.get_name_leafdata());
    if (is_no_delete.is_set || is_set(is_no_delete.yfilter)) leaf_name_data.push_back(is_no_delete.get_name_leafdata());
    if (is_neighbor_exchange.is_set || is_set(is_neighbor_exchange.yfilter)) leaf_name_data.push_back(is_neighbor_exchange.get_name_leafdata());
    if (is_routing_table.is_set || is_set(is_routing_table.yfilter)) leaf_name_data.push_back(is_routing_table.get_name_leafdata());
    if (is_acknowledged.is_set || is_set(is_acknowledged.yfilter)) leaf_name_data.push_back(is_acknowledged.get_name_leafdata());
    if (is_maximum_aged.is_set || is_set(is_maximum_aged.yfilter)) leaf_name_data.push_back(is_maximum_aged.get_name_leafdata());
    if (is_partial_spf.is_set || is_set(is_partial_spf.yfilter)) leaf_name_data.push_back(is_partial_spf.get_name_leafdata());
    if (is_flood_pending.is_set || is_set(is_flood_pending.yfilter)) leaf_name_data.push_back(is_flood_pending.get_name_leafdata());
    if (rate_limit.is_set || is_set(rate_limit.yfilter)) leaf_name_data.push_back(rate_limit.get_name_leafdata());
    if (is_nsr_ack_pending.is_set || is_set(is_nsr_ack_pending.yfilter)) leaf_name_data.push_back(is_nsr_ack_pending.get_name_leafdata());
    if (nsr_flood_required.is_set || is_set(nsr_flood_required.yfilter)) leaf_name_data.push_back(nsr_flood_required.get_name_leafdata());
    if (lsa_flood_required_post_fail_over.is_set || is_set(lsa_flood_required_post_fail_over.yfilter)) leaf_name_data.push_back(lsa_flood_required_post_fail_over.get_name_leafdata());
    if (lsa_length.is_set || is_set(lsa_length.yfilter)) leaf_name_data.push_back(lsa_length.get_name_leafdata());
    if (lsa_sync_state.is_set || is_set(lsa_sync_state.yfilter)) leaf_name_data.push_back(lsa_sync_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NssalsaType::LsaDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NssalsaType::LsaDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NssalsaType::LsaDetail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "second-table-index")
    {
        second_table_index = value;
        second_table_index.value_namespace = name_space;
        second_table_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minute-table-index")
    {
        minute_table_index = value;
        minute_table_index.value_namespace = name_space;
        minute_table_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "free-time")
    {
        free_time = value;
        free_time.value_namespace = name_space;
        free_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-deleted")
    {
        is_deleted = value;
        is_deleted.value_namespace = name_space;
        is_deleted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-routing-bit")
    {
        is_routing_bit = value;
        is_routing_bit.value_namespace = name_space;
        is_routing_bit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-advertising-router-reachable")
    {
        is_advertising_router_reachable = value;
        is_advertising_router_reachable.value_namespace = name_space;
        is_advertising_router_reachable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-no-delete")
    {
        is_no_delete = value;
        is_no_delete.value_namespace = name_space;
        is_no_delete.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-neighbor-exchange")
    {
        is_neighbor_exchange = value;
        is_neighbor_exchange.value_namespace = name_space;
        is_neighbor_exchange.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-routing-table")
    {
        is_routing_table = value;
        is_routing_table.value_namespace = name_space;
        is_routing_table.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-acknowledged")
    {
        is_acknowledged = value;
        is_acknowledged.value_namespace = name_space;
        is_acknowledged.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-maximum-aged")
    {
        is_maximum_aged = value;
        is_maximum_aged.value_namespace = name_space;
        is_maximum_aged.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-partial-spf")
    {
        is_partial_spf = value;
        is_partial_spf.value_namespace = name_space;
        is_partial_spf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-flood-pending")
    {
        is_flood_pending = value;
        is_flood_pending.value_namespace = name_space;
        is_flood_pending.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rate-limit")
    {
        rate_limit = value;
        rate_limit.value_namespace = name_space;
        rate_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-nsr-ack-pending")
    {
        is_nsr_ack_pending = value;
        is_nsr_ack_pending.value_namespace = name_space;
        is_nsr_ack_pending.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-flood-required")
    {
        nsr_flood_required = value;
        nsr_flood_required.value_namespace = name_space;
        nsr_flood_required.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-flood-required-post-fail-over")
    {
        lsa_flood_required_post_fail_over = value;
        lsa_flood_required_post_fail_over.value_namespace = name_space;
        lsa_flood_required_post_fail_over.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-length")
    {
        lsa_length = value;
        lsa_length.value_namespace = name_space;
        lsa_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-sync-state")
    {
        lsa_sync_state = value;
        lsa_sync_state.value_namespace = name_space;
        lsa_sync_state.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NssalsaType::LsaDetail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "second-table-index")
    {
        second_table_index.yfilter = yfilter;
    }
    if(value_path == "minute-table-index")
    {
        minute_table_index.yfilter = yfilter;
    }
    if(value_path == "free-time")
    {
        free_time.yfilter = yfilter;
    }
    if(value_path == "is-deleted")
    {
        is_deleted.yfilter = yfilter;
    }
    if(value_path == "is-routing-bit")
    {
        is_routing_bit.yfilter = yfilter;
    }
    if(value_path == "is-advertising-router-reachable")
    {
        is_advertising_router_reachable.yfilter = yfilter;
    }
    if(value_path == "is-no-delete")
    {
        is_no_delete.yfilter = yfilter;
    }
    if(value_path == "is-neighbor-exchange")
    {
        is_neighbor_exchange.yfilter = yfilter;
    }
    if(value_path == "is-routing-table")
    {
        is_routing_table.yfilter = yfilter;
    }
    if(value_path == "is-acknowledged")
    {
        is_acknowledged.yfilter = yfilter;
    }
    if(value_path == "is-maximum-aged")
    {
        is_maximum_aged.yfilter = yfilter;
    }
    if(value_path == "is-partial-spf")
    {
        is_partial_spf.yfilter = yfilter;
    }
    if(value_path == "is-flood-pending")
    {
        is_flood_pending.yfilter = yfilter;
    }
    if(value_path == "rate-limit")
    {
        rate_limit.yfilter = yfilter;
    }
    if(value_path == "is-nsr-ack-pending")
    {
        is_nsr_ack_pending.yfilter = yfilter;
    }
    if(value_path == "nsr-flood-required")
    {
        nsr_flood_required.yfilter = yfilter;
    }
    if(value_path == "lsa-flood-required-post-fail-over")
    {
        lsa_flood_required_post_fail_over.yfilter = yfilter;
    }
    if(value_path == "lsa-length")
    {
        lsa_length.yfilter = yfilter;
    }
    if(value_path == "lsa-sync-state")
    {
        lsa_sync_state.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::NssalsaType::LsaDetail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "second-table-index" || name == "minute-table-index" || name == "free-time" || name == "is-deleted" || name == "is-routing-bit" || name == "is-advertising-router-reachable" || name == "is-no-delete" || name == "is-neighbor-exchange" || name == "is-routing-table" || name == "is-acknowledged" || name == "is-maximum-aged" || name == "is-partial-spf" || name == "is-flood-pending" || name == "rate-limit" || name == "is-nsr-ack-pending" || name == "nsr-flood-required" || name == "lsa-flood-required-post-fail-over" || name == "lsa-length" || name == "lsa-sync-state")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType::LinkLsaType()
    :
    interface_name{YType::str, "interface-name"},
    is_virtual_link{YType::boolean, "is-virtual-link"},
    virtual_link_id{YType::uint32, "virtual-link-id"},
    is_sham_link{YType::boolean, "is-sham-link"},
    sham_link_id{YType::uint32, "sham-link-id"},
    lsa_link_local{YType::str, "lsa-link-local"},
    router_priority{YType::uint8, "router-priority"}
    	,
    lsa_header(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType::LsaHeader>())
	,lsa_detail(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType::LsaDetail>())
{
    lsa_header->parent = this;
    lsa_detail->parent = this;

    yang_name = "link-lsa-type"; yang_parent_name = "lsa-info"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType::~LinkLsaType()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType::has_data() const
{
    for (std::size_t index=0; index<prefix.size(); index++)
    {
        if(prefix[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| is_virtual_link.is_set
	|| virtual_link_id.is_set
	|| is_sham_link.is_set
	|| sham_link_id.is_set
	|| lsa_link_local.is_set
	|| router_priority.is_set
	|| (lsa_header !=  nullptr && lsa_header->has_data())
	|| (lsa_detail !=  nullptr && lsa_detail->has_data());
}

bool Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType::has_operation() const
{
    for (std::size_t index=0; index<prefix.size(); index++)
    {
        if(prefix[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(is_virtual_link.yfilter)
	|| ydk::is_set(virtual_link_id.yfilter)
	|| ydk::is_set(is_sham_link.yfilter)
	|| ydk::is_set(sham_link_id.yfilter)
	|| ydk::is_set(lsa_link_local.yfilter)
	|| ydk::is_set(router_priority.yfilter)
	|| (lsa_header !=  nullptr && lsa_header->has_operation())
	|| (lsa_detail !=  nullptr && lsa_detail->has_operation());
}

std::string Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-lsa-type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (is_virtual_link.is_set || is_set(is_virtual_link.yfilter)) leaf_name_data.push_back(is_virtual_link.get_name_leafdata());
    if (virtual_link_id.is_set || is_set(virtual_link_id.yfilter)) leaf_name_data.push_back(virtual_link_id.get_name_leafdata());
    if (is_sham_link.is_set || is_set(is_sham_link.yfilter)) leaf_name_data.push_back(is_sham_link.get_name_leafdata());
    if (sham_link_id.is_set || is_set(sham_link_id.yfilter)) leaf_name_data.push_back(sham_link_id.get_name_leafdata());
    if (lsa_link_local.is_set || is_set(lsa_link_local.yfilter)) leaf_name_data.push_back(lsa_link_local.get_name_leafdata());
    if (router_priority.is_set || is_set(router_priority.yfilter)) leaf_name_data.push_back(router_priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsa-header")
    {
        if(lsa_header == nullptr)
        {
            lsa_header = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType::LsaHeader>();
        }
        return lsa_header;
    }

    if(child_yang_name == "lsa-detail")
    {
        if(lsa_detail == nullptr)
        {
            lsa_detail = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType::LsaDetail>();
        }
        return lsa_detail;
    }

    if(child_yang_name == "prefix")
    {
        auto c = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType::Prefix>();
        c->parent = this;
        prefix.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(lsa_header != nullptr)
    {
        children["lsa-header"] = lsa_header;
    }

    if(lsa_detail != nullptr)
    {
        children["lsa-detail"] = lsa_detail;
    }

    count = 0;
    for (auto const & c : prefix)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-virtual-link")
    {
        is_virtual_link = value;
        is_virtual_link.value_namespace = name_space;
        is_virtual_link.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtual-link-id")
    {
        virtual_link_id = value;
        virtual_link_id.value_namespace = name_space;
        virtual_link_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-sham-link")
    {
        is_sham_link = value;
        is_sham_link.value_namespace = name_space;
        is_sham_link.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sham-link-id")
    {
        sham_link_id = value;
        sham_link_id.value_namespace = name_space;
        sham_link_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-link-local")
    {
        lsa_link_local = value;
        lsa_link_local.value_namespace = name_space;
        lsa_link_local.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "router-priority")
    {
        router_priority = value;
        router_priority.value_namespace = name_space;
        router_priority.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "is-virtual-link")
    {
        is_virtual_link.yfilter = yfilter;
    }
    if(value_path == "virtual-link-id")
    {
        virtual_link_id.yfilter = yfilter;
    }
    if(value_path == "is-sham-link")
    {
        is_sham_link.yfilter = yfilter;
    }
    if(value_path == "sham-link-id")
    {
        sham_link_id.yfilter = yfilter;
    }
    if(value_path == "lsa-link-local")
    {
        lsa_link_local.yfilter = yfilter;
    }
    if(value_path == "router-priority")
    {
        router_priority.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsa-header" || name == "lsa-detail" || name == "prefix" || name == "interface-name" || name == "is-virtual-link" || name == "virtual-link-id" || name == "is-sham-link" || name == "sham-link-id" || name == "lsa-link-local" || name == "router-priority")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType::LsaHeader::LsaHeader()
    :
    lsa_type{YType::uint16, "lsa-type"},
    lsa_area_id{YType::str, "lsa-area-id"},
    lsa_age{YType::uint16, "lsa-age"},
    is_do_not_age_lsa{YType::boolean, "is-do-not-age-lsa"},
    ls_id{YType::uint32, "ls-id"},
    advertising_router{YType::str, "advertising-router"},
    sequence_number{YType::uint32, "sequence-number"},
    checksum{YType::uint16, "checksum"},
    is_graceful_restart_active{YType::boolean, "is-graceful-restart-active"}
{

    yang_name = "lsa-header"; yang_parent_name = "link-lsa-type"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType::LsaHeader::~LsaHeader()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType::LsaHeader::has_data() const
{
    return lsa_type.is_set
	|| lsa_area_id.is_set
	|| lsa_age.is_set
	|| is_do_not_age_lsa.is_set
	|| ls_id.is_set
	|| advertising_router.is_set
	|| sequence_number.is_set
	|| checksum.is_set
	|| is_graceful_restart_active.is_set;
}

bool Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType::LsaHeader::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lsa_type.yfilter)
	|| ydk::is_set(lsa_area_id.yfilter)
	|| ydk::is_set(lsa_age.yfilter)
	|| ydk::is_set(is_do_not_age_lsa.yfilter)
	|| ydk::is_set(ls_id.yfilter)
	|| ydk::is_set(advertising_router.yfilter)
	|| ydk::is_set(sequence_number.yfilter)
	|| ydk::is_set(checksum.yfilter)
	|| ydk::is_set(is_graceful_restart_active.yfilter);
}

std::string Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType::LsaHeader::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-header";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType::LsaHeader::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsa_type.is_set || is_set(lsa_type.yfilter)) leaf_name_data.push_back(lsa_type.get_name_leafdata());
    if (lsa_area_id.is_set || is_set(lsa_area_id.yfilter)) leaf_name_data.push_back(lsa_area_id.get_name_leafdata());
    if (lsa_age.is_set || is_set(lsa_age.yfilter)) leaf_name_data.push_back(lsa_age.get_name_leafdata());
    if (is_do_not_age_lsa.is_set || is_set(is_do_not_age_lsa.yfilter)) leaf_name_data.push_back(is_do_not_age_lsa.get_name_leafdata());
    if (ls_id.is_set || is_set(ls_id.yfilter)) leaf_name_data.push_back(ls_id.get_name_leafdata());
    if (advertising_router.is_set || is_set(advertising_router.yfilter)) leaf_name_data.push_back(advertising_router.get_name_leafdata());
    if (sequence_number.is_set || is_set(sequence_number.yfilter)) leaf_name_data.push_back(sequence_number.get_name_leafdata());
    if (checksum.is_set || is_set(checksum.yfilter)) leaf_name_data.push_back(checksum.get_name_leafdata());
    if (is_graceful_restart_active.is_set || is_set(is_graceful_restart_active.yfilter)) leaf_name_data.push_back(is_graceful_restart_active.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType::LsaHeader::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType::LsaHeader::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType::LsaHeader::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsa-type")
    {
        lsa_type = value;
        lsa_type.value_namespace = name_space;
        lsa_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-area-id")
    {
        lsa_area_id = value;
        lsa_area_id.value_namespace = name_space;
        lsa_area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-age")
    {
        lsa_age = value;
        lsa_age.value_namespace = name_space;
        lsa_age.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-do-not-age-lsa")
    {
        is_do_not_age_lsa = value;
        is_do_not_age_lsa.value_namespace = name_space;
        is_do_not_age_lsa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ls-id")
    {
        ls_id = value;
        ls_id.value_namespace = name_space;
        ls_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advertising-router")
    {
        advertising_router = value;
        advertising_router.value_namespace = name_space;
        advertising_router.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequence-number")
    {
        sequence_number = value;
        sequence_number.value_namespace = name_space;
        sequence_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "checksum")
    {
        checksum = value;
        checksum.value_namespace = name_space;
        checksum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-graceful-restart-active")
    {
        is_graceful_restart_active = value;
        is_graceful_restart_active.value_namespace = name_space;
        is_graceful_restart_active.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType::LsaHeader::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsa-type")
    {
        lsa_type.yfilter = yfilter;
    }
    if(value_path == "lsa-area-id")
    {
        lsa_area_id.yfilter = yfilter;
    }
    if(value_path == "lsa-age")
    {
        lsa_age.yfilter = yfilter;
    }
    if(value_path == "is-do-not-age-lsa")
    {
        is_do_not_age_lsa.yfilter = yfilter;
    }
    if(value_path == "ls-id")
    {
        ls_id.yfilter = yfilter;
    }
    if(value_path == "advertising-router")
    {
        advertising_router.yfilter = yfilter;
    }
    if(value_path == "sequence-number")
    {
        sequence_number.yfilter = yfilter;
    }
    if(value_path == "checksum")
    {
        checksum.yfilter = yfilter;
    }
    if(value_path == "is-graceful-restart-active")
    {
        is_graceful_restart_active.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType::LsaHeader::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsa-type" || name == "lsa-area-id" || name == "lsa-age" || name == "is-do-not-age-lsa" || name == "ls-id" || name == "advertising-router" || name == "sequence-number" || name == "checksum" || name == "is-graceful-restart-active")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType::LsaDetail::LsaDetail()
    :
    second_table_index{YType::uint8, "second-table-index"},
    minute_table_index{YType::uint8, "minute-table-index"},
    free_time{YType::uint32, "free-time"},
    is_deleted{YType::boolean, "is-deleted"},
    is_routing_bit{YType::boolean, "is-routing-bit"},
    is_advertising_router_reachable{YType::boolean, "is-advertising-router-reachable"},
    is_no_delete{YType::boolean, "is-no-delete"},
    is_neighbor_exchange{YType::boolean, "is-neighbor-exchange"},
    is_routing_table{YType::boolean, "is-routing-table"},
    is_acknowledged{YType::boolean, "is-acknowledged"},
    is_maximum_aged{YType::boolean, "is-maximum-aged"},
    is_partial_spf{YType::boolean, "is-partial-spf"},
    is_flood_pending{YType::boolean, "is-flood-pending"},
    rate_limit{YType::boolean, "rate-limit"},
    is_nsr_ack_pending{YType::boolean, "is-nsr-ack-pending"},
    nsr_flood_required{YType::boolean, "nsr-flood-required"},
    lsa_flood_required_post_fail_over{YType::boolean, "lsa-flood-required-post-fail-over"},
    lsa_length{YType::uint16, "lsa-length"},
    lsa_sync_state{YType::enumeration, "lsa-sync-state"}
{

    yang_name = "lsa-detail"; yang_parent_name = "link-lsa-type"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType::LsaDetail::~LsaDetail()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType::LsaDetail::has_data() const
{
    return second_table_index.is_set
	|| minute_table_index.is_set
	|| free_time.is_set
	|| is_deleted.is_set
	|| is_routing_bit.is_set
	|| is_advertising_router_reachable.is_set
	|| is_no_delete.is_set
	|| is_neighbor_exchange.is_set
	|| is_routing_table.is_set
	|| is_acknowledged.is_set
	|| is_maximum_aged.is_set
	|| is_partial_spf.is_set
	|| is_flood_pending.is_set
	|| rate_limit.is_set
	|| is_nsr_ack_pending.is_set
	|| nsr_flood_required.is_set
	|| lsa_flood_required_post_fail_over.is_set
	|| lsa_length.is_set
	|| lsa_sync_state.is_set;
}

bool Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType::LsaDetail::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(second_table_index.yfilter)
	|| ydk::is_set(minute_table_index.yfilter)
	|| ydk::is_set(free_time.yfilter)
	|| ydk::is_set(is_deleted.yfilter)
	|| ydk::is_set(is_routing_bit.yfilter)
	|| ydk::is_set(is_advertising_router_reachable.yfilter)
	|| ydk::is_set(is_no_delete.yfilter)
	|| ydk::is_set(is_neighbor_exchange.yfilter)
	|| ydk::is_set(is_routing_table.yfilter)
	|| ydk::is_set(is_acknowledged.yfilter)
	|| ydk::is_set(is_maximum_aged.yfilter)
	|| ydk::is_set(is_partial_spf.yfilter)
	|| ydk::is_set(is_flood_pending.yfilter)
	|| ydk::is_set(rate_limit.yfilter)
	|| ydk::is_set(is_nsr_ack_pending.yfilter)
	|| ydk::is_set(nsr_flood_required.yfilter)
	|| ydk::is_set(lsa_flood_required_post_fail_over.yfilter)
	|| ydk::is_set(lsa_length.yfilter)
	|| ydk::is_set(lsa_sync_state.yfilter);
}

std::string Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType::LsaDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType::LsaDetail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (second_table_index.is_set || is_set(second_table_index.yfilter)) leaf_name_data.push_back(second_table_index.get_name_leafdata());
    if (minute_table_index.is_set || is_set(minute_table_index.yfilter)) leaf_name_data.push_back(minute_table_index.get_name_leafdata());
    if (free_time.is_set || is_set(free_time.yfilter)) leaf_name_data.push_back(free_time.get_name_leafdata());
    if (is_deleted.is_set || is_set(is_deleted.yfilter)) leaf_name_data.push_back(is_deleted.get_name_leafdata());
    if (is_routing_bit.is_set || is_set(is_routing_bit.yfilter)) leaf_name_data.push_back(is_routing_bit.get_name_leafdata());
    if (is_advertising_router_reachable.is_set || is_set(is_advertising_router_reachable.yfilter)) leaf_name_data.push_back(is_advertising_router_reachable.get_name_leafdata());
    if (is_no_delete.is_set || is_set(is_no_delete.yfilter)) leaf_name_data.push_back(is_no_delete.get_name_leafdata());
    if (is_neighbor_exchange.is_set || is_set(is_neighbor_exchange.yfilter)) leaf_name_data.push_back(is_neighbor_exchange.get_name_leafdata());
    if (is_routing_table.is_set || is_set(is_routing_table.yfilter)) leaf_name_data.push_back(is_routing_table.get_name_leafdata());
    if (is_acknowledged.is_set || is_set(is_acknowledged.yfilter)) leaf_name_data.push_back(is_acknowledged.get_name_leafdata());
    if (is_maximum_aged.is_set || is_set(is_maximum_aged.yfilter)) leaf_name_data.push_back(is_maximum_aged.get_name_leafdata());
    if (is_partial_spf.is_set || is_set(is_partial_spf.yfilter)) leaf_name_data.push_back(is_partial_spf.get_name_leafdata());
    if (is_flood_pending.is_set || is_set(is_flood_pending.yfilter)) leaf_name_data.push_back(is_flood_pending.get_name_leafdata());
    if (rate_limit.is_set || is_set(rate_limit.yfilter)) leaf_name_data.push_back(rate_limit.get_name_leafdata());
    if (is_nsr_ack_pending.is_set || is_set(is_nsr_ack_pending.yfilter)) leaf_name_data.push_back(is_nsr_ack_pending.get_name_leafdata());
    if (nsr_flood_required.is_set || is_set(nsr_flood_required.yfilter)) leaf_name_data.push_back(nsr_flood_required.get_name_leafdata());
    if (lsa_flood_required_post_fail_over.is_set || is_set(lsa_flood_required_post_fail_over.yfilter)) leaf_name_data.push_back(lsa_flood_required_post_fail_over.get_name_leafdata());
    if (lsa_length.is_set || is_set(lsa_length.yfilter)) leaf_name_data.push_back(lsa_length.get_name_leafdata());
    if (lsa_sync_state.is_set || is_set(lsa_sync_state.yfilter)) leaf_name_data.push_back(lsa_sync_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType::LsaDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType::LsaDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType::LsaDetail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "second-table-index")
    {
        second_table_index = value;
        second_table_index.value_namespace = name_space;
        second_table_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minute-table-index")
    {
        minute_table_index = value;
        minute_table_index.value_namespace = name_space;
        minute_table_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "free-time")
    {
        free_time = value;
        free_time.value_namespace = name_space;
        free_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-deleted")
    {
        is_deleted = value;
        is_deleted.value_namespace = name_space;
        is_deleted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-routing-bit")
    {
        is_routing_bit = value;
        is_routing_bit.value_namespace = name_space;
        is_routing_bit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-advertising-router-reachable")
    {
        is_advertising_router_reachable = value;
        is_advertising_router_reachable.value_namespace = name_space;
        is_advertising_router_reachable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-no-delete")
    {
        is_no_delete = value;
        is_no_delete.value_namespace = name_space;
        is_no_delete.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-neighbor-exchange")
    {
        is_neighbor_exchange = value;
        is_neighbor_exchange.value_namespace = name_space;
        is_neighbor_exchange.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-routing-table")
    {
        is_routing_table = value;
        is_routing_table.value_namespace = name_space;
        is_routing_table.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-acknowledged")
    {
        is_acknowledged = value;
        is_acknowledged.value_namespace = name_space;
        is_acknowledged.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-maximum-aged")
    {
        is_maximum_aged = value;
        is_maximum_aged.value_namespace = name_space;
        is_maximum_aged.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-partial-spf")
    {
        is_partial_spf = value;
        is_partial_spf.value_namespace = name_space;
        is_partial_spf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-flood-pending")
    {
        is_flood_pending = value;
        is_flood_pending.value_namespace = name_space;
        is_flood_pending.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rate-limit")
    {
        rate_limit = value;
        rate_limit.value_namespace = name_space;
        rate_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-nsr-ack-pending")
    {
        is_nsr_ack_pending = value;
        is_nsr_ack_pending.value_namespace = name_space;
        is_nsr_ack_pending.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-flood-required")
    {
        nsr_flood_required = value;
        nsr_flood_required.value_namespace = name_space;
        nsr_flood_required.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-flood-required-post-fail-over")
    {
        lsa_flood_required_post_fail_over = value;
        lsa_flood_required_post_fail_over.value_namespace = name_space;
        lsa_flood_required_post_fail_over.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-length")
    {
        lsa_length = value;
        lsa_length.value_namespace = name_space;
        lsa_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-sync-state")
    {
        lsa_sync_state = value;
        lsa_sync_state.value_namespace = name_space;
        lsa_sync_state.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType::LsaDetail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "second-table-index")
    {
        second_table_index.yfilter = yfilter;
    }
    if(value_path == "minute-table-index")
    {
        minute_table_index.yfilter = yfilter;
    }
    if(value_path == "free-time")
    {
        free_time.yfilter = yfilter;
    }
    if(value_path == "is-deleted")
    {
        is_deleted.yfilter = yfilter;
    }
    if(value_path == "is-routing-bit")
    {
        is_routing_bit.yfilter = yfilter;
    }
    if(value_path == "is-advertising-router-reachable")
    {
        is_advertising_router_reachable.yfilter = yfilter;
    }
    if(value_path == "is-no-delete")
    {
        is_no_delete.yfilter = yfilter;
    }
    if(value_path == "is-neighbor-exchange")
    {
        is_neighbor_exchange.yfilter = yfilter;
    }
    if(value_path == "is-routing-table")
    {
        is_routing_table.yfilter = yfilter;
    }
    if(value_path == "is-acknowledged")
    {
        is_acknowledged.yfilter = yfilter;
    }
    if(value_path == "is-maximum-aged")
    {
        is_maximum_aged.yfilter = yfilter;
    }
    if(value_path == "is-partial-spf")
    {
        is_partial_spf.yfilter = yfilter;
    }
    if(value_path == "is-flood-pending")
    {
        is_flood_pending.yfilter = yfilter;
    }
    if(value_path == "rate-limit")
    {
        rate_limit.yfilter = yfilter;
    }
    if(value_path == "is-nsr-ack-pending")
    {
        is_nsr_ack_pending.yfilter = yfilter;
    }
    if(value_path == "nsr-flood-required")
    {
        nsr_flood_required.yfilter = yfilter;
    }
    if(value_path == "lsa-flood-required-post-fail-over")
    {
        lsa_flood_required_post_fail_over.yfilter = yfilter;
    }
    if(value_path == "lsa-length")
    {
        lsa_length.yfilter = yfilter;
    }
    if(value_path == "lsa-sync-state")
    {
        lsa_sync_state.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType::LsaDetail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "second-table-index" || name == "minute-table-index" || name == "free-time" || name == "is-deleted" || name == "is-routing-bit" || name == "is-advertising-router-reachable" || name == "is-no-delete" || name == "is-neighbor-exchange" || name == "is-routing-table" || name == "is-acknowledged" || name == "is-maximum-aged" || name == "is-partial-spf" || name == "is-flood-pending" || name == "rate-limit" || name == "is-nsr-ack-pending" || name == "nsr-flood-required" || name == "lsa-flood-required-post-fail-over" || name == "lsa-length" || name == "lsa-sync-state")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType::Prefix::Prefix()
    :
    prefix{YType::str, "prefix"},
    ospfv3_prefix_length{YType::uint8, "ospfv3-prefix-length"},
    ospfv3_prefix_options{YType::uint8, "ospfv3-prefix-options"},
    ospfv3_prefix_metric{YType::uint16, "ospfv3-prefix-metric"},
    priority{YType::enumeration, "priority"}
{

    yang_name = "prefix"; yang_parent_name = "link-lsa-type"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType::Prefix::~Prefix()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType::Prefix::has_data() const
{
    return prefix.is_set
	|| ospfv3_prefix_length.is_set
	|| ospfv3_prefix_options.is_set
	|| ospfv3_prefix_metric.is_set
	|| priority.is_set;
}

bool Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType::Prefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(ospfv3_prefix_length.yfilter)
	|| ydk::is_set(ospfv3_prefix_options.yfilter)
	|| ydk::is_set(ospfv3_prefix_metric.yfilter)
	|| ydk::is_set(priority.yfilter);
}

std::string Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType::Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType::Prefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (ospfv3_prefix_length.is_set || is_set(ospfv3_prefix_length.yfilter)) leaf_name_data.push_back(ospfv3_prefix_length.get_name_leafdata());
    if (ospfv3_prefix_options.is_set || is_set(ospfv3_prefix_options.yfilter)) leaf_name_data.push_back(ospfv3_prefix_options.get_name_leafdata());
    if (ospfv3_prefix_metric.is_set || is_set(ospfv3_prefix_metric.yfilter)) leaf_name_data.push_back(ospfv3_prefix_metric.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType::Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType::Prefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType::Prefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospfv3-prefix-length")
    {
        ospfv3_prefix_length = value;
        ospfv3_prefix_length.value_namespace = name_space;
        ospfv3_prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospfv3-prefix-options")
    {
        ospfv3_prefix_options = value;
        ospfv3_prefix_options.value_namespace = name_space;
        ospfv3_prefix_options.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospfv3-prefix-metric")
    {
        ospfv3_prefix_metric = value;
        ospfv3_prefix_metric.value_namespace = name_space;
        ospfv3_prefix_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType::Prefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "ospfv3-prefix-length")
    {
        ospfv3_prefix_length.yfilter = yfilter;
    }
    if(value_path == "ospfv3-prefix-options")
    {
        ospfv3_prefix_options.yfilter = yfilter;
    }
    if(value_path == "ospfv3-prefix-metric")
    {
        ospfv3_prefix_metric.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::LinkLsaType::Prefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "ospfv3-prefix-length" || name == "ospfv3-prefix-options" || name == "ospfv3-prefix-metric" || name == "priority")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::IntraAreaPrefixLsaType()
    :
    reference_type{YType::enumeration, "reference-type"},
    reference_lsa_id{YType::uint32, "reference-lsa-id"},
    reference_advertised_router{YType::str, "reference-advertised-router"}
    	,
    lsa_header(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaHeader>())
	,lsa_detail(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaDetail>())
{
    lsa_header->parent = this;
    lsa_detail->parent = this;

    yang_name = "intra-area-prefix-lsa-type"; yang_parent_name = "lsa-info"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::~IntraAreaPrefixLsaType()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::has_data() const
{
    for (std::size_t index=0; index<prefix.size(); index++)
    {
        if(prefix[index]->has_data())
            return true;
    }
    return reference_type.is_set
	|| reference_lsa_id.is_set
	|| reference_advertised_router.is_set
	|| (lsa_header !=  nullptr && lsa_header->has_data())
	|| (lsa_detail !=  nullptr && lsa_detail->has_data());
}

bool Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::has_operation() const
{
    for (std::size_t index=0; index<prefix.size(); index++)
    {
        if(prefix[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(reference_type.yfilter)
	|| ydk::is_set(reference_lsa_id.yfilter)
	|| ydk::is_set(reference_advertised_router.yfilter)
	|| (lsa_header !=  nullptr && lsa_header->has_operation())
	|| (lsa_detail !=  nullptr && lsa_detail->has_operation());
}

std::string Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "intra-area-prefix-lsa-type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reference_type.is_set || is_set(reference_type.yfilter)) leaf_name_data.push_back(reference_type.get_name_leafdata());
    if (reference_lsa_id.is_set || is_set(reference_lsa_id.yfilter)) leaf_name_data.push_back(reference_lsa_id.get_name_leafdata());
    if (reference_advertised_router.is_set || is_set(reference_advertised_router.yfilter)) leaf_name_data.push_back(reference_advertised_router.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsa-header")
    {
        if(lsa_header == nullptr)
        {
            lsa_header = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaHeader>();
        }
        return lsa_header;
    }

    if(child_yang_name == "lsa-detail")
    {
        if(lsa_detail == nullptr)
        {
            lsa_detail = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaDetail>();
        }
        return lsa_detail;
    }

    if(child_yang_name == "prefix")
    {
        auto c = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::Prefix>();
        c->parent = this;
        prefix.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(lsa_header != nullptr)
    {
        children["lsa-header"] = lsa_header;
    }

    if(lsa_detail != nullptr)
    {
        children["lsa-detail"] = lsa_detail;
    }

    count = 0;
    for (auto const & c : prefix)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reference-type")
    {
        reference_type = value;
        reference_type.value_namespace = name_space;
        reference_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reference-lsa-id")
    {
        reference_lsa_id = value;
        reference_lsa_id.value_namespace = name_space;
        reference_lsa_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reference-advertised-router")
    {
        reference_advertised_router = value;
        reference_advertised_router.value_namespace = name_space;
        reference_advertised_router.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reference-type")
    {
        reference_type.yfilter = yfilter;
    }
    if(value_path == "reference-lsa-id")
    {
        reference_lsa_id.yfilter = yfilter;
    }
    if(value_path == "reference-advertised-router")
    {
        reference_advertised_router.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsa-header" || name == "lsa-detail" || name == "prefix" || name == "reference-type" || name == "reference-lsa-id" || name == "reference-advertised-router")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaHeader::LsaHeader()
    :
    lsa_type{YType::uint16, "lsa-type"},
    lsa_area_id{YType::str, "lsa-area-id"},
    lsa_age{YType::uint16, "lsa-age"},
    is_do_not_age_lsa{YType::boolean, "is-do-not-age-lsa"},
    ls_id{YType::uint32, "ls-id"},
    advertising_router{YType::str, "advertising-router"},
    sequence_number{YType::uint32, "sequence-number"},
    checksum{YType::uint16, "checksum"},
    is_graceful_restart_active{YType::boolean, "is-graceful-restart-active"}
{

    yang_name = "lsa-header"; yang_parent_name = "intra-area-prefix-lsa-type"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaHeader::~LsaHeader()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaHeader::has_data() const
{
    return lsa_type.is_set
	|| lsa_area_id.is_set
	|| lsa_age.is_set
	|| is_do_not_age_lsa.is_set
	|| ls_id.is_set
	|| advertising_router.is_set
	|| sequence_number.is_set
	|| checksum.is_set
	|| is_graceful_restart_active.is_set;
}

bool Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaHeader::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lsa_type.yfilter)
	|| ydk::is_set(lsa_area_id.yfilter)
	|| ydk::is_set(lsa_age.yfilter)
	|| ydk::is_set(is_do_not_age_lsa.yfilter)
	|| ydk::is_set(ls_id.yfilter)
	|| ydk::is_set(advertising_router.yfilter)
	|| ydk::is_set(sequence_number.yfilter)
	|| ydk::is_set(checksum.yfilter)
	|| ydk::is_set(is_graceful_restart_active.yfilter);
}

std::string Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaHeader::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-header";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaHeader::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsa_type.is_set || is_set(lsa_type.yfilter)) leaf_name_data.push_back(lsa_type.get_name_leafdata());
    if (lsa_area_id.is_set || is_set(lsa_area_id.yfilter)) leaf_name_data.push_back(lsa_area_id.get_name_leafdata());
    if (lsa_age.is_set || is_set(lsa_age.yfilter)) leaf_name_data.push_back(lsa_age.get_name_leafdata());
    if (is_do_not_age_lsa.is_set || is_set(is_do_not_age_lsa.yfilter)) leaf_name_data.push_back(is_do_not_age_lsa.get_name_leafdata());
    if (ls_id.is_set || is_set(ls_id.yfilter)) leaf_name_data.push_back(ls_id.get_name_leafdata());
    if (advertising_router.is_set || is_set(advertising_router.yfilter)) leaf_name_data.push_back(advertising_router.get_name_leafdata());
    if (sequence_number.is_set || is_set(sequence_number.yfilter)) leaf_name_data.push_back(sequence_number.get_name_leafdata());
    if (checksum.is_set || is_set(checksum.yfilter)) leaf_name_data.push_back(checksum.get_name_leafdata());
    if (is_graceful_restart_active.is_set || is_set(is_graceful_restart_active.yfilter)) leaf_name_data.push_back(is_graceful_restart_active.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaHeader::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaHeader::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaHeader::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsa-type")
    {
        lsa_type = value;
        lsa_type.value_namespace = name_space;
        lsa_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-area-id")
    {
        lsa_area_id = value;
        lsa_area_id.value_namespace = name_space;
        lsa_area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-age")
    {
        lsa_age = value;
        lsa_age.value_namespace = name_space;
        lsa_age.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-do-not-age-lsa")
    {
        is_do_not_age_lsa = value;
        is_do_not_age_lsa.value_namespace = name_space;
        is_do_not_age_lsa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ls-id")
    {
        ls_id = value;
        ls_id.value_namespace = name_space;
        ls_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advertising-router")
    {
        advertising_router = value;
        advertising_router.value_namespace = name_space;
        advertising_router.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequence-number")
    {
        sequence_number = value;
        sequence_number.value_namespace = name_space;
        sequence_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "checksum")
    {
        checksum = value;
        checksum.value_namespace = name_space;
        checksum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-graceful-restart-active")
    {
        is_graceful_restart_active = value;
        is_graceful_restart_active.value_namespace = name_space;
        is_graceful_restart_active.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaHeader::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsa-type")
    {
        lsa_type.yfilter = yfilter;
    }
    if(value_path == "lsa-area-id")
    {
        lsa_area_id.yfilter = yfilter;
    }
    if(value_path == "lsa-age")
    {
        lsa_age.yfilter = yfilter;
    }
    if(value_path == "is-do-not-age-lsa")
    {
        is_do_not_age_lsa.yfilter = yfilter;
    }
    if(value_path == "ls-id")
    {
        ls_id.yfilter = yfilter;
    }
    if(value_path == "advertising-router")
    {
        advertising_router.yfilter = yfilter;
    }
    if(value_path == "sequence-number")
    {
        sequence_number.yfilter = yfilter;
    }
    if(value_path == "checksum")
    {
        checksum.yfilter = yfilter;
    }
    if(value_path == "is-graceful-restart-active")
    {
        is_graceful_restart_active.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaHeader::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsa-type" || name == "lsa-area-id" || name == "lsa-age" || name == "is-do-not-age-lsa" || name == "ls-id" || name == "advertising-router" || name == "sequence-number" || name == "checksum" || name == "is-graceful-restart-active")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaDetail::LsaDetail()
    :
    second_table_index{YType::uint8, "second-table-index"},
    minute_table_index{YType::uint8, "minute-table-index"},
    free_time{YType::uint32, "free-time"},
    is_deleted{YType::boolean, "is-deleted"},
    is_routing_bit{YType::boolean, "is-routing-bit"},
    is_advertising_router_reachable{YType::boolean, "is-advertising-router-reachable"},
    is_no_delete{YType::boolean, "is-no-delete"},
    is_neighbor_exchange{YType::boolean, "is-neighbor-exchange"},
    is_routing_table{YType::boolean, "is-routing-table"},
    is_acknowledged{YType::boolean, "is-acknowledged"},
    is_maximum_aged{YType::boolean, "is-maximum-aged"},
    is_partial_spf{YType::boolean, "is-partial-spf"},
    is_flood_pending{YType::boolean, "is-flood-pending"},
    rate_limit{YType::boolean, "rate-limit"},
    is_nsr_ack_pending{YType::boolean, "is-nsr-ack-pending"},
    nsr_flood_required{YType::boolean, "nsr-flood-required"},
    lsa_flood_required_post_fail_over{YType::boolean, "lsa-flood-required-post-fail-over"},
    lsa_length{YType::uint16, "lsa-length"},
    lsa_sync_state{YType::enumeration, "lsa-sync-state"}
{

    yang_name = "lsa-detail"; yang_parent_name = "intra-area-prefix-lsa-type"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaDetail::~LsaDetail()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaDetail::has_data() const
{
    return second_table_index.is_set
	|| minute_table_index.is_set
	|| free_time.is_set
	|| is_deleted.is_set
	|| is_routing_bit.is_set
	|| is_advertising_router_reachable.is_set
	|| is_no_delete.is_set
	|| is_neighbor_exchange.is_set
	|| is_routing_table.is_set
	|| is_acknowledged.is_set
	|| is_maximum_aged.is_set
	|| is_partial_spf.is_set
	|| is_flood_pending.is_set
	|| rate_limit.is_set
	|| is_nsr_ack_pending.is_set
	|| nsr_flood_required.is_set
	|| lsa_flood_required_post_fail_over.is_set
	|| lsa_length.is_set
	|| lsa_sync_state.is_set;
}

bool Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaDetail::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(second_table_index.yfilter)
	|| ydk::is_set(minute_table_index.yfilter)
	|| ydk::is_set(free_time.yfilter)
	|| ydk::is_set(is_deleted.yfilter)
	|| ydk::is_set(is_routing_bit.yfilter)
	|| ydk::is_set(is_advertising_router_reachable.yfilter)
	|| ydk::is_set(is_no_delete.yfilter)
	|| ydk::is_set(is_neighbor_exchange.yfilter)
	|| ydk::is_set(is_routing_table.yfilter)
	|| ydk::is_set(is_acknowledged.yfilter)
	|| ydk::is_set(is_maximum_aged.yfilter)
	|| ydk::is_set(is_partial_spf.yfilter)
	|| ydk::is_set(is_flood_pending.yfilter)
	|| ydk::is_set(rate_limit.yfilter)
	|| ydk::is_set(is_nsr_ack_pending.yfilter)
	|| ydk::is_set(nsr_flood_required.yfilter)
	|| ydk::is_set(lsa_flood_required_post_fail_over.yfilter)
	|| ydk::is_set(lsa_length.yfilter)
	|| ydk::is_set(lsa_sync_state.yfilter);
}

std::string Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaDetail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (second_table_index.is_set || is_set(second_table_index.yfilter)) leaf_name_data.push_back(second_table_index.get_name_leafdata());
    if (minute_table_index.is_set || is_set(minute_table_index.yfilter)) leaf_name_data.push_back(minute_table_index.get_name_leafdata());
    if (free_time.is_set || is_set(free_time.yfilter)) leaf_name_data.push_back(free_time.get_name_leafdata());
    if (is_deleted.is_set || is_set(is_deleted.yfilter)) leaf_name_data.push_back(is_deleted.get_name_leafdata());
    if (is_routing_bit.is_set || is_set(is_routing_bit.yfilter)) leaf_name_data.push_back(is_routing_bit.get_name_leafdata());
    if (is_advertising_router_reachable.is_set || is_set(is_advertising_router_reachable.yfilter)) leaf_name_data.push_back(is_advertising_router_reachable.get_name_leafdata());
    if (is_no_delete.is_set || is_set(is_no_delete.yfilter)) leaf_name_data.push_back(is_no_delete.get_name_leafdata());
    if (is_neighbor_exchange.is_set || is_set(is_neighbor_exchange.yfilter)) leaf_name_data.push_back(is_neighbor_exchange.get_name_leafdata());
    if (is_routing_table.is_set || is_set(is_routing_table.yfilter)) leaf_name_data.push_back(is_routing_table.get_name_leafdata());
    if (is_acknowledged.is_set || is_set(is_acknowledged.yfilter)) leaf_name_data.push_back(is_acknowledged.get_name_leafdata());
    if (is_maximum_aged.is_set || is_set(is_maximum_aged.yfilter)) leaf_name_data.push_back(is_maximum_aged.get_name_leafdata());
    if (is_partial_spf.is_set || is_set(is_partial_spf.yfilter)) leaf_name_data.push_back(is_partial_spf.get_name_leafdata());
    if (is_flood_pending.is_set || is_set(is_flood_pending.yfilter)) leaf_name_data.push_back(is_flood_pending.get_name_leafdata());
    if (rate_limit.is_set || is_set(rate_limit.yfilter)) leaf_name_data.push_back(rate_limit.get_name_leafdata());
    if (is_nsr_ack_pending.is_set || is_set(is_nsr_ack_pending.yfilter)) leaf_name_data.push_back(is_nsr_ack_pending.get_name_leafdata());
    if (nsr_flood_required.is_set || is_set(nsr_flood_required.yfilter)) leaf_name_data.push_back(nsr_flood_required.get_name_leafdata());
    if (lsa_flood_required_post_fail_over.is_set || is_set(lsa_flood_required_post_fail_over.yfilter)) leaf_name_data.push_back(lsa_flood_required_post_fail_over.get_name_leafdata());
    if (lsa_length.is_set || is_set(lsa_length.yfilter)) leaf_name_data.push_back(lsa_length.get_name_leafdata());
    if (lsa_sync_state.is_set || is_set(lsa_sync_state.yfilter)) leaf_name_data.push_back(lsa_sync_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaDetail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "second-table-index")
    {
        second_table_index = value;
        second_table_index.value_namespace = name_space;
        second_table_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minute-table-index")
    {
        minute_table_index = value;
        minute_table_index.value_namespace = name_space;
        minute_table_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "free-time")
    {
        free_time = value;
        free_time.value_namespace = name_space;
        free_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-deleted")
    {
        is_deleted = value;
        is_deleted.value_namespace = name_space;
        is_deleted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-routing-bit")
    {
        is_routing_bit = value;
        is_routing_bit.value_namespace = name_space;
        is_routing_bit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-advertising-router-reachable")
    {
        is_advertising_router_reachable = value;
        is_advertising_router_reachable.value_namespace = name_space;
        is_advertising_router_reachable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-no-delete")
    {
        is_no_delete = value;
        is_no_delete.value_namespace = name_space;
        is_no_delete.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-neighbor-exchange")
    {
        is_neighbor_exchange = value;
        is_neighbor_exchange.value_namespace = name_space;
        is_neighbor_exchange.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-routing-table")
    {
        is_routing_table = value;
        is_routing_table.value_namespace = name_space;
        is_routing_table.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-acknowledged")
    {
        is_acknowledged = value;
        is_acknowledged.value_namespace = name_space;
        is_acknowledged.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-maximum-aged")
    {
        is_maximum_aged = value;
        is_maximum_aged.value_namespace = name_space;
        is_maximum_aged.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-partial-spf")
    {
        is_partial_spf = value;
        is_partial_spf.value_namespace = name_space;
        is_partial_spf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-flood-pending")
    {
        is_flood_pending = value;
        is_flood_pending.value_namespace = name_space;
        is_flood_pending.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rate-limit")
    {
        rate_limit = value;
        rate_limit.value_namespace = name_space;
        rate_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-nsr-ack-pending")
    {
        is_nsr_ack_pending = value;
        is_nsr_ack_pending.value_namespace = name_space;
        is_nsr_ack_pending.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-flood-required")
    {
        nsr_flood_required = value;
        nsr_flood_required.value_namespace = name_space;
        nsr_flood_required.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-flood-required-post-fail-over")
    {
        lsa_flood_required_post_fail_over = value;
        lsa_flood_required_post_fail_over.value_namespace = name_space;
        lsa_flood_required_post_fail_over.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-length")
    {
        lsa_length = value;
        lsa_length.value_namespace = name_space;
        lsa_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-sync-state")
    {
        lsa_sync_state = value;
        lsa_sync_state.value_namespace = name_space;
        lsa_sync_state.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaDetail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "second-table-index")
    {
        second_table_index.yfilter = yfilter;
    }
    if(value_path == "minute-table-index")
    {
        minute_table_index.yfilter = yfilter;
    }
    if(value_path == "free-time")
    {
        free_time.yfilter = yfilter;
    }
    if(value_path == "is-deleted")
    {
        is_deleted.yfilter = yfilter;
    }
    if(value_path == "is-routing-bit")
    {
        is_routing_bit.yfilter = yfilter;
    }
    if(value_path == "is-advertising-router-reachable")
    {
        is_advertising_router_reachable.yfilter = yfilter;
    }
    if(value_path == "is-no-delete")
    {
        is_no_delete.yfilter = yfilter;
    }
    if(value_path == "is-neighbor-exchange")
    {
        is_neighbor_exchange.yfilter = yfilter;
    }
    if(value_path == "is-routing-table")
    {
        is_routing_table.yfilter = yfilter;
    }
    if(value_path == "is-acknowledged")
    {
        is_acknowledged.yfilter = yfilter;
    }
    if(value_path == "is-maximum-aged")
    {
        is_maximum_aged.yfilter = yfilter;
    }
    if(value_path == "is-partial-spf")
    {
        is_partial_spf.yfilter = yfilter;
    }
    if(value_path == "is-flood-pending")
    {
        is_flood_pending.yfilter = yfilter;
    }
    if(value_path == "rate-limit")
    {
        rate_limit.yfilter = yfilter;
    }
    if(value_path == "is-nsr-ack-pending")
    {
        is_nsr_ack_pending.yfilter = yfilter;
    }
    if(value_path == "nsr-flood-required")
    {
        nsr_flood_required.yfilter = yfilter;
    }
    if(value_path == "lsa-flood-required-post-fail-over")
    {
        lsa_flood_required_post_fail_over.yfilter = yfilter;
    }
    if(value_path == "lsa-length")
    {
        lsa_length.yfilter = yfilter;
    }
    if(value_path == "lsa-sync-state")
    {
        lsa_sync_state.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::LsaDetail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "second-table-index" || name == "minute-table-index" || name == "free-time" || name == "is-deleted" || name == "is-routing-bit" || name == "is-advertising-router-reachable" || name == "is-no-delete" || name == "is-neighbor-exchange" || name == "is-routing-table" || name == "is-acknowledged" || name == "is-maximum-aged" || name == "is-partial-spf" || name == "is-flood-pending" || name == "rate-limit" || name == "is-nsr-ack-pending" || name == "nsr-flood-required" || name == "lsa-flood-required-post-fail-over" || name == "lsa-length" || name == "lsa-sync-state")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::Prefix::Prefix()
    :
    prefix{YType::str, "prefix"},
    ospfv3_prefix_length{YType::uint8, "ospfv3-prefix-length"},
    ospfv3_prefix_options{YType::uint8, "ospfv3-prefix-options"},
    ospfv3_prefix_metric{YType::uint16, "ospfv3-prefix-metric"},
    priority{YType::enumeration, "priority"}
{

    yang_name = "prefix"; yang_parent_name = "intra-area-prefix-lsa-type"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::Prefix::~Prefix()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::Prefix::has_data() const
{
    return prefix.is_set
	|| ospfv3_prefix_length.is_set
	|| ospfv3_prefix_options.is_set
	|| ospfv3_prefix_metric.is_set
	|| priority.is_set;
}

bool Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::Prefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(ospfv3_prefix_length.yfilter)
	|| ydk::is_set(ospfv3_prefix_options.yfilter)
	|| ydk::is_set(ospfv3_prefix_metric.yfilter)
	|| ydk::is_set(priority.yfilter);
}

std::string Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::Prefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (ospfv3_prefix_length.is_set || is_set(ospfv3_prefix_length.yfilter)) leaf_name_data.push_back(ospfv3_prefix_length.get_name_leafdata());
    if (ospfv3_prefix_options.is_set || is_set(ospfv3_prefix_options.yfilter)) leaf_name_data.push_back(ospfv3_prefix_options.get_name_leafdata());
    if (ospfv3_prefix_metric.is_set || is_set(ospfv3_prefix_metric.yfilter)) leaf_name_data.push_back(ospfv3_prefix_metric.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::Prefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::Prefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospfv3-prefix-length")
    {
        ospfv3_prefix_length = value;
        ospfv3_prefix_length.value_namespace = name_space;
        ospfv3_prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospfv3-prefix-options")
    {
        ospfv3_prefix_options = value;
        ospfv3_prefix_options.value_namespace = name_space;
        ospfv3_prefix_options.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospfv3-prefix-metric")
    {
        ospfv3_prefix_metric = value;
        ospfv3_prefix_metric.value_namespace = name_space;
        ospfv3_prefix_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::Prefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "ospfv3-prefix-length")
    {
        ospfv3_prefix_length.yfilter = yfilter;
    }
    if(value_path == "ospfv3-prefix-options")
    {
        ospfv3_prefix_options.yfilter = yfilter;
    }
    if(value_path == "ospfv3-prefix-metric")
    {
        ospfv3_prefix_metric.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::IntraAreaPrefixLsaType::Prefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "ospfv3-prefix-length" || name == "ospfv3-prefix-options" || name == "ospfv3-prefix-metric" || name == "priority")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::GraceLsa::GraceLsa()
    :
    grace_period{YType::uint32, "grace-period"},
    grace_reason{YType::enumeration, "grace-reason"}
    	,
    lsa_header(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::GraceLsa::LsaHeader>())
	,lsa_detail(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::GraceLsa::LsaDetail>())
{
    lsa_header->parent = this;
    lsa_detail->parent = this;

    yang_name = "grace-lsa"; yang_parent_name = "lsa-info"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::GraceLsa::~GraceLsa()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::GraceLsa::has_data() const
{
    return grace_period.is_set
	|| grace_reason.is_set
	|| (lsa_header !=  nullptr && lsa_header->has_data())
	|| (lsa_detail !=  nullptr && lsa_detail->has_data());
}

bool Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::GraceLsa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(grace_period.yfilter)
	|| ydk::is_set(grace_reason.yfilter)
	|| (lsa_header !=  nullptr && lsa_header->has_operation())
	|| (lsa_detail !=  nullptr && lsa_detail->has_operation());
}

std::string Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::GraceLsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "grace-lsa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::GraceLsa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (grace_period.is_set || is_set(grace_period.yfilter)) leaf_name_data.push_back(grace_period.get_name_leafdata());
    if (grace_reason.is_set || is_set(grace_reason.yfilter)) leaf_name_data.push_back(grace_reason.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::GraceLsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsa-header")
    {
        if(lsa_header == nullptr)
        {
            lsa_header = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::GraceLsa::LsaHeader>();
        }
        return lsa_header;
    }

    if(child_yang_name == "lsa-detail")
    {
        if(lsa_detail == nullptr)
        {
            lsa_detail = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::GraceLsa::LsaDetail>();
        }
        return lsa_detail;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::GraceLsa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(lsa_header != nullptr)
    {
        children["lsa-header"] = lsa_header;
    }

    if(lsa_detail != nullptr)
    {
        children["lsa-detail"] = lsa_detail;
    }

    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::GraceLsa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "grace-period")
    {
        grace_period = value;
        grace_period.value_namespace = name_space;
        grace_period.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "grace-reason")
    {
        grace_reason = value;
        grace_reason.value_namespace = name_space;
        grace_reason.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::GraceLsa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "grace-period")
    {
        grace_period.yfilter = yfilter;
    }
    if(value_path == "grace-reason")
    {
        grace_reason.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::GraceLsa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsa-header" || name == "lsa-detail" || name == "grace-period" || name == "grace-reason")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::GraceLsa::LsaHeader::LsaHeader()
    :
    lsa_type{YType::uint16, "lsa-type"},
    lsa_area_id{YType::str, "lsa-area-id"},
    lsa_age{YType::uint16, "lsa-age"},
    is_do_not_age_lsa{YType::boolean, "is-do-not-age-lsa"},
    ls_id{YType::uint32, "ls-id"},
    advertising_router{YType::str, "advertising-router"},
    sequence_number{YType::uint32, "sequence-number"},
    checksum{YType::uint16, "checksum"},
    is_graceful_restart_active{YType::boolean, "is-graceful-restart-active"}
{

    yang_name = "lsa-header"; yang_parent_name = "grace-lsa"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::GraceLsa::LsaHeader::~LsaHeader()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::GraceLsa::LsaHeader::has_data() const
{
    return lsa_type.is_set
	|| lsa_area_id.is_set
	|| lsa_age.is_set
	|| is_do_not_age_lsa.is_set
	|| ls_id.is_set
	|| advertising_router.is_set
	|| sequence_number.is_set
	|| checksum.is_set
	|| is_graceful_restart_active.is_set;
}

bool Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::GraceLsa::LsaHeader::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lsa_type.yfilter)
	|| ydk::is_set(lsa_area_id.yfilter)
	|| ydk::is_set(lsa_age.yfilter)
	|| ydk::is_set(is_do_not_age_lsa.yfilter)
	|| ydk::is_set(ls_id.yfilter)
	|| ydk::is_set(advertising_router.yfilter)
	|| ydk::is_set(sequence_number.yfilter)
	|| ydk::is_set(checksum.yfilter)
	|| ydk::is_set(is_graceful_restart_active.yfilter);
}

std::string Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::GraceLsa::LsaHeader::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-header";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::GraceLsa::LsaHeader::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsa_type.is_set || is_set(lsa_type.yfilter)) leaf_name_data.push_back(lsa_type.get_name_leafdata());
    if (lsa_area_id.is_set || is_set(lsa_area_id.yfilter)) leaf_name_data.push_back(lsa_area_id.get_name_leafdata());
    if (lsa_age.is_set || is_set(lsa_age.yfilter)) leaf_name_data.push_back(lsa_age.get_name_leafdata());
    if (is_do_not_age_lsa.is_set || is_set(is_do_not_age_lsa.yfilter)) leaf_name_data.push_back(is_do_not_age_lsa.get_name_leafdata());
    if (ls_id.is_set || is_set(ls_id.yfilter)) leaf_name_data.push_back(ls_id.get_name_leafdata());
    if (advertising_router.is_set || is_set(advertising_router.yfilter)) leaf_name_data.push_back(advertising_router.get_name_leafdata());
    if (sequence_number.is_set || is_set(sequence_number.yfilter)) leaf_name_data.push_back(sequence_number.get_name_leafdata());
    if (checksum.is_set || is_set(checksum.yfilter)) leaf_name_data.push_back(checksum.get_name_leafdata());
    if (is_graceful_restart_active.is_set || is_set(is_graceful_restart_active.yfilter)) leaf_name_data.push_back(is_graceful_restart_active.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::GraceLsa::LsaHeader::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::GraceLsa::LsaHeader::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::GraceLsa::LsaHeader::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsa-type")
    {
        lsa_type = value;
        lsa_type.value_namespace = name_space;
        lsa_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-area-id")
    {
        lsa_area_id = value;
        lsa_area_id.value_namespace = name_space;
        lsa_area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-age")
    {
        lsa_age = value;
        lsa_age.value_namespace = name_space;
        lsa_age.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-do-not-age-lsa")
    {
        is_do_not_age_lsa = value;
        is_do_not_age_lsa.value_namespace = name_space;
        is_do_not_age_lsa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ls-id")
    {
        ls_id = value;
        ls_id.value_namespace = name_space;
        ls_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advertising-router")
    {
        advertising_router = value;
        advertising_router.value_namespace = name_space;
        advertising_router.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequence-number")
    {
        sequence_number = value;
        sequence_number.value_namespace = name_space;
        sequence_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "checksum")
    {
        checksum = value;
        checksum.value_namespace = name_space;
        checksum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-graceful-restart-active")
    {
        is_graceful_restart_active = value;
        is_graceful_restart_active.value_namespace = name_space;
        is_graceful_restart_active.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::GraceLsa::LsaHeader::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsa-type")
    {
        lsa_type.yfilter = yfilter;
    }
    if(value_path == "lsa-area-id")
    {
        lsa_area_id.yfilter = yfilter;
    }
    if(value_path == "lsa-age")
    {
        lsa_age.yfilter = yfilter;
    }
    if(value_path == "is-do-not-age-lsa")
    {
        is_do_not_age_lsa.yfilter = yfilter;
    }
    if(value_path == "ls-id")
    {
        ls_id.yfilter = yfilter;
    }
    if(value_path == "advertising-router")
    {
        advertising_router.yfilter = yfilter;
    }
    if(value_path == "sequence-number")
    {
        sequence_number.yfilter = yfilter;
    }
    if(value_path == "checksum")
    {
        checksum.yfilter = yfilter;
    }
    if(value_path == "is-graceful-restart-active")
    {
        is_graceful_restart_active.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::GraceLsa::LsaHeader::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsa-type" || name == "lsa-area-id" || name == "lsa-age" || name == "is-do-not-age-lsa" || name == "ls-id" || name == "advertising-router" || name == "sequence-number" || name == "checksum" || name == "is-graceful-restart-active")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::GraceLsa::LsaDetail::LsaDetail()
    :
    second_table_index{YType::uint8, "second-table-index"},
    minute_table_index{YType::uint8, "minute-table-index"},
    free_time{YType::uint32, "free-time"},
    is_deleted{YType::boolean, "is-deleted"},
    is_routing_bit{YType::boolean, "is-routing-bit"},
    is_advertising_router_reachable{YType::boolean, "is-advertising-router-reachable"},
    is_no_delete{YType::boolean, "is-no-delete"},
    is_neighbor_exchange{YType::boolean, "is-neighbor-exchange"},
    is_routing_table{YType::boolean, "is-routing-table"},
    is_acknowledged{YType::boolean, "is-acknowledged"},
    is_maximum_aged{YType::boolean, "is-maximum-aged"},
    is_partial_spf{YType::boolean, "is-partial-spf"},
    is_flood_pending{YType::boolean, "is-flood-pending"},
    rate_limit{YType::boolean, "rate-limit"},
    is_nsr_ack_pending{YType::boolean, "is-nsr-ack-pending"},
    nsr_flood_required{YType::boolean, "nsr-flood-required"},
    lsa_flood_required_post_fail_over{YType::boolean, "lsa-flood-required-post-fail-over"},
    lsa_length{YType::uint16, "lsa-length"},
    lsa_sync_state{YType::enumeration, "lsa-sync-state"}
{

    yang_name = "lsa-detail"; yang_parent_name = "grace-lsa"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::GraceLsa::LsaDetail::~LsaDetail()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::GraceLsa::LsaDetail::has_data() const
{
    return second_table_index.is_set
	|| minute_table_index.is_set
	|| free_time.is_set
	|| is_deleted.is_set
	|| is_routing_bit.is_set
	|| is_advertising_router_reachable.is_set
	|| is_no_delete.is_set
	|| is_neighbor_exchange.is_set
	|| is_routing_table.is_set
	|| is_acknowledged.is_set
	|| is_maximum_aged.is_set
	|| is_partial_spf.is_set
	|| is_flood_pending.is_set
	|| rate_limit.is_set
	|| is_nsr_ack_pending.is_set
	|| nsr_flood_required.is_set
	|| lsa_flood_required_post_fail_over.is_set
	|| lsa_length.is_set
	|| lsa_sync_state.is_set;
}

bool Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::GraceLsa::LsaDetail::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(second_table_index.yfilter)
	|| ydk::is_set(minute_table_index.yfilter)
	|| ydk::is_set(free_time.yfilter)
	|| ydk::is_set(is_deleted.yfilter)
	|| ydk::is_set(is_routing_bit.yfilter)
	|| ydk::is_set(is_advertising_router_reachable.yfilter)
	|| ydk::is_set(is_no_delete.yfilter)
	|| ydk::is_set(is_neighbor_exchange.yfilter)
	|| ydk::is_set(is_routing_table.yfilter)
	|| ydk::is_set(is_acknowledged.yfilter)
	|| ydk::is_set(is_maximum_aged.yfilter)
	|| ydk::is_set(is_partial_spf.yfilter)
	|| ydk::is_set(is_flood_pending.yfilter)
	|| ydk::is_set(rate_limit.yfilter)
	|| ydk::is_set(is_nsr_ack_pending.yfilter)
	|| ydk::is_set(nsr_flood_required.yfilter)
	|| ydk::is_set(lsa_flood_required_post_fail_over.yfilter)
	|| ydk::is_set(lsa_length.yfilter)
	|| ydk::is_set(lsa_sync_state.yfilter);
}

std::string Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::GraceLsa::LsaDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::GraceLsa::LsaDetail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (second_table_index.is_set || is_set(second_table_index.yfilter)) leaf_name_data.push_back(second_table_index.get_name_leafdata());
    if (minute_table_index.is_set || is_set(minute_table_index.yfilter)) leaf_name_data.push_back(minute_table_index.get_name_leafdata());
    if (free_time.is_set || is_set(free_time.yfilter)) leaf_name_data.push_back(free_time.get_name_leafdata());
    if (is_deleted.is_set || is_set(is_deleted.yfilter)) leaf_name_data.push_back(is_deleted.get_name_leafdata());
    if (is_routing_bit.is_set || is_set(is_routing_bit.yfilter)) leaf_name_data.push_back(is_routing_bit.get_name_leafdata());
    if (is_advertising_router_reachable.is_set || is_set(is_advertising_router_reachable.yfilter)) leaf_name_data.push_back(is_advertising_router_reachable.get_name_leafdata());
    if (is_no_delete.is_set || is_set(is_no_delete.yfilter)) leaf_name_data.push_back(is_no_delete.get_name_leafdata());
    if (is_neighbor_exchange.is_set || is_set(is_neighbor_exchange.yfilter)) leaf_name_data.push_back(is_neighbor_exchange.get_name_leafdata());
    if (is_routing_table.is_set || is_set(is_routing_table.yfilter)) leaf_name_data.push_back(is_routing_table.get_name_leafdata());
    if (is_acknowledged.is_set || is_set(is_acknowledged.yfilter)) leaf_name_data.push_back(is_acknowledged.get_name_leafdata());
    if (is_maximum_aged.is_set || is_set(is_maximum_aged.yfilter)) leaf_name_data.push_back(is_maximum_aged.get_name_leafdata());
    if (is_partial_spf.is_set || is_set(is_partial_spf.yfilter)) leaf_name_data.push_back(is_partial_spf.get_name_leafdata());
    if (is_flood_pending.is_set || is_set(is_flood_pending.yfilter)) leaf_name_data.push_back(is_flood_pending.get_name_leafdata());
    if (rate_limit.is_set || is_set(rate_limit.yfilter)) leaf_name_data.push_back(rate_limit.get_name_leafdata());
    if (is_nsr_ack_pending.is_set || is_set(is_nsr_ack_pending.yfilter)) leaf_name_data.push_back(is_nsr_ack_pending.get_name_leafdata());
    if (nsr_flood_required.is_set || is_set(nsr_flood_required.yfilter)) leaf_name_data.push_back(nsr_flood_required.get_name_leafdata());
    if (lsa_flood_required_post_fail_over.is_set || is_set(lsa_flood_required_post_fail_over.yfilter)) leaf_name_data.push_back(lsa_flood_required_post_fail_over.get_name_leafdata());
    if (lsa_length.is_set || is_set(lsa_length.yfilter)) leaf_name_data.push_back(lsa_length.get_name_leafdata());
    if (lsa_sync_state.is_set || is_set(lsa_sync_state.yfilter)) leaf_name_data.push_back(lsa_sync_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::GraceLsa::LsaDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::GraceLsa::LsaDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::GraceLsa::LsaDetail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "second-table-index")
    {
        second_table_index = value;
        second_table_index.value_namespace = name_space;
        second_table_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minute-table-index")
    {
        minute_table_index = value;
        minute_table_index.value_namespace = name_space;
        minute_table_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "free-time")
    {
        free_time = value;
        free_time.value_namespace = name_space;
        free_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-deleted")
    {
        is_deleted = value;
        is_deleted.value_namespace = name_space;
        is_deleted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-routing-bit")
    {
        is_routing_bit = value;
        is_routing_bit.value_namespace = name_space;
        is_routing_bit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-advertising-router-reachable")
    {
        is_advertising_router_reachable = value;
        is_advertising_router_reachable.value_namespace = name_space;
        is_advertising_router_reachable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-no-delete")
    {
        is_no_delete = value;
        is_no_delete.value_namespace = name_space;
        is_no_delete.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-neighbor-exchange")
    {
        is_neighbor_exchange = value;
        is_neighbor_exchange.value_namespace = name_space;
        is_neighbor_exchange.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-routing-table")
    {
        is_routing_table = value;
        is_routing_table.value_namespace = name_space;
        is_routing_table.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-acknowledged")
    {
        is_acknowledged = value;
        is_acknowledged.value_namespace = name_space;
        is_acknowledged.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-maximum-aged")
    {
        is_maximum_aged = value;
        is_maximum_aged.value_namespace = name_space;
        is_maximum_aged.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-partial-spf")
    {
        is_partial_spf = value;
        is_partial_spf.value_namespace = name_space;
        is_partial_spf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-flood-pending")
    {
        is_flood_pending = value;
        is_flood_pending.value_namespace = name_space;
        is_flood_pending.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rate-limit")
    {
        rate_limit = value;
        rate_limit.value_namespace = name_space;
        rate_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-nsr-ack-pending")
    {
        is_nsr_ack_pending = value;
        is_nsr_ack_pending.value_namespace = name_space;
        is_nsr_ack_pending.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-flood-required")
    {
        nsr_flood_required = value;
        nsr_flood_required.value_namespace = name_space;
        nsr_flood_required.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-flood-required-post-fail-over")
    {
        lsa_flood_required_post_fail_over = value;
        lsa_flood_required_post_fail_over.value_namespace = name_space;
        lsa_flood_required_post_fail_over.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-length")
    {
        lsa_length = value;
        lsa_length.value_namespace = name_space;
        lsa_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-sync-state")
    {
        lsa_sync_state = value;
        lsa_sync_state.value_namespace = name_space;
        lsa_sync_state.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::GraceLsa::LsaDetail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "second-table-index")
    {
        second_table_index.yfilter = yfilter;
    }
    if(value_path == "minute-table-index")
    {
        minute_table_index.yfilter = yfilter;
    }
    if(value_path == "free-time")
    {
        free_time.yfilter = yfilter;
    }
    if(value_path == "is-deleted")
    {
        is_deleted.yfilter = yfilter;
    }
    if(value_path == "is-routing-bit")
    {
        is_routing_bit.yfilter = yfilter;
    }
    if(value_path == "is-advertising-router-reachable")
    {
        is_advertising_router_reachable.yfilter = yfilter;
    }
    if(value_path == "is-no-delete")
    {
        is_no_delete.yfilter = yfilter;
    }
    if(value_path == "is-neighbor-exchange")
    {
        is_neighbor_exchange.yfilter = yfilter;
    }
    if(value_path == "is-routing-table")
    {
        is_routing_table.yfilter = yfilter;
    }
    if(value_path == "is-acknowledged")
    {
        is_acknowledged.yfilter = yfilter;
    }
    if(value_path == "is-maximum-aged")
    {
        is_maximum_aged.yfilter = yfilter;
    }
    if(value_path == "is-partial-spf")
    {
        is_partial_spf.yfilter = yfilter;
    }
    if(value_path == "is-flood-pending")
    {
        is_flood_pending.yfilter = yfilter;
    }
    if(value_path == "rate-limit")
    {
        rate_limit.yfilter = yfilter;
    }
    if(value_path == "is-nsr-ack-pending")
    {
        is_nsr_ack_pending.yfilter = yfilter;
    }
    if(value_path == "nsr-flood-required")
    {
        nsr_flood_required.yfilter = yfilter;
    }
    if(value_path == "lsa-flood-required-post-fail-over")
    {
        lsa_flood_required_post_fail_over.yfilter = yfilter;
    }
    if(value_path == "lsa-length")
    {
        lsa_length.yfilter = yfilter;
    }
    if(value_path == "lsa-sync-state")
    {
        lsa_sync_state.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::GraceLsa::LsaDetail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "second-table-index" || name == "minute-table-index" || name == "free-time" || name == "is-deleted" || name == "is-routing-bit" || name == "is-advertising-router-reachable" || name == "is-no-delete" || name == "is-neighbor-exchange" || name == "is-routing-table" || name == "is-acknowledged" || name == "is-maximum-aged" || name == "is-partial-spf" || name == "is-flood-pending" || name == "rate-limit" || name == "is-nsr-ack-pending" || name == "nsr-flood-required" || name == "lsa-flood-required-post-fail-over" || name == "lsa-length" || name == "lsa-sync-state")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLinkLsaType::UnknownLinkLsaType()
    :
    interface_name{YType::str, "interface-name"},
    is_virtual_link{YType::boolean, "is-virtual-link"},
    virtual_link_id{YType::uint32, "virtual-link-id"},
    is_sham_link{YType::boolean, "is-sham-link"},
    sham_link_id{YType::uint32, "sham-link-id"}
    	,
    lsa_header(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaHeader>())
	,lsa_detail(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaDetail>())
{
    lsa_header->parent = this;
    lsa_detail->parent = this;

    yang_name = "unknown-link-lsa-type"; yang_parent_name = "lsa-info"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLinkLsaType::~UnknownLinkLsaType()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLinkLsaType::has_data() const
{
    return interface_name.is_set
	|| is_virtual_link.is_set
	|| virtual_link_id.is_set
	|| is_sham_link.is_set
	|| sham_link_id.is_set
	|| (lsa_header !=  nullptr && lsa_header->has_data())
	|| (lsa_detail !=  nullptr && lsa_detail->has_data());
}

bool Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLinkLsaType::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(is_virtual_link.yfilter)
	|| ydk::is_set(virtual_link_id.yfilter)
	|| ydk::is_set(is_sham_link.yfilter)
	|| ydk::is_set(sham_link_id.yfilter)
	|| (lsa_header !=  nullptr && lsa_header->has_operation())
	|| (lsa_detail !=  nullptr && lsa_detail->has_operation());
}

std::string Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLinkLsaType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unknown-link-lsa-type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLinkLsaType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (is_virtual_link.is_set || is_set(is_virtual_link.yfilter)) leaf_name_data.push_back(is_virtual_link.get_name_leafdata());
    if (virtual_link_id.is_set || is_set(virtual_link_id.yfilter)) leaf_name_data.push_back(virtual_link_id.get_name_leafdata());
    if (is_sham_link.is_set || is_set(is_sham_link.yfilter)) leaf_name_data.push_back(is_sham_link.get_name_leafdata());
    if (sham_link_id.is_set || is_set(sham_link_id.yfilter)) leaf_name_data.push_back(sham_link_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLinkLsaType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsa-header")
    {
        if(lsa_header == nullptr)
        {
            lsa_header = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaHeader>();
        }
        return lsa_header;
    }

    if(child_yang_name == "lsa-detail")
    {
        if(lsa_detail == nullptr)
        {
            lsa_detail = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaDetail>();
        }
        return lsa_detail;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLinkLsaType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(lsa_header != nullptr)
    {
        children["lsa-header"] = lsa_header;
    }

    if(lsa_detail != nullptr)
    {
        children["lsa-detail"] = lsa_detail;
    }

    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLinkLsaType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-virtual-link")
    {
        is_virtual_link = value;
        is_virtual_link.value_namespace = name_space;
        is_virtual_link.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtual-link-id")
    {
        virtual_link_id = value;
        virtual_link_id.value_namespace = name_space;
        virtual_link_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-sham-link")
    {
        is_sham_link = value;
        is_sham_link.value_namespace = name_space;
        is_sham_link.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sham-link-id")
    {
        sham_link_id = value;
        sham_link_id.value_namespace = name_space;
        sham_link_id.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLinkLsaType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "is-virtual-link")
    {
        is_virtual_link.yfilter = yfilter;
    }
    if(value_path == "virtual-link-id")
    {
        virtual_link_id.yfilter = yfilter;
    }
    if(value_path == "is-sham-link")
    {
        is_sham_link.yfilter = yfilter;
    }
    if(value_path == "sham-link-id")
    {
        sham_link_id.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLinkLsaType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsa-header" || name == "lsa-detail" || name == "interface-name" || name == "is-virtual-link" || name == "virtual-link-id" || name == "is-sham-link" || name == "sham-link-id")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaHeader::LsaHeader()
    :
    lsa_type{YType::uint16, "lsa-type"},
    lsa_area_id{YType::str, "lsa-area-id"},
    lsa_age{YType::uint16, "lsa-age"},
    is_do_not_age_lsa{YType::boolean, "is-do-not-age-lsa"},
    ls_id{YType::uint32, "ls-id"},
    advertising_router{YType::str, "advertising-router"},
    sequence_number{YType::uint32, "sequence-number"},
    checksum{YType::uint16, "checksum"},
    is_graceful_restart_active{YType::boolean, "is-graceful-restart-active"}
{

    yang_name = "lsa-header"; yang_parent_name = "unknown-link-lsa-type"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaHeader::~LsaHeader()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaHeader::has_data() const
{
    return lsa_type.is_set
	|| lsa_area_id.is_set
	|| lsa_age.is_set
	|| is_do_not_age_lsa.is_set
	|| ls_id.is_set
	|| advertising_router.is_set
	|| sequence_number.is_set
	|| checksum.is_set
	|| is_graceful_restart_active.is_set;
}

bool Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaHeader::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lsa_type.yfilter)
	|| ydk::is_set(lsa_area_id.yfilter)
	|| ydk::is_set(lsa_age.yfilter)
	|| ydk::is_set(is_do_not_age_lsa.yfilter)
	|| ydk::is_set(ls_id.yfilter)
	|| ydk::is_set(advertising_router.yfilter)
	|| ydk::is_set(sequence_number.yfilter)
	|| ydk::is_set(checksum.yfilter)
	|| ydk::is_set(is_graceful_restart_active.yfilter);
}

std::string Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaHeader::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-header";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaHeader::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsa_type.is_set || is_set(lsa_type.yfilter)) leaf_name_data.push_back(lsa_type.get_name_leafdata());
    if (lsa_area_id.is_set || is_set(lsa_area_id.yfilter)) leaf_name_data.push_back(lsa_area_id.get_name_leafdata());
    if (lsa_age.is_set || is_set(lsa_age.yfilter)) leaf_name_data.push_back(lsa_age.get_name_leafdata());
    if (is_do_not_age_lsa.is_set || is_set(is_do_not_age_lsa.yfilter)) leaf_name_data.push_back(is_do_not_age_lsa.get_name_leafdata());
    if (ls_id.is_set || is_set(ls_id.yfilter)) leaf_name_data.push_back(ls_id.get_name_leafdata());
    if (advertising_router.is_set || is_set(advertising_router.yfilter)) leaf_name_data.push_back(advertising_router.get_name_leafdata());
    if (sequence_number.is_set || is_set(sequence_number.yfilter)) leaf_name_data.push_back(sequence_number.get_name_leafdata());
    if (checksum.is_set || is_set(checksum.yfilter)) leaf_name_data.push_back(checksum.get_name_leafdata());
    if (is_graceful_restart_active.is_set || is_set(is_graceful_restart_active.yfilter)) leaf_name_data.push_back(is_graceful_restart_active.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaHeader::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaHeader::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaHeader::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsa-type")
    {
        lsa_type = value;
        lsa_type.value_namespace = name_space;
        lsa_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-area-id")
    {
        lsa_area_id = value;
        lsa_area_id.value_namespace = name_space;
        lsa_area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-age")
    {
        lsa_age = value;
        lsa_age.value_namespace = name_space;
        lsa_age.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-do-not-age-lsa")
    {
        is_do_not_age_lsa = value;
        is_do_not_age_lsa.value_namespace = name_space;
        is_do_not_age_lsa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ls-id")
    {
        ls_id = value;
        ls_id.value_namespace = name_space;
        ls_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advertising-router")
    {
        advertising_router = value;
        advertising_router.value_namespace = name_space;
        advertising_router.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequence-number")
    {
        sequence_number = value;
        sequence_number.value_namespace = name_space;
        sequence_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "checksum")
    {
        checksum = value;
        checksum.value_namespace = name_space;
        checksum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-graceful-restart-active")
    {
        is_graceful_restart_active = value;
        is_graceful_restart_active.value_namespace = name_space;
        is_graceful_restart_active.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaHeader::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsa-type")
    {
        lsa_type.yfilter = yfilter;
    }
    if(value_path == "lsa-area-id")
    {
        lsa_area_id.yfilter = yfilter;
    }
    if(value_path == "lsa-age")
    {
        lsa_age.yfilter = yfilter;
    }
    if(value_path == "is-do-not-age-lsa")
    {
        is_do_not_age_lsa.yfilter = yfilter;
    }
    if(value_path == "ls-id")
    {
        ls_id.yfilter = yfilter;
    }
    if(value_path == "advertising-router")
    {
        advertising_router.yfilter = yfilter;
    }
    if(value_path == "sequence-number")
    {
        sequence_number.yfilter = yfilter;
    }
    if(value_path == "checksum")
    {
        checksum.yfilter = yfilter;
    }
    if(value_path == "is-graceful-restart-active")
    {
        is_graceful_restart_active.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaHeader::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsa-type" || name == "lsa-area-id" || name == "lsa-age" || name == "is-do-not-age-lsa" || name == "ls-id" || name == "advertising-router" || name == "sequence-number" || name == "checksum" || name == "is-graceful-restart-active")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaDetail::LsaDetail()
    :
    second_table_index{YType::uint8, "second-table-index"},
    minute_table_index{YType::uint8, "minute-table-index"},
    free_time{YType::uint32, "free-time"},
    is_deleted{YType::boolean, "is-deleted"},
    is_routing_bit{YType::boolean, "is-routing-bit"},
    is_advertising_router_reachable{YType::boolean, "is-advertising-router-reachable"},
    is_no_delete{YType::boolean, "is-no-delete"},
    is_neighbor_exchange{YType::boolean, "is-neighbor-exchange"},
    is_routing_table{YType::boolean, "is-routing-table"},
    is_acknowledged{YType::boolean, "is-acknowledged"},
    is_maximum_aged{YType::boolean, "is-maximum-aged"},
    is_partial_spf{YType::boolean, "is-partial-spf"},
    is_flood_pending{YType::boolean, "is-flood-pending"},
    rate_limit{YType::boolean, "rate-limit"},
    is_nsr_ack_pending{YType::boolean, "is-nsr-ack-pending"},
    nsr_flood_required{YType::boolean, "nsr-flood-required"},
    lsa_flood_required_post_fail_over{YType::boolean, "lsa-flood-required-post-fail-over"},
    lsa_length{YType::uint16, "lsa-length"},
    lsa_sync_state{YType::enumeration, "lsa-sync-state"}
{

    yang_name = "lsa-detail"; yang_parent_name = "unknown-link-lsa-type"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaDetail::~LsaDetail()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaDetail::has_data() const
{
    return second_table_index.is_set
	|| minute_table_index.is_set
	|| free_time.is_set
	|| is_deleted.is_set
	|| is_routing_bit.is_set
	|| is_advertising_router_reachable.is_set
	|| is_no_delete.is_set
	|| is_neighbor_exchange.is_set
	|| is_routing_table.is_set
	|| is_acknowledged.is_set
	|| is_maximum_aged.is_set
	|| is_partial_spf.is_set
	|| is_flood_pending.is_set
	|| rate_limit.is_set
	|| is_nsr_ack_pending.is_set
	|| nsr_flood_required.is_set
	|| lsa_flood_required_post_fail_over.is_set
	|| lsa_length.is_set
	|| lsa_sync_state.is_set;
}

bool Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaDetail::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(second_table_index.yfilter)
	|| ydk::is_set(minute_table_index.yfilter)
	|| ydk::is_set(free_time.yfilter)
	|| ydk::is_set(is_deleted.yfilter)
	|| ydk::is_set(is_routing_bit.yfilter)
	|| ydk::is_set(is_advertising_router_reachable.yfilter)
	|| ydk::is_set(is_no_delete.yfilter)
	|| ydk::is_set(is_neighbor_exchange.yfilter)
	|| ydk::is_set(is_routing_table.yfilter)
	|| ydk::is_set(is_acknowledged.yfilter)
	|| ydk::is_set(is_maximum_aged.yfilter)
	|| ydk::is_set(is_partial_spf.yfilter)
	|| ydk::is_set(is_flood_pending.yfilter)
	|| ydk::is_set(rate_limit.yfilter)
	|| ydk::is_set(is_nsr_ack_pending.yfilter)
	|| ydk::is_set(nsr_flood_required.yfilter)
	|| ydk::is_set(lsa_flood_required_post_fail_over.yfilter)
	|| ydk::is_set(lsa_length.yfilter)
	|| ydk::is_set(lsa_sync_state.yfilter);
}

std::string Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaDetail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (second_table_index.is_set || is_set(second_table_index.yfilter)) leaf_name_data.push_back(second_table_index.get_name_leafdata());
    if (minute_table_index.is_set || is_set(minute_table_index.yfilter)) leaf_name_data.push_back(minute_table_index.get_name_leafdata());
    if (free_time.is_set || is_set(free_time.yfilter)) leaf_name_data.push_back(free_time.get_name_leafdata());
    if (is_deleted.is_set || is_set(is_deleted.yfilter)) leaf_name_data.push_back(is_deleted.get_name_leafdata());
    if (is_routing_bit.is_set || is_set(is_routing_bit.yfilter)) leaf_name_data.push_back(is_routing_bit.get_name_leafdata());
    if (is_advertising_router_reachable.is_set || is_set(is_advertising_router_reachable.yfilter)) leaf_name_data.push_back(is_advertising_router_reachable.get_name_leafdata());
    if (is_no_delete.is_set || is_set(is_no_delete.yfilter)) leaf_name_data.push_back(is_no_delete.get_name_leafdata());
    if (is_neighbor_exchange.is_set || is_set(is_neighbor_exchange.yfilter)) leaf_name_data.push_back(is_neighbor_exchange.get_name_leafdata());
    if (is_routing_table.is_set || is_set(is_routing_table.yfilter)) leaf_name_data.push_back(is_routing_table.get_name_leafdata());
    if (is_acknowledged.is_set || is_set(is_acknowledged.yfilter)) leaf_name_data.push_back(is_acknowledged.get_name_leafdata());
    if (is_maximum_aged.is_set || is_set(is_maximum_aged.yfilter)) leaf_name_data.push_back(is_maximum_aged.get_name_leafdata());
    if (is_partial_spf.is_set || is_set(is_partial_spf.yfilter)) leaf_name_data.push_back(is_partial_spf.get_name_leafdata());
    if (is_flood_pending.is_set || is_set(is_flood_pending.yfilter)) leaf_name_data.push_back(is_flood_pending.get_name_leafdata());
    if (rate_limit.is_set || is_set(rate_limit.yfilter)) leaf_name_data.push_back(rate_limit.get_name_leafdata());
    if (is_nsr_ack_pending.is_set || is_set(is_nsr_ack_pending.yfilter)) leaf_name_data.push_back(is_nsr_ack_pending.get_name_leafdata());
    if (nsr_flood_required.is_set || is_set(nsr_flood_required.yfilter)) leaf_name_data.push_back(nsr_flood_required.get_name_leafdata());
    if (lsa_flood_required_post_fail_over.is_set || is_set(lsa_flood_required_post_fail_over.yfilter)) leaf_name_data.push_back(lsa_flood_required_post_fail_over.get_name_leafdata());
    if (lsa_length.is_set || is_set(lsa_length.yfilter)) leaf_name_data.push_back(lsa_length.get_name_leafdata());
    if (lsa_sync_state.is_set || is_set(lsa_sync_state.yfilter)) leaf_name_data.push_back(lsa_sync_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaDetail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "second-table-index")
    {
        second_table_index = value;
        second_table_index.value_namespace = name_space;
        second_table_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minute-table-index")
    {
        minute_table_index = value;
        minute_table_index.value_namespace = name_space;
        minute_table_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "free-time")
    {
        free_time = value;
        free_time.value_namespace = name_space;
        free_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-deleted")
    {
        is_deleted = value;
        is_deleted.value_namespace = name_space;
        is_deleted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-routing-bit")
    {
        is_routing_bit = value;
        is_routing_bit.value_namespace = name_space;
        is_routing_bit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-advertising-router-reachable")
    {
        is_advertising_router_reachable = value;
        is_advertising_router_reachable.value_namespace = name_space;
        is_advertising_router_reachable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-no-delete")
    {
        is_no_delete = value;
        is_no_delete.value_namespace = name_space;
        is_no_delete.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-neighbor-exchange")
    {
        is_neighbor_exchange = value;
        is_neighbor_exchange.value_namespace = name_space;
        is_neighbor_exchange.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-routing-table")
    {
        is_routing_table = value;
        is_routing_table.value_namespace = name_space;
        is_routing_table.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-acknowledged")
    {
        is_acknowledged = value;
        is_acknowledged.value_namespace = name_space;
        is_acknowledged.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-maximum-aged")
    {
        is_maximum_aged = value;
        is_maximum_aged.value_namespace = name_space;
        is_maximum_aged.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-partial-spf")
    {
        is_partial_spf = value;
        is_partial_spf.value_namespace = name_space;
        is_partial_spf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-flood-pending")
    {
        is_flood_pending = value;
        is_flood_pending.value_namespace = name_space;
        is_flood_pending.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rate-limit")
    {
        rate_limit = value;
        rate_limit.value_namespace = name_space;
        rate_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-nsr-ack-pending")
    {
        is_nsr_ack_pending = value;
        is_nsr_ack_pending.value_namespace = name_space;
        is_nsr_ack_pending.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-flood-required")
    {
        nsr_flood_required = value;
        nsr_flood_required.value_namespace = name_space;
        nsr_flood_required.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-flood-required-post-fail-over")
    {
        lsa_flood_required_post_fail_over = value;
        lsa_flood_required_post_fail_over.value_namespace = name_space;
        lsa_flood_required_post_fail_over.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-length")
    {
        lsa_length = value;
        lsa_length.value_namespace = name_space;
        lsa_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-sync-state")
    {
        lsa_sync_state = value;
        lsa_sync_state.value_namespace = name_space;
        lsa_sync_state.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaDetail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "second-table-index")
    {
        second_table_index.yfilter = yfilter;
    }
    if(value_path == "minute-table-index")
    {
        minute_table_index.yfilter = yfilter;
    }
    if(value_path == "free-time")
    {
        free_time.yfilter = yfilter;
    }
    if(value_path == "is-deleted")
    {
        is_deleted.yfilter = yfilter;
    }
    if(value_path == "is-routing-bit")
    {
        is_routing_bit.yfilter = yfilter;
    }
    if(value_path == "is-advertising-router-reachable")
    {
        is_advertising_router_reachable.yfilter = yfilter;
    }
    if(value_path == "is-no-delete")
    {
        is_no_delete.yfilter = yfilter;
    }
    if(value_path == "is-neighbor-exchange")
    {
        is_neighbor_exchange.yfilter = yfilter;
    }
    if(value_path == "is-routing-table")
    {
        is_routing_table.yfilter = yfilter;
    }
    if(value_path == "is-acknowledged")
    {
        is_acknowledged.yfilter = yfilter;
    }
    if(value_path == "is-maximum-aged")
    {
        is_maximum_aged.yfilter = yfilter;
    }
    if(value_path == "is-partial-spf")
    {
        is_partial_spf.yfilter = yfilter;
    }
    if(value_path == "is-flood-pending")
    {
        is_flood_pending.yfilter = yfilter;
    }
    if(value_path == "rate-limit")
    {
        rate_limit.yfilter = yfilter;
    }
    if(value_path == "is-nsr-ack-pending")
    {
        is_nsr_ack_pending.yfilter = yfilter;
    }
    if(value_path == "nsr-flood-required")
    {
        nsr_flood_required.yfilter = yfilter;
    }
    if(value_path == "lsa-flood-required-post-fail-over")
    {
        lsa_flood_required_post_fail_over.yfilter = yfilter;
    }
    if(value_path == "lsa-length")
    {
        lsa_length.yfilter = yfilter;
    }
    if(value_path == "lsa-sync-state")
    {
        lsa_sync_state.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLinkLsaType::LsaDetail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "second-table-index" || name == "minute-table-index" || name == "free-time" || name == "is-deleted" || name == "is-routing-bit" || name == "is-advertising-router-reachable" || name == "is-no-delete" || name == "is-neighbor-exchange" || name == "is-routing-table" || name == "is-acknowledged" || name == "is-maximum-aged" || name == "is-partial-spf" || name == "is-flood-pending" || name == "rate-limit" || name == "is-nsr-ack-pending" || name == "nsr-flood-required" || name == "lsa-flood-required-post-fail-over" || name == "lsa-length" || name == "lsa-sync-state")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAreaLsaType::UnknownAreaLsaType()
    :
    interface_name{YType::str, "interface-name"},
    is_virtual_link{YType::boolean, "is-virtual-link"},
    virtual_link_id{YType::uint32, "virtual-link-id"},
    is_sham_link{YType::boolean, "is-sham-link"},
    sham_link_id{YType::uint32, "sham-link-id"}
    	,
    lsa_header(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaHeader>())
	,lsa_detail(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaDetail>())
{
    lsa_header->parent = this;
    lsa_detail->parent = this;

    yang_name = "unknown-area-lsa-type"; yang_parent_name = "lsa-info"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAreaLsaType::~UnknownAreaLsaType()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAreaLsaType::has_data() const
{
    return interface_name.is_set
	|| is_virtual_link.is_set
	|| virtual_link_id.is_set
	|| is_sham_link.is_set
	|| sham_link_id.is_set
	|| (lsa_header !=  nullptr && lsa_header->has_data())
	|| (lsa_detail !=  nullptr && lsa_detail->has_data());
}

bool Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAreaLsaType::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(is_virtual_link.yfilter)
	|| ydk::is_set(virtual_link_id.yfilter)
	|| ydk::is_set(is_sham_link.yfilter)
	|| ydk::is_set(sham_link_id.yfilter)
	|| (lsa_header !=  nullptr && lsa_header->has_operation())
	|| (lsa_detail !=  nullptr && lsa_detail->has_operation());
}

std::string Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAreaLsaType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unknown-area-lsa-type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAreaLsaType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (is_virtual_link.is_set || is_set(is_virtual_link.yfilter)) leaf_name_data.push_back(is_virtual_link.get_name_leafdata());
    if (virtual_link_id.is_set || is_set(virtual_link_id.yfilter)) leaf_name_data.push_back(virtual_link_id.get_name_leafdata());
    if (is_sham_link.is_set || is_set(is_sham_link.yfilter)) leaf_name_data.push_back(is_sham_link.get_name_leafdata());
    if (sham_link_id.is_set || is_set(sham_link_id.yfilter)) leaf_name_data.push_back(sham_link_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAreaLsaType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsa-header")
    {
        if(lsa_header == nullptr)
        {
            lsa_header = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaHeader>();
        }
        return lsa_header;
    }

    if(child_yang_name == "lsa-detail")
    {
        if(lsa_detail == nullptr)
        {
            lsa_detail = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaDetail>();
        }
        return lsa_detail;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAreaLsaType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(lsa_header != nullptr)
    {
        children["lsa-header"] = lsa_header;
    }

    if(lsa_detail != nullptr)
    {
        children["lsa-detail"] = lsa_detail;
    }

    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAreaLsaType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-virtual-link")
    {
        is_virtual_link = value;
        is_virtual_link.value_namespace = name_space;
        is_virtual_link.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtual-link-id")
    {
        virtual_link_id = value;
        virtual_link_id.value_namespace = name_space;
        virtual_link_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-sham-link")
    {
        is_sham_link = value;
        is_sham_link.value_namespace = name_space;
        is_sham_link.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sham-link-id")
    {
        sham_link_id = value;
        sham_link_id.value_namespace = name_space;
        sham_link_id.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAreaLsaType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "is-virtual-link")
    {
        is_virtual_link.yfilter = yfilter;
    }
    if(value_path == "virtual-link-id")
    {
        virtual_link_id.yfilter = yfilter;
    }
    if(value_path == "is-sham-link")
    {
        is_sham_link.yfilter = yfilter;
    }
    if(value_path == "sham-link-id")
    {
        sham_link_id.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAreaLsaType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsa-header" || name == "lsa-detail" || name == "interface-name" || name == "is-virtual-link" || name == "virtual-link-id" || name == "is-sham-link" || name == "sham-link-id")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaHeader::LsaHeader()
    :
    lsa_type{YType::uint16, "lsa-type"},
    lsa_area_id{YType::str, "lsa-area-id"},
    lsa_age{YType::uint16, "lsa-age"},
    is_do_not_age_lsa{YType::boolean, "is-do-not-age-lsa"},
    ls_id{YType::uint32, "ls-id"},
    advertising_router{YType::str, "advertising-router"},
    sequence_number{YType::uint32, "sequence-number"},
    checksum{YType::uint16, "checksum"},
    is_graceful_restart_active{YType::boolean, "is-graceful-restart-active"}
{

    yang_name = "lsa-header"; yang_parent_name = "unknown-area-lsa-type"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaHeader::~LsaHeader()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaHeader::has_data() const
{
    return lsa_type.is_set
	|| lsa_area_id.is_set
	|| lsa_age.is_set
	|| is_do_not_age_lsa.is_set
	|| ls_id.is_set
	|| advertising_router.is_set
	|| sequence_number.is_set
	|| checksum.is_set
	|| is_graceful_restart_active.is_set;
}

bool Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaHeader::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lsa_type.yfilter)
	|| ydk::is_set(lsa_area_id.yfilter)
	|| ydk::is_set(lsa_age.yfilter)
	|| ydk::is_set(is_do_not_age_lsa.yfilter)
	|| ydk::is_set(ls_id.yfilter)
	|| ydk::is_set(advertising_router.yfilter)
	|| ydk::is_set(sequence_number.yfilter)
	|| ydk::is_set(checksum.yfilter)
	|| ydk::is_set(is_graceful_restart_active.yfilter);
}

std::string Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaHeader::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-header";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaHeader::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsa_type.is_set || is_set(lsa_type.yfilter)) leaf_name_data.push_back(lsa_type.get_name_leafdata());
    if (lsa_area_id.is_set || is_set(lsa_area_id.yfilter)) leaf_name_data.push_back(lsa_area_id.get_name_leafdata());
    if (lsa_age.is_set || is_set(lsa_age.yfilter)) leaf_name_data.push_back(lsa_age.get_name_leafdata());
    if (is_do_not_age_lsa.is_set || is_set(is_do_not_age_lsa.yfilter)) leaf_name_data.push_back(is_do_not_age_lsa.get_name_leafdata());
    if (ls_id.is_set || is_set(ls_id.yfilter)) leaf_name_data.push_back(ls_id.get_name_leafdata());
    if (advertising_router.is_set || is_set(advertising_router.yfilter)) leaf_name_data.push_back(advertising_router.get_name_leafdata());
    if (sequence_number.is_set || is_set(sequence_number.yfilter)) leaf_name_data.push_back(sequence_number.get_name_leafdata());
    if (checksum.is_set || is_set(checksum.yfilter)) leaf_name_data.push_back(checksum.get_name_leafdata());
    if (is_graceful_restart_active.is_set || is_set(is_graceful_restart_active.yfilter)) leaf_name_data.push_back(is_graceful_restart_active.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaHeader::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaHeader::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaHeader::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsa-type")
    {
        lsa_type = value;
        lsa_type.value_namespace = name_space;
        lsa_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-area-id")
    {
        lsa_area_id = value;
        lsa_area_id.value_namespace = name_space;
        lsa_area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-age")
    {
        lsa_age = value;
        lsa_age.value_namespace = name_space;
        lsa_age.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-do-not-age-lsa")
    {
        is_do_not_age_lsa = value;
        is_do_not_age_lsa.value_namespace = name_space;
        is_do_not_age_lsa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ls-id")
    {
        ls_id = value;
        ls_id.value_namespace = name_space;
        ls_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advertising-router")
    {
        advertising_router = value;
        advertising_router.value_namespace = name_space;
        advertising_router.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequence-number")
    {
        sequence_number = value;
        sequence_number.value_namespace = name_space;
        sequence_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "checksum")
    {
        checksum = value;
        checksum.value_namespace = name_space;
        checksum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-graceful-restart-active")
    {
        is_graceful_restart_active = value;
        is_graceful_restart_active.value_namespace = name_space;
        is_graceful_restart_active.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaHeader::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsa-type")
    {
        lsa_type.yfilter = yfilter;
    }
    if(value_path == "lsa-area-id")
    {
        lsa_area_id.yfilter = yfilter;
    }
    if(value_path == "lsa-age")
    {
        lsa_age.yfilter = yfilter;
    }
    if(value_path == "is-do-not-age-lsa")
    {
        is_do_not_age_lsa.yfilter = yfilter;
    }
    if(value_path == "ls-id")
    {
        ls_id.yfilter = yfilter;
    }
    if(value_path == "advertising-router")
    {
        advertising_router.yfilter = yfilter;
    }
    if(value_path == "sequence-number")
    {
        sequence_number.yfilter = yfilter;
    }
    if(value_path == "checksum")
    {
        checksum.yfilter = yfilter;
    }
    if(value_path == "is-graceful-restart-active")
    {
        is_graceful_restart_active.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaHeader::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsa-type" || name == "lsa-area-id" || name == "lsa-age" || name == "is-do-not-age-lsa" || name == "ls-id" || name == "advertising-router" || name == "sequence-number" || name == "checksum" || name == "is-graceful-restart-active")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaDetail::LsaDetail()
    :
    second_table_index{YType::uint8, "second-table-index"},
    minute_table_index{YType::uint8, "minute-table-index"},
    free_time{YType::uint32, "free-time"},
    is_deleted{YType::boolean, "is-deleted"},
    is_routing_bit{YType::boolean, "is-routing-bit"},
    is_advertising_router_reachable{YType::boolean, "is-advertising-router-reachable"},
    is_no_delete{YType::boolean, "is-no-delete"},
    is_neighbor_exchange{YType::boolean, "is-neighbor-exchange"},
    is_routing_table{YType::boolean, "is-routing-table"},
    is_acknowledged{YType::boolean, "is-acknowledged"},
    is_maximum_aged{YType::boolean, "is-maximum-aged"},
    is_partial_spf{YType::boolean, "is-partial-spf"},
    is_flood_pending{YType::boolean, "is-flood-pending"},
    rate_limit{YType::boolean, "rate-limit"},
    is_nsr_ack_pending{YType::boolean, "is-nsr-ack-pending"},
    nsr_flood_required{YType::boolean, "nsr-flood-required"},
    lsa_flood_required_post_fail_over{YType::boolean, "lsa-flood-required-post-fail-over"},
    lsa_length{YType::uint16, "lsa-length"},
    lsa_sync_state{YType::enumeration, "lsa-sync-state"}
{

    yang_name = "lsa-detail"; yang_parent_name = "unknown-area-lsa-type"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaDetail::~LsaDetail()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaDetail::has_data() const
{
    return second_table_index.is_set
	|| minute_table_index.is_set
	|| free_time.is_set
	|| is_deleted.is_set
	|| is_routing_bit.is_set
	|| is_advertising_router_reachable.is_set
	|| is_no_delete.is_set
	|| is_neighbor_exchange.is_set
	|| is_routing_table.is_set
	|| is_acknowledged.is_set
	|| is_maximum_aged.is_set
	|| is_partial_spf.is_set
	|| is_flood_pending.is_set
	|| rate_limit.is_set
	|| is_nsr_ack_pending.is_set
	|| nsr_flood_required.is_set
	|| lsa_flood_required_post_fail_over.is_set
	|| lsa_length.is_set
	|| lsa_sync_state.is_set;
}

bool Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaDetail::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(second_table_index.yfilter)
	|| ydk::is_set(minute_table_index.yfilter)
	|| ydk::is_set(free_time.yfilter)
	|| ydk::is_set(is_deleted.yfilter)
	|| ydk::is_set(is_routing_bit.yfilter)
	|| ydk::is_set(is_advertising_router_reachable.yfilter)
	|| ydk::is_set(is_no_delete.yfilter)
	|| ydk::is_set(is_neighbor_exchange.yfilter)
	|| ydk::is_set(is_routing_table.yfilter)
	|| ydk::is_set(is_acknowledged.yfilter)
	|| ydk::is_set(is_maximum_aged.yfilter)
	|| ydk::is_set(is_partial_spf.yfilter)
	|| ydk::is_set(is_flood_pending.yfilter)
	|| ydk::is_set(rate_limit.yfilter)
	|| ydk::is_set(is_nsr_ack_pending.yfilter)
	|| ydk::is_set(nsr_flood_required.yfilter)
	|| ydk::is_set(lsa_flood_required_post_fail_over.yfilter)
	|| ydk::is_set(lsa_length.yfilter)
	|| ydk::is_set(lsa_sync_state.yfilter);
}

std::string Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaDetail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (second_table_index.is_set || is_set(second_table_index.yfilter)) leaf_name_data.push_back(second_table_index.get_name_leafdata());
    if (minute_table_index.is_set || is_set(minute_table_index.yfilter)) leaf_name_data.push_back(minute_table_index.get_name_leafdata());
    if (free_time.is_set || is_set(free_time.yfilter)) leaf_name_data.push_back(free_time.get_name_leafdata());
    if (is_deleted.is_set || is_set(is_deleted.yfilter)) leaf_name_data.push_back(is_deleted.get_name_leafdata());
    if (is_routing_bit.is_set || is_set(is_routing_bit.yfilter)) leaf_name_data.push_back(is_routing_bit.get_name_leafdata());
    if (is_advertising_router_reachable.is_set || is_set(is_advertising_router_reachable.yfilter)) leaf_name_data.push_back(is_advertising_router_reachable.get_name_leafdata());
    if (is_no_delete.is_set || is_set(is_no_delete.yfilter)) leaf_name_data.push_back(is_no_delete.get_name_leafdata());
    if (is_neighbor_exchange.is_set || is_set(is_neighbor_exchange.yfilter)) leaf_name_data.push_back(is_neighbor_exchange.get_name_leafdata());
    if (is_routing_table.is_set || is_set(is_routing_table.yfilter)) leaf_name_data.push_back(is_routing_table.get_name_leafdata());
    if (is_acknowledged.is_set || is_set(is_acknowledged.yfilter)) leaf_name_data.push_back(is_acknowledged.get_name_leafdata());
    if (is_maximum_aged.is_set || is_set(is_maximum_aged.yfilter)) leaf_name_data.push_back(is_maximum_aged.get_name_leafdata());
    if (is_partial_spf.is_set || is_set(is_partial_spf.yfilter)) leaf_name_data.push_back(is_partial_spf.get_name_leafdata());
    if (is_flood_pending.is_set || is_set(is_flood_pending.yfilter)) leaf_name_data.push_back(is_flood_pending.get_name_leafdata());
    if (rate_limit.is_set || is_set(rate_limit.yfilter)) leaf_name_data.push_back(rate_limit.get_name_leafdata());
    if (is_nsr_ack_pending.is_set || is_set(is_nsr_ack_pending.yfilter)) leaf_name_data.push_back(is_nsr_ack_pending.get_name_leafdata());
    if (nsr_flood_required.is_set || is_set(nsr_flood_required.yfilter)) leaf_name_data.push_back(nsr_flood_required.get_name_leafdata());
    if (lsa_flood_required_post_fail_over.is_set || is_set(lsa_flood_required_post_fail_over.yfilter)) leaf_name_data.push_back(lsa_flood_required_post_fail_over.get_name_leafdata());
    if (lsa_length.is_set || is_set(lsa_length.yfilter)) leaf_name_data.push_back(lsa_length.get_name_leafdata());
    if (lsa_sync_state.is_set || is_set(lsa_sync_state.yfilter)) leaf_name_data.push_back(lsa_sync_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaDetail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "second-table-index")
    {
        second_table_index = value;
        second_table_index.value_namespace = name_space;
        second_table_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minute-table-index")
    {
        minute_table_index = value;
        minute_table_index.value_namespace = name_space;
        minute_table_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "free-time")
    {
        free_time = value;
        free_time.value_namespace = name_space;
        free_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-deleted")
    {
        is_deleted = value;
        is_deleted.value_namespace = name_space;
        is_deleted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-routing-bit")
    {
        is_routing_bit = value;
        is_routing_bit.value_namespace = name_space;
        is_routing_bit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-advertising-router-reachable")
    {
        is_advertising_router_reachable = value;
        is_advertising_router_reachable.value_namespace = name_space;
        is_advertising_router_reachable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-no-delete")
    {
        is_no_delete = value;
        is_no_delete.value_namespace = name_space;
        is_no_delete.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-neighbor-exchange")
    {
        is_neighbor_exchange = value;
        is_neighbor_exchange.value_namespace = name_space;
        is_neighbor_exchange.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-routing-table")
    {
        is_routing_table = value;
        is_routing_table.value_namespace = name_space;
        is_routing_table.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-acknowledged")
    {
        is_acknowledged = value;
        is_acknowledged.value_namespace = name_space;
        is_acknowledged.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-maximum-aged")
    {
        is_maximum_aged = value;
        is_maximum_aged.value_namespace = name_space;
        is_maximum_aged.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-partial-spf")
    {
        is_partial_spf = value;
        is_partial_spf.value_namespace = name_space;
        is_partial_spf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-flood-pending")
    {
        is_flood_pending = value;
        is_flood_pending.value_namespace = name_space;
        is_flood_pending.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rate-limit")
    {
        rate_limit = value;
        rate_limit.value_namespace = name_space;
        rate_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-nsr-ack-pending")
    {
        is_nsr_ack_pending = value;
        is_nsr_ack_pending.value_namespace = name_space;
        is_nsr_ack_pending.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-flood-required")
    {
        nsr_flood_required = value;
        nsr_flood_required.value_namespace = name_space;
        nsr_flood_required.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-flood-required-post-fail-over")
    {
        lsa_flood_required_post_fail_over = value;
        lsa_flood_required_post_fail_over.value_namespace = name_space;
        lsa_flood_required_post_fail_over.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-length")
    {
        lsa_length = value;
        lsa_length.value_namespace = name_space;
        lsa_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-sync-state")
    {
        lsa_sync_state = value;
        lsa_sync_state.value_namespace = name_space;
        lsa_sync_state.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaDetail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "second-table-index")
    {
        second_table_index.yfilter = yfilter;
    }
    if(value_path == "minute-table-index")
    {
        minute_table_index.yfilter = yfilter;
    }
    if(value_path == "free-time")
    {
        free_time.yfilter = yfilter;
    }
    if(value_path == "is-deleted")
    {
        is_deleted.yfilter = yfilter;
    }
    if(value_path == "is-routing-bit")
    {
        is_routing_bit.yfilter = yfilter;
    }
    if(value_path == "is-advertising-router-reachable")
    {
        is_advertising_router_reachable.yfilter = yfilter;
    }
    if(value_path == "is-no-delete")
    {
        is_no_delete.yfilter = yfilter;
    }
    if(value_path == "is-neighbor-exchange")
    {
        is_neighbor_exchange.yfilter = yfilter;
    }
    if(value_path == "is-routing-table")
    {
        is_routing_table.yfilter = yfilter;
    }
    if(value_path == "is-acknowledged")
    {
        is_acknowledged.yfilter = yfilter;
    }
    if(value_path == "is-maximum-aged")
    {
        is_maximum_aged.yfilter = yfilter;
    }
    if(value_path == "is-partial-spf")
    {
        is_partial_spf.yfilter = yfilter;
    }
    if(value_path == "is-flood-pending")
    {
        is_flood_pending.yfilter = yfilter;
    }
    if(value_path == "rate-limit")
    {
        rate_limit.yfilter = yfilter;
    }
    if(value_path == "is-nsr-ack-pending")
    {
        is_nsr_ack_pending.yfilter = yfilter;
    }
    if(value_path == "nsr-flood-required")
    {
        nsr_flood_required.yfilter = yfilter;
    }
    if(value_path == "lsa-flood-required-post-fail-over")
    {
        lsa_flood_required_post_fail_over.yfilter = yfilter;
    }
    if(value_path == "lsa-length")
    {
        lsa_length.yfilter = yfilter;
    }
    if(value_path == "lsa-sync-state")
    {
        lsa_sync_state.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAreaLsaType::LsaDetail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "second-table-index" || name == "minute-table-index" || name == "free-time" || name == "is-deleted" || name == "is-routing-bit" || name == "is-advertising-router-reachable" || name == "is-no-delete" || name == "is-neighbor-exchange" || name == "is-routing-table" || name == "is-acknowledged" || name == "is-maximum-aged" || name == "is-partial-spf" || name == "is-flood-pending" || name == "rate-limit" || name == "is-nsr-ack-pending" || name == "nsr-flood-required" || name == "lsa-flood-required-post-fail-over" || name == "lsa-length" || name == "lsa-sync-state")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAslsaType::UnknownAslsaType()
    :
    interface_name{YType::str, "interface-name"},
    is_virtual_link{YType::boolean, "is-virtual-link"},
    virtual_link_id{YType::uint32, "virtual-link-id"},
    is_sham_link{YType::boolean, "is-sham-link"},
    sham_link_id{YType::uint32, "sham-link-id"}
    	,
    lsa_header(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAslsaType::LsaHeader>())
	,lsa_detail(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAslsaType::LsaDetail>())
{
    lsa_header->parent = this;
    lsa_detail->parent = this;

    yang_name = "unknown-aslsa-type"; yang_parent_name = "lsa-info"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAslsaType::~UnknownAslsaType()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAslsaType::has_data() const
{
    return interface_name.is_set
	|| is_virtual_link.is_set
	|| virtual_link_id.is_set
	|| is_sham_link.is_set
	|| sham_link_id.is_set
	|| (lsa_header !=  nullptr && lsa_header->has_data())
	|| (lsa_detail !=  nullptr && lsa_detail->has_data());
}

bool Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAslsaType::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(is_virtual_link.yfilter)
	|| ydk::is_set(virtual_link_id.yfilter)
	|| ydk::is_set(is_sham_link.yfilter)
	|| ydk::is_set(sham_link_id.yfilter)
	|| (lsa_header !=  nullptr && lsa_header->has_operation())
	|| (lsa_detail !=  nullptr && lsa_detail->has_operation());
}

std::string Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAslsaType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unknown-aslsa-type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAslsaType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (is_virtual_link.is_set || is_set(is_virtual_link.yfilter)) leaf_name_data.push_back(is_virtual_link.get_name_leafdata());
    if (virtual_link_id.is_set || is_set(virtual_link_id.yfilter)) leaf_name_data.push_back(virtual_link_id.get_name_leafdata());
    if (is_sham_link.is_set || is_set(is_sham_link.yfilter)) leaf_name_data.push_back(is_sham_link.get_name_leafdata());
    if (sham_link_id.is_set || is_set(sham_link_id.yfilter)) leaf_name_data.push_back(sham_link_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAslsaType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsa-header")
    {
        if(lsa_header == nullptr)
        {
            lsa_header = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAslsaType::LsaHeader>();
        }
        return lsa_header;
    }

    if(child_yang_name == "lsa-detail")
    {
        if(lsa_detail == nullptr)
        {
            lsa_detail = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAslsaType::LsaDetail>();
        }
        return lsa_detail;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAslsaType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(lsa_header != nullptr)
    {
        children["lsa-header"] = lsa_header;
    }

    if(lsa_detail != nullptr)
    {
        children["lsa-detail"] = lsa_detail;
    }

    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAslsaType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-virtual-link")
    {
        is_virtual_link = value;
        is_virtual_link.value_namespace = name_space;
        is_virtual_link.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtual-link-id")
    {
        virtual_link_id = value;
        virtual_link_id.value_namespace = name_space;
        virtual_link_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-sham-link")
    {
        is_sham_link = value;
        is_sham_link.value_namespace = name_space;
        is_sham_link.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sham-link-id")
    {
        sham_link_id = value;
        sham_link_id.value_namespace = name_space;
        sham_link_id.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAslsaType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "is-virtual-link")
    {
        is_virtual_link.yfilter = yfilter;
    }
    if(value_path == "virtual-link-id")
    {
        virtual_link_id.yfilter = yfilter;
    }
    if(value_path == "is-sham-link")
    {
        is_sham_link.yfilter = yfilter;
    }
    if(value_path == "sham-link-id")
    {
        sham_link_id.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAslsaType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsa-header" || name == "lsa-detail" || name == "interface-name" || name == "is-virtual-link" || name == "virtual-link-id" || name == "is-sham-link" || name == "sham-link-id")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAslsaType::LsaHeader::LsaHeader()
    :
    lsa_type{YType::uint16, "lsa-type"},
    lsa_area_id{YType::str, "lsa-area-id"},
    lsa_age{YType::uint16, "lsa-age"},
    is_do_not_age_lsa{YType::boolean, "is-do-not-age-lsa"},
    ls_id{YType::uint32, "ls-id"},
    advertising_router{YType::str, "advertising-router"},
    sequence_number{YType::uint32, "sequence-number"},
    checksum{YType::uint16, "checksum"},
    is_graceful_restart_active{YType::boolean, "is-graceful-restart-active"}
{

    yang_name = "lsa-header"; yang_parent_name = "unknown-aslsa-type"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAslsaType::LsaHeader::~LsaHeader()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAslsaType::LsaHeader::has_data() const
{
    return lsa_type.is_set
	|| lsa_area_id.is_set
	|| lsa_age.is_set
	|| is_do_not_age_lsa.is_set
	|| ls_id.is_set
	|| advertising_router.is_set
	|| sequence_number.is_set
	|| checksum.is_set
	|| is_graceful_restart_active.is_set;
}

bool Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAslsaType::LsaHeader::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lsa_type.yfilter)
	|| ydk::is_set(lsa_area_id.yfilter)
	|| ydk::is_set(lsa_age.yfilter)
	|| ydk::is_set(is_do_not_age_lsa.yfilter)
	|| ydk::is_set(ls_id.yfilter)
	|| ydk::is_set(advertising_router.yfilter)
	|| ydk::is_set(sequence_number.yfilter)
	|| ydk::is_set(checksum.yfilter)
	|| ydk::is_set(is_graceful_restart_active.yfilter);
}

std::string Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAslsaType::LsaHeader::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-header";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAslsaType::LsaHeader::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsa_type.is_set || is_set(lsa_type.yfilter)) leaf_name_data.push_back(lsa_type.get_name_leafdata());
    if (lsa_area_id.is_set || is_set(lsa_area_id.yfilter)) leaf_name_data.push_back(lsa_area_id.get_name_leafdata());
    if (lsa_age.is_set || is_set(lsa_age.yfilter)) leaf_name_data.push_back(lsa_age.get_name_leafdata());
    if (is_do_not_age_lsa.is_set || is_set(is_do_not_age_lsa.yfilter)) leaf_name_data.push_back(is_do_not_age_lsa.get_name_leafdata());
    if (ls_id.is_set || is_set(ls_id.yfilter)) leaf_name_data.push_back(ls_id.get_name_leafdata());
    if (advertising_router.is_set || is_set(advertising_router.yfilter)) leaf_name_data.push_back(advertising_router.get_name_leafdata());
    if (sequence_number.is_set || is_set(sequence_number.yfilter)) leaf_name_data.push_back(sequence_number.get_name_leafdata());
    if (checksum.is_set || is_set(checksum.yfilter)) leaf_name_data.push_back(checksum.get_name_leafdata());
    if (is_graceful_restart_active.is_set || is_set(is_graceful_restart_active.yfilter)) leaf_name_data.push_back(is_graceful_restart_active.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAslsaType::LsaHeader::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAslsaType::LsaHeader::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAslsaType::LsaHeader::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsa-type")
    {
        lsa_type = value;
        lsa_type.value_namespace = name_space;
        lsa_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-area-id")
    {
        lsa_area_id = value;
        lsa_area_id.value_namespace = name_space;
        lsa_area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-age")
    {
        lsa_age = value;
        lsa_age.value_namespace = name_space;
        lsa_age.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-do-not-age-lsa")
    {
        is_do_not_age_lsa = value;
        is_do_not_age_lsa.value_namespace = name_space;
        is_do_not_age_lsa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ls-id")
    {
        ls_id = value;
        ls_id.value_namespace = name_space;
        ls_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advertising-router")
    {
        advertising_router = value;
        advertising_router.value_namespace = name_space;
        advertising_router.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequence-number")
    {
        sequence_number = value;
        sequence_number.value_namespace = name_space;
        sequence_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "checksum")
    {
        checksum = value;
        checksum.value_namespace = name_space;
        checksum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-graceful-restart-active")
    {
        is_graceful_restart_active = value;
        is_graceful_restart_active.value_namespace = name_space;
        is_graceful_restart_active.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAslsaType::LsaHeader::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsa-type")
    {
        lsa_type.yfilter = yfilter;
    }
    if(value_path == "lsa-area-id")
    {
        lsa_area_id.yfilter = yfilter;
    }
    if(value_path == "lsa-age")
    {
        lsa_age.yfilter = yfilter;
    }
    if(value_path == "is-do-not-age-lsa")
    {
        is_do_not_age_lsa.yfilter = yfilter;
    }
    if(value_path == "ls-id")
    {
        ls_id.yfilter = yfilter;
    }
    if(value_path == "advertising-router")
    {
        advertising_router.yfilter = yfilter;
    }
    if(value_path == "sequence-number")
    {
        sequence_number.yfilter = yfilter;
    }
    if(value_path == "checksum")
    {
        checksum.yfilter = yfilter;
    }
    if(value_path == "is-graceful-restart-active")
    {
        is_graceful_restart_active.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAslsaType::LsaHeader::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsa-type" || name == "lsa-area-id" || name == "lsa-age" || name == "is-do-not-age-lsa" || name == "ls-id" || name == "advertising-router" || name == "sequence-number" || name == "checksum" || name == "is-graceful-restart-active")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAslsaType::LsaDetail::LsaDetail()
    :
    second_table_index{YType::uint8, "second-table-index"},
    minute_table_index{YType::uint8, "minute-table-index"},
    free_time{YType::uint32, "free-time"},
    is_deleted{YType::boolean, "is-deleted"},
    is_routing_bit{YType::boolean, "is-routing-bit"},
    is_advertising_router_reachable{YType::boolean, "is-advertising-router-reachable"},
    is_no_delete{YType::boolean, "is-no-delete"},
    is_neighbor_exchange{YType::boolean, "is-neighbor-exchange"},
    is_routing_table{YType::boolean, "is-routing-table"},
    is_acknowledged{YType::boolean, "is-acknowledged"},
    is_maximum_aged{YType::boolean, "is-maximum-aged"},
    is_partial_spf{YType::boolean, "is-partial-spf"},
    is_flood_pending{YType::boolean, "is-flood-pending"},
    rate_limit{YType::boolean, "rate-limit"},
    is_nsr_ack_pending{YType::boolean, "is-nsr-ack-pending"},
    nsr_flood_required{YType::boolean, "nsr-flood-required"},
    lsa_flood_required_post_fail_over{YType::boolean, "lsa-flood-required-post-fail-over"},
    lsa_length{YType::uint16, "lsa-length"},
    lsa_sync_state{YType::enumeration, "lsa-sync-state"}
{

    yang_name = "lsa-detail"; yang_parent_name = "unknown-aslsa-type"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAslsaType::LsaDetail::~LsaDetail()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAslsaType::LsaDetail::has_data() const
{
    return second_table_index.is_set
	|| minute_table_index.is_set
	|| free_time.is_set
	|| is_deleted.is_set
	|| is_routing_bit.is_set
	|| is_advertising_router_reachable.is_set
	|| is_no_delete.is_set
	|| is_neighbor_exchange.is_set
	|| is_routing_table.is_set
	|| is_acknowledged.is_set
	|| is_maximum_aged.is_set
	|| is_partial_spf.is_set
	|| is_flood_pending.is_set
	|| rate_limit.is_set
	|| is_nsr_ack_pending.is_set
	|| nsr_flood_required.is_set
	|| lsa_flood_required_post_fail_over.is_set
	|| lsa_length.is_set
	|| lsa_sync_state.is_set;
}

bool Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAslsaType::LsaDetail::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(second_table_index.yfilter)
	|| ydk::is_set(minute_table_index.yfilter)
	|| ydk::is_set(free_time.yfilter)
	|| ydk::is_set(is_deleted.yfilter)
	|| ydk::is_set(is_routing_bit.yfilter)
	|| ydk::is_set(is_advertising_router_reachable.yfilter)
	|| ydk::is_set(is_no_delete.yfilter)
	|| ydk::is_set(is_neighbor_exchange.yfilter)
	|| ydk::is_set(is_routing_table.yfilter)
	|| ydk::is_set(is_acknowledged.yfilter)
	|| ydk::is_set(is_maximum_aged.yfilter)
	|| ydk::is_set(is_partial_spf.yfilter)
	|| ydk::is_set(is_flood_pending.yfilter)
	|| ydk::is_set(rate_limit.yfilter)
	|| ydk::is_set(is_nsr_ack_pending.yfilter)
	|| ydk::is_set(nsr_flood_required.yfilter)
	|| ydk::is_set(lsa_flood_required_post_fail_over.yfilter)
	|| ydk::is_set(lsa_length.yfilter)
	|| ydk::is_set(lsa_sync_state.yfilter);
}

std::string Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAslsaType::LsaDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAslsaType::LsaDetail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (second_table_index.is_set || is_set(second_table_index.yfilter)) leaf_name_data.push_back(second_table_index.get_name_leafdata());
    if (minute_table_index.is_set || is_set(minute_table_index.yfilter)) leaf_name_data.push_back(minute_table_index.get_name_leafdata());
    if (free_time.is_set || is_set(free_time.yfilter)) leaf_name_data.push_back(free_time.get_name_leafdata());
    if (is_deleted.is_set || is_set(is_deleted.yfilter)) leaf_name_data.push_back(is_deleted.get_name_leafdata());
    if (is_routing_bit.is_set || is_set(is_routing_bit.yfilter)) leaf_name_data.push_back(is_routing_bit.get_name_leafdata());
    if (is_advertising_router_reachable.is_set || is_set(is_advertising_router_reachable.yfilter)) leaf_name_data.push_back(is_advertising_router_reachable.get_name_leafdata());
    if (is_no_delete.is_set || is_set(is_no_delete.yfilter)) leaf_name_data.push_back(is_no_delete.get_name_leafdata());
    if (is_neighbor_exchange.is_set || is_set(is_neighbor_exchange.yfilter)) leaf_name_data.push_back(is_neighbor_exchange.get_name_leafdata());
    if (is_routing_table.is_set || is_set(is_routing_table.yfilter)) leaf_name_data.push_back(is_routing_table.get_name_leafdata());
    if (is_acknowledged.is_set || is_set(is_acknowledged.yfilter)) leaf_name_data.push_back(is_acknowledged.get_name_leafdata());
    if (is_maximum_aged.is_set || is_set(is_maximum_aged.yfilter)) leaf_name_data.push_back(is_maximum_aged.get_name_leafdata());
    if (is_partial_spf.is_set || is_set(is_partial_spf.yfilter)) leaf_name_data.push_back(is_partial_spf.get_name_leafdata());
    if (is_flood_pending.is_set || is_set(is_flood_pending.yfilter)) leaf_name_data.push_back(is_flood_pending.get_name_leafdata());
    if (rate_limit.is_set || is_set(rate_limit.yfilter)) leaf_name_data.push_back(rate_limit.get_name_leafdata());
    if (is_nsr_ack_pending.is_set || is_set(is_nsr_ack_pending.yfilter)) leaf_name_data.push_back(is_nsr_ack_pending.get_name_leafdata());
    if (nsr_flood_required.is_set || is_set(nsr_flood_required.yfilter)) leaf_name_data.push_back(nsr_flood_required.get_name_leafdata());
    if (lsa_flood_required_post_fail_over.is_set || is_set(lsa_flood_required_post_fail_over.yfilter)) leaf_name_data.push_back(lsa_flood_required_post_fail_over.get_name_leafdata());
    if (lsa_length.is_set || is_set(lsa_length.yfilter)) leaf_name_data.push_back(lsa_length.get_name_leafdata());
    if (lsa_sync_state.is_set || is_set(lsa_sync_state.yfilter)) leaf_name_data.push_back(lsa_sync_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAslsaType::LsaDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAslsaType::LsaDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAslsaType::LsaDetail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "second-table-index")
    {
        second_table_index = value;
        second_table_index.value_namespace = name_space;
        second_table_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minute-table-index")
    {
        minute_table_index = value;
        minute_table_index.value_namespace = name_space;
        minute_table_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "free-time")
    {
        free_time = value;
        free_time.value_namespace = name_space;
        free_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-deleted")
    {
        is_deleted = value;
        is_deleted.value_namespace = name_space;
        is_deleted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-routing-bit")
    {
        is_routing_bit = value;
        is_routing_bit.value_namespace = name_space;
        is_routing_bit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-advertising-router-reachable")
    {
        is_advertising_router_reachable = value;
        is_advertising_router_reachable.value_namespace = name_space;
        is_advertising_router_reachable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-no-delete")
    {
        is_no_delete = value;
        is_no_delete.value_namespace = name_space;
        is_no_delete.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-neighbor-exchange")
    {
        is_neighbor_exchange = value;
        is_neighbor_exchange.value_namespace = name_space;
        is_neighbor_exchange.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-routing-table")
    {
        is_routing_table = value;
        is_routing_table.value_namespace = name_space;
        is_routing_table.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-acknowledged")
    {
        is_acknowledged = value;
        is_acknowledged.value_namespace = name_space;
        is_acknowledged.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-maximum-aged")
    {
        is_maximum_aged = value;
        is_maximum_aged.value_namespace = name_space;
        is_maximum_aged.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-partial-spf")
    {
        is_partial_spf = value;
        is_partial_spf.value_namespace = name_space;
        is_partial_spf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-flood-pending")
    {
        is_flood_pending = value;
        is_flood_pending.value_namespace = name_space;
        is_flood_pending.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rate-limit")
    {
        rate_limit = value;
        rate_limit.value_namespace = name_space;
        rate_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-nsr-ack-pending")
    {
        is_nsr_ack_pending = value;
        is_nsr_ack_pending.value_namespace = name_space;
        is_nsr_ack_pending.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-flood-required")
    {
        nsr_flood_required = value;
        nsr_flood_required.value_namespace = name_space;
        nsr_flood_required.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-flood-required-post-fail-over")
    {
        lsa_flood_required_post_fail_over = value;
        lsa_flood_required_post_fail_over.value_namespace = name_space;
        lsa_flood_required_post_fail_over.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-length")
    {
        lsa_length = value;
        lsa_length.value_namespace = name_space;
        lsa_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-sync-state")
    {
        lsa_sync_state = value;
        lsa_sync_state.value_namespace = name_space;
        lsa_sync_state.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAslsaType::LsaDetail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "second-table-index")
    {
        second_table_index.yfilter = yfilter;
    }
    if(value_path == "minute-table-index")
    {
        minute_table_index.yfilter = yfilter;
    }
    if(value_path == "free-time")
    {
        free_time.yfilter = yfilter;
    }
    if(value_path == "is-deleted")
    {
        is_deleted.yfilter = yfilter;
    }
    if(value_path == "is-routing-bit")
    {
        is_routing_bit.yfilter = yfilter;
    }
    if(value_path == "is-advertising-router-reachable")
    {
        is_advertising_router_reachable.yfilter = yfilter;
    }
    if(value_path == "is-no-delete")
    {
        is_no_delete.yfilter = yfilter;
    }
    if(value_path == "is-neighbor-exchange")
    {
        is_neighbor_exchange.yfilter = yfilter;
    }
    if(value_path == "is-routing-table")
    {
        is_routing_table.yfilter = yfilter;
    }
    if(value_path == "is-acknowledged")
    {
        is_acknowledged.yfilter = yfilter;
    }
    if(value_path == "is-maximum-aged")
    {
        is_maximum_aged.yfilter = yfilter;
    }
    if(value_path == "is-partial-spf")
    {
        is_partial_spf.yfilter = yfilter;
    }
    if(value_path == "is-flood-pending")
    {
        is_flood_pending.yfilter = yfilter;
    }
    if(value_path == "rate-limit")
    {
        rate_limit.yfilter = yfilter;
    }
    if(value_path == "is-nsr-ack-pending")
    {
        is_nsr_ack_pending.yfilter = yfilter;
    }
    if(value_path == "nsr-flood-required")
    {
        nsr_flood_required.yfilter = yfilter;
    }
    if(value_path == "lsa-flood-required-post-fail-over")
    {
        lsa_flood_required_post_fail_over.yfilter = yfilter;
    }
    if(value_path == "lsa-length")
    {
        lsa_length.yfilter = yfilter;
    }
    if(value_path == "lsa-sync-state")
    {
        lsa_sync_state.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownAslsaType::LsaDetail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "second-table-index" || name == "minute-table-index" || name == "free-time" || name == "is-deleted" || name == "is-routing-bit" || name == "is-advertising-router-reachable" || name == "is-no-delete" || name == "is-neighbor-exchange" || name == "is-routing-table" || name == "is-acknowledged" || name == "is-maximum-aged" || name == "is-partial-spf" || name == "is-flood-pending" || name == "rate-limit" || name == "is-nsr-ack-pending" || name == "nsr-flood-required" || name == "lsa-flood-required-post-fail-over" || name == "lsa-length" || name == "lsa-sync-state")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLsaType::UnknownLsaType()
    :
    interface_name{YType::str, "interface-name"},
    is_virtual_link{YType::boolean, "is-virtual-link"},
    virtual_link_id{YType::uint32, "virtual-link-id"},
    is_sham_link{YType::boolean, "is-sham-link"},
    sham_link_id{YType::uint32, "sham-link-id"}
    	,
    lsa_header(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLsaType::LsaHeader>())
	,lsa_detail(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLsaType::LsaDetail>())
{
    lsa_header->parent = this;
    lsa_detail->parent = this;

    yang_name = "unknown-lsa-type"; yang_parent_name = "lsa-info"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLsaType::~UnknownLsaType()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLsaType::has_data() const
{
    return interface_name.is_set
	|| is_virtual_link.is_set
	|| virtual_link_id.is_set
	|| is_sham_link.is_set
	|| sham_link_id.is_set
	|| (lsa_header !=  nullptr && lsa_header->has_data())
	|| (lsa_detail !=  nullptr && lsa_detail->has_data());
}

bool Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLsaType::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(is_virtual_link.yfilter)
	|| ydk::is_set(virtual_link_id.yfilter)
	|| ydk::is_set(is_sham_link.yfilter)
	|| ydk::is_set(sham_link_id.yfilter)
	|| (lsa_header !=  nullptr && lsa_header->has_operation())
	|| (lsa_detail !=  nullptr && lsa_detail->has_operation());
}

std::string Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLsaType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unknown-lsa-type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLsaType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (is_virtual_link.is_set || is_set(is_virtual_link.yfilter)) leaf_name_data.push_back(is_virtual_link.get_name_leafdata());
    if (virtual_link_id.is_set || is_set(virtual_link_id.yfilter)) leaf_name_data.push_back(virtual_link_id.get_name_leafdata());
    if (is_sham_link.is_set || is_set(is_sham_link.yfilter)) leaf_name_data.push_back(is_sham_link.get_name_leafdata());
    if (sham_link_id.is_set || is_set(sham_link_id.yfilter)) leaf_name_data.push_back(sham_link_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLsaType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsa-header")
    {
        if(lsa_header == nullptr)
        {
            lsa_header = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLsaType::LsaHeader>();
        }
        return lsa_header;
    }

    if(child_yang_name == "lsa-detail")
    {
        if(lsa_detail == nullptr)
        {
            lsa_detail = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLsaType::LsaDetail>();
        }
        return lsa_detail;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLsaType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(lsa_header != nullptr)
    {
        children["lsa-header"] = lsa_header;
    }

    if(lsa_detail != nullptr)
    {
        children["lsa-detail"] = lsa_detail;
    }

    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLsaType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-virtual-link")
    {
        is_virtual_link = value;
        is_virtual_link.value_namespace = name_space;
        is_virtual_link.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtual-link-id")
    {
        virtual_link_id = value;
        virtual_link_id.value_namespace = name_space;
        virtual_link_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-sham-link")
    {
        is_sham_link = value;
        is_sham_link.value_namespace = name_space;
        is_sham_link.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sham-link-id")
    {
        sham_link_id = value;
        sham_link_id.value_namespace = name_space;
        sham_link_id.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLsaType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "is-virtual-link")
    {
        is_virtual_link.yfilter = yfilter;
    }
    if(value_path == "virtual-link-id")
    {
        virtual_link_id.yfilter = yfilter;
    }
    if(value_path == "is-sham-link")
    {
        is_sham_link.yfilter = yfilter;
    }
    if(value_path == "sham-link-id")
    {
        sham_link_id.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLsaType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsa-header" || name == "lsa-detail" || name == "interface-name" || name == "is-virtual-link" || name == "virtual-link-id" || name == "is-sham-link" || name == "sham-link-id")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLsaType::LsaHeader::LsaHeader()
    :
    lsa_type{YType::uint16, "lsa-type"},
    lsa_area_id{YType::str, "lsa-area-id"},
    lsa_age{YType::uint16, "lsa-age"},
    is_do_not_age_lsa{YType::boolean, "is-do-not-age-lsa"},
    ls_id{YType::uint32, "ls-id"},
    advertising_router{YType::str, "advertising-router"},
    sequence_number{YType::uint32, "sequence-number"},
    checksum{YType::uint16, "checksum"},
    is_graceful_restart_active{YType::boolean, "is-graceful-restart-active"}
{

    yang_name = "lsa-header"; yang_parent_name = "unknown-lsa-type"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLsaType::LsaHeader::~LsaHeader()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLsaType::LsaHeader::has_data() const
{
    return lsa_type.is_set
	|| lsa_area_id.is_set
	|| lsa_age.is_set
	|| is_do_not_age_lsa.is_set
	|| ls_id.is_set
	|| advertising_router.is_set
	|| sequence_number.is_set
	|| checksum.is_set
	|| is_graceful_restart_active.is_set;
}

bool Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLsaType::LsaHeader::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lsa_type.yfilter)
	|| ydk::is_set(lsa_area_id.yfilter)
	|| ydk::is_set(lsa_age.yfilter)
	|| ydk::is_set(is_do_not_age_lsa.yfilter)
	|| ydk::is_set(ls_id.yfilter)
	|| ydk::is_set(advertising_router.yfilter)
	|| ydk::is_set(sequence_number.yfilter)
	|| ydk::is_set(checksum.yfilter)
	|| ydk::is_set(is_graceful_restart_active.yfilter);
}

std::string Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLsaType::LsaHeader::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-header";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLsaType::LsaHeader::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsa_type.is_set || is_set(lsa_type.yfilter)) leaf_name_data.push_back(lsa_type.get_name_leafdata());
    if (lsa_area_id.is_set || is_set(lsa_area_id.yfilter)) leaf_name_data.push_back(lsa_area_id.get_name_leafdata());
    if (lsa_age.is_set || is_set(lsa_age.yfilter)) leaf_name_data.push_back(lsa_age.get_name_leafdata());
    if (is_do_not_age_lsa.is_set || is_set(is_do_not_age_lsa.yfilter)) leaf_name_data.push_back(is_do_not_age_lsa.get_name_leafdata());
    if (ls_id.is_set || is_set(ls_id.yfilter)) leaf_name_data.push_back(ls_id.get_name_leafdata());
    if (advertising_router.is_set || is_set(advertising_router.yfilter)) leaf_name_data.push_back(advertising_router.get_name_leafdata());
    if (sequence_number.is_set || is_set(sequence_number.yfilter)) leaf_name_data.push_back(sequence_number.get_name_leafdata());
    if (checksum.is_set || is_set(checksum.yfilter)) leaf_name_data.push_back(checksum.get_name_leafdata());
    if (is_graceful_restart_active.is_set || is_set(is_graceful_restart_active.yfilter)) leaf_name_data.push_back(is_graceful_restart_active.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLsaType::LsaHeader::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLsaType::LsaHeader::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLsaType::LsaHeader::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsa-type")
    {
        lsa_type = value;
        lsa_type.value_namespace = name_space;
        lsa_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-area-id")
    {
        lsa_area_id = value;
        lsa_area_id.value_namespace = name_space;
        lsa_area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-age")
    {
        lsa_age = value;
        lsa_age.value_namespace = name_space;
        lsa_age.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-do-not-age-lsa")
    {
        is_do_not_age_lsa = value;
        is_do_not_age_lsa.value_namespace = name_space;
        is_do_not_age_lsa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ls-id")
    {
        ls_id = value;
        ls_id.value_namespace = name_space;
        ls_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advertising-router")
    {
        advertising_router = value;
        advertising_router.value_namespace = name_space;
        advertising_router.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequence-number")
    {
        sequence_number = value;
        sequence_number.value_namespace = name_space;
        sequence_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "checksum")
    {
        checksum = value;
        checksum.value_namespace = name_space;
        checksum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-graceful-restart-active")
    {
        is_graceful_restart_active = value;
        is_graceful_restart_active.value_namespace = name_space;
        is_graceful_restart_active.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLsaType::LsaHeader::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsa-type")
    {
        lsa_type.yfilter = yfilter;
    }
    if(value_path == "lsa-area-id")
    {
        lsa_area_id.yfilter = yfilter;
    }
    if(value_path == "lsa-age")
    {
        lsa_age.yfilter = yfilter;
    }
    if(value_path == "is-do-not-age-lsa")
    {
        is_do_not_age_lsa.yfilter = yfilter;
    }
    if(value_path == "ls-id")
    {
        ls_id.yfilter = yfilter;
    }
    if(value_path == "advertising-router")
    {
        advertising_router.yfilter = yfilter;
    }
    if(value_path == "sequence-number")
    {
        sequence_number.yfilter = yfilter;
    }
    if(value_path == "checksum")
    {
        checksum.yfilter = yfilter;
    }
    if(value_path == "is-graceful-restart-active")
    {
        is_graceful_restart_active.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLsaType::LsaHeader::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsa-type" || name == "lsa-area-id" || name == "lsa-age" || name == "is-do-not-age-lsa" || name == "ls-id" || name == "advertising-router" || name == "sequence-number" || name == "checksum" || name == "is-graceful-restart-active")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLsaType::LsaDetail::LsaDetail()
    :
    second_table_index{YType::uint8, "second-table-index"},
    minute_table_index{YType::uint8, "minute-table-index"},
    free_time{YType::uint32, "free-time"},
    is_deleted{YType::boolean, "is-deleted"},
    is_routing_bit{YType::boolean, "is-routing-bit"},
    is_advertising_router_reachable{YType::boolean, "is-advertising-router-reachable"},
    is_no_delete{YType::boolean, "is-no-delete"},
    is_neighbor_exchange{YType::boolean, "is-neighbor-exchange"},
    is_routing_table{YType::boolean, "is-routing-table"},
    is_acknowledged{YType::boolean, "is-acknowledged"},
    is_maximum_aged{YType::boolean, "is-maximum-aged"},
    is_partial_spf{YType::boolean, "is-partial-spf"},
    is_flood_pending{YType::boolean, "is-flood-pending"},
    rate_limit{YType::boolean, "rate-limit"},
    is_nsr_ack_pending{YType::boolean, "is-nsr-ack-pending"},
    nsr_flood_required{YType::boolean, "nsr-flood-required"},
    lsa_flood_required_post_fail_over{YType::boolean, "lsa-flood-required-post-fail-over"},
    lsa_length{YType::uint16, "lsa-length"},
    lsa_sync_state{YType::enumeration, "lsa-sync-state"}
{

    yang_name = "lsa-detail"; yang_parent_name = "unknown-lsa-type"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLsaType::LsaDetail::~LsaDetail()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLsaType::LsaDetail::has_data() const
{
    return second_table_index.is_set
	|| minute_table_index.is_set
	|| free_time.is_set
	|| is_deleted.is_set
	|| is_routing_bit.is_set
	|| is_advertising_router_reachable.is_set
	|| is_no_delete.is_set
	|| is_neighbor_exchange.is_set
	|| is_routing_table.is_set
	|| is_acknowledged.is_set
	|| is_maximum_aged.is_set
	|| is_partial_spf.is_set
	|| is_flood_pending.is_set
	|| rate_limit.is_set
	|| is_nsr_ack_pending.is_set
	|| nsr_flood_required.is_set
	|| lsa_flood_required_post_fail_over.is_set
	|| lsa_length.is_set
	|| lsa_sync_state.is_set;
}

bool Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLsaType::LsaDetail::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(second_table_index.yfilter)
	|| ydk::is_set(minute_table_index.yfilter)
	|| ydk::is_set(free_time.yfilter)
	|| ydk::is_set(is_deleted.yfilter)
	|| ydk::is_set(is_routing_bit.yfilter)
	|| ydk::is_set(is_advertising_router_reachable.yfilter)
	|| ydk::is_set(is_no_delete.yfilter)
	|| ydk::is_set(is_neighbor_exchange.yfilter)
	|| ydk::is_set(is_routing_table.yfilter)
	|| ydk::is_set(is_acknowledged.yfilter)
	|| ydk::is_set(is_maximum_aged.yfilter)
	|| ydk::is_set(is_partial_spf.yfilter)
	|| ydk::is_set(is_flood_pending.yfilter)
	|| ydk::is_set(rate_limit.yfilter)
	|| ydk::is_set(is_nsr_ack_pending.yfilter)
	|| ydk::is_set(nsr_flood_required.yfilter)
	|| ydk::is_set(lsa_flood_required_post_fail_over.yfilter)
	|| ydk::is_set(lsa_length.yfilter)
	|| ydk::is_set(lsa_sync_state.yfilter);
}

std::string Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLsaType::LsaDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLsaType::LsaDetail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (second_table_index.is_set || is_set(second_table_index.yfilter)) leaf_name_data.push_back(second_table_index.get_name_leafdata());
    if (minute_table_index.is_set || is_set(minute_table_index.yfilter)) leaf_name_data.push_back(minute_table_index.get_name_leafdata());
    if (free_time.is_set || is_set(free_time.yfilter)) leaf_name_data.push_back(free_time.get_name_leafdata());
    if (is_deleted.is_set || is_set(is_deleted.yfilter)) leaf_name_data.push_back(is_deleted.get_name_leafdata());
    if (is_routing_bit.is_set || is_set(is_routing_bit.yfilter)) leaf_name_data.push_back(is_routing_bit.get_name_leafdata());
    if (is_advertising_router_reachable.is_set || is_set(is_advertising_router_reachable.yfilter)) leaf_name_data.push_back(is_advertising_router_reachable.get_name_leafdata());
    if (is_no_delete.is_set || is_set(is_no_delete.yfilter)) leaf_name_data.push_back(is_no_delete.get_name_leafdata());
    if (is_neighbor_exchange.is_set || is_set(is_neighbor_exchange.yfilter)) leaf_name_data.push_back(is_neighbor_exchange.get_name_leafdata());
    if (is_routing_table.is_set || is_set(is_routing_table.yfilter)) leaf_name_data.push_back(is_routing_table.get_name_leafdata());
    if (is_acknowledged.is_set || is_set(is_acknowledged.yfilter)) leaf_name_data.push_back(is_acknowledged.get_name_leafdata());
    if (is_maximum_aged.is_set || is_set(is_maximum_aged.yfilter)) leaf_name_data.push_back(is_maximum_aged.get_name_leafdata());
    if (is_partial_spf.is_set || is_set(is_partial_spf.yfilter)) leaf_name_data.push_back(is_partial_spf.get_name_leafdata());
    if (is_flood_pending.is_set || is_set(is_flood_pending.yfilter)) leaf_name_data.push_back(is_flood_pending.get_name_leafdata());
    if (rate_limit.is_set || is_set(rate_limit.yfilter)) leaf_name_data.push_back(rate_limit.get_name_leafdata());
    if (is_nsr_ack_pending.is_set || is_set(is_nsr_ack_pending.yfilter)) leaf_name_data.push_back(is_nsr_ack_pending.get_name_leafdata());
    if (nsr_flood_required.is_set || is_set(nsr_flood_required.yfilter)) leaf_name_data.push_back(nsr_flood_required.get_name_leafdata());
    if (lsa_flood_required_post_fail_over.is_set || is_set(lsa_flood_required_post_fail_over.yfilter)) leaf_name_data.push_back(lsa_flood_required_post_fail_over.get_name_leafdata());
    if (lsa_length.is_set || is_set(lsa_length.yfilter)) leaf_name_data.push_back(lsa_length.get_name_leafdata());
    if (lsa_sync_state.is_set || is_set(lsa_sync_state.yfilter)) leaf_name_data.push_back(lsa_sync_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLsaType::LsaDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLsaType::LsaDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLsaType::LsaDetail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "second-table-index")
    {
        second_table_index = value;
        second_table_index.value_namespace = name_space;
        second_table_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minute-table-index")
    {
        minute_table_index = value;
        minute_table_index.value_namespace = name_space;
        minute_table_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "free-time")
    {
        free_time = value;
        free_time.value_namespace = name_space;
        free_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-deleted")
    {
        is_deleted = value;
        is_deleted.value_namespace = name_space;
        is_deleted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-routing-bit")
    {
        is_routing_bit = value;
        is_routing_bit.value_namespace = name_space;
        is_routing_bit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-advertising-router-reachable")
    {
        is_advertising_router_reachable = value;
        is_advertising_router_reachable.value_namespace = name_space;
        is_advertising_router_reachable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-no-delete")
    {
        is_no_delete = value;
        is_no_delete.value_namespace = name_space;
        is_no_delete.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-neighbor-exchange")
    {
        is_neighbor_exchange = value;
        is_neighbor_exchange.value_namespace = name_space;
        is_neighbor_exchange.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-routing-table")
    {
        is_routing_table = value;
        is_routing_table.value_namespace = name_space;
        is_routing_table.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-acknowledged")
    {
        is_acknowledged = value;
        is_acknowledged.value_namespace = name_space;
        is_acknowledged.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-maximum-aged")
    {
        is_maximum_aged = value;
        is_maximum_aged.value_namespace = name_space;
        is_maximum_aged.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-partial-spf")
    {
        is_partial_spf = value;
        is_partial_spf.value_namespace = name_space;
        is_partial_spf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-flood-pending")
    {
        is_flood_pending = value;
        is_flood_pending.value_namespace = name_space;
        is_flood_pending.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rate-limit")
    {
        rate_limit = value;
        rate_limit.value_namespace = name_space;
        rate_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-nsr-ack-pending")
    {
        is_nsr_ack_pending = value;
        is_nsr_ack_pending.value_namespace = name_space;
        is_nsr_ack_pending.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-flood-required")
    {
        nsr_flood_required = value;
        nsr_flood_required.value_namespace = name_space;
        nsr_flood_required.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-flood-required-post-fail-over")
    {
        lsa_flood_required_post_fail_over = value;
        lsa_flood_required_post_fail_over.value_namespace = name_space;
        lsa_flood_required_post_fail_over.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-length")
    {
        lsa_length = value;
        lsa_length.value_namespace = name_space;
        lsa_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-sync-state")
    {
        lsa_sync_state = value;
        lsa_sync_state.value_namespace = name_space;
        lsa_sync_state.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLsaType::LsaDetail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "second-table-index")
    {
        second_table_index.yfilter = yfilter;
    }
    if(value_path == "minute-table-index")
    {
        minute_table_index.yfilter = yfilter;
    }
    if(value_path == "free-time")
    {
        free_time.yfilter = yfilter;
    }
    if(value_path == "is-deleted")
    {
        is_deleted.yfilter = yfilter;
    }
    if(value_path == "is-routing-bit")
    {
        is_routing_bit.yfilter = yfilter;
    }
    if(value_path == "is-advertising-router-reachable")
    {
        is_advertising_router_reachable.yfilter = yfilter;
    }
    if(value_path == "is-no-delete")
    {
        is_no_delete.yfilter = yfilter;
    }
    if(value_path == "is-neighbor-exchange")
    {
        is_neighbor_exchange.yfilter = yfilter;
    }
    if(value_path == "is-routing-table")
    {
        is_routing_table.yfilter = yfilter;
    }
    if(value_path == "is-acknowledged")
    {
        is_acknowledged.yfilter = yfilter;
    }
    if(value_path == "is-maximum-aged")
    {
        is_maximum_aged.yfilter = yfilter;
    }
    if(value_path == "is-partial-spf")
    {
        is_partial_spf.yfilter = yfilter;
    }
    if(value_path == "is-flood-pending")
    {
        is_flood_pending.yfilter = yfilter;
    }
    if(value_path == "rate-limit")
    {
        rate_limit.yfilter = yfilter;
    }
    if(value_path == "is-nsr-ack-pending")
    {
        is_nsr_ack_pending.yfilter = yfilter;
    }
    if(value_path == "nsr-flood-required")
    {
        nsr_flood_required.yfilter = yfilter;
    }
    if(value_path == "lsa-flood-required-post-fail-over")
    {
        lsa_flood_required_post_fail_over.yfilter = yfilter;
    }
    if(value_path == "lsa-length")
    {
        lsa_length.yfilter = yfilter;
    }
    if(value_path == "lsa-sync-state")
    {
        lsa_sync_state.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseTable::LsaInternalTable::Lsa::LsaInfo::UnknownLsaType::LsaDetail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "second-table-index" || name == "minute-table-index" || name == "free-time" || name == "is-deleted" || name == "is-routing-bit" || name == "is-advertising-router-reachable" || name == "is-no-delete" || name == "is-neighbor-exchange" || name == "is-routing-table" || name == "is-acknowledged" || name == "is-maximum-aged" || name == "is-partial-spf" || name == "is-flood-pending" || name == "rate-limit" || name == "is-nsr-ack-pending" || name == "nsr-flood-required" || name == "lsa-flood-required-post-fail-over" || name == "lsa-length" || name == "lsa-sync-state")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseSummaryTable::DatabaseSummaryTable()
    :
    database_summary(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseSummaryTable::DatabaseSummary>())
{
    database_summary->parent = this;

    yang_name = "database-summary-table"; yang_parent_name = "area"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseSummaryTable::~DatabaseSummaryTable()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseSummaryTable::has_data() const
{
    return (database_summary !=  nullptr && database_summary->has_data());
}

bool Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseSummaryTable::has_operation() const
{
    return is_set(yfilter)
	|| (database_summary !=  nullptr && database_summary->has_operation());
}

std::string Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseSummaryTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database-summary-table";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseSummaryTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseSummaryTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "database-summary")
    {
        if(database_summary == nullptr)
        {
            database_summary = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseSummaryTable::DatabaseSummary>();
        }
        return database_summary;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseSummaryTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(database_summary != nullptr)
    {
        children["database-summary"] = database_summary;
    }

    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseSummaryTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseSummaryTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseSummaryTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "database-summary")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseSummaryTable::DatabaseSummary::DatabaseSummary()
    :
    database_router_id{YType::str, "database-router-id"},
    is_opaque_database_capable{YType::boolean, "is-opaque-database-capable"}
    	,
    database_counters(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseSummaryTable::DatabaseSummary::DatabaseCounters>())
{
    database_counters->parent = this;

    yang_name = "database-summary"; yang_parent_name = "database-summary-table"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseSummaryTable::DatabaseSummary::~DatabaseSummary()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseSummaryTable::DatabaseSummary::has_data() const
{
    for (std::size_t index=0; index<area_database.size(); index++)
    {
        if(area_database[index]->has_data())
            return true;
    }
    return database_router_id.is_set
	|| is_opaque_database_capable.is_set
	|| (database_counters !=  nullptr && database_counters->has_data());
}

bool Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseSummaryTable::DatabaseSummary::has_operation() const
{
    for (std::size_t index=0; index<area_database.size(); index++)
    {
        if(area_database[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(database_router_id.yfilter)
	|| ydk::is_set(is_opaque_database_capable.yfilter)
	|| (database_counters !=  nullptr && database_counters->has_operation());
}

std::string Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseSummaryTable::DatabaseSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseSummaryTable::DatabaseSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (database_router_id.is_set || is_set(database_router_id.yfilter)) leaf_name_data.push_back(database_router_id.get_name_leafdata());
    if (is_opaque_database_capable.is_set || is_set(is_opaque_database_capable.yfilter)) leaf_name_data.push_back(is_opaque_database_capable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseSummaryTable::DatabaseSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "database-counters")
    {
        if(database_counters == nullptr)
        {
            database_counters = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseSummaryTable::DatabaseSummary::DatabaseCounters>();
        }
        return database_counters;
    }

    if(child_yang_name == "area-database")
    {
        auto c = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseSummaryTable::DatabaseSummary::AreaDatabase>();
        c->parent = this;
        area_database.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseSummaryTable::DatabaseSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(database_counters != nullptr)
    {
        children["database-counters"] = database_counters;
    }

    count = 0;
    for (auto const & c : area_database)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseSummaryTable::DatabaseSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "database-router-id")
    {
        database_router_id = value;
        database_router_id.value_namespace = name_space;
        database_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-opaque-database-capable")
    {
        is_opaque_database_capable = value;
        is_opaque_database_capable.value_namespace = name_space;
        is_opaque_database_capable.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseSummaryTable::DatabaseSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "database-router-id")
    {
        database_router_id.yfilter = yfilter;
    }
    if(value_path == "is-opaque-database-capable")
    {
        is_opaque_database_capable.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseSummaryTable::DatabaseSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "database-counters" || name == "area-database" || name == "database-router-id" || name == "is-opaque-database-capable")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseSummaryTable::DatabaseSummary::DatabaseCounters::DatabaseCounters()
    :
    lsa{YType::uint32, "lsa"},
    deleted_lsa{YType::uint32, "deleted-lsa"},
    max_age_lsa{YType::uint32, "max-age-lsa"},
    lsa_checksum{YType::uint32, "lsa-checksum"}
{

    yang_name = "database-counters"; yang_parent_name = "database-summary"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseSummaryTable::DatabaseSummary::DatabaseCounters::~DatabaseCounters()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseSummaryTable::DatabaseSummary::DatabaseCounters::has_data() const
{
    for (auto const & leaf : lsa.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : deleted_lsa.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : max_age_lsa.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : lsa_checksum.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseSummaryTable::DatabaseSummary::DatabaseCounters::has_operation() const
{
    for (auto const & leaf : lsa.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : deleted_lsa.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : max_age_lsa.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : lsa_checksum.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(lsa.yfilter)
	|| ydk::is_set(deleted_lsa.yfilter)
	|| ydk::is_set(max_age_lsa.yfilter)
	|| ydk::is_set(lsa_checksum.yfilter);
}

std::string Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseSummaryTable::DatabaseSummary::DatabaseCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database-counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseSummaryTable::DatabaseSummary::DatabaseCounters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto lsa_name_datas = lsa.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), lsa_name_datas.begin(), lsa_name_datas.end());
    auto deleted_lsa_name_datas = deleted_lsa.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), deleted_lsa_name_datas.begin(), deleted_lsa_name_datas.end());
    auto max_age_lsa_name_datas = max_age_lsa.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), max_age_lsa_name_datas.begin(), max_age_lsa_name_datas.end());
    auto lsa_checksum_name_datas = lsa_checksum.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), lsa_checksum_name_datas.begin(), lsa_checksum_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseSummaryTable::DatabaseSummary::DatabaseCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseSummaryTable::DatabaseSummary::DatabaseCounters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseSummaryTable::DatabaseSummary::DatabaseCounters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsa")
    {
        lsa.append(value);
    }
    if(value_path == "deleted-lsa")
    {
        deleted_lsa.append(value);
    }
    if(value_path == "max-age-lsa")
    {
        max_age_lsa.append(value);
    }
    if(value_path == "lsa-checksum")
    {
        lsa_checksum.append(value);
    }
}

void Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseSummaryTable::DatabaseSummary::DatabaseCounters::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsa")
    {
        lsa.yfilter = yfilter;
    }
    if(value_path == "deleted-lsa")
    {
        deleted_lsa.yfilter = yfilter;
    }
    if(value_path == "max-age-lsa")
    {
        max_age_lsa.yfilter = yfilter;
    }
    if(value_path == "lsa-checksum")
    {
        lsa_checksum.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseSummaryTable::DatabaseSummary::DatabaseCounters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsa" || name == "deleted-lsa" || name == "max-age-lsa" || name == "lsa-checksum")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseSummaryTable::DatabaseSummary::AreaDatabase::AreaDatabase()
    :
    lsa_area_id{YType::str, "lsa-area-id"}
    	,
    area_database_summary(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseSummaryTable::DatabaseSummary::AreaDatabase::AreaDatabaseSummary>())
{
    area_database_summary->parent = this;

    yang_name = "area-database"; yang_parent_name = "database-summary"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseSummaryTable::DatabaseSummary::AreaDatabase::~AreaDatabase()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseSummaryTable::DatabaseSummary::AreaDatabase::has_data() const
{
    return lsa_area_id.is_set
	|| (area_database_summary !=  nullptr && area_database_summary->has_data());
}

bool Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseSummaryTable::DatabaseSummary::AreaDatabase::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lsa_area_id.yfilter)
	|| (area_database_summary !=  nullptr && area_database_summary->has_operation());
}

std::string Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseSummaryTable::DatabaseSummary::AreaDatabase::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "area-database";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseSummaryTable::DatabaseSummary::AreaDatabase::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsa_area_id.is_set || is_set(lsa_area_id.yfilter)) leaf_name_data.push_back(lsa_area_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseSummaryTable::DatabaseSummary::AreaDatabase::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "area-database-summary")
    {
        if(area_database_summary == nullptr)
        {
            area_database_summary = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseSummaryTable::DatabaseSummary::AreaDatabase::AreaDatabaseSummary>();
        }
        return area_database_summary;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseSummaryTable::DatabaseSummary::AreaDatabase::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(area_database_summary != nullptr)
    {
        children["area-database-summary"] = area_database_summary;
    }

    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseSummaryTable::DatabaseSummary::AreaDatabase::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsa-area-id")
    {
        lsa_area_id = value;
        lsa_area_id.value_namespace = name_space;
        lsa_area_id.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseSummaryTable::DatabaseSummary::AreaDatabase::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsa-area-id")
    {
        lsa_area_id.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseSummaryTable::DatabaseSummary::AreaDatabase::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "area-database-summary" || name == "lsa-area-id")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseSummaryTable::DatabaseSummary::AreaDatabase::AreaDatabaseSummary::AreaDatabaseSummary()
    :
    lsa{YType::uint32, "lsa"},
    deleted_lsa{YType::uint32, "deleted-lsa"},
    max_age_lsa{YType::uint32, "max-age-lsa"},
    lsa_checksum{YType::uint32, "lsa-checksum"}
{

    yang_name = "area-database-summary"; yang_parent_name = "area-database"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseSummaryTable::DatabaseSummary::AreaDatabase::AreaDatabaseSummary::~AreaDatabaseSummary()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseSummaryTable::DatabaseSummary::AreaDatabase::AreaDatabaseSummary::has_data() const
{
    for (auto const & leaf : lsa.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : deleted_lsa.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : max_age_lsa.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : lsa_checksum.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseSummaryTable::DatabaseSummary::AreaDatabase::AreaDatabaseSummary::has_operation() const
{
    for (auto const & leaf : lsa.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : deleted_lsa.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : max_age_lsa.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : lsa_checksum.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(lsa.yfilter)
	|| ydk::is_set(deleted_lsa.yfilter)
	|| ydk::is_set(max_age_lsa.yfilter)
	|| ydk::is_set(lsa_checksum.yfilter);
}

std::string Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseSummaryTable::DatabaseSummary::AreaDatabase::AreaDatabaseSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "area-database-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseSummaryTable::DatabaseSummary::AreaDatabase::AreaDatabaseSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto lsa_name_datas = lsa.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), lsa_name_datas.begin(), lsa_name_datas.end());
    auto deleted_lsa_name_datas = deleted_lsa.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), deleted_lsa_name_datas.begin(), deleted_lsa_name_datas.end());
    auto max_age_lsa_name_datas = max_age_lsa.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), max_age_lsa_name_datas.begin(), max_age_lsa_name_datas.end());
    auto lsa_checksum_name_datas = lsa_checksum.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), lsa_checksum_name_datas.begin(), lsa_checksum_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseSummaryTable::DatabaseSummary::AreaDatabase::AreaDatabaseSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseSummaryTable::DatabaseSummary::AreaDatabase::AreaDatabaseSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseSummaryTable::DatabaseSummary::AreaDatabase::AreaDatabaseSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsa")
    {
        lsa.append(value);
    }
    if(value_path == "deleted-lsa")
    {
        deleted_lsa.append(value);
    }
    if(value_path == "max-age-lsa")
    {
        max_age_lsa.append(value);
    }
    if(value_path == "lsa-checksum")
    {
        lsa_checksum.append(value);
    }
}

void Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseSummaryTable::DatabaseSummary::AreaDatabase::AreaDatabaseSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsa")
    {
        lsa.yfilter = yfilter;
    }
    if(value_path == "deleted-lsa")
    {
        deleted_lsa.yfilter = yfilter;
    }
    if(value_path == "max-age-lsa")
    {
        max_age_lsa.yfilter = yfilter;
    }
    if(value_path == "lsa-checksum")
    {
        lsa_checksum.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::Areas::Area::DatabaseSummaryTable::DatabaseSummary::AreaDatabase::AreaDatabaseSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsa" || name == "deleted-lsa" || name == "max-age-lsa" || name == "lsa-checksum")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::InternalRoutes::InternalRoutes()
{

    yang_name = "internal-routes"; yang_parent_name = "default-vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::InternalRoutes::~InternalRoutes()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::InternalRoutes::has_data() const
{
    for (std::size_t index=0; index<internal_route.size(); index++)
    {
        if(internal_route[index]->has_data())
            return true;
    }
    return false;
}

bool Ospfv3::Processes::Process::DefaultVrf::InternalRoutes::has_operation() const
{
    for (std::size_t index=0; index<internal_route.size(); index++)
    {
        if(internal_route[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospfv3::Processes::Process::DefaultVrf::InternalRoutes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "internal-routes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::InternalRoutes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::InternalRoutes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "internal-route")
    {
        auto c = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::InternalRoutes::InternalRoute>();
        c->parent = this;
        internal_route.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::InternalRoutes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : internal_route)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::InternalRoutes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospfv3::Processes::Process::DefaultVrf::InternalRoutes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospfv3::Processes::Process::DefaultVrf::InternalRoutes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "internal-route")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::InternalRoutes::InternalRoute::InternalRoute()
    :
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint8, "prefix-length"},
    route_area_id{YType::uint32, "route-area-id"}
    	,
    route_topology(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::InternalRoutes::InternalRoute::RouteTopology>())
{
    route_topology->parent = this;

    yang_name = "internal-route"; yang_parent_name = "internal-routes"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::InternalRoutes::InternalRoute::~InternalRoute()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::InternalRoutes::InternalRoute::has_data() const
{
    for (std::size_t index=0; index<route_source.size(); index++)
    {
        if(route_source[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<route_path.size(); index++)
    {
        if(route_path[index]->has_data())
            return true;
    }
    return prefix.is_set
	|| prefix_length.is_set
	|| route_area_id.is_set
	|| (route_topology !=  nullptr && route_topology->has_data());
}

bool Ospfv3::Processes::Process::DefaultVrf::InternalRoutes::InternalRoute::has_operation() const
{
    for (std::size_t index=0; index<route_source.size(); index++)
    {
        if(route_source[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<route_path.size(); index++)
    {
        if(route_path[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(route_area_id.yfilter)
	|| (route_topology !=  nullptr && route_topology->has_operation());
}

std::string Ospfv3::Processes::Process::DefaultVrf::InternalRoutes::InternalRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "internal-route";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::InternalRoutes::InternalRoute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (route_area_id.is_set || is_set(route_area_id.yfilter)) leaf_name_data.push_back(route_area_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::InternalRoutes::InternalRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-topology")
    {
        if(route_topology == nullptr)
        {
            route_topology = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::InternalRoutes::InternalRoute::RouteTopology>();
        }
        return route_topology;
    }

    if(child_yang_name == "route-source")
    {
        auto c = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::InternalRoutes::InternalRoute::RouteSource>();
        c->parent = this;
        route_source.push_back(c);
        return c;
    }

    if(child_yang_name == "route-path")
    {
        auto c = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::InternalRoutes::InternalRoute::RoutePath>();
        c->parent = this;
        route_path.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::InternalRoutes::InternalRoute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(route_topology != nullptr)
    {
        children["route-topology"] = route_topology;
    }

    count = 0;
    for (auto const & c : route_source)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : route_path)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::InternalRoutes::InternalRoute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-area-id")
    {
        route_area_id = value;
        route_area_id.value_namespace = name_space;
        route_area_id.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::DefaultVrf::InternalRoutes::InternalRoute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "route-area-id")
    {
        route_area_id.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::InternalRoutes::InternalRoute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-topology" || name == "route-source" || name == "route-path" || name == "prefix" || name == "prefix-length" || name == "route-area-id")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::InternalRoutes::InternalRoute::RouteTopology::RouteTopology()
    :
    route_id{YType::str, "route-id"},
    route_distance{YType::uint32, "route-distance"},
    route_cost{YType::uint32, "route-cost"},
    route_type{YType::uint32, "route-type"}
{

    yang_name = "route-topology"; yang_parent_name = "internal-route"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::InternalRoutes::InternalRoute::RouteTopology::~RouteTopology()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::InternalRoutes::InternalRoute::RouteTopology::has_data() const
{
    return route_id.is_set
	|| route_distance.is_set
	|| route_cost.is_set
	|| route_type.is_set;
}

bool Ospfv3::Processes::Process::DefaultVrf::InternalRoutes::InternalRoute::RouteTopology::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_id.yfilter)
	|| ydk::is_set(route_distance.yfilter)
	|| ydk::is_set(route_cost.yfilter)
	|| ydk::is_set(route_type.yfilter);
}

std::string Ospfv3::Processes::Process::DefaultVrf::InternalRoutes::InternalRoute::RouteTopology::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-topology";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::InternalRoutes::InternalRoute::RouteTopology::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_id.is_set || is_set(route_id.yfilter)) leaf_name_data.push_back(route_id.get_name_leafdata());
    if (route_distance.is_set || is_set(route_distance.yfilter)) leaf_name_data.push_back(route_distance.get_name_leafdata());
    if (route_cost.is_set || is_set(route_cost.yfilter)) leaf_name_data.push_back(route_cost.get_name_leafdata());
    if (route_type.is_set || is_set(route_type.yfilter)) leaf_name_data.push_back(route_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::InternalRoutes::InternalRoute::RouteTopology::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::InternalRoutes::InternalRoute::RouteTopology::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::InternalRoutes::InternalRoute::RouteTopology::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-id")
    {
        route_id = value;
        route_id.value_namespace = name_space;
        route_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-distance")
    {
        route_distance = value;
        route_distance.value_namespace = name_space;
        route_distance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-cost")
    {
        route_cost = value;
        route_cost.value_namespace = name_space;
        route_cost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-type")
    {
        route_type = value;
        route_type.value_namespace = name_space;
        route_type.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::DefaultVrf::InternalRoutes::InternalRoute::RouteTopology::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-id")
    {
        route_id.yfilter = yfilter;
    }
    if(value_path == "route-distance")
    {
        route_distance.yfilter = yfilter;
    }
    if(value_path == "route-cost")
    {
        route_cost.yfilter = yfilter;
    }
    if(value_path == "route-type")
    {
        route_type.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::InternalRoutes::InternalRoute::RouteTopology::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-id" || name == "route-distance" || name == "route-cost" || name == "route-type")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::InternalRoutes::InternalRoute::RouteSource::RouteSource()
    :
    route_source_adversting_router{YType::str, "route-source-adversting-router"},
    route_source_id{YType::str, "route-source-id"},
    route_source_lsa_type{YType::uint32, "route-source-lsa-type"}
{

    yang_name = "route-source"; yang_parent_name = "internal-route"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::InternalRoutes::InternalRoute::RouteSource::~RouteSource()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::InternalRoutes::InternalRoute::RouteSource::has_data() const
{
    return route_source_adversting_router.is_set
	|| route_source_id.is_set
	|| route_source_lsa_type.is_set;
}

bool Ospfv3::Processes::Process::DefaultVrf::InternalRoutes::InternalRoute::RouteSource::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_source_adversting_router.yfilter)
	|| ydk::is_set(route_source_id.yfilter)
	|| ydk::is_set(route_source_lsa_type.yfilter);
}

std::string Ospfv3::Processes::Process::DefaultVrf::InternalRoutes::InternalRoute::RouteSource::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-source";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::InternalRoutes::InternalRoute::RouteSource::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_source_adversting_router.is_set || is_set(route_source_adversting_router.yfilter)) leaf_name_data.push_back(route_source_adversting_router.get_name_leafdata());
    if (route_source_id.is_set || is_set(route_source_id.yfilter)) leaf_name_data.push_back(route_source_id.get_name_leafdata());
    if (route_source_lsa_type.is_set || is_set(route_source_lsa_type.yfilter)) leaf_name_data.push_back(route_source_lsa_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::InternalRoutes::InternalRoute::RouteSource::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::InternalRoutes::InternalRoute::RouteSource::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::InternalRoutes::InternalRoute::RouteSource::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-source-adversting-router")
    {
        route_source_adversting_router = value;
        route_source_adversting_router.value_namespace = name_space;
        route_source_adversting_router.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-source-id")
    {
        route_source_id = value;
        route_source_id.value_namespace = name_space;
        route_source_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-source-lsa-type")
    {
        route_source_lsa_type = value;
        route_source_lsa_type.value_namespace = name_space;
        route_source_lsa_type.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::DefaultVrf::InternalRoutes::InternalRoute::RouteSource::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-source-adversting-router")
    {
        route_source_adversting_router.yfilter = yfilter;
    }
    if(value_path == "route-source-id")
    {
        route_source_id.yfilter = yfilter;
    }
    if(value_path == "route-source-lsa-type")
    {
        route_source_lsa_type.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::InternalRoutes::InternalRoute::RouteSource::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-source-adversting-router" || name == "route-source-id" || name == "route-source-lsa-type")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::InternalRoutes::InternalRoute::RoutePath::RoutePath()
    :
    interface_name{YType::str, "interface-name"},
    route_path_next_hop{YType::str, "route-path-next-hop"},
    route_path_id{YType::uint16, "route-path-id"}
    	,
    route_backup_path(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::InternalRoutes::InternalRoute::RoutePath::RouteBackupPath>())
{
    route_backup_path->parent = this;

    yang_name = "route-path"; yang_parent_name = "internal-route"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::InternalRoutes::InternalRoute::RoutePath::~RoutePath()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::InternalRoutes::InternalRoute::RoutePath::has_data() const
{
    return interface_name.is_set
	|| route_path_next_hop.is_set
	|| route_path_id.is_set
	|| (route_backup_path !=  nullptr && route_backup_path->has_data());
}

bool Ospfv3::Processes::Process::DefaultVrf::InternalRoutes::InternalRoute::RoutePath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(route_path_next_hop.yfilter)
	|| ydk::is_set(route_path_id.yfilter)
	|| (route_backup_path !=  nullptr && route_backup_path->has_operation());
}

std::string Ospfv3::Processes::Process::DefaultVrf::InternalRoutes::InternalRoute::RoutePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::InternalRoutes::InternalRoute::RoutePath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (route_path_next_hop.is_set || is_set(route_path_next_hop.yfilter)) leaf_name_data.push_back(route_path_next_hop.get_name_leafdata());
    if (route_path_id.is_set || is_set(route_path_id.yfilter)) leaf_name_data.push_back(route_path_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::InternalRoutes::InternalRoute::RoutePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-backup-path")
    {
        if(route_backup_path == nullptr)
        {
            route_backup_path = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::InternalRoutes::InternalRoute::RoutePath::RouteBackupPath>();
        }
        return route_backup_path;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::InternalRoutes::InternalRoute::RoutePath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(route_backup_path != nullptr)
    {
        children["route-backup-path"] = route_backup_path;
    }

    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::InternalRoutes::InternalRoute::RoutePath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-path-next-hop")
    {
        route_path_next_hop = value;
        route_path_next_hop.value_namespace = name_space;
        route_path_next_hop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-path-id")
    {
        route_path_id = value;
        route_path_id.value_namespace = name_space;
        route_path_id.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::DefaultVrf::InternalRoutes::InternalRoute::RoutePath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "route-path-next-hop")
    {
        route_path_next_hop.yfilter = yfilter;
    }
    if(value_path == "route-path-id")
    {
        route_path_id.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::InternalRoutes::InternalRoute::RoutePath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-backup-path" || name == "interface-name" || name == "route-path-next-hop" || name == "route-path-id")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::InternalRoutes::InternalRoute::RoutePath::RouteBackupPath::RouteBackupPath()
    :
    backup_route_interface_name{YType::str, "backup-route-interface-name"},
    backup_route_next_hop_address{YType::str, "backup-route-next-hop-address"},
    backup_route_source{YType::str, "backup-route-source"},
    backup_metric{YType::uint32, "backup-metric"},
    primary_path{YType::boolean, "primary-path"},
    line_card_disjoint{YType::boolean, "line-card-disjoint"},
    downstream{YType::boolean, "downstream"},
    node_protect{YType::boolean, "node-protect"},
    srlg_disjoint{YType::boolean, "srlg-disjoint"}
{

    yang_name = "route-backup-path"; yang_parent_name = "route-path"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::InternalRoutes::InternalRoute::RoutePath::RouteBackupPath::~RouteBackupPath()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::InternalRoutes::InternalRoute::RoutePath::RouteBackupPath::has_data() const
{
    return backup_route_interface_name.is_set
	|| backup_route_next_hop_address.is_set
	|| backup_route_source.is_set
	|| backup_metric.is_set
	|| primary_path.is_set
	|| line_card_disjoint.is_set
	|| downstream.is_set
	|| node_protect.is_set
	|| srlg_disjoint.is_set;
}

bool Ospfv3::Processes::Process::DefaultVrf::InternalRoutes::InternalRoute::RoutePath::RouteBackupPath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(backup_route_interface_name.yfilter)
	|| ydk::is_set(backup_route_next_hop_address.yfilter)
	|| ydk::is_set(backup_route_source.yfilter)
	|| ydk::is_set(backup_metric.yfilter)
	|| ydk::is_set(primary_path.yfilter)
	|| ydk::is_set(line_card_disjoint.yfilter)
	|| ydk::is_set(downstream.yfilter)
	|| ydk::is_set(node_protect.yfilter)
	|| ydk::is_set(srlg_disjoint.yfilter);
}

std::string Ospfv3::Processes::Process::DefaultVrf::InternalRoutes::InternalRoute::RoutePath::RouteBackupPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-backup-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::InternalRoutes::InternalRoute::RoutePath::RouteBackupPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (backup_route_interface_name.is_set || is_set(backup_route_interface_name.yfilter)) leaf_name_data.push_back(backup_route_interface_name.get_name_leafdata());
    if (backup_route_next_hop_address.is_set || is_set(backup_route_next_hop_address.yfilter)) leaf_name_data.push_back(backup_route_next_hop_address.get_name_leafdata());
    if (backup_route_source.is_set || is_set(backup_route_source.yfilter)) leaf_name_data.push_back(backup_route_source.get_name_leafdata());
    if (backup_metric.is_set || is_set(backup_metric.yfilter)) leaf_name_data.push_back(backup_metric.get_name_leafdata());
    if (primary_path.is_set || is_set(primary_path.yfilter)) leaf_name_data.push_back(primary_path.get_name_leafdata());
    if (line_card_disjoint.is_set || is_set(line_card_disjoint.yfilter)) leaf_name_data.push_back(line_card_disjoint.get_name_leafdata());
    if (downstream.is_set || is_set(downstream.yfilter)) leaf_name_data.push_back(downstream.get_name_leafdata());
    if (node_protect.is_set || is_set(node_protect.yfilter)) leaf_name_data.push_back(node_protect.get_name_leafdata());
    if (srlg_disjoint.is_set || is_set(srlg_disjoint.yfilter)) leaf_name_data.push_back(srlg_disjoint.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::InternalRoutes::InternalRoute::RoutePath::RouteBackupPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::InternalRoutes::InternalRoute::RoutePath::RouteBackupPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::InternalRoutes::InternalRoute::RoutePath::RouteBackupPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "backup-route-interface-name")
    {
        backup_route_interface_name = value;
        backup_route_interface_name.value_namespace = name_space;
        backup_route_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-route-next-hop-address")
    {
        backup_route_next_hop_address = value;
        backup_route_next_hop_address.value_namespace = name_space;
        backup_route_next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-route-source")
    {
        backup_route_source = value;
        backup_route_source.value_namespace = name_space;
        backup_route_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-metric")
    {
        backup_metric = value;
        backup_metric.value_namespace = name_space;
        backup_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "primary-path")
    {
        primary_path = value;
        primary_path.value_namespace = name_space;
        primary_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "line-card-disjoint")
    {
        line_card_disjoint = value;
        line_card_disjoint.value_namespace = name_space;
        line_card_disjoint.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "downstream")
    {
        downstream = value;
        downstream.value_namespace = name_space;
        downstream.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-protect")
    {
        node_protect = value;
        node_protect.value_namespace = name_space;
        node_protect.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srlg-disjoint")
    {
        srlg_disjoint = value;
        srlg_disjoint.value_namespace = name_space;
        srlg_disjoint.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::DefaultVrf::InternalRoutes::InternalRoute::RoutePath::RouteBackupPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "backup-route-interface-name")
    {
        backup_route_interface_name.yfilter = yfilter;
    }
    if(value_path == "backup-route-next-hop-address")
    {
        backup_route_next_hop_address.yfilter = yfilter;
    }
    if(value_path == "backup-route-source")
    {
        backup_route_source.yfilter = yfilter;
    }
    if(value_path == "backup-metric")
    {
        backup_metric.yfilter = yfilter;
    }
    if(value_path == "primary-path")
    {
        primary_path.yfilter = yfilter;
    }
    if(value_path == "line-card-disjoint")
    {
        line_card_disjoint.yfilter = yfilter;
    }
    if(value_path == "downstream")
    {
        downstream.yfilter = yfilter;
    }
    if(value_path == "node-protect")
    {
        node_protect.yfilter = yfilter;
    }
    if(value_path == "srlg-disjoint")
    {
        srlg_disjoint.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::InternalRoutes::InternalRoute::RoutePath::RouteBackupPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "backup-route-interface-name" || name == "backup-route-next-hop-address" || name == "backup-route-source" || name == "backup-metric" || name == "primary-path" || name == "line-card-disjoint" || name == "downstream" || name == "node-protect" || name == "srlg-disjoint")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::ProtocolAreas::ProtocolAreas()
{

    yang_name = "protocol-areas"; yang_parent_name = "default-vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::ProtocolAreas::~ProtocolAreas()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::ProtocolAreas::has_data() const
{
    for (std::size_t index=0; index<protocol_area.size(); index++)
    {
        if(protocol_area[index]->has_data())
            return true;
    }
    return false;
}

bool Ospfv3::Processes::Process::DefaultVrf::ProtocolAreas::has_operation() const
{
    for (std::size_t index=0; index<protocol_area.size(); index++)
    {
        if(protocol_area[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospfv3::Processes::Process::DefaultVrf::ProtocolAreas::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol-areas";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::ProtocolAreas::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::ProtocolAreas::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "protocol-area")
    {
        auto c = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::ProtocolAreas::ProtocolArea>();
        c->parent = this;
        protocol_area.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::ProtocolAreas::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : protocol_area)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::ProtocolAreas::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospfv3::Processes::Process::DefaultVrf::ProtocolAreas::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospfv3::Processes::Process::DefaultVrf::ProtocolAreas::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocol-area")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::ProtocolAreas::ProtocolArea::ProtocolArea()
    :
    area_id{YType::str, "area-id"},
    protocol_area_id{YType::str, "protocol-area-id"},
    distribute_list_in{YType::str, "distribute-list-in"}
{

    yang_name = "protocol-area"; yang_parent_name = "protocol-areas"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::ProtocolAreas::ProtocolArea::~ProtocolArea()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::ProtocolAreas::ProtocolArea::has_data() const
{
    for (std::size_t index=0; index<protocol_interface.size(); index++)
    {
        if(protocol_interface[index]->has_data())
            return true;
    }
    return area_id.is_set
	|| protocol_area_id.is_set
	|| distribute_list_in.is_set;
}

bool Ospfv3::Processes::Process::DefaultVrf::ProtocolAreas::ProtocolArea::has_operation() const
{
    for (std::size_t index=0; index<protocol_interface.size(); index++)
    {
        if(protocol_interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(area_id.yfilter)
	|| ydk::is_set(protocol_area_id.yfilter)
	|| ydk::is_set(distribute_list_in.yfilter);
}

std::string Ospfv3::Processes::Process::DefaultVrf::ProtocolAreas::ProtocolArea::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol-area" <<"[area-id='" <<area_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::ProtocolAreas::ProtocolArea::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area_id.is_set || is_set(area_id.yfilter)) leaf_name_data.push_back(area_id.get_name_leafdata());
    if (protocol_area_id.is_set || is_set(protocol_area_id.yfilter)) leaf_name_data.push_back(protocol_area_id.get_name_leafdata());
    if (distribute_list_in.is_set || is_set(distribute_list_in.yfilter)) leaf_name_data.push_back(distribute_list_in.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::ProtocolAreas::ProtocolArea::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "protocol-interface")
    {
        auto c = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::ProtocolAreas::ProtocolArea::ProtocolInterface>();
        c->parent = this;
        protocol_interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::ProtocolAreas::ProtocolArea::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : protocol_interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::ProtocolAreas::ProtocolArea::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "area-id")
    {
        area_id = value;
        area_id.value_namespace = name_space;
        area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol-area-id")
    {
        protocol_area_id = value;
        protocol_area_id.value_namespace = name_space;
        protocol_area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "distribute-list-in")
    {
        distribute_list_in = value;
        distribute_list_in.value_namespace = name_space;
        distribute_list_in.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::DefaultVrf::ProtocolAreas::ProtocolArea::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "area-id")
    {
        area_id.yfilter = yfilter;
    }
    if(value_path == "protocol-area-id")
    {
        protocol_area_id.yfilter = yfilter;
    }
    if(value_path == "distribute-list-in")
    {
        distribute_list_in.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::ProtocolAreas::ProtocolArea::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocol-interface" || name == "area-id" || name == "protocol-area-id" || name == "distribute-list-in")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::ProtocolAreas::ProtocolArea::ProtocolInterface::ProtocolInterface()
    :
    interface_name{YType::str, "interface-name"},
    distribute_list_in{YType::str, "distribute-list-in"}
{

    yang_name = "protocol-interface"; yang_parent_name = "protocol-area"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::ProtocolAreas::ProtocolArea::ProtocolInterface::~ProtocolInterface()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::ProtocolAreas::ProtocolArea::ProtocolInterface::has_data() const
{
    return interface_name.is_set
	|| distribute_list_in.is_set;
}

bool Ospfv3::Processes::Process::DefaultVrf::ProtocolAreas::ProtocolArea::ProtocolInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(distribute_list_in.yfilter);
}

std::string Ospfv3::Processes::Process::DefaultVrf::ProtocolAreas::ProtocolArea::ProtocolInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol-interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::ProtocolAreas::ProtocolArea::ProtocolInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (distribute_list_in.is_set || is_set(distribute_list_in.yfilter)) leaf_name_data.push_back(distribute_list_in.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::ProtocolAreas::ProtocolArea::ProtocolInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::ProtocolAreas::ProtocolArea::ProtocolInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::ProtocolAreas::ProtocolArea::ProtocolInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "distribute-list-in")
    {
        distribute_list_in = value;
        distribute_list_in.value_namespace = name_space;
        distribute_list_in.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::DefaultVrf::ProtocolAreas::ProtocolArea::ProtocolInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "distribute-list-in")
    {
        distribute_list_in.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::ProtocolAreas::ProtocolArea::ProtocolInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "distribute-list-in")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::ConnectedRoutes::ConnectedRoutes()
{

    yang_name = "connected-routes"; yang_parent_name = "default-vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::ConnectedRoutes::~ConnectedRoutes()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::ConnectedRoutes::has_data() const
{
    for (std::size_t index=0; index<connected_route.size(); index++)
    {
        if(connected_route[index]->has_data())
            return true;
    }
    return false;
}

bool Ospfv3::Processes::Process::DefaultVrf::ConnectedRoutes::has_operation() const
{
    for (std::size_t index=0; index<connected_route.size(); index++)
    {
        if(connected_route[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospfv3::Processes::Process::DefaultVrf::ConnectedRoutes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connected-routes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::ConnectedRoutes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::ConnectedRoutes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "connected-route")
    {
        auto c = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::ConnectedRoutes::ConnectedRoute>();
        c->parent = this;
        connected_route.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::ConnectedRoutes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : connected_route)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::ConnectedRoutes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospfv3::Processes::Process::DefaultVrf::ConnectedRoutes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospfv3::Processes::Process::DefaultVrf::ConnectedRoutes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "connected-route")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::ConnectedRoutes::ConnectedRoute::ConnectedRoute()
    :
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint8, "prefix-length"}
    	,
    route_topology(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::ConnectedRoutes::ConnectedRoute::RouteTopology>())
{
    route_topology->parent = this;

    yang_name = "connected-route"; yang_parent_name = "connected-routes"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::ConnectedRoutes::ConnectedRoute::~ConnectedRoute()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::ConnectedRoutes::ConnectedRoute::has_data() const
{
    for (std::size_t index=0; index<route_path.size(); index++)
    {
        if(route_path[index]->has_data())
            return true;
    }
    return prefix.is_set
	|| prefix_length.is_set
	|| (route_topology !=  nullptr && route_topology->has_data());
}

bool Ospfv3::Processes::Process::DefaultVrf::ConnectedRoutes::ConnectedRoute::has_operation() const
{
    for (std::size_t index=0; index<route_path.size(); index++)
    {
        if(route_path[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| (route_topology !=  nullptr && route_topology->has_operation());
}

std::string Ospfv3::Processes::Process::DefaultVrf::ConnectedRoutes::ConnectedRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connected-route";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::ConnectedRoutes::ConnectedRoute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::ConnectedRoutes::ConnectedRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-topology")
    {
        if(route_topology == nullptr)
        {
            route_topology = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::ConnectedRoutes::ConnectedRoute::RouteTopology>();
        }
        return route_topology;
    }

    if(child_yang_name == "route-path")
    {
        auto c = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::ConnectedRoutes::ConnectedRoute::RoutePath>();
        c->parent = this;
        route_path.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::ConnectedRoutes::ConnectedRoute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(route_topology != nullptr)
    {
        children["route-topology"] = route_topology;
    }

    count = 0;
    for (auto const & c : route_path)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::ConnectedRoutes::ConnectedRoute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::DefaultVrf::ConnectedRoutes::ConnectedRoute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::ConnectedRoutes::ConnectedRoute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-topology" || name == "route-path" || name == "prefix" || name == "prefix-length")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::ConnectedRoutes::ConnectedRoute::RouteTopology::RouteTopology()
    :
    route_id{YType::str, "route-id"},
    route_distance{YType::uint32, "route-distance"},
    route_cost{YType::uint32, "route-cost"},
    route_type{YType::uint32, "route-type"}
{

    yang_name = "route-topology"; yang_parent_name = "connected-route"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::ConnectedRoutes::ConnectedRoute::RouteTopology::~RouteTopology()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::ConnectedRoutes::ConnectedRoute::RouteTopology::has_data() const
{
    return route_id.is_set
	|| route_distance.is_set
	|| route_cost.is_set
	|| route_type.is_set;
}

bool Ospfv3::Processes::Process::DefaultVrf::ConnectedRoutes::ConnectedRoute::RouteTopology::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_id.yfilter)
	|| ydk::is_set(route_distance.yfilter)
	|| ydk::is_set(route_cost.yfilter)
	|| ydk::is_set(route_type.yfilter);
}

std::string Ospfv3::Processes::Process::DefaultVrf::ConnectedRoutes::ConnectedRoute::RouteTopology::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-topology";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::ConnectedRoutes::ConnectedRoute::RouteTopology::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_id.is_set || is_set(route_id.yfilter)) leaf_name_data.push_back(route_id.get_name_leafdata());
    if (route_distance.is_set || is_set(route_distance.yfilter)) leaf_name_data.push_back(route_distance.get_name_leafdata());
    if (route_cost.is_set || is_set(route_cost.yfilter)) leaf_name_data.push_back(route_cost.get_name_leafdata());
    if (route_type.is_set || is_set(route_type.yfilter)) leaf_name_data.push_back(route_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::ConnectedRoutes::ConnectedRoute::RouteTopology::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::ConnectedRoutes::ConnectedRoute::RouteTopology::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::ConnectedRoutes::ConnectedRoute::RouteTopology::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-id")
    {
        route_id = value;
        route_id.value_namespace = name_space;
        route_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-distance")
    {
        route_distance = value;
        route_distance.value_namespace = name_space;
        route_distance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-cost")
    {
        route_cost = value;
        route_cost.value_namespace = name_space;
        route_cost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-type")
    {
        route_type = value;
        route_type.value_namespace = name_space;
        route_type.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::DefaultVrf::ConnectedRoutes::ConnectedRoute::RouteTopology::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-id")
    {
        route_id.yfilter = yfilter;
    }
    if(value_path == "route-distance")
    {
        route_distance.yfilter = yfilter;
    }
    if(value_path == "route-cost")
    {
        route_cost.yfilter = yfilter;
    }
    if(value_path == "route-type")
    {
        route_type.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::ConnectedRoutes::ConnectedRoute::RouteTopology::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-id" || name == "route-distance" || name == "route-cost" || name == "route-type")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::ConnectedRoutes::ConnectedRoute::RoutePath::RoutePath()
    :
    interface_name{YType::str, "interface-name"},
    route_path_next_hop{YType::str, "route-path-next-hop"},
    route_path_id{YType::uint16, "route-path-id"}
    	,
    route_backup_path(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::ConnectedRoutes::ConnectedRoute::RoutePath::RouteBackupPath>())
{
    route_backup_path->parent = this;

    yang_name = "route-path"; yang_parent_name = "connected-route"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::ConnectedRoutes::ConnectedRoute::RoutePath::~RoutePath()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::ConnectedRoutes::ConnectedRoute::RoutePath::has_data() const
{
    return interface_name.is_set
	|| route_path_next_hop.is_set
	|| route_path_id.is_set
	|| (route_backup_path !=  nullptr && route_backup_path->has_data());
}

bool Ospfv3::Processes::Process::DefaultVrf::ConnectedRoutes::ConnectedRoute::RoutePath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(route_path_next_hop.yfilter)
	|| ydk::is_set(route_path_id.yfilter)
	|| (route_backup_path !=  nullptr && route_backup_path->has_operation());
}

std::string Ospfv3::Processes::Process::DefaultVrf::ConnectedRoutes::ConnectedRoute::RoutePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::ConnectedRoutes::ConnectedRoute::RoutePath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (route_path_next_hop.is_set || is_set(route_path_next_hop.yfilter)) leaf_name_data.push_back(route_path_next_hop.get_name_leafdata());
    if (route_path_id.is_set || is_set(route_path_id.yfilter)) leaf_name_data.push_back(route_path_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::ConnectedRoutes::ConnectedRoute::RoutePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-backup-path")
    {
        if(route_backup_path == nullptr)
        {
            route_backup_path = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::ConnectedRoutes::ConnectedRoute::RoutePath::RouteBackupPath>();
        }
        return route_backup_path;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::ConnectedRoutes::ConnectedRoute::RoutePath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(route_backup_path != nullptr)
    {
        children["route-backup-path"] = route_backup_path;
    }

    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::ConnectedRoutes::ConnectedRoute::RoutePath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-path-next-hop")
    {
        route_path_next_hop = value;
        route_path_next_hop.value_namespace = name_space;
        route_path_next_hop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-path-id")
    {
        route_path_id = value;
        route_path_id.value_namespace = name_space;
        route_path_id.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::DefaultVrf::ConnectedRoutes::ConnectedRoute::RoutePath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "route-path-next-hop")
    {
        route_path_next_hop.yfilter = yfilter;
    }
    if(value_path == "route-path-id")
    {
        route_path_id.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::ConnectedRoutes::ConnectedRoute::RoutePath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-backup-path" || name == "interface-name" || name == "route-path-next-hop" || name == "route-path-id")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::ConnectedRoutes::ConnectedRoute::RoutePath::RouteBackupPath::RouteBackupPath()
    :
    backup_route_interface_name{YType::str, "backup-route-interface-name"},
    backup_route_next_hop_address{YType::str, "backup-route-next-hop-address"},
    backup_route_source{YType::str, "backup-route-source"},
    backup_metric{YType::uint32, "backup-metric"},
    primary_path{YType::boolean, "primary-path"},
    line_card_disjoint{YType::boolean, "line-card-disjoint"},
    downstream{YType::boolean, "downstream"},
    node_protect{YType::boolean, "node-protect"},
    srlg_disjoint{YType::boolean, "srlg-disjoint"}
{

    yang_name = "route-backup-path"; yang_parent_name = "route-path"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::ConnectedRoutes::ConnectedRoute::RoutePath::RouteBackupPath::~RouteBackupPath()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::ConnectedRoutes::ConnectedRoute::RoutePath::RouteBackupPath::has_data() const
{
    return backup_route_interface_name.is_set
	|| backup_route_next_hop_address.is_set
	|| backup_route_source.is_set
	|| backup_metric.is_set
	|| primary_path.is_set
	|| line_card_disjoint.is_set
	|| downstream.is_set
	|| node_protect.is_set
	|| srlg_disjoint.is_set;
}

bool Ospfv3::Processes::Process::DefaultVrf::ConnectedRoutes::ConnectedRoute::RoutePath::RouteBackupPath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(backup_route_interface_name.yfilter)
	|| ydk::is_set(backup_route_next_hop_address.yfilter)
	|| ydk::is_set(backup_route_source.yfilter)
	|| ydk::is_set(backup_metric.yfilter)
	|| ydk::is_set(primary_path.yfilter)
	|| ydk::is_set(line_card_disjoint.yfilter)
	|| ydk::is_set(downstream.yfilter)
	|| ydk::is_set(node_protect.yfilter)
	|| ydk::is_set(srlg_disjoint.yfilter);
}

std::string Ospfv3::Processes::Process::DefaultVrf::ConnectedRoutes::ConnectedRoute::RoutePath::RouteBackupPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-backup-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::ConnectedRoutes::ConnectedRoute::RoutePath::RouteBackupPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (backup_route_interface_name.is_set || is_set(backup_route_interface_name.yfilter)) leaf_name_data.push_back(backup_route_interface_name.get_name_leafdata());
    if (backup_route_next_hop_address.is_set || is_set(backup_route_next_hop_address.yfilter)) leaf_name_data.push_back(backup_route_next_hop_address.get_name_leafdata());
    if (backup_route_source.is_set || is_set(backup_route_source.yfilter)) leaf_name_data.push_back(backup_route_source.get_name_leafdata());
    if (backup_metric.is_set || is_set(backup_metric.yfilter)) leaf_name_data.push_back(backup_metric.get_name_leafdata());
    if (primary_path.is_set || is_set(primary_path.yfilter)) leaf_name_data.push_back(primary_path.get_name_leafdata());
    if (line_card_disjoint.is_set || is_set(line_card_disjoint.yfilter)) leaf_name_data.push_back(line_card_disjoint.get_name_leafdata());
    if (downstream.is_set || is_set(downstream.yfilter)) leaf_name_data.push_back(downstream.get_name_leafdata());
    if (node_protect.is_set || is_set(node_protect.yfilter)) leaf_name_data.push_back(node_protect.get_name_leafdata());
    if (srlg_disjoint.is_set || is_set(srlg_disjoint.yfilter)) leaf_name_data.push_back(srlg_disjoint.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::ConnectedRoutes::ConnectedRoute::RoutePath::RouteBackupPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::ConnectedRoutes::ConnectedRoute::RoutePath::RouteBackupPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::ConnectedRoutes::ConnectedRoute::RoutePath::RouteBackupPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "backup-route-interface-name")
    {
        backup_route_interface_name = value;
        backup_route_interface_name.value_namespace = name_space;
        backup_route_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-route-next-hop-address")
    {
        backup_route_next_hop_address = value;
        backup_route_next_hop_address.value_namespace = name_space;
        backup_route_next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-route-source")
    {
        backup_route_source = value;
        backup_route_source.value_namespace = name_space;
        backup_route_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-metric")
    {
        backup_metric = value;
        backup_metric.value_namespace = name_space;
        backup_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "primary-path")
    {
        primary_path = value;
        primary_path.value_namespace = name_space;
        primary_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "line-card-disjoint")
    {
        line_card_disjoint = value;
        line_card_disjoint.value_namespace = name_space;
        line_card_disjoint.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "downstream")
    {
        downstream = value;
        downstream.value_namespace = name_space;
        downstream.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-protect")
    {
        node_protect = value;
        node_protect.value_namespace = name_space;
        node_protect.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srlg-disjoint")
    {
        srlg_disjoint = value;
        srlg_disjoint.value_namespace = name_space;
        srlg_disjoint.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::DefaultVrf::ConnectedRoutes::ConnectedRoute::RoutePath::RouteBackupPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "backup-route-interface-name")
    {
        backup_route_interface_name.yfilter = yfilter;
    }
    if(value_path == "backup-route-next-hop-address")
    {
        backup_route_next_hop_address.yfilter = yfilter;
    }
    if(value_path == "backup-route-source")
    {
        backup_route_source.yfilter = yfilter;
    }
    if(value_path == "backup-metric")
    {
        backup_metric.yfilter = yfilter;
    }
    if(value_path == "primary-path")
    {
        primary_path.yfilter = yfilter;
    }
    if(value_path == "line-card-disjoint")
    {
        line_card_disjoint.yfilter = yfilter;
    }
    if(value_path == "downstream")
    {
        downstream.yfilter = yfilter;
    }
    if(value_path == "node-protect")
    {
        node_protect.yfilter = yfilter;
    }
    if(value_path == "srlg-disjoint")
    {
        srlg_disjoint.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::ConnectedRoutes::ConnectedRoute::RoutePath::RouteBackupPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "backup-route-interface-name" || name == "backup-route-next-hop-address" || name == "backup-route-source" || name == "backup-metric" || name == "primary-path" || name == "line-card-disjoint" || name == "downstream" || name == "node-protect" || name == "srlg-disjoint")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::VrfStatistics()
    :
    protocol_stats(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::ProtocolStats>())
	,spf_stats(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::SpfStats>())
	,rawio_stats(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::RawioStats>())
	,prefix_priority_stats(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::PrefixPriorityStats>())
	,vrf_rib_batch_stats(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::VrfRibBatchStats>())
{
    protocol_stats->parent = this;
    spf_stats->parent = this;
    rawio_stats->parent = this;
    prefix_priority_stats->parent = this;
    vrf_rib_batch_stats->parent = this;

    yang_name = "vrf-statistics"; yang_parent_name = "default-vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::~VrfStatistics()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::has_data() const
{
    return (protocol_stats !=  nullptr && protocol_stats->has_data())
	|| (spf_stats !=  nullptr && spf_stats->has_data())
	|| (rawio_stats !=  nullptr && rawio_stats->has_data())
	|| (prefix_priority_stats !=  nullptr && prefix_priority_stats->has_data())
	|| (vrf_rib_batch_stats !=  nullptr && vrf_rib_batch_stats->has_data());
}

bool Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::has_operation() const
{
    return is_set(yfilter)
	|| (protocol_stats !=  nullptr && protocol_stats->has_operation())
	|| (spf_stats !=  nullptr && spf_stats->has_operation())
	|| (rawio_stats !=  nullptr && rawio_stats->has_operation())
	|| (prefix_priority_stats !=  nullptr && prefix_priority_stats->has_operation())
	|| (vrf_rib_batch_stats !=  nullptr && vrf_rib_batch_stats->has_operation());
}

std::string Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "protocol-stats")
    {
        if(protocol_stats == nullptr)
        {
            protocol_stats = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::ProtocolStats>();
        }
        return protocol_stats;
    }

    if(child_yang_name == "spf-stats")
    {
        if(spf_stats == nullptr)
        {
            spf_stats = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::SpfStats>();
        }
        return spf_stats;
    }

    if(child_yang_name == "rawio-stats")
    {
        if(rawio_stats == nullptr)
        {
            rawio_stats = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::RawioStats>();
        }
        return rawio_stats;
    }

    if(child_yang_name == "prefix-priority-stats")
    {
        if(prefix_priority_stats == nullptr)
        {
            prefix_priority_stats = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::PrefixPriorityStats>();
        }
        return prefix_priority_stats;
    }

    if(child_yang_name == "vrf-rib-batch-stats")
    {
        if(vrf_rib_batch_stats == nullptr)
        {
            vrf_rib_batch_stats = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::VrfRibBatchStats>();
        }
        return vrf_rib_batch_stats;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(protocol_stats != nullptr)
    {
        children["protocol-stats"] = protocol_stats;
    }

    if(spf_stats != nullptr)
    {
        children["spf-stats"] = spf_stats;
    }

    if(rawio_stats != nullptr)
    {
        children["rawio-stats"] = rawio_stats;
    }

    if(prefix_priority_stats != nullptr)
    {
        children["prefix-priority-stats"] = prefix_priority_stats;
    }

    if(vrf_rib_batch_stats != nullptr)
    {
        children["vrf-rib-batch-stats"] = vrf_rib_batch_stats;
    }

    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocol-stats" || name == "spf-stats" || name == "rawio-stats" || name == "prefix-priority-stats" || name == "vrf-rib-batch-stats")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::ProtocolStats::ProtocolStats()
{

    yang_name = "protocol-stats"; yang_parent_name = "vrf-statistics"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::ProtocolStats::~ProtocolStats()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::ProtocolStats::has_data() const
{
    for (std::size_t index=0; index<protocol_stat.size(); index++)
    {
        if(protocol_stat[index]->has_data())
            return true;
    }
    return false;
}

bool Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::ProtocolStats::has_operation() const
{
    for (std::size_t index=0; index<protocol_stat.size(); index++)
    {
        if(protocol_stat[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::ProtocolStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::ProtocolStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::ProtocolStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "protocol-stat")
    {
        auto c = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::ProtocolStats::ProtocolStat>();
        c->parent = this;
        protocol_stat.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::ProtocolStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : protocol_stat)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::ProtocolStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::ProtocolStats::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::ProtocolStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocol-stat")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::ProtocolStats::ProtocolStat::ProtocolStat()
    :
    interface_name{YType::str, "interface-name"},
    total_in_packets{YType::uint64, "total-in-packets"},
    hello_in_packets{YType::uint64, "hello-in-packets"},
    dbdes_in_packets{YType::uint64, "dbdes-in-packets"},
    dbdes_in_ls_as{YType::uint64, "dbdes-in-ls-as"},
    ls_req_in_packets{YType::uint64, "ls-req-in-packets"},
    ls_req_in_ls_as{YType::uint64, "ls-req-in-ls-as"},
    ls_upd_in_packets{YType::uint64, "ls-upd-in-packets"},
    ls_upd_in_ignored{YType::uint64, "ls-upd-in-ignored"},
    ls_upd_in_ls_as{YType::uint64, "ls-upd-in-ls-as"},
    ls_ack_in_packets{YType::uint64, "ls-ack-in-packets"},
    ls_ack_in_ls_as{YType::uint64, "ls-ack-in-ls-as"},
    total_out_packets{YType::uint64, "total-out-packets"},
    hello_out_packets{YType::uint64, "hello-out-packets"},
    dbdes_out_packets{YType::uint64, "dbdes-out-packets"},
    dbdes_out_ls_as{YType::uint64, "dbdes-out-ls-as"},
    ls_req_out_packets{YType::uint64, "ls-req-out-packets"},
    ls_req_out_ls_as{YType::uint64, "ls-req-out-ls-as"},
    ls_upd_out_packets{YType::uint64, "ls-upd-out-packets"},
    ls_upd_out_ls_as{YType::uint64, "ls-upd-out-ls-as"},
    ls_ack_out_packets{YType::uint64, "ls-ack-out-packets"},
    ls_ack_out_ls_as{YType::uint64, "ls-ack-out-ls-as"},
    dropped_in_gs{YType::uint64, "dropped-in-gs"},
    checksum_err{YType::uint64, "checksum-err"}
{

    yang_name = "protocol-stat"; yang_parent_name = "protocol-stats"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::ProtocolStats::ProtocolStat::~ProtocolStat()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::ProtocolStats::ProtocolStat::has_data() const
{
    return interface_name.is_set
	|| total_in_packets.is_set
	|| hello_in_packets.is_set
	|| dbdes_in_packets.is_set
	|| dbdes_in_ls_as.is_set
	|| ls_req_in_packets.is_set
	|| ls_req_in_ls_as.is_set
	|| ls_upd_in_packets.is_set
	|| ls_upd_in_ignored.is_set
	|| ls_upd_in_ls_as.is_set
	|| ls_ack_in_packets.is_set
	|| ls_ack_in_ls_as.is_set
	|| total_out_packets.is_set
	|| hello_out_packets.is_set
	|| dbdes_out_packets.is_set
	|| dbdes_out_ls_as.is_set
	|| ls_req_out_packets.is_set
	|| ls_req_out_ls_as.is_set
	|| ls_upd_out_packets.is_set
	|| ls_upd_out_ls_as.is_set
	|| ls_ack_out_packets.is_set
	|| ls_ack_out_ls_as.is_set
	|| dropped_in_gs.is_set
	|| checksum_err.is_set;
}

bool Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::ProtocolStats::ProtocolStat::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(total_in_packets.yfilter)
	|| ydk::is_set(hello_in_packets.yfilter)
	|| ydk::is_set(dbdes_in_packets.yfilter)
	|| ydk::is_set(dbdes_in_ls_as.yfilter)
	|| ydk::is_set(ls_req_in_packets.yfilter)
	|| ydk::is_set(ls_req_in_ls_as.yfilter)
	|| ydk::is_set(ls_upd_in_packets.yfilter)
	|| ydk::is_set(ls_upd_in_ignored.yfilter)
	|| ydk::is_set(ls_upd_in_ls_as.yfilter)
	|| ydk::is_set(ls_ack_in_packets.yfilter)
	|| ydk::is_set(ls_ack_in_ls_as.yfilter)
	|| ydk::is_set(total_out_packets.yfilter)
	|| ydk::is_set(hello_out_packets.yfilter)
	|| ydk::is_set(dbdes_out_packets.yfilter)
	|| ydk::is_set(dbdes_out_ls_as.yfilter)
	|| ydk::is_set(ls_req_out_packets.yfilter)
	|| ydk::is_set(ls_req_out_ls_as.yfilter)
	|| ydk::is_set(ls_upd_out_packets.yfilter)
	|| ydk::is_set(ls_upd_out_ls_as.yfilter)
	|| ydk::is_set(ls_ack_out_packets.yfilter)
	|| ydk::is_set(ls_ack_out_ls_as.yfilter)
	|| ydk::is_set(dropped_in_gs.yfilter)
	|| ydk::is_set(checksum_err.yfilter);
}

std::string Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::ProtocolStats::ProtocolStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol-stat" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::ProtocolStats::ProtocolStat::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (total_in_packets.is_set || is_set(total_in_packets.yfilter)) leaf_name_data.push_back(total_in_packets.get_name_leafdata());
    if (hello_in_packets.is_set || is_set(hello_in_packets.yfilter)) leaf_name_data.push_back(hello_in_packets.get_name_leafdata());
    if (dbdes_in_packets.is_set || is_set(dbdes_in_packets.yfilter)) leaf_name_data.push_back(dbdes_in_packets.get_name_leafdata());
    if (dbdes_in_ls_as.is_set || is_set(dbdes_in_ls_as.yfilter)) leaf_name_data.push_back(dbdes_in_ls_as.get_name_leafdata());
    if (ls_req_in_packets.is_set || is_set(ls_req_in_packets.yfilter)) leaf_name_data.push_back(ls_req_in_packets.get_name_leafdata());
    if (ls_req_in_ls_as.is_set || is_set(ls_req_in_ls_as.yfilter)) leaf_name_data.push_back(ls_req_in_ls_as.get_name_leafdata());
    if (ls_upd_in_packets.is_set || is_set(ls_upd_in_packets.yfilter)) leaf_name_data.push_back(ls_upd_in_packets.get_name_leafdata());
    if (ls_upd_in_ignored.is_set || is_set(ls_upd_in_ignored.yfilter)) leaf_name_data.push_back(ls_upd_in_ignored.get_name_leafdata());
    if (ls_upd_in_ls_as.is_set || is_set(ls_upd_in_ls_as.yfilter)) leaf_name_data.push_back(ls_upd_in_ls_as.get_name_leafdata());
    if (ls_ack_in_packets.is_set || is_set(ls_ack_in_packets.yfilter)) leaf_name_data.push_back(ls_ack_in_packets.get_name_leafdata());
    if (ls_ack_in_ls_as.is_set || is_set(ls_ack_in_ls_as.yfilter)) leaf_name_data.push_back(ls_ack_in_ls_as.get_name_leafdata());
    if (total_out_packets.is_set || is_set(total_out_packets.yfilter)) leaf_name_data.push_back(total_out_packets.get_name_leafdata());
    if (hello_out_packets.is_set || is_set(hello_out_packets.yfilter)) leaf_name_data.push_back(hello_out_packets.get_name_leafdata());
    if (dbdes_out_packets.is_set || is_set(dbdes_out_packets.yfilter)) leaf_name_data.push_back(dbdes_out_packets.get_name_leafdata());
    if (dbdes_out_ls_as.is_set || is_set(dbdes_out_ls_as.yfilter)) leaf_name_data.push_back(dbdes_out_ls_as.get_name_leafdata());
    if (ls_req_out_packets.is_set || is_set(ls_req_out_packets.yfilter)) leaf_name_data.push_back(ls_req_out_packets.get_name_leafdata());
    if (ls_req_out_ls_as.is_set || is_set(ls_req_out_ls_as.yfilter)) leaf_name_data.push_back(ls_req_out_ls_as.get_name_leafdata());
    if (ls_upd_out_packets.is_set || is_set(ls_upd_out_packets.yfilter)) leaf_name_data.push_back(ls_upd_out_packets.get_name_leafdata());
    if (ls_upd_out_ls_as.is_set || is_set(ls_upd_out_ls_as.yfilter)) leaf_name_data.push_back(ls_upd_out_ls_as.get_name_leafdata());
    if (ls_ack_out_packets.is_set || is_set(ls_ack_out_packets.yfilter)) leaf_name_data.push_back(ls_ack_out_packets.get_name_leafdata());
    if (ls_ack_out_ls_as.is_set || is_set(ls_ack_out_ls_as.yfilter)) leaf_name_data.push_back(ls_ack_out_ls_as.get_name_leafdata());
    if (dropped_in_gs.is_set || is_set(dropped_in_gs.yfilter)) leaf_name_data.push_back(dropped_in_gs.get_name_leafdata());
    if (checksum_err.is_set || is_set(checksum_err.yfilter)) leaf_name_data.push_back(checksum_err.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::ProtocolStats::ProtocolStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::ProtocolStats::ProtocolStat::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::ProtocolStats::ProtocolStat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-in-packets")
    {
        total_in_packets = value;
        total_in_packets.value_namespace = name_space;
        total_in_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-in-packets")
    {
        hello_in_packets = value;
        hello_in_packets.value_namespace = name_space;
        hello_in_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dbdes-in-packets")
    {
        dbdes_in_packets = value;
        dbdes_in_packets.value_namespace = name_space;
        dbdes_in_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dbdes-in-ls-as")
    {
        dbdes_in_ls_as = value;
        dbdes_in_ls_as.value_namespace = name_space;
        dbdes_in_ls_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ls-req-in-packets")
    {
        ls_req_in_packets = value;
        ls_req_in_packets.value_namespace = name_space;
        ls_req_in_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ls-req-in-ls-as")
    {
        ls_req_in_ls_as = value;
        ls_req_in_ls_as.value_namespace = name_space;
        ls_req_in_ls_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ls-upd-in-packets")
    {
        ls_upd_in_packets = value;
        ls_upd_in_packets.value_namespace = name_space;
        ls_upd_in_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ls-upd-in-ignored")
    {
        ls_upd_in_ignored = value;
        ls_upd_in_ignored.value_namespace = name_space;
        ls_upd_in_ignored.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ls-upd-in-ls-as")
    {
        ls_upd_in_ls_as = value;
        ls_upd_in_ls_as.value_namespace = name_space;
        ls_upd_in_ls_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ls-ack-in-packets")
    {
        ls_ack_in_packets = value;
        ls_ack_in_packets.value_namespace = name_space;
        ls_ack_in_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ls-ack-in-ls-as")
    {
        ls_ack_in_ls_as = value;
        ls_ack_in_ls_as.value_namespace = name_space;
        ls_ack_in_ls_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-out-packets")
    {
        total_out_packets = value;
        total_out_packets.value_namespace = name_space;
        total_out_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-out-packets")
    {
        hello_out_packets = value;
        hello_out_packets.value_namespace = name_space;
        hello_out_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dbdes-out-packets")
    {
        dbdes_out_packets = value;
        dbdes_out_packets.value_namespace = name_space;
        dbdes_out_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dbdes-out-ls-as")
    {
        dbdes_out_ls_as = value;
        dbdes_out_ls_as.value_namespace = name_space;
        dbdes_out_ls_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ls-req-out-packets")
    {
        ls_req_out_packets = value;
        ls_req_out_packets.value_namespace = name_space;
        ls_req_out_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ls-req-out-ls-as")
    {
        ls_req_out_ls_as = value;
        ls_req_out_ls_as.value_namespace = name_space;
        ls_req_out_ls_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ls-upd-out-packets")
    {
        ls_upd_out_packets = value;
        ls_upd_out_packets.value_namespace = name_space;
        ls_upd_out_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ls-upd-out-ls-as")
    {
        ls_upd_out_ls_as = value;
        ls_upd_out_ls_as.value_namespace = name_space;
        ls_upd_out_ls_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ls-ack-out-packets")
    {
        ls_ack_out_packets = value;
        ls_ack_out_packets.value_namespace = name_space;
        ls_ack_out_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ls-ack-out-ls-as")
    {
        ls_ack_out_ls_as = value;
        ls_ack_out_ls_as.value_namespace = name_space;
        ls_ack_out_ls_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dropped-in-gs")
    {
        dropped_in_gs = value;
        dropped_in_gs.value_namespace = name_space;
        dropped_in_gs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "checksum-err")
    {
        checksum_err = value;
        checksum_err.value_namespace = name_space;
        checksum_err.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::ProtocolStats::ProtocolStat::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "total-in-packets")
    {
        total_in_packets.yfilter = yfilter;
    }
    if(value_path == "hello-in-packets")
    {
        hello_in_packets.yfilter = yfilter;
    }
    if(value_path == "dbdes-in-packets")
    {
        dbdes_in_packets.yfilter = yfilter;
    }
    if(value_path == "dbdes-in-ls-as")
    {
        dbdes_in_ls_as.yfilter = yfilter;
    }
    if(value_path == "ls-req-in-packets")
    {
        ls_req_in_packets.yfilter = yfilter;
    }
    if(value_path == "ls-req-in-ls-as")
    {
        ls_req_in_ls_as.yfilter = yfilter;
    }
    if(value_path == "ls-upd-in-packets")
    {
        ls_upd_in_packets.yfilter = yfilter;
    }
    if(value_path == "ls-upd-in-ignored")
    {
        ls_upd_in_ignored.yfilter = yfilter;
    }
    if(value_path == "ls-upd-in-ls-as")
    {
        ls_upd_in_ls_as.yfilter = yfilter;
    }
    if(value_path == "ls-ack-in-packets")
    {
        ls_ack_in_packets.yfilter = yfilter;
    }
    if(value_path == "ls-ack-in-ls-as")
    {
        ls_ack_in_ls_as.yfilter = yfilter;
    }
    if(value_path == "total-out-packets")
    {
        total_out_packets.yfilter = yfilter;
    }
    if(value_path == "hello-out-packets")
    {
        hello_out_packets.yfilter = yfilter;
    }
    if(value_path == "dbdes-out-packets")
    {
        dbdes_out_packets.yfilter = yfilter;
    }
    if(value_path == "dbdes-out-ls-as")
    {
        dbdes_out_ls_as.yfilter = yfilter;
    }
    if(value_path == "ls-req-out-packets")
    {
        ls_req_out_packets.yfilter = yfilter;
    }
    if(value_path == "ls-req-out-ls-as")
    {
        ls_req_out_ls_as.yfilter = yfilter;
    }
    if(value_path == "ls-upd-out-packets")
    {
        ls_upd_out_packets.yfilter = yfilter;
    }
    if(value_path == "ls-upd-out-ls-as")
    {
        ls_upd_out_ls_as.yfilter = yfilter;
    }
    if(value_path == "ls-ack-out-packets")
    {
        ls_ack_out_packets.yfilter = yfilter;
    }
    if(value_path == "ls-ack-out-ls-as")
    {
        ls_ack_out_ls_as.yfilter = yfilter;
    }
    if(value_path == "dropped-in-gs")
    {
        dropped_in_gs.yfilter = yfilter;
    }
    if(value_path == "checksum-err")
    {
        checksum_err.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::ProtocolStats::ProtocolStat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "total-in-packets" || name == "hello-in-packets" || name == "dbdes-in-packets" || name == "dbdes-in-ls-as" || name == "ls-req-in-packets" || name == "ls-req-in-ls-as" || name == "ls-upd-in-packets" || name == "ls-upd-in-ignored" || name == "ls-upd-in-ls-as" || name == "ls-ack-in-packets" || name == "ls-ack-in-ls-as" || name == "total-out-packets" || name == "hello-out-packets" || name == "dbdes-out-packets" || name == "dbdes-out-ls-as" || name == "ls-req-out-packets" || name == "ls-req-out-ls-as" || name == "ls-upd-out-packets" || name == "ls-upd-out-ls-as" || name == "ls-ack-out-packets" || name == "ls-ack-out-ls-as" || name == "dropped-in-gs" || name == "checksum-err")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::SpfStats::SpfStats()
    :
    spf_header(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::SpfStats::SpfHeader>())
{
    spf_header->parent = this;

    yang_name = "spf-stats"; yang_parent_name = "vrf-statistics"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::SpfStats::~SpfStats()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::SpfStats::has_data() const
{
    for (std::size_t index=0; index<spf_runtime.size(); index++)
    {
        if(spf_runtime[index]->has_data())
            return true;
    }
    return (spf_header !=  nullptr && spf_header->has_data());
}

bool Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::SpfStats::has_operation() const
{
    for (std::size_t index=0; index<spf_runtime.size(); index++)
    {
        if(spf_runtime[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (spf_header !=  nullptr && spf_header->has_operation());
}

std::string Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::SpfStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spf-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::SpfStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::SpfStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "spf-header")
    {
        if(spf_header == nullptr)
        {
            spf_header = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::SpfStats::SpfHeader>();
        }
        return spf_header;
    }

    if(child_yang_name == "spf-runtime")
    {
        auto c = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::SpfStats::SpfRuntime>();
        c->parent = this;
        spf_runtime.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::SpfStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(spf_header != nullptr)
    {
        children["spf-header"] = spf_header;
    }

    count = 0;
    for (auto const & c : spf_runtime)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::SpfStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::SpfStats::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::SpfStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "spf-header" || name == "spf-runtime")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::SpfStats::SpfHeader::SpfHeader()
    :
    header_router_id{YType::str, "header-router-id"},
    header_sp_fs{YType::uint32, "header-sp-fs"}
{

    yang_name = "spf-header"; yang_parent_name = "spf-stats"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::SpfStats::SpfHeader::~SpfHeader()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::SpfStats::SpfHeader::has_data() const
{
    for (std::size_t index=0; index<area_summary.size(); index++)
    {
        if(area_summary[index]->has_data())
            return true;
    }
    return header_router_id.is_set
	|| header_sp_fs.is_set;
}

bool Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::SpfStats::SpfHeader::has_operation() const
{
    for (std::size_t index=0; index<area_summary.size(); index++)
    {
        if(area_summary[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(header_router_id.yfilter)
	|| ydk::is_set(header_sp_fs.yfilter);
}

std::string Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::SpfStats::SpfHeader::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spf-header";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::SpfStats::SpfHeader::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (header_router_id.is_set || is_set(header_router_id.yfilter)) leaf_name_data.push_back(header_router_id.get_name_leafdata());
    if (header_sp_fs.is_set || is_set(header_sp_fs.yfilter)) leaf_name_data.push_back(header_sp_fs.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::SpfStats::SpfHeader::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "area-summary")
    {
        auto c = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::SpfStats::SpfHeader::AreaSummary>();
        c->parent = this;
        area_summary.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::SpfStats::SpfHeader::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : area_summary)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::SpfStats::SpfHeader::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "header-router-id")
    {
        header_router_id = value;
        header_router_id.value_namespace = name_space;
        header_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "header-sp-fs")
    {
        header_sp_fs = value;
        header_sp_fs.value_namespace = name_space;
        header_sp_fs.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::SpfStats::SpfHeader::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "header-router-id")
    {
        header_router_id.yfilter = yfilter;
    }
    if(value_path == "header-sp-fs")
    {
        header_sp_fs.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::SpfStats::SpfHeader::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "area-summary" || name == "header-router-id" || name == "header-sp-fs")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::SpfStats::SpfHeader::AreaSummary::AreaSummary()
    :
    area_id{YType::uint32, "area-id"},
    sp_fs{YType::uint32, "sp-fs"}
{

    yang_name = "area-summary"; yang_parent_name = "spf-header"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::SpfStats::SpfHeader::AreaSummary::~AreaSummary()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::SpfStats::SpfHeader::AreaSummary::has_data() const
{
    return area_id.is_set
	|| sp_fs.is_set;
}

bool Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::SpfStats::SpfHeader::AreaSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(area_id.yfilter)
	|| ydk::is_set(sp_fs.yfilter);
}

std::string Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::SpfStats::SpfHeader::AreaSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "area-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::SpfStats::SpfHeader::AreaSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area_id.is_set || is_set(area_id.yfilter)) leaf_name_data.push_back(area_id.get_name_leafdata());
    if (sp_fs.is_set || is_set(sp_fs.yfilter)) leaf_name_data.push_back(sp_fs.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::SpfStats::SpfHeader::AreaSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::SpfStats::SpfHeader::AreaSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::SpfStats::SpfHeader::AreaSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "area-id")
    {
        area_id = value;
        area_id.value_namespace = name_space;
        area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sp-fs")
    {
        sp_fs = value;
        sp_fs.value_namespace = name_space;
        sp_fs.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::SpfStats::SpfHeader::AreaSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "area-id")
    {
        area_id.yfilter = yfilter;
    }
    if(value_path == "sp-fs")
    {
        sp_fs.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::SpfStats::SpfHeader::AreaSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "area-id" || name == "sp-fs")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::SpfStats::SpfRuntime::SpfRuntime()
    :
    start_time{YType::uint32, "start-time"},
    rib_add_routes{YType::uint32, "rib-add-routes"},
    rib_delete_routes{YType::uint32, "rib-delete-routes"},
    reason_flags{YType::str, "reason-flags"},
    lsa_changes{YType::int16, "lsa-changes"}
    	,
    global_time(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::SpfStats::SpfRuntime::GlobalTime>())
{
    global_time->parent = this;

    yang_name = "spf-runtime"; yang_parent_name = "spf-stats"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::SpfStats::SpfRuntime::~SpfRuntime()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::SpfStats::SpfRuntime::has_data() const
{
    for (std::size_t index=0; index<lsa.size(); index++)
    {
        if(lsa[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<area_stat.size(); index++)
    {
        if(area_stat[index]->has_data())
            return true;
    }
    return start_time.is_set
	|| rib_add_routes.is_set
	|| rib_delete_routes.is_set
	|| reason_flags.is_set
	|| lsa_changes.is_set
	|| (global_time !=  nullptr && global_time->has_data());
}

bool Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::SpfStats::SpfRuntime::has_operation() const
{
    for (std::size_t index=0; index<lsa.size(); index++)
    {
        if(lsa[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<area_stat.size(); index++)
    {
        if(area_stat[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(start_time.yfilter)
	|| ydk::is_set(rib_add_routes.yfilter)
	|| ydk::is_set(rib_delete_routes.yfilter)
	|| ydk::is_set(reason_flags.yfilter)
	|| ydk::is_set(lsa_changes.yfilter)
	|| (global_time !=  nullptr && global_time->has_operation());
}

std::string Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::SpfStats::SpfRuntime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spf-runtime";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::SpfStats::SpfRuntime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (start_time.is_set || is_set(start_time.yfilter)) leaf_name_data.push_back(start_time.get_name_leafdata());
    if (rib_add_routes.is_set || is_set(rib_add_routes.yfilter)) leaf_name_data.push_back(rib_add_routes.get_name_leafdata());
    if (rib_delete_routes.is_set || is_set(rib_delete_routes.yfilter)) leaf_name_data.push_back(rib_delete_routes.get_name_leafdata());
    if (reason_flags.is_set || is_set(reason_flags.yfilter)) leaf_name_data.push_back(reason_flags.get_name_leafdata());
    if (lsa_changes.is_set || is_set(lsa_changes.yfilter)) leaf_name_data.push_back(lsa_changes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::SpfStats::SpfRuntime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "global-time")
    {
        if(global_time == nullptr)
        {
            global_time = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::SpfStats::SpfRuntime::GlobalTime>();
        }
        return global_time;
    }

    if(child_yang_name == "lsa")
    {
        auto c = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::SpfStats::SpfRuntime::Lsa>();
        c->parent = this;
        lsa.push_back(c);
        return c;
    }

    if(child_yang_name == "area-stat")
    {
        auto c = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::SpfStats::SpfRuntime::AreaStat>();
        c->parent = this;
        area_stat.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::SpfStats::SpfRuntime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(global_time != nullptr)
    {
        children["global-time"] = global_time;
    }

    count = 0;
    for (auto const & c : lsa)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : area_stat)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::SpfStats::SpfRuntime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "start-time")
    {
        start_time = value;
        start_time.value_namespace = name_space;
        start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-add-routes")
    {
        rib_add_routes = value;
        rib_add_routes.value_namespace = name_space;
        rib_add_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-delete-routes")
    {
        rib_delete_routes = value;
        rib_delete_routes.value_namespace = name_space;
        rib_delete_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reason-flags")
    {
        reason_flags = value;
        reason_flags.value_namespace = name_space;
        reason_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-changes")
    {
        lsa_changes = value;
        lsa_changes.value_namespace = name_space;
        lsa_changes.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::SpfStats::SpfRuntime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "start-time")
    {
        start_time.yfilter = yfilter;
    }
    if(value_path == "rib-add-routes")
    {
        rib_add_routes.yfilter = yfilter;
    }
    if(value_path == "rib-delete-routes")
    {
        rib_delete_routes.yfilter = yfilter;
    }
    if(value_path == "reason-flags")
    {
        reason_flags.yfilter = yfilter;
    }
    if(value_path == "lsa-changes")
    {
        lsa_changes.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::SpfStats::SpfRuntime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "global-time" || name == "lsa" || name == "area-stat" || name == "start-time" || name == "rib-add-routes" || name == "rib-delete-routes" || name == "reason-flags" || name == "lsa-changes")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::SpfStats::SpfRuntime::GlobalTime::GlobalTime()
    :
    dijkstra{YType::uint32, "dijkstra"},
    intra_prefix{YType::uint32, "intra-prefix"},
    intra_prefix_del{YType::uint32, "intra-prefix-del"},
    inter_prefix{YType::uint32, "inter-prefix"},
    inter_prefix_del{YType::uint32, "inter-prefix-del"},
    external_prefix{YType::uint32, "external-prefix"},
    external_prefix_del{YType::uint32, "external-prefix-del"},
    rib_add{YType::uint32, "rib-add"},
    rib_del{YType::uint32, "rib-del"}
{

    yang_name = "global-time"; yang_parent_name = "spf-runtime"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::SpfStats::SpfRuntime::GlobalTime::~GlobalTime()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::SpfStats::SpfRuntime::GlobalTime::has_data() const
{
    return dijkstra.is_set
	|| intra_prefix.is_set
	|| intra_prefix_del.is_set
	|| inter_prefix.is_set
	|| inter_prefix_del.is_set
	|| external_prefix.is_set
	|| external_prefix_del.is_set
	|| rib_add.is_set
	|| rib_del.is_set;
}

bool Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::SpfStats::SpfRuntime::GlobalTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dijkstra.yfilter)
	|| ydk::is_set(intra_prefix.yfilter)
	|| ydk::is_set(intra_prefix_del.yfilter)
	|| ydk::is_set(inter_prefix.yfilter)
	|| ydk::is_set(inter_prefix_del.yfilter)
	|| ydk::is_set(external_prefix.yfilter)
	|| ydk::is_set(external_prefix_del.yfilter)
	|| ydk::is_set(rib_add.yfilter)
	|| ydk::is_set(rib_del.yfilter);
}

std::string Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::SpfStats::SpfRuntime::GlobalTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::SpfStats::SpfRuntime::GlobalTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dijkstra.is_set || is_set(dijkstra.yfilter)) leaf_name_data.push_back(dijkstra.get_name_leafdata());
    if (intra_prefix.is_set || is_set(intra_prefix.yfilter)) leaf_name_data.push_back(intra_prefix.get_name_leafdata());
    if (intra_prefix_del.is_set || is_set(intra_prefix_del.yfilter)) leaf_name_data.push_back(intra_prefix_del.get_name_leafdata());
    if (inter_prefix.is_set || is_set(inter_prefix.yfilter)) leaf_name_data.push_back(inter_prefix.get_name_leafdata());
    if (inter_prefix_del.is_set || is_set(inter_prefix_del.yfilter)) leaf_name_data.push_back(inter_prefix_del.get_name_leafdata());
    if (external_prefix.is_set || is_set(external_prefix.yfilter)) leaf_name_data.push_back(external_prefix.get_name_leafdata());
    if (external_prefix_del.is_set || is_set(external_prefix_del.yfilter)) leaf_name_data.push_back(external_prefix_del.get_name_leafdata());
    if (rib_add.is_set || is_set(rib_add.yfilter)) leaf_name_data.push_back(rib_add.get_name_leafdata());
    if (rib_del.is_set || is_set(rib_del.yfilter)) leaf_name_data.push_back(rib_del.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::SpfStats::SpfRuntime::GlobalTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::SpfStats::SpfRuntime::GlobalTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::SpfStats::SpfRuntime::GlobalTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dijkstra")
    {
        dijkstra = value;
        dijkstra.value_namespace = name_space;
        dijkstra.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "intra-prefix")
    {
        intra_prefix = value;
        intra_prefix.value_namespace = name_space;
        intra_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "intra-prefix-del")
    {
        intra_prefix_del = value;
        intra_prefix_del.value_namespace = name_space;
        intra_prefix_del.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inter-prefix")
    {
        inter_prefix = value;
        inter_prefix.value_namespace = name_space;
        inter_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inter-prefix-del")
    {
        inter_prefix_del = value;
        inter_prefix_del.value_namespace = name_space;
        inter_prefix_del.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "external-prefix")
    {
        external_prefix = value;
        external_prefix.value_namespace = name_space;
        external_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "external-prefix-del")
    {
        external_prefix_del = value;
        external_prefix_del.value_namespace = name_space;
        external_prefix_del.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-add")
    {
        rib_add = value;
        rib_add.value_namespace = name_space;
        rib_add.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-del")
    {
        rib_del = value;
        rib_del.value_namespace = name_space;
        rib_del.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::SpfStats::SpfRuntime::GlobalTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dijkstra")
    {
        dijkstra.yfilter = yfilter;
    }
    if(value_path == "intra-prefix")
    {
        intra_prefix.yfilter = yfilter;
    }
    if(value_path == "intra-prefix-del")
    {
        intra_prefix_del.yfilter = yfilter;
    }
    if(value_path == "inter-prefix")
    {
        inter_prefix.yfilter = yfilter;
    }
    if(value_path == "inter-prefix-del")
    {
        inter_prefix_del.yfilter = yfilter;
    }
    if(value_path == "external-prefix")
    {
        external_prefix.yfilter = yfilter;
    }
    if(value_path == "external-prefix-del")
    {
        external_prefix_del.yfilter = yfilter;
    }
    if(value_path == "rib-add")
    {
        rib_add.yfilter = yfilter;
    }
    if(value_path == "rib-del")
    {
        rib_del.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::SpfStats::SpfRuntime::GlobalTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dijkstra" || name == "intra-prefix" || name == "intra-prefix-del" || name == "inter-prefix" || name == "inter-prefix-del" || name == "external-prefix" || name == "external-prefix-del" || name == "rib-add" || name == "rib-del")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::SpfStats::SpfRuntime::Lsa::Lsa()
    :
    lsa_area_id{YType::uint32, "lsa-area-id"},
    lsa_advertising_router{YType::str, "lsa-advertising-router"},
    lsa_id{YType::str, "lsa-id"},
    lsa_type{YType::uint8, "lsa-type"},
    lsa_flush{YType::boolean, "lsa-flush"}
{

    yang_name = "lsa"; yang_parent_name = "spf-runtime"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::SpfStats::SpfRuntime::Lsa::~Lsa()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::SpfStats::SpfRuntime::Lsa::has_data() const
{
    return lsa_area_id.is_set
	|| lsa_advertising_router.is_set
	|| lsa_id.is_set
	|| lsa_type.is_set
	|| lsa_flush.is_set;
}

bool Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::SpfStats::SpfRuntime::Lsa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lsa_area_id.yfilter)
	|| ydk::is_set(lsa_advertising_router.yfilter)
	|| ydk::is_set(lsa_id.yfilter)
	|| ydk::is_set(lsa_type.yfilter)
	|| ydk::is_set(lsa_flush.yfilter);
}

std::string Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::SpfStats::SpfRuntime::Lsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::SpfStats::SpfRuntime::Lsa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsa_area_id.is_set || is_set(lsa_area_id.yfilter)) leaf_name_data.push_back(lsa_area_id.get_name_leafdata());
    if (lsa_advertising_router.is_set || is_set(lsa_advertising_router.yfilter)) leaf_name_data.push_back(lsa_advertising_router.get_name_leafdata());
    if (lsa_id.is_set || is_set(lsa_id.yfilter)) leaf_name_data.push_back(lsa_id.get_name_leafdata());
    if (lsa_type.is_set || is_set(lsa_type.yfilter)) leaf_name_data.push_back(lsa_type.get_name_leafdata());
    if (lsa_flush.is_set || is_set(lsa_flush.yfilter)) leaf_name_data.push_back(lsa_flush.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::SpfStats::SpfRuntime::Lsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::SpfStats::SpfRuntime::Lsa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::SpfStats::SpfRuntime::Lsa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsa-area-id")
    {
        lsa_area_id = value;
        lsa_area_id.value_namespace = name_space;
        lsa_area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-advertising-router")
    {
        lsa_advertising_router = value;
        lsa_advertising_router.value_namespace = name_space;
        lsa_advertising_router.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-id")
    {
        lsa_id = value;
        lsa_id.value_namespace = name_space;
        lsa_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-type")
    {
        lsa_type = value;
        lsa_type.value_namespace = name_space;
        lsa_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-flush")
    {
        lsa_flush = value;
        lsa_flush.value_namespace = name_space;
        lsa_flush.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::SpfStats::SpfRuntime::Lsa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsa-area-id")
    {
        lsa_area_id.yfilter = yfilter;
    }
    if(value_path == "lsa-advertising-router")
    {
        lsa_advertising_router.yfilter = yfilter;
    }
    if(value_path == "lsa-id")
    {
        lsa_id.yfilter = yfilter;
    }
    if(value_path == "lsa-type")
    {
        lsa_type.yfilter = yfilter;
    }
    if(value_path == "lsa-flush")
    {
        lsa_flush.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::SpfStats::SpfRuntime::Lsa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsa-area-id" || name == "lsa-advertising-router" || name == "lsa-id" || name == "lsa-type" || name == "lsa-flush")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::SpfStats::SpfRuntime::AreaStat::AreaStat()
    :
    spf_stat_area_id{YType::uint32, "spf-stat-area-id"},
    spf_stat_lsa_type_count{YType::uint32, "spf-stat-lsa-type-count"}
    	,
    spf_stat_time(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::SpfStats::SpfRuntime::AreaStat::SpfStatTime>())
{
    spf_stat_time->parent = this;

    yang_name = "area-stat"; yang_parent_name = "spf-runtime"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::SpfStats::SpfRuntime::AreaStat::~AreaStat()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::SpfStats::SpfRuntime::AreaStat::has_data() const
{
    for (auto const & leaf : spf_stat_lsa_type_count.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return spf_stat_area_id.is_set
	|| (spf_stat_time !=  nullptr && spf_stat_time->has_data());
}

bool Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::SpfStats::SpfRuntime::AreaStat::has_operation() const
{
    for (auto const & leaf : spf_stat_lsa_type_count.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(spf_stat_area_id.yfilter)
	|| ydk::is_set(spf_stat_lsa_type_count.yfilter)
	|| (spf_stat_time !=  nullptr && spf_stat_time->has_operation());
}

std::string Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::SpfStats::SpfRuntime::AreaStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "area-stat";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::SpfStats::SpfRuntime::AreaStat::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (spf_stat_area_id.is_set || is_set(spf_stat_area_id.yfilter)) leaf_name_data.push_back(spf_stat_area_id.get_name_leafdata());

    auto spf_stat_lsa_type_count_name_datas = spf_stat_lsa_type_count.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), spf_stat_lsa_type_count_name_datas.begin(), spf_stat_lsa_type_count_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::SpfStats::SpfRuntime::AreaStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "spf-stat-time")
    {
        if(spf_stat_time == nullptr)
        {
            spf_stat_time = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::SpfStats::SpfRuntime::AreaStat::SpfStatTime>();
        }
        return spf_stat_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::SpfStats::SpfRuntime::AreaStat::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(spf_stat_time != nullptr)
    {
        children["spf-stat-time"] = spf_stat_time;
    }

    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::SpfStats::SpfRuntime::AreaStat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "spf-stat-area-id")
    {
        spf_stat_area_id = value;
        spf_stat_area_id.value_namespace = name_space;
        spf_stat_area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spf-stat-lsa-type-count")
    {
        spf_stat_lsa_type_count.append(value);
    }
}

void Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::SpfStats::SpfRuntime::AreaStat::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "spf-stat-area-id")
    {
        spf_stat_area_id.yfilter = yfilter;
    }
    if(value_path == "spf-stat-lsa-type-count")
    {
        spf_stat_lsa_type_count.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::SpfStats::SpfRuntime::AreaStat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "spf-stat-time" || name == "spf-stat-area-id" || name == "spf-stat-lsa-type-count")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::SpfStats::SpfRuntime::AreaStat::SpfStatTime::SpfStatTime()
    :
    dijkstra{YType::uint32, "dijkstra"},
    intra_prefix{YType::uint32, "intra-prefix"},
    intra_prefix_del{YType::uint32, "intra-prefix-del"},
    inter_prefix{YType::uint32, "inter-prefix"},
    inter_prefix_del{YType::uint32, "inter-prefix-del"},
    external_prefix{YType::uint32, "external-prefix"},
    external_prefix_del{YType::uint32, "external-prefix-del"},
    rib_add{YType::uint32, "rib-add"},
    rib_del{YType::uint32, "rib-del"}
{

    yang_name = "spf-stat-time"; yang_parent_name = "area-stat"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::SpfStats::SpfRuntime::AreaStat::SpfStatTime::~SpfStatTime()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::SpfStats::SpfRuntime::AreaStat::SpfStatTime::has_data() const
{
    return dijkstra.is_set
	|| intra_prefix.is_set
	|| intra_prefix_del.is_set
	|| inter_prefix.is_set
	|| inter_prefix_del.is_set
	|| external_prefix.is_set
	|| external_prefix_del.is_set
	|| rib_add.is_set
	|| rib_del.is_set;
}

bool Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::SpfStats::SpfRuntime::AreaStat::SpfStatTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dijkstra.yfilter)
	|| ydk::is_set(intra_prefix.yfilter)
	|| ydk::is_set(intra_prefix_del.yfilter)
	|| ydk::is_set(inter_prefix.yfilter)
	|| ydk::is_set(inter_prefix_del.yfilter)
	|| ydk::is_set(external_prefix.yfilter)
	|| ydk::is_set(external_prefix_del.yfilter)
	|| ydk::is_set(rib_add.yfilter)
	|| ydk::is_set(rib_del.yfilter);
}

std::string Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::SpfStats::SpfRuntime::AreaStat::SpfStatTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spf-stat-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::SpfStats::SpfRuntime::AreaStat::SpfStatTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dijkstra.is_set || is_set(dijkstra.yfilter)) leaf_name_data.push_back(dijkstra.get_name_leafdata());
    if (intra_prefix.is_set || is_set(intra_prefix.yfilter)) leaf_name_data.push_back(intra_prefix.get_name_leafdata());
    if (intra_prefix_del.is_set || is_set(intra_prefix_del.yfilter)) leaf_name_data.push_back(intra_prefix_del.get_name_leafdata());
    if (inter_prefix.is_set || is_set(inter_prefix.yfilter)) leaf_name_data.push_back(inter_prefix.get_name_leafdata());
    if (inter_prefix_del.is_set || is_set(inter_prefix_del.yfilter)) leaf_name_data.push_back(inter_prefix_del.get_name_leafdata());
    if (external_prefix.is_set || is_set(external_prefix.yfilter)) leaf_name_data.push_back(external_prefix.get_name_leafdata());
    if (external_prefix_del.is_set || is_set(external_prefix_del.yfilter)) leaf_name_data.push_back(external_prefix_del.get_name_leafdata());
    if (rib_add.is_set || is_set(rib_add.yfilter)) leaf_name_data.push_back(rib_add.get_name_leafdata());
    if (rib_del.is_set || is_set(rib_del.yfilter)) leaf_name_data.push_back(rib_del.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::SpfStats::SpfRuntime::AreaStat::SpfStatTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::SpfStats::SpfRuntime::AreaStat::SpfStatTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::SpfStats::SpfRuntime::AreaStat::SpfStatTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dijkstra")
    {
        dijkstra = value;
        dijkstra.value_namespace = name_space;
        dijkstra.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "intra-prefix")
    {
        intra_prefix = value;
        intra_prefix.value_namespace = name_space;
        intra_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "intra-prefix-del")
    {
        intra_prefix_del = value;
        intra_prefix_del.value_namespace = name_space;
        intra_prefix_del.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inter-prefix")
    {
        inter_prefix = value;
        inter_prefix.value_namespace = name_space;
        inter_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inter-prefix-del")
    {
        inter_prefix_del = value;
        inter_prefix_del.value_namespace = name_space;
        inter_prefix_del.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "external-prefix")
    {
        external_prefix = value;
        external_prefix.value_namespace = name_space;
        external_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "external-prefix-del")
    {
        external_prefix_del = value;
        external_prefix_del.value_namespace = name_space;
        external_prefix_del.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-add")
    {
        rib_add = value;
        rib_add.value_namespace = name_space;
        rib_add.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-del")
    {
        rib_del = value;
        rib_del.value_namespace = name_space;
        rib_del.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::SpfStats::SpfRuntime::AreaStat::SpfStatTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dijkstra")
    {
        dijkstra.yfilter = yfilter;
    }
    if(value_path == "intra-prefix")
    {
        intra_prefix.yfilter = yfilter;
    }
    if(value_path == "intra-prefix-del")
    {
        intra_prefix_del.yfilter = yfilter;
    }
    if(value_path == "inter-prefix")
    {
        inter_prefix.yfilter = yfilter;
    }
    if(value_path == "inter-prefix-del")
    {
        inter_prefix_del.yfilter = yfilter;
    }
    if(value_path == "external-prefix")
    {
        external_prefix.yfilter = yfilter;
    }
    if(value_path == "external-prefix-del")
    {
        external_prefix_del.yfilter = yfilter;
    }
    if(value_path == "rib-add")
    {
        rib_add.yfilter = yfilter;
    }
    if(value_path == "rib-del")
    {
        rib_del.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::SpfStats::SpfRuntime::AreaStat::SpfStatTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dijkstra" || name == "intra-prefix" || name == "intra-prefix-del" || name == "inter-prefix" || name == "inter-prefix-del" || name == "external-prefix" || name == "external-prefix-del" || name == "rib-add" || name == "rib-del")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::RawioStats::RawioStats()
    :
    raw_conn_open{YType::uint64, "raw-conn-open"},
    raw_conn_close{YType::uint64, "raw-conn-close"},
    raw_conn_error{YType::uint64, "raw-conn-error"},
    in_packets{YType::uint64, "in-packets"},
    in_bytes{YType::uint64, "in-bytes"},
    in_long_packets{YType::uint64, "in-long-packets"},
    in_malloc_drops{YType::uint64, "in-malloc-drops"},
    in_handle_drops{YType::uint64, "in-handle-drops"},
    in_short_drops{YType::uint64, "in-short-drops"},
    in_error_drops{YType::uint64, "in-error-drops"},
    in_ipsec_drops{YType::uint64, "in-ipsec-drops"},
    in_queue_drops{YType::uint64, "in-queue-drops"},
    out_packets{YType::uint64, "out-packets"},
    out_bytes{YType::uint64, "out-bytes"},
    out_nofd_drops{YType::uint64, "out-nofd-drops"},
    out_error_drops{YType::uint64, "out-error-drops"},
    out_ipsec_drops{YType::uint64, "out-ipsec-drops"},
    out_nopak_drops{YType::uint64, "out-nopak-drops"},
    out_pakapi_errors{YType::uint64, "out-pakapi-errors"},
    raw_conn_state{YType::uint32, "raw-conn-state"}
{

    yang_name = "rawio-stats"; yang_parent_name = "vrf-statistics"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::RawioStats::~RawioStats()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::RawioStats::has_data() const
{
    return raw_conn_open.is_set
	|| raw_conn_close.is_set
	|| raw_conn_error.is_set
	|| in_packets.is_set
	|| in_bytes.is_set
	|| in_long_packets.is_set
	|| in_malloc_drops.is_set
	|| in_handle_drops.is_set
	|| in_short_drops.is_set
	|| in_error_drops.is_set
	|| in_ipsec_drops.is_set
	|| in_queue_drops.is_set
	|| out_packets.is_set
	|| out_bytes.is_set
	|| out_nofd_drops.is_set
	|| out_error_drops.is_set
	|| out_ipsec_drops.is_set
	|| out_nopak_drops.is_set
	|| out_pakapi_errors.is_set
	|| raw_conn_state.is_set;
}

bool Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::RawioStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(raw_conn_open.yfilter)
	|| ydk::is_set(raw_conn_close.yfilter)
	|| ydk::is_set(raw_conn_error.yfilter)
	|| ydk::is_set(in_packets.yfilter)
	|| ydk::is_set(in_bytes.yfilter)
	|| ydk::is_set(in_long_packets.yfilter)
	|| ydk::is_set(in_malloc_drops.yfilter)
	|| ydk::is_set(in_handle_drops.yfilter)
	|| ydk::is_set(in_short_drops.yfilter)
	|| ydk::is_set(in_error_drops.yfilter)
	|| ydk::is_set(in_ipsec_drops.yfilter)
	|| ydk::is_set(in_queue_drops.yfilter)
	|| ydk::is_set(out_packets.yfilter)
	|| ydk::is_set(out_bytes.yfilter)
	|| ydk::is_set(out_nofd_drops.yfilter)
	|| ydk::is_set(out_error_drops.yfilter)
	|| ydk::is_set(out_ipsec_drops.yfilter)
	|| ydk::is_set(out_nopak_drops.yfilter)
	|| ydk::is_set(out_pakapi_errors.yfilter)
	|| ydk::is_set(raw_conn_state.yfilter);
}

std::string Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::RawioStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rawio-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::RawioStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (raw_conn_open.is_set || is_set(raw_conn_open.yfilter)) leaf_name_data.push_back(raw_conn_open.get_name_leafdata());
    if (raw_conn_close.is_set || is_set(raw_conn_close.yfilter)) leaf_name_data.push_back(raw_conn_close.get_name_leafdata());
    if (raw_conn_error.is_set || is_set(raw_conn_error.yfilter)) leaf_name_data.push_back(raw_conn_error.get_name_leafdata());
    if (in_packets.is_set || is_set(in_packets.yfilter)) leaf_name_data.push_back(in_packets.get_name_leafdata());
    if (in_bytes.is_set || is_set(in_bytes.yfilter)) leaf_name_data.push_back(in_bytes.get_name_leafdata());
    if (in_long_packets.is_set || is_set(in_long_packets.yfilter)) leaf_name_data.push_back(in_long_packets.get_name_leafdata());
    if (in_malloc_drops.is_set || is_set(in_malloc_drops.yfilter)) leaf_name_data.push_back(in_malloc_drops.get_name_leafdata());
    if (in_handle_drops.is_set || is_set(in_handle_drops.yfilter)) leaf_name_data.push_back(in_handle_drops.get_name_leafdata());
    if (in_short_drops.is_set || is_set(in_short_drops.yfilter)) leaf_name_data.push_back(in_short_drops.get_name_leafdata());
    if (in_error_drops.is_set || is_set(in_error_drops.yfilter)) leaf_name_data.push_back(in_error_drops.get_name_leafdata());
    if (in_ipsec_drops.is_set || is_set(in_ipsec_drops.yfilter)) leaf_name_data.push_back(in_ipsec_drops.get_name_leafdata());
    if (in_queue_drops.is_set || is_set(in_queue_drops.yfilter)) leaf_name_data.push_back(in_queue_drops.get_name_leafdata());
    if (out_packets.is_set || is_set(out_packets.yfilter)) leaf_name_data.push_back(out_packets.get_name_leafdata());
    if (out_bytes.is_set || is_set(out_bytes.yfilter)) leaf_name_data.push_back(out_bytes.get_name_leafdata());
    if (out_nofd_drops.is_set || is_set(out_nofd_drops.yfilter)) leaf_name_data.push_back(out_nofd_drops.get_name_leafdata());
    if (out_error_drops.is_set || is_set(out_error_drops.yfilter)) leaf_name_data.push_back(out_error_drops.get_name_leafdata());
    if (out_ipsec_drops.is_set || is_set(out_ipsec_drops.yfilter)) leaf_name_data.push_back(out_ipsec_drops.get_name_leafdata());
    if (out_nopak_drops.is_set || is_set(out_nopak_drops.yfilter)) leaf_name_data.push_back(out_nopak_drops.get_name_leafdata());
    if (out_pakapi_errors.is_set || is_set(out_pakapi_errors.yfilter)) leaf_name_data.push_back(out_pakapi_errors.get_name_leafdata());
    if (raw_conn_state.is_set || is_set(raw_conn_state.yfilter)) leaf_name_data.push_back(raw_conn_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::RawioStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::RawioStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::RawioStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "raw-conn-open")
    {
        raw_conn_open = value;
        raw_conn_open.value_namespace = name_space;
        raw_conn_open.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "raw-conn-close")
    {
        raw_conn_close = value;
        raw_conn_close.value_namespace = name_space;
        raw_conn_close.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "raw-conn-error")
    {
        raw_conn_error = value;
        raw_conn_error.value_namespace = name_space;
        raw_conn_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-packets")
    {
        in_packets = value;
        in_packets.value_namespace = name_space;
        in_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-bytes")
    {
        in_bytes = value;
        in_bytes.value_namespace = name_space;
        in_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-long-packets")
    {
        in_long_packets = value;
        in_long_packets.value_namespace = name_space;
        in_long_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-malloc-drops")
    {
        in_malloc_drops = value;
        in_malloc_drops.value_namespace = name_space;
        in_malloc_drops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-handle-drops")
    {
        in_handle_drops = value;
        in_handle_drops.value_namespace = name_space;
        in_handle_drops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-short-drops")
    {
        in_short_drops = value;
        in_short_drops.value_namespace = name_space;
        in_short_drops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-error-drops")
    {
        in_error_drops = value;
        in_error_drops.value_namespace = name_space;
        in_error_drops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-ipsec-drops")
    {
        in_ipsec_drops = value;
        in_ipsec_drops.value_namespace = name_space;
        in_ipsec_drops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-queue-drops")
    {
        in_queue_drops = value;
        in_queue_drops.value_namespace = name_space;
        in_queue_drops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-packets")
    {
        out_packets = value;
        out_packets.value_namespace = name_space;
        out_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-bytes")
    {
        out_bytes = value;
        out_bytes.value_namespace = name_space;
        out_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-nofd-drops")
    {
        out_nofd_drops = value;
        out_nofd_drops.value_namespace = name_space;
        out_nofd_drops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-error-drops")
    {
        out_error_drops = value;
        out_error_drops.value_namespace = name_space;
        out_error_drops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-ipsec-drops")
    {
        out_ipsec_drops = value;
        out_ipsec_drops.value_namespace = name_space;
        out_ipsec_drops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-nopak-drops")
    {
        out_nopak_drops = value;
        out_nopak_drops.value_namespace = name_space;
        out_nopak_drops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-pakapi-errors")
    {
        out_pakapi_errors = value;
        out_pakapi_errors.value_namespace = name_space;
        out_pakapi_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "raw-conn-state")
    {
        raw_conn_state = value;
        raw_conn_state.value_namespace = name_space;
        raw_conn_state.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::RawioStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "raw-conn-open")
    {
        raw_conn_open.yfilter = yfilter;
    }
    if(value_path == "raw-conn-close")
    {
        raw_conn_close.yfilter = yfilter;
    }
    if(value_path == "raw-conn-error")
    {
        raw_conn_error.yfilter = yfilter;
    }
    if(value_path == "in-packets")
    {
        in_packets.yfilter = yfilter;
    }
    if(value_path == "in-bytes")
    {
        in_bytes.yfilter = yfilter;
    }
    if(value_path == "in-long-packets")
    {
        in_long_packets.yfilter = yfilter;
    }
    if(value_path == "in-malloc-drops")
    {
        in_malloc_drops.yfilter = yfilter;
    }
    if(value_path == "in-handle-drops")
    {
        in_handle_drops.yfilter = yfilter;
    }
    if(value_path == "in-short-drops")
    {
        in_short_drops.yfilter = yfilter;
    }
    if(value_path == "in-error-drops")
    {
        in_error_drops.yfilter = yfilter;
    }
    if(value_path == "in-ipsec-drops")
    {
        in_ipsec_drops.yfilter = yfilter;
    }
    if(value_path == "in-queue-drops")
    {
        in_queue_drops.yfilter = yfilter;
    }
    if(value_path == "out-packets")
    {
        out_packets.yfilter = yfilter;
    }
    if(value_path == "out-bytes")
    {
        out_bytes.yfilter = yfilter;
    }
    if(value_path == "out-nofd-drops")
    {
        out_nofd_drops.yfilter = yfilter;
    }
    if(value_path == "out-error-drops")
    {
        out_error_drops.yfilter = yfilter;
    }
    if(value_path == "out-ipsec-drops")
    {
        out_ipsec_drops.yfilter = yfilter;
    }
    if(value_path == "out-nopak-drops")
    {
        out_nopak_drops.yfilter = yfilter;
    }
    if(value_path == "out-pakapi-errors")
    {
        out_pakapi_errors.yfilter = yfilter;
    }
    if(value_path == "raw-conn-state")
    {
        raw_conn_state.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::RawioStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "raw-conn-open" || name == "raw-conn-close" || name == "raw-conn-error" || name == "in-packets" || name == "in-bytes" || name == "in-long-packets" || name == "in-malloc-drops" || name == "in-handle-drops" || name == "in-short-drops" || name == "in-error-drops" || name == "in-ipsec-drops" || name == "in-queue-drops" || name == "out-packets" || name == "out-bytes" || name == "out-nofd-drops" || name == "out-error-drops" || name == "out-ipsec-drops" || name == "out-nopak-drops" || name == "out-pakapi-errors" || name == "raw-conn-state")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::PrefixPriorityStats::PrefixPriorityStats()
    :
    critical{YType::uint32, "critical"},
    high{YType::uint32, "high"},
    medium{YType::uint32, "medium"},
    low{YType::uint32, "low"}
{

    yang_name = "prefix-priority-stats"; yang_parent_name = "vrf-statistics"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::PrefixPriorityStats::~PrefixPriorityStats()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::PrefixPriorityStats::has_data() const
{
    return critical.is_set
	|| high.is_set
	|| medium.is_set
	|| low.is_set;
}

bool Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::PrefixPriorityStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(critical.yfilter)
	|| ydk::is_set(high.yfilter)
	|| ydk::is_set(medium.yfilter)
	|| ydk::is_set(low.yfilter);
}

std::string Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::PrefixPriorityStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-priority-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::PrefixPriorityStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (critical.is_set || is_set(critical.yfilter)) leaf_name_data.push_back(critical.get_name_leafdata());
    if (high.is_set || is_set(high.yfilter)) leaf_name_data.push_back(high.get_name_leafdata());
    if (medium.is_set || is_set(medium.yfilter)) leaf_name_data.push_back(medium.get_name_leafdata());
    if (low.is_set || is_set(low.yfilter)) leaf_name_data.push_back(low.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::PrefixPriorityStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::PrefixPriorityStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::PrefixPriorityStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "critical")
    {
        critical = value;
        critical.value_namespace = name_space;
        critical.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "high")
    {
        high = value;
        high.value_namespace = name_space;
        high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "medium")
    {
        medium = value;
        medium.value_namespace = name_space;
        medium.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "low")
    {
        low = value;
        low.value_namespace = name_space;
        low.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::PrefixPriorityStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "critical")
    {
        critical.yfilter = yfilter;
    }
    if(value_path == "high")
    {
        high.yfilter = yfilter;
    }
    if(value_path == "medium")
    {
        medium.yfilter = yfilter;
    }
    if(value_path == "low")
    {
        low.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::PrefixPriorityStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "critical" || name == "high" || name == "medium" || name == "low")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::VrfRibBatchStats::VrfRibBatchStats()
    :
    batches_sent{YType::uint32, "batches-sent"},
    routes_sent{YType::uint32, "routes-sent"},
    routes_pending{YType::uint32, "routes-pending"},
    max_routes{YType::uint32, "max-routes"},
    paths_sent{YType::uint32, "paths-sent"},
    paths_pending{YType::uint32, "paths-pending"},
    paths_add{YType::uint32, "paths-add"},
    paths_add_errs{YType::uint32, "paths-add-errs"},
    paths_del{YType::uint32, "paths-del"},
    paths_del_errs{YType::uint32, "paths-del-errs"}
{

    yang_name = "vrf-rib-batch-stats"; yang_parent_name = "vrf-statistics"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::VrfRibBatchStats::~VrfRibBatchStats()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::VrfRibBatchStats::has_data() const
{
    return batches_sent.is_set
	|| routes_sent.is_set
	|| routes_pending.is_set
	|| max_routes.is_set
	|| paths_sent.is_set
	|| paths_pending.is_set
	|| paths_add.is_set
	|| paths_add_errs.is_set
	|| paths_del.is_set
	|| paths_del_errs.is_set;
}

bool Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::VrfRibBatchStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(batches_sent.yfilter)
	|| ydk::is_set(routes_sent.yfilter)
	|| ydk::is_set(routes_pending.yfilter)
	|| ydk::is_set(max_routes.yfilter)
	|| ydk::is_set(paths_sent.yfilter)
	|| ydk::is_set(paths_pending.yfilter)
	|| ydk::is_set(paths_add.yfilter)
	|| ydk::is_set(paths_add_errs.yfilter)
	|| ydk::is_set(paths_del.yfilter)
	|| ydk::is_set(paths_del_errs.yfilter);
}

std::string Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::VrfRibBatchStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-rib-batch-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::VrfRibBatchStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (batches_sent.is_set || is_set(batches_sent.yfilter)) leaf_name_data.push_back(batches_sent.get_name_leafdata());
    if (routes_sent.is_set || is_set(routes_sent.yfilter)) leaf_name_data.push_back(routes_sent.get_name_leafdata());
    if (routes_pending.is_set || is_set(routes_pending.yfilter)) leaf_name_data.push_back(routes_pending.get_name_leafdata());
    if (max_routes.is_set || is_set(max_routes.yfilter)) leaf_name_data.push_back(max_routes.get_name_leafdata());
    if (paths_sent.is_set || is_set(paths_sent.yfilter)) leaf_name_data.push_back(paths_sent.get_name_leafdata());
    if (paths_pending.is_set || is_set(paths_pending.yfilter)) leaf_name_data.push_back(paths_pending.get_name_leafdata());
    if (paths_add.is_set || is_set(paths_add.yfilter)) leaf_name_data.push_back(paths_add.get_name_leafdata());
    if (paths_add_errs.is_set || is_set(paths_add_errs.yfilter)) leaf_name_data.push_back(paths_add_errs.get_name_leafdata());
    if (paths_del.is_set || is_set(paths_del.yfilter)) leaf_name_data.push_back(paths_del.get_name_leafdata());
    if (paths_del_errs.is_set || is_set(paths_del_errs.yfilter)) leaf_name_data.push_back(paths_del_errs.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::VrfRibBatchStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::VrfRibBatchStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::VrfRibBatchStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "batches-sent")
    {
        batches_sent = value;
        batches_sent.value_namespace = name_space;
        batches_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "routes-sent")
    {
        routes_sent = value;
        routes_sent.value_namespace = name_space;
        routes_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "routes-pending")
    {
        routes_pending = value;
        routes_pending.value_namespace = name_space;
        routes_pending.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-routes")
    {
        max_routes = value;
        max_routes.value_namespace = name_space;
        max_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "paths-sent")
    {
        paths_sent = value;
        paths_sent.value_namespace = name_space;
        paths_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "paths-pending")
    {
        paths_pending = value;
        paths_pending.value_namespace = name_space;
        paths_pending.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "paths-add")
    {
        paths_add = value;
        paths_add.value_namespace = name_space;
        paths_add.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "paths-add-errs")
    {
        paths_add_errs = value;
        paths_add_errs.value_namespace = name_space;
        paths_add_errs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "paths-del")
    {
        paths_del = value;
        paths_del.value_namespace = name_space;
        paths_del.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "paths-del-errs")
    {
        paths_del_errs = value;
        paths_del_errs.value_namespace = name_space;
        paths_del_errs.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::VrfRibBatchStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "batches-sent")
    {
        batches_sent.yfilter = yfilter;
    }
    if(value_path == "routes-sent")
    {
        routes_sent.yfilter = yfilter;
    }
    if(value_path == "routes-pending")
    {
        routes_pending.yfilter = yfilter;
    }
    if(value_path == "max-routes")
    {
        max_routes.yfilter = yfilter;
    }
    if(value_path == "paths-sent")
    {
        paths_sent.yfilter = yfilter;
    }
    if(value_path == "paths-pending")
    {
        paths_pending.yfilter = yfilter;
    }
    if(value_path == "paths-add")
    {
        paths_add.yfilter = yfilter;
    }
    if(value_path == "paths-add-errs")
    {
        paths_add_errs.yfilter = yfilter;
    }
    if(value_path == "paths-del")
    {
        paths_del.yfilter = yfilter;
    }
    if(value_path == "paths-del-errs")
    {
        paths_del_errs.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::VrfStatistics::VrfRibBatchStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "batches-sent" || name == "routes-sent" || name == "routes-pending" || name == "max-routes" || name == "paths-sent" || name == "paths-pending" || name == "paths-add" || name == "paths-add-errs" || name == "paths-del" || name == "paths-del-errs")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::Summary::Summary()
    :
    protocol(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::Summary::Protocol>())
	,ospfv3(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_>())
	,route(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::Summary::Route>())
{
    protocol->parent = this;
    ospfv3->parent = this;
    route->parent = this;

    yang_name = "summary"; yang_parent_name = "default-vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::Summary::~Summary()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::Summary::has_data() const
{
    return (protocol !=  nullptr && protocol->has_data())
	|| (ospfv3 !=  nullptr && ospfv3->has_data())
	|| (route !=  nullptr && route->has_data());
}

bool Ospfv3::Processes::Process::DefaultVrf::Summary::has_operation() const
{
    return is_set(yfilter)
	|| (protocol !=  nullptr && protocol->has_operation())
	|| (ospfv3 !=  nullptr && ospfv3->has_operation())
	|| (route !=  nullptr && route->has_operation());
}

std::string Ospfv3::Processes::Process::DefaultVrf::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::Summary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "protocol")
    {
        if(protocol == nullptr)
        {
            protocol = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::Summary::Protocol>();
        }
        return protocol;
    }

    if(child_yang_name == "ospfv3")
    {
        if(ospfv3 == nullptr)
        {
            ospfv3 = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_>();
        }
        return ospfv3;
    }

    if(child_yang_name == "route")
    {
        if(route == nullptr)
        {
            route = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::Summary::Route>();
        }
        return route;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::Summary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(protocol != nullptr)
    {
        children["protocol"] = protocol;
    }

    if(ospfv3 != nullptr)
    {
        children["ospfv3"] = ospfv3;
    }

    if(route != nullptr)
    {
        children["route"] = route;
    }

    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::Summary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospfv3::Processes::Process::DefaultVrf::Summary::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospfv3::Processes::Process::DefaultVrf::Summary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocol" || name == "ospfv3" || name == "route")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::Summary::Protocol::Protocol()
    :
    protocol_router_id{YType::str, "protocol-router-id"},
    administrative_distance{YType::uint32, "administrative-distance"},
    administrative_distance_inter_area{YType::uint32, "administrative-distance-inter-area"},
    administrative_distance_external{YType::uint32, "administrative-distance-external"},
    is_graceful_restart{YType::boolean, "is-graceful-restart"},
    distribute_list_in{YType::str, "distribute-list-in"}
{

    yang_name = "protocol"; yang_parent_name = "summary"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::Summary::Protocol::~Protocol()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::Summary::Protocol::has_data() const
{
    return protocol_router_id.is_set
	|| administrative_distance.is_set
	|| administrative_distance_inter_area.is_set
	|| administrative_distance_external.is_set
	|| is_graceful_restart.is_set
	|| distribute_list_in.is_set;
}

bool Ospfv3::Processes::Process::DefaultVrf::Summary::Protocol::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(protocol_router_id.yfilter)
	|| ydk::is_set(administrative_distance.yfilter)
	|| ydk::is_set(administrative_distance_inter_area.yfilter)
	|| ydk::is_set(administrative_distance_external.yfilter)
	|| ydk::is_set(is_graceful_restart.yfilter)
	|| ydk::is_set(distribute_list_in.yfilter);
}

std::string Ospfv3::Processes::Process::DefaultVrf::Summary::Protocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::Summary::Protocol::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protocol_router_id.is_set || is_set(protocol_router_id.yfilter)) leaf_name_data.push_back(protocol_router_id.get_name_leafdata());
    if (administrative_distance.is_set || is_set(administrative_distance.yfilter)) leaf_name_data.push_back(administrative_distance.get_name_leafdata());
    if (administrative_distance_inter_area.is_set || is_set(administrative_distance_inter_area.yfilter)) leaf_name_data.push_back(administrative_distance_inter_area.get_name_leafdata());
    if (administrative_distance_external.is_set || is_set(administrative_distance_external.yfilter)) leaf_name_data.push_back(administrative_distance_external.get_name_leafdata());
    if (is_graceful_restart.is_set || is_set(is_graceful_restart.yfilter)) leaf_name_data.push_back(is_graceful_restart.get_name_leafdata());
    if (distribute_list_in.is_set || is_set(distribute_list_in.yfilter)) leaf_name_data.push_back(distribute_list_in.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::Summary::Protocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::Summary::Protocol::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::Summary::Protocol::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protocol-router-id")
    {
        protocol_router_id = value;
        protocol_router_id.value_namespace = name_space;
        protocol_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "administrative-distance")
    {
        administrative_distance = value;
        administrative_distance.value_namespace = name_space;
        administrative_distance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "administrative-distance-inter-area")
    {
        administrative_distance_inter_area = value;
        administrative_distance_inter_area.value_namespace = name_space;
        administrative_distance_inter_area.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "administrative-distance-external")
    {
        administrative_distance_external = value;
        administrative_distance_external.value_namespace = name_space;
        administrative_distance_external.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-graceful-restart")
    {
        is_graceful_restart = value;
        is_graceful_restart.value_namespace = name_space;
        is_graceful_restart.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "distribute-list-in")
    {
        distribute_list_in = value;
        distribute_list_in.value_namespace = name_space;
        distribute_list_in.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::DefaultVrf::Summary::Protocol::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protocol-router-id")
    {
        protocol_router_id.yfilter = yfilter;
    }
    if(value_path == "administrative-distance")
    {
        administrative_distance.yfilter = yfilter;
    }
    if(value_path == "administrative-distance-inter-area")
    {
        administrative_distance_inter_area.yfilter = yfilter;
    }
    if(value_path == "administrative-distance-external")
    {
        administrative_distance_external.yfilter = yfilter;
    }
    if(value_path == "is-graceful-restart")
    {
        is_graceful_restart.yfilter = yfilter;
    }
    if(value_path == "distribute-list-in")
    {
        distribute_list_in.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::Summary::Protocol::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocol-router-id" || name == "administrative-distance" || name == "administrative-distance-inter-area" || name == "administrative-distance-external" || name == "is-graceful-restart" || name == "distribute-list-in")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::Ospfv3_()
    :
    router_id{YType::str, "router-id"},
    is_role_standby{YType::boolean, "is-role-standby"},
    role{YType::uint32, "role"},
    is_nsr_enabled{YType::boolean, "is-nsr-enabled"},
    is_nsr_switchover_on_restart{YType::boolean, "is-nsr-switchover-on-restart"},
    is_router_id_stalled{YType::boolean, "is-router-id-stalled"},
    is_opaque_capable{YType::boolean, "is-opaque-capable"},
    is_area_border_router{YType::boolean, "is-area-border-router"},
    is_as_border_router{YType::boolean, "is-as-border-router"},
    metric{YType::uint32, "metric"},
    is_default_originated{YType::boolean, "is-default-originated"},
    is_default_always{YType::boolean, "is-default-always"},
    default_metric{YType::uint32, "default-metric"},
    default_metric_type{YType::enumeration, "default-metric-type"},
    default_tag{YType::uint32, "default-tag"},
    is_default_policy{YType::boolean, "is-default-policy"},
    default_policy_name{YType::str, "default-policy-name"},
    spf_start_time{YType::uint32, "spf-start-time"},
    spf_hold_time{YType::uint32, "spf-hold-time"},
    spf_maximum_time{YType::uint32, "spf-maximum-time"},
    lsa_start_time{YType::uint32, "lsa-start-time"},
    lsa_hold_time{YType::uint32, "lsa-hold-time"},
    lsa_maximum_time{YType::uint32, "lsa-maximum-time"},
    minimum_lsa_interval{YType::uint32, "minimum-lsa-interval"},
    lsa_group_interval{YType::uint32, "lsa-group-interval"},
    lsa_flood_pacing_interval{YType::uint32, "lsa-flood-pacing-interval"},
    lsa_retransmission_pacing_interval{YType::uint32, "lsa-retransmission-pacing-interval"},
    as_ls_as{YType::uint32, "as-ls-as"},
    opaque_lsas{YType::uint32, "opaque-lsas"},
    opaque_lsa_checksum{YType::uint32, "opaque-lsa-checksum"},
    as_dc_bitless_ls_as{YType::uint32, "as-dc-bitless-ls-as"},
    as_do_not_age_ls_as{YType::uint32, "as-do-not-age-ls-as"},
    areas{YType::uint16, "areas"},
    normal_areas{YType::uint16, "normal-areas"},
    stub_areas{YType::uint16, "stub-areas"},
    nssa_areas{YType::uint16, "nssa-areas"},
    as_lsa_flood_list_length{YType::uint32, "as-lsa-flood-list-length"},
    is_grace_restart_enabled{YType::boolean, "is-grace-restart-enabled"},
    last_nsf_time{YType::uint32, "last-nsf-time"},
    grace_resync_time{YType::uint32, "grace-resync-time"},
    maximum_interfaces{YType::uint32, "maximum-interfaces"},
    maximum_paths{YType::uint32, "maximum-paths"},
    redistribution_limit{YType::uint32, "redistribution-limit"},
    redistribution_threshold{YType::uint32, "redistribution-threshold"},
    is_auto_cost{YType::boolean, "is-auto-cost"},
    reference_bandwidth{YType::uint32, "reference-bandwidth"},
    context_name{YType::str, "context-name"},
    snmp_trap_enabled{YType::boolean, "snmp-trap-enabled"},
    graceful_shutdown_state{YType::enumeration, "graceful-shutdown-state"}
    	,
    domain_id(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::DomainId>())
{
    domain_id->parent = this;

    yang_name = "ospfv3"; yang_parent_name = "summary"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::~Ospfv3_()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::has_data() const
{
    for (std::size_t index=0; index<stub_router.size(); index++)
    {
        if(stub_router[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ipfrr_tiebreakers.size(); index++)
    {
        if(ipfrr_tiebreakers[index]->has_data())
            return true;
    }
    return router_id.is_set
	|| is_role_standby.is_set
	|| role.is_set
	|| is_nsr_enabled.is_set
	|| is_nsr_switchover_on_restart.is_set
	|| is_router_id_stalled.is_set
	|| is_opaque_capable.is_set
	|| is_area_border_router.is_set
	|| is_as_border_router.is_set
	|| metric.is_set
	|| is_default_originated.is_set
	|| is_default_always.is_set
	|| default_metric.is_set
	|| default_metric_type.is_set
	|| default_tag.is_set
	|| is_default_policy.is_set
	|| default_policy_name.is_set
	|| spf_start_time.is_set
	|| spf_hold_time.is_set
	|| spf_maximum_time.is_set
	|| lsa_start_time.is_set
	|| lsa_hold_time.is_set
	|| lsa_maximum_time.is_set
	|| minimum_lsa_interval.is_set
	|| lsa_group_interval.is_set
	|| lsa_flood_pacing_interval.is_set
	|| lsa_retransmission_pacing_interval.is_set
	|| as_ls_as.is_set
	|| opaque_lsas.is_set
	|| opaque_lsa_checksum.is_set
	|| as_dc_bitless_ls_as.is_set
	|| as_do_not_age_ls_as.is_set
	|| areas.is_set
	|| normal_areas.is_set
	|| stub_areas.is_set
	|| nssa_areas.is_set
	|| as_lsa_flood_list_length.is_set
	|| is_grace_restart_enabled.is_set
	|| last_nsf_time.is_set
	|| grace_resync_time.is_set
	|| maximum_interfaces.is_set
	|| maximum_paths.is_set
	|| redistribution_limit.is_set
	|| redistribution_threshold.is_set
	|| is_auto_cost.is_set
	|| reference_bandwidth.is_set
	|| context_name.is_set
	|| snmp_trap_enabled.is_set
	|| graceful_shutdown_state.is_set
	|| (domain_id !=  nullptr && domain_id->has_data());
}

bool Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::has_operation() const
{
    for (std::size_t index=0; index<stub_router.size(); index++)
    {
        if(stub_router[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ipfrr_tiebreakers.size(); index++)
    {
        if(ipfrr_tiebreakers[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(router_id.yfilter)
	|| ydk::is_set(is_role_standby.yfilter)
	|| ydk::is_set(role.yfilter)
	|| ydk::is_set(is_nsr_enabled.yfilter)
	|| ydk::is_set(is_nsr_switchover_on_restart.yfilter)
	|| ydk::is_set(is_router_id_stalled.yfilter)
	|| ydk::is_set(is_opaque_capable.yfilter)
	|| ydk::is_set(is_area_border_router.yfilter)
	|| ydk::is_set(is_as_border_router.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(is_default_originated.yfilter)
	|| ydk::is_set(is_default_always.yfilter)
	|| ydk::is_set(default_metric.yfilter)
	|| ydk::is_set(default_metric_type.yfilter)
	|| ydk::is_set(default_tag.yfilter)
	|| ydk::is_set(is_default_policy.yfilter)
	|| ydk::is_set(default_policy_name.yfilter)
	|| ydk::is_set(spf_start_time.yfilter)
	|| ydk::is_set(spf_hold_time.yfilter)
	|| ydk::is_set(spf_maximum_time.yfilter)
	|| ydk::is_set(lsa_start_time.yfilter)
	|| ydk::is_set(lsa_hold_time.yfilter)
	|| ydk::is_set(lsa_maximum_time.yfilter)
	|| ydk::is_set(minimum_lsa_interval.yfilter)
	|| ydk::is_set(lsa_group_interval.yfilter)
	|| ydk::is_set(lsa_flood_pacing_interval.yfilter)
	|| ydk::is_set(lsa_retransmission_pacing_interval.yfilter)
	|| ydk::is_set(as_ls_as.yfilter)
	|| ydk::is_set(opaque_lsas.yfilter)
	|| ydk::is_set(opaque_lsa_checksum.yfilter)
	|| ydk::is_set(as_dc_bitless_ls_as.yfilter)
	|| ydk::is_set(as_do_not_age_ls_as.yfilter)
	|| ydk::is_set(areas.yfilter)
	|| ydk::is_set(normal_areas.yfilter)
	|| ydk::is_set(stub_areas.yfilter)
	|| ydk::is_set(nssa_areas.yfilter)
	|| ydk::is_set(as_lsa_flood_list_length.yfilter)
	|| ydk::is_set(is_grace_restart_enabled.yfilter)
	|| ydk::is_set(last_nsf_time.yfilter)
	|| ydk::is_set(grace_resync_time.yfilter)
	|| ydk::is_set(maximum_interfaces.yfilter)
	|| ydk::is_set(maximum_paths.yfilter)
	|| ydk::is_set(redistribution_limit.yfilter)
	|| ydk::is_set(redistribution_threshold.yfilter)
	|| ydk::is_set(is_auto_cost.yfilter)
	|| ydk::is_set(reference_bandwidth.yfilter)
	|| ydk::is_set(context_name.yfilter)
	|| ydk::is_set(snmp_trap_enabled.yfilter)
	|| ydk::is_set(graceful_shutdown_state.yfilter)
	|| (domain_id !=  nullptr && domain_id->has_operation());
}

std::string Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfv3";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());
    if (is_role_standby.is_set || is_set(is_role_standby.yfilter)) leaf_name_data.push_back(is_role_standby.get_name_leafdata());
    if (role.is_set || is_set(role.yfilter)) leaf_name_data.push_back(role.get_name_leafdata());
    if (is_nsr_enabled.is_set || is_set(is_nsr_enabled.yfilter)) leaf_name_data.push_back(is_nsr_enabled.get_name_leafdata());
    if (is_nsr_switchover_on_restart.is_set || is_set(is_nsr_switchover_on_restart.yfilter)) leaf_name_data.push_back(is_nsr_switchover_on_restart.get_name_leafdata());
    if (is_router_id_stalled.is_set || is_set(is_router_id_stalled.yfilter)) leaf_name_data.push_back(is_router_id_stalled.get_name_leafdata());
    if (is_opaque_capable.is_set || is_set(is_opaque_capable.yfilter)) leaf_name_data.push_back(is_opaque_capable.get_name_leafdata());
    if (is_area_border_router.is_set || is_set(is_area_border_router.yfilter)) leaf_name_data.push_back(is_area_border_router.get_name_leafdata());
    if (is_as_border_router.is_set || is_set(is_as_border_router.yfilter)) leaf_name_data.push_back(is_as_border_router.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (is_default_originated.is_set || is_set(is_default_originated.yfilter)) leaf_name_data.push_back(is_default_originated.get_name_leafdata());
    if (is_default_always.is_set || is_set(is_default_always.yfilter)) leaf_name_data.push_back(is_default_always.get_name_leafdata());
    if (default_metric.is_set || is_set(default_metric.yfilter)) leaf_name_data.push_back(default_metric.get_name_leafdata());
    if (default_metric_type.is_set || is_set(default_metric_type.yfilter)) leaf_name_data.push_back(default_metric_type.get_name_leafdata());
    if (default_tag.is_set || is_set(default_tag.yfilter)) leaf_name_data.push_back(default_tag.get_name_leafdata());
    if (is_default_policy.is_set || is_set(is_default_policy.yfilter)) leaf_name_data.push_back(is_default_policy.get_name_leafdata());
    if (default_policy_name.is_set || is_set(default_policy_name.yfilter)) leaf_name_data.push_back(default_policy_name.get_name_leafdata());
    if (spf_start_time.is_set || is_set(spf_start_time.yfilter)) leaf_name_data.push_back(spf_start_time.get_name_leafdata());
    if (spf_hold_time.is_set || is_set(spf_hold_time.yfilter)) leaf_name_data.push_back(spf_hold_time.get_name_leafdata());
    if (spf_maximum_time.is_set || is_set(spf_maximum_time.yfilter)) leaf_name_data.push_back(spf_maximum_time.get_name_leafdata());
    if (lsa_start_time.is_set || is_set(lsa_start_time.yfilter)) leaf_name_data.push_back(lsa_start_time.get_name_leafdata());
    if (lsa_hold_time.is_set || is_set(lsa_hold_time.yfilter)) leaf_name_data.push_back(lsa_hold_time.get_name_leafdata());
    if (lsa_maximum_time.is_set || is_set(lsa_maximum_time.yfilter)) leaf_name_data.push_back(lsa_maximum_time.get_name_leafdata());
    if (minimum_lsa_interval.is_set || is_set(minimum_lsa_interval.yfilter)) leaf_name_data.push_back(minimum_lsa_interval.get_name_leafdata());
    if (lsa_group_interval.is_set || is_set(lsa_group_interval.yfilter)) leaf_name_data.push_back(lsa_group_interval.get_name_leafdata());
    if (lsa_flood_pacing_interval.is_set || is_set(lsa_flood_pacing_interval.yfilter)) leaf_name_data.push_back(lsa_flood_pacing_interval.get_name_leafdata());
    if (lsa_retransmission_pacing_interval.is_set || is_set(lsa_retransmission_pacing_interval.yfilter)) leaf_name_data.push_back(lsa_retransmission_pacing_interval.get_name_leafdata());
    if (as_ls_as.is_set || is_set(as_ls_as.yfilter)) leaf_name_data.push_back(as_ls_as.get_name_leafdata());
    if (opaque_lsas.is_set || is_set(opaque_lsas.yfilter)) leaf_name_data.push_back(opaque_lsas.get_name_leafdata());
    if (opaque_lsa_checksum.is_set || is_set(opaque_lsa_checksum.yfilter)) leaf_name_data.push_back(opaque_lsa_checksum.get_name_leafdata());
    if (as_dc_bitless_ls_as.is_set || is_set(as_dc_bitless_ls_as.yfilter)) leaf_name_data.push_back(as_dc_bitless_ls_as.get_name_leafdata());
    if (as_do_not_age_ls_as.is_set || is_set(as_do_not_age_ls_as.yfilter)) leaf_name_data.push_back(as_do_not_age_ls_as.get_name_leafdata());
    if (areas.is_set || is_set(areas.yfilter)) leaf_name_data.push_back(areas.get_name_leafdata());
    if (normal_areas.is_set || is_set(normal_areas.yfilter)) leaf_name_data.push_back(normal_areas.get_name_leafdata());
    if (stub_areas.is_set || is_set(stub_areas.yfilter)) leaf_name_data.push_back(stub_areas.get_name_leafdata());
    if (nssa_areas.is_set || is_set(nssa_areas.yfilter)) leaf_name_data.push_back(nssa_areas.get_name_leafdata());
    if (as_lsa_flood_list_length.is_set || is_set(as_lsa_flood_list_length.yfilter)) leaf_name_data.push_back(as_lsa_flood_list_length.get_name_leafdata());
    if (is_grace_restart_enabled.is_set || is_set(is_grace_restart_enabled.yfilter)) leaf_name_data.push_back(is_grace_restart_enabled.get_name_leafdata());
    if (last_nsf_time.is_set || is_set(last_nsf_time.yfilter)) leaf_name_data.push_back(last_nsf_time.get_name_leafdata());
    if (grace_resync_time.is_set || is_set(grace_resync_time.yfilter)) leaf_name_data.push_back(grace_resync_time.get_name_leafdata());
    if (maximum_interfaces.is_set || is_set(maximum_interfaces.yfilter)) leaf_name_data.push_back(maximum_interfaces.get_name_leafdata());
    if (maximum_paths.is_set || is_set(maximum_paths.yfilter)) leaf_name_data.push_back(maximum_paths.get_name_leafdata());
    if (redistribution_limit.is_set || is_set(redistribution_limit.yfilter)) leaf_name_data.push_back(redistribution_limit.get_name_leafdata());
    if (redistribution_threshold.is_set || is_set(redistribution_threshold.yfilter)) leaf_name_data.push_back(redistribution_threshold.get_name_leafdata());
    if (is_auto_cost.is_set || is_set(is_auto_cost.yfilter)) leaf_name_data.push_back(is_auto_cost.get_name_leafdata());
    if (reference_bandwidth.is_set || is_set(reference_bandwidth.yfilter)) leaf_name_data.push_back(reference_bandwidth.get_name_leafdata());
    if (context_name.is_set || is_set(context_name.yfilter)) leaf_name_data.push_back(context_name.get_name_leafdata());
    if (snmp_trap_enabled.is_set || is_set(snmp_trap_enabled.yfilter)) leaf_name_data.push_back(snmp_trap_enabled.get_name_leafdata());
    if (graceful_shutdown_state.is_set || is_set(graceful_shutdown_state.yfilter)) leaf_name_data.push_back(graceful_shutdown_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "domain-id")
    {
        if(domain_id == nullptr)
        {
            domain_id = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::DomainId>();
        }
        return domain_id;
    }

    if(child_yang_name == "stub-router")
    {
        auto c = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::StubRouter>();
        c->parent = this;
        stub_router.push_back(c);
        return c;
    }

    if(child_yang_name == "ipfrr-tiebreakers")
    {
        auto c = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::IpfrrTiebreakers>();
        c->parent = this;
        ipfrr_tiebreakers.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(domain_id != nullptr)
    {
        children["domain-id"] = domain_id;
    }

    count = 0;
    for (auto const & c : stub_router)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : ipfrr_tiebreakers)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-role-standby")
    {
        is_role_standby = value;
        is_role_standby.value_namespace = name_space;
        is_role_standby.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "role")
    {
        role = value;
        role.value_namespace = name_space;
        role.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-nsr-enabled")
    {
        is_nsr_enabled = value;
        is_nsr_enabled.value_namespace = name_space;
        is_nsr_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-nsr-switchover-on-restart")
    {
        is_nsr_switchover_on_restart = value;
        is_nsr_switchover_on_restart.value_namespace = name_space;
        is_nsr_switchover_on_restart.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-router-id-stalled")
    {
        is_router_id_stalled = value;
        is_router_id_stalled.value_namespace = name_space;
        is_router_id_stalled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-opaque-capable")
    {
        is_opaque_capable = value;
        is_opaque_capable.value_namespace = name_space;
        is_opaque_capable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-area-border-router")
    {
        is_area_border_router = value;
        is_area_border_router.value_namespace = name_space;
        is_area_border_router.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-as-border-router")
    {
        is_as_border_router = value;
        is_as_border_router.value_namespace = name_space;
        is_as_border_router.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-default-originated")
    {
        is_default_originated = value;
        is_default_originated.value_namespace = name_space;
        is_default_originated.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-default-always")
    {
        is_default_always = value;
        is_default_always.value_namespace = name_space;
        is_default_always.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default-metric")
    {
        default_metric = value;
        default_metric.value_namespace = name_space;
        default_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default-metric-type")
    {
        default_metric_type = value;
        default_metric_type.value_namespace = name_space;
        default_metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default-tag")
    {
        default_tag = value;
        default_tag.value_namespace = name_space;
        default_tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-default-policy")
    {
        is_default_policy = value;
        is_default_policy.value_namespace = name_space;
        is_default_policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default-policy-name")
    {
        default_policy_name = value;
        default_policy_name.value_namespace = name_space;
        default_policy_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spf-start-time")
    {
        spf_start_time = value;
        spf_start_time.value_namespace = name_space;
        spf_start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spf-hold-time")
    {
        spf_hold_time = value;
        spf_hold_time.value_namespace = name_space;
        spf_hold_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spf-maximum-time")
    {
        spf_maximum_time = value;
        spf_maximum_time.value_namespace = name_space;
        spf_maximum_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-start-time")
    {
        lsa_start_time = value;
        lsa_start_time.value_namespace = name_space;
        lsa_start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-hold-time")
    {
        lsa_hold_time = value;
        lsa_hold_time.value_namespace = name_space;
        lsa_hold_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-maximum-time")
    {
        lsa_maximum_time = value;
        lsa_maximum_time.value_namespace = name_space;
        lsa_maximum_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-lsa-interval")
    {
        minimum_lsa_interval = value;
        minimum_lsa_interval.value_namespace = name_space;
        minimum_lsa_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-group-interval")
    {
        lsa_group_interval = value;
        lsa_group_interval.value_namespace = name_space;
        lsa_group_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-flood-pacing-interval")
    {
        lsa_flood_pacing_interval = value;
        lsa_flood_pacing_interval.value_namespace = name_space;
        lsa_flood_pacing_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-retransmission-pacing-interval")
    {
        lsa_retransmission_pacing_interval = value;
        lsa_retransmission_pacing_interval.value_namespace = name_space;
        lsa_retransmission_pacing_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-ls-as")
    {
        as_ls_as = value;
        as_ls_as.value_namespace = name_space;
        as_ls_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "opaque-lsas")
    {
        opaque_lsas = value;
        opaque_lsas.value_namespace = name_space;
        opaque_lsas.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "opaque-lsa-checksum")
    {
        opaque_lsa_checksum = value;
        opaque_lsa_checksum.value_namespace = name_space;
        opaque_lsa_checksum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-dc-bitless-ls-as")
    {
        as_dc_bitless_ls_as = value;
        as_dc_bitless_ls_as.value_namespace = name_space;
        as_dc_bitless_ls_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-do-not-age-ls-as")
    {
        as_do_not_age_ls_as = value;
        as_do_not_age_ls_as.value_namespace = name_space;
        as_do_not_age_ls_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "areas")
    {
        areas = value;
        areas.value_namespace = name_space;
        areas.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "normal-areas")
    {
        normal_areas = value;
        normal_areas.value_namespace = name_space;
        normal_areas.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stub-areas")
    {
        stub_areas = value;
        stub_areas.value_namespace = name_space;
        stub_areas.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssa-areas")
    {
        nssa_areas = value;
        nssa_areas.value_namespace = name_space;
        nssa_areas.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-lsa-flood-list-length")
    {
        as_lsa_flood_list_length = value;
        as_lsa_flood_list_length.value_namespace = name_space;
        as_lsa_flood_list_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-grace-restart-enabled")
    {
        is_grace_restart_enabled = value;
        is_grace_restart_enabled.value_namespace = name_space;
        is_grace_restart_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-nsf-time")
    {
        last_nsf_time = value;
        last_nsf_time.value_namespace = name_space;
        last_nsf_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "grace-resync-time")
    {
        grace_resync_time = value;
        grace_resync_time.value_namespace = name_space;
        grace_resync_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-interfaces")
    {
        maximum_interfaces = value;
        maximum_interfaces.value_namespace = name_space;
        maximum_interfaces.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-paths")
    {
        maximum_paths = value;
        maximum_paths.value_namespace = name_space;
        maximum_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redistribution-limit")
    {
        redistribution_limit = value;
        redistribution_limit.value_namespace = name_space;
        redistribution_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redistribution-threshold")
    {
        redistribution_threshold = value;
        redistribution_threshold.value_namespace = name_space;
        redistribution_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-auto-cost")
    {
        is_auto_cost = value;
        is_auto_cost.value_namespace = name_space;
        is_auto_cost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reference-bandwidth")
    {
        reference_bandwidth = value;
        reference_bandwidth.value_namespace = name_space;
        reference_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "context-name")
    {
        context_name = value;
        context_name.value_namespace = name_space;
        context_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "snmp-trap-enabled")
    {
        snmp_trap_enabled = value;
        snmp_trap_enabled.value_namespace = name_space;
        snmp_trap_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "graceful-shutdown-state")
    {
        graceful_shutdown_state = value;
        graceful_shutdown_state.value_namespace = name_space;
        graceful_shutdown_state.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
    if(value_path == "is-role-standby")
    {
        is_role_standby.yfilter = yfilter;
    }
    if(value_path == "role")
    {
        role.yfilter = yfilter;
    }
    if(value_path == "is-nsr-enabled")
    {
        is_nsr_enabled.yfilter = yfilter;
    }
    if(value_path == "is-nsr-switchover-on-restart")
    {
        is_nsr_switchover_on_restart.yfilter = yfilter;
    }
    if(value_path == "is-router-id-stalled")
    {
        is_router_id_stalled.yfilter = yfilter;
    }
    if(value_path == "is-opaque-capable")
    {
        is_opaque_capable.yfilter = yfilter;
    }
    if(value_path == "is-area-border-router")
    {
        is_area_border_router.yfilter = yfilter;
    }
    if(value_path == "is-as-border-router")
    {
        is_as_border_router.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "is-default-originated")
    {
        is_default_originated.yfilter = yfilter;
    }
    if(value_path == "is-default-always")
    {
        is_default_always.yfilter = yfilter;
    }
    if(value_path == "default-metric")
    {
        default_metric.yfilter = yfilter;
    }
    if(value_path == "default-metric-type")
    {
        default_metric_type.yfilter = yfilter;
    }
    if(value_path == "default-tag")
    {
        default_tag.yfilter = yfilter;
    }
    if(value_path == "is-default-policy")
    {
        is_default_policy.yfilter = yfilter;
    }
    if(value_path == "default-policy-name")
    {
        default_policy_name.yfilter = yfilter;
    }
    if(value_path == "spf-start-time")
    {
        spf_start_time.yfilter = yfilter;
    }
    if(value_path == "spf-hold-time")
    {
        spf_hold_time.yfilter = yfilter;
    }
    if(value_path == "spf-maximum-time")
    {
        spf_maximum_time.yfilter = yfilter;
    }
    if(value_path == "lsa-start-time")
    {
        lsa_start_time.yfilter = yfilter;
    }
    if(value_path == "lsa-hold-time")
    {
        lsa_hold_time.yfilter = yfilter;
    }
    if(value_path == "lsa-maximum-time")
    {
        lsa_maximum_time.yfilter = yfilter;
    }
    if(value_path == "minimum-lsa-interval")
    {
        minimum_lsa_interval.yfilter = yfilter;
    }
    if(value_path == "lsa-group-interval")
    {
        lsa_group_interval.yfilter = yfilter;
    }
    if(value_path == "lsa-flood-pacing-interval")
    {
        lsa_flood_pacing_interval.yfilter = yfilter;
    }
    if(value_path == "lsa-retransmission-pacing-interval")
    {
        lsa_retransmission_pacing_interval.yfilter = yfilter;
    }
    if(value_path == "as-ls-as")
    {
        as_ls_as.yfilter = yfilter;
    }
    if(value_path == "opaque-lsas")
    {
        opaque_lsas.yfilter = yfilter;
    }
    if(value_path == "opaque-lsa-checksum")
    {
        opaque_lsa_checksum.yfilter = yfilter;
    }
    if(value_path == "as-dc-bitless-ls-as")
    {
        as_dc_bitless_ls_as.yfilter = yfilter;
    }
    if(value_path == "as-do-not-age-ls-as")
    {
        as_do_not_age_ls_as.yfilter = yfilter;
    }
    if(value_path == "areas")
    {
        areas.yfilter = yfilter;
    }
    if(value_path == "normal-areas")
    {
        normal_areas.yfilter = yfilter;
    }
    if(value_path == "stub-areas")
    {
        stub_areas.yfilter = yfilter;
    }
    if(value_path == "nssa-areas")
    {
        nssa_areas.yfilter = yfilter;
    }
    if(value_path == "as-lsa-flood-list-length")
    {
        as_lsa_flood_list_length.yfilter = yfilter;
    }
    if(value_path == "is-grace-restart-enabled")
    {
        is_grace_restart_enabled.yfilter = yfilter;
    }
    if(value_path == "last-nsf-time")
    {
        last_nsf_time.yfilter = yfilter;
    }
    if(value_path == "grace-resync-time")
    {
        grace_resync_time.yfilter = yfilter;
    }
    if(value_path == "maximum-interfaces")
    {
        maximum_interfaces.yfilter = yfilter;
    }
    if(value_path == "maximum-paths")
    {
        maximum_paths.yfilter = yfilter;
    }
    if(value_path == "redistribution-limit")
    {
        redistribution_limit.yfilter = yfilter;
    }
    if(value_path == "redistribution-threshold")
    {
        redistribution_threshold.yfilter = yfilter;
    }
    if(value_path == "is-auto-cost")
    {
        is_auto_cost.yfilter = yfilter;
    }
    if(value_path == "reference-bandwidth")
    {
        reference_bandwidth.yfilter = yfilter;
    }
    if(value_path == "context-name")
    {
        context_name.yfilter = yfilter;
    }
    if(value_path == "snmp-trap-enabled")
    {
        snmp_trap_enabled.yfilter = yfilter;
    }
    if(value_path == "graceful-shutdown-state")
    {
        graceful_shutdown_state.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "domain-id" || name == "stub-router" || name == "ipfrr-tiebreakers" || name == "router-id" || name == "is-role-standby" || name == "role" || name == "is-nsr-enabled" || name == "is-nsr-switchover-on-restart" || name == "is-router-id-stalled" || name == "is-opaque-capable" || name == "is-area-border-router" || name == "is-as-border-router" || name == "metric" || name == "is-default-originated" || name == "is-default-always" || name == "default-metric" || name == "default-metric-type" || name == "default-tag" || name == "is-default-policy" || name == "default-policy-name" || name == "spf-start-time" || name == "spf-hold-time" || name == "spf-maximum-time" || name == "lsa-start-time" || name == "lsa-hold-time" || name == "lsa-maximum-time" || name == "minimum-lsa-interval" || name == "lsa-group-interval" || name == "lsa-flood-pacing-interval" || name == "lsa-retransmission-pacing-interval" || name == "as-ls-as" || name == "opaque-lsas" || name == "opaque-lsa-checksum" || name == "as-dc-bitless-ls-as" || name == "as-do-not-age-ls-as" || name == "areas" || name == "normal-areas" || name == "stub-areas" || name == "nssa-areas" || name == "as-lsa-flood-list-length" || name == "is-grace-restart-enabled" || name == "last-nsf-time" || name == "grace-resync-time" || name == "maximum-interfaces" || name == "maximum-paths" || name == "redistribution-limit" || name == "redistribution-threshold" || name == "is-auto-cost" || name == "reference-bandwidth" || name == "context-name" || name == "snmp-trap-enabled" || name == "graceful-shutdown-state")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::DomainId::DomainId()
    :
    primary_domain_id(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::DomainId::PrimaryDomainId>())
{
    primary_domain_id->parent = this;

    yang_name = "domain-id"; yang_parent_name = "ospfv3"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::DomainId::~DomainId()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::DomainId::has_data() const
{
    for (std::size_t index=0; index<secondary_domain_id.size(); index++)
    {
        if(secondary_domain_id[index]->has_data())
            return true;
    }
    return (primary_domain_id !=  nullptr && primary_domain_id->has_data());
}

bool Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::DomainId::has_operation() const
{
    for (std::size_t index=0; index<secondary_domain_id.size(); index++)
    {
        if(secondary_domain_id[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (primary_domain_id !=  nullptr && primary_domain_id->has_operation());
}

std::string Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::DomainId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "domain-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::DomainId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::DomainId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "primary-domain-id")
    {
        if(primary_domain_id == nullptr)
        {
            primary_domain_id = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::DomainId::PrimaryDomainId>();
        }
        return primary_domain_id;
    }

    if(child_yang_name == "secondary-domain-id")
    {
        auto c = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::DomainId::SecondaryDomainId>();
        c->parent = this;
        secondary_domain_id.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::DomainId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(primary_domain_id != nullptr)
    {
        children["primary-domain-id"] = primary_domain_id;
    }

    count = 0;
    for (auto const & c : secondary_domain_id)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::DomainId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::DomainId::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::DomainId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "primary-domain-id" || name == "secondary-domain-id")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::DomainId::PrimaryDomainId::PrimaryDomainId()
    :
    domain_id_type{YType::uint16, "domain-id-type"},
    domain_id_value{YType::str, "domain-id-value"}
{

    yang_name = "primary-domain-id"; yang_parent_name = "domain-id"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::DomainId::PrimaryDomainId::~PrimaryDomainId()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::DomainId::PrimaryDomainId::has_data() const
{
    return domain_id_type.is_set
	|| domain_id_value.is_set;
}

bool Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::DomainId::PrimaryDomainId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(domain_id_type.yfilter)
	|| ydk::is_set(domain_id_value.yfilter);
}

std::string Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::DomainId::PrimaryDomainId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "primary-domain-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::DomainId::PrimaryDomainId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (domain_id_type.is_set || is_set(domain_id_type.yfilter)) leaf_name_data.push_back(domain_id_type.get_name_leafdata());
    if (domain_id_value.is_set || is_set(domain_id_value.yfilter)) leaf_name_data.push_back(domain_id_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::DomainId::PrimaryDomainId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::DomainId::PrimaryDomainId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::DomainId::PrimaryDomainId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "domain-id-type")
    {
        domain_id_type = value;
        domain_id_type.value_namespace = name_space;
        domain_id_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "domain-id-value")
    {
        domain_id_value = value;
        domain_id_value.value_namespace = name_space;
        domain_id_value.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::DomainId::PrimaryDomainId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "domain-id-type")
    {
        domain_id_type.yfilter = yfilter;
    }
    if(value_path == "domain-id-value")
    {
        domain_id_value.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::DomainId::PrimaryDomainId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "domain-id-type" || name == "domain-id-value")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::DomainId::SecondaryDomainId::SecondaryDomainId()
    :
    domain_id_type{YType::uint16, "domain-id-type"},
    domain_id_value{YType::str, "domain-id-value"}
{

    yang_name = "secondary-domain-id"; yang_parent_name = "domain-id"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::DomainId::SecondaryDomainId::~SecondaryDomainId()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::DomainId::SecondaryDomainId::has_data() const
{
    return domain_id_type.is_set
	|| domain_id_value.is_set;
}

bool Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::DomainId::SecondaryDomainId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(domain_id_type.yfilter)
	|| ydk::is_set(domain_id_value.yfilter);
}

std::string Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::DomainId::SecondaryDomainId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "secondary-domain-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::DomainId::SecondaryDomainId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (domain_id_type.is_set || is_set(domain_id_type.yfilter)) leaf_name_data.push_back(domain_id_type.get_name_leafdata());
    if (domain_id_value.is_set || is_set(domain_id_value.yfilter)) leaf_name_data.push_back(domain_id_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::DomainId::SecondaryDomainId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::DomainId::SecondaryDomainId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::DomainId::SecondaryDomainId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "domain-id-type")
    {
        domain_id_type = value;
        domain_id_type.value_namespace = name_space;
        domain_id_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "domain-id-value")
    {
        domain_id_value = value;
        domain_id_value.value_namespace = name_space;
        domain_id_value.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::DomainId::SecondaryDomainId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "domain-id-type")
    {
        domain_id_type.yfilter = yfilter;
    }
    if(value_path == "domain-id-value")
    {
        domain_id_value.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::DomainId::SecondaryDomainId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "domain-id-type" || name == "domain-id-value")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::StubRouter::StubRouter()
    :
    mode{YType::enumeration, "mode"},
    active{YType::boolean, "active"},
    remaining_time{YType::uint32, "remaining-time"},
    set_reason{YType::enumeration, "set-reason"},
    unset_reason{YType::enumeration, "unset-reason"},
    include_stub_links{YType::boolean, "include-stub-links"},
    summary_lsa_metric{YType::uint32, "summary-lsa-metric"},
    external_lsa_metric{YType::uint32, "external-lsa-metric"},
    abr_off_reason{YType::enumeration, "abr-off-reason"}
    	,
    unset_time(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::StubRouter::UnsetTime>())
	,start_time(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::StubRouter::StartTime>())
	,abr_resume_time(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::StubRouter::AbrResumeTime>())
{
    unset_time->parent = this;
    start_time->parent = this;
    abr_resume_time->parent = this;

    yang_name = "stub-router"; yang_parent_name = "ospfv3"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::StubRouter::~StubRouter()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::StubRouter::has_data() const
{
    for (std::size_t index=0; index<trigger.size(); index++)
    {
        if(trigger[index]->has_data())
            return true;
    }
    return mode.is_set
	|| active.is_set
	|| remaining_time.is_set
	|| set_reason.is_set
	|| unset_reason.is_set
	|| include_stub_links.is_set
	|| summary_lsa_metric.is_set
	|| external_lsa_metric.is_set
	|| abr_off_reason.is_set
	|| (unset_time !=  nullptr && unset_time->has_data())
	|| (start_time !=  nullptr && start_time->has_data())
	|| (abr_resume_time !=  nullptr && abr_resume_time->has_data());
}

bool Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::StubRouter::has_operation() const
{
    for (std::size_t index=0; index<trigger.size(); index++)
    {
        if(trigger[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(mode.yfilter)
	|| ydk::is_set(active.yfilter)
	|| ydk::is_set(remaining_time.yfilter)
	|| ydk::is_set(set_reason.yfilter)
	|| ydk::is_set(unset_reason.yfilter)
	|| ydk::is_set(include_stub_links.yfilter)
	|| ydk::is_set(summary_lsa_metric.yfilter)
	|| ydk::is_set(external_lsa_metric.yfilter)
	|| ydk::is_set(abr_off_reason.yfilter)
	|| (unset_time !=  nullptr && unset_time->has_operation())
	|| (start_time !=  nullptr && start_time->has_operation())
	|| (abr_resume_time !=  nullptr && abr_resume_time->has_operation());
}

std::string Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::StubRouter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stub-router";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::StubRouter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (active.is_set || is_set(active.yfilter)) leaf_name_data.push_back(active.get_name_leafdata());
    if (remaining_time.is_set || is_set(remaining_time.yfilter)) leaf_name_data.push_back(remaining_time.get_name_leafdata());
    if (set_reason.is_set || is_set(set_reason.yfilter)) leaf_name_data.push_back(set_reason.get_name_leafdata());
    if (unset_reason.is_set || is_set(unset_reason.yfilter)) leaf_name_data.push_back(unset_reason.get_name_leafdata());
    if (include_stub_links.is_set || is_set(include_stub_links.yfilter)) leaf_name_data.push_back(include_stub_links.get_name_leafdata());
    if (summary_lsa_metric.is_set || is_set(summary_lsa_metric.yfilter)) leaf_name_data.push_back(summary_lsa_metric.get_name_leafdata());
    if (external_lsa_metric.is_set || is_set(external_lsa_metric.yfilter)) leaf_name_data.push_back(external_lsa_metric.get_name_leafdata());
    if (abr_off_reason.is_set || is_set(abr_off_reason.yfilter)) leaf_name_data.push_back(abr_off_reason.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::StubRouter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "unset-time")
    {
        if(unset_time == nullptr)
        {
            unset_time = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::StubRouter::UnsetTime>();
        }
        return unset_time;
    }

    if(child_yang_name == "start-time")
    {
        if(start_time == nullptr)
        {
            start_time = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::StubRouter::StartTime>();
        }
        return start_time;
    }

    if(child_yang_name == "abr-resume-time")
    {
        if(abr_resume_time == nullptr)
        {
            abr_resume_time = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::StubRouter::AbrResumeTime>();
        }
        return abr_resume_time;
    }

    if(child_yang_name == "trigger")
    {
        auto c = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::StubRouter::Trigger>();
        c->parent = this;
        trigger.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::StubRouter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(unset_time != nullptr)
    {
        children["unset-time"] = unset_time;
    }

    if(start_time != nullptr)
    {
        children["start-time"] = start_time;
    }

    if(abr_resume_time != nullptr)
    {
        children["abr-resume-time"] = abr_resume_time;
    }

    count = 0;
    for (auto const & c : trigger)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::StubRouter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "active")
    {
        active = value;
        active.value_namespace = name_space;
        active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remaining-time")
    {
        remaining_time = value;
        remaining_time.value_namespace = name_space;
        remaining_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "set-reason")
    {
        set_reason = value;
        set_reason.value_namespace = name_space;
        set_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unset-reason")
    {
        unset_reason = value;
        unset_reason.value_namespace = name_space;
        unset_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "include-stub-links")
    {
        include_stub_links = value;
        include_stub_links.value_namespace = name_space;
        include_stub_links.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "summary-lsa-metric")
    {
        summary_lsa_metric = value;
        summary_lsa_metric.value_namespace = name_space;
        summary_lsa_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "external-lsa-metric")
    {
        external_lsa_metric = value;
        external_lsa_metric.value_namespace = name_space;
        external_lsa_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "abr-off-reason")
    {
        abr_off_reason = value;
        abr_off_reason.value_namespace = name_space;
        abr_off_reason.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::StubRouter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
    if(value_path == "active")
    {
        active.yfilter = yfilter;
    }
    if(value_path == "remaining-time")
    {
        remaining_time.yfilter = yfilter;
    }
    if(value_path == "set-reason")
    {
        set_reason.yfilter = yfilter;
    }
    if(value_path == "unset-reason")
    {
        unset_reason.yfilter = yfilter;
    }
    if(value_path == "include-stub-links")
    {
        include_stub_links.yfilter = yfilter;
    }
    if(value_path == "summary-lsa-metric")
    {
        summary_lsa_metric.yfilter = yfilter;
    }
    if(value_path == "external-lsa-metric")
    {
        external_lsa_metric.yfilter = yfilter;
    }
    if(value_path == "abr-off-reason")
    {
        abr_off_reason.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::StubRouter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unset-time" || name == "start-time" || name == "abr-resume-time" || name == "trigger" || name == "mode" || name == "active" || name == "remaining-time" || name == "set-reason" || name == "unset-reason" || name == "include-stub-links" || name == "summary-lsa-metric" || name == "external-lsa-metric" || name == "abr-off-reason")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::StubRouter::UnsetTime::UnsetTime()
    :
    second{YType::uint32, "second"},
    nanosecond{YType::uint32, "nanosecond"}
{

    yang_name = "unset-time"; yang_parent_name = "stub-router"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::StubRouter::UnsetTime::~UnsetTime()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::StubRouter::UnsetTime::has_data() const
{
    return second.is_set
	|| nanosecond.is_set;
}

bool Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::StubRouter::UnsetTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(second.yfilter)
	|| ydk::is_set(nanosecond.yfilter);
}

std::string Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::StubRouter::UnsetTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unset-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::StubRouter::UnsetTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (second.is_set || is_set(second.yfilter)) leaf_name_data.push_back(second.get_name_leafdata());
    if (nanosecond.is_set || is_set(nanosecond.yfilter)) leaf_name_data.push_back(nanosecond.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::StubRouter::UnsetTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::StubRouter::UnsetTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::StubRouter::UnsetTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "second")
    {
        second = value;
        second.value_namespace = name_space;
        second.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nanosecond")
    {
        nanosecond = value;
        nanosecond.value_namespace = name_space;
        nanosecond.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::StubRouter::UnsetTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "second")
    {
        second.yfilter = yfilter;
    }
    if(value_path == "nanosecond")
    {
        nanosecond.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::StubRouter::UnsetTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "second" || name == "nanosecond")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::StubRouter::StartTime::StartTime()
    :
    second{YType::uint32, "second"},
    nanosecond{YType::uint32, "nanosecond"}
{

    yang_name = "start-time"; yang_parent_name = "stub-router"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::StubRouter::StartTime::~StartTime()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::StubRouter::StartTime::has_data() const
{
    return second.is_set
	|| nanosecond.is_set;
}

bool Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::StubRouter::StartTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(second.yfilter)
	|| ydk::is_set(nanosecond.yfilter);
}

std::string Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::StubRouter::StartTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "start-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::StubRouter::StartTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (second.is_set || is_set(second.yfilter)) leaf_name_data.push_back(second.get_name_leafdata());
    if (nanosecond.is_set || is_set(nanosecond.yfilter)) leaf_name_data.push_back(nanosecond.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::StubRouter::StartTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::StubRouter::StartTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::StubRouter::StartTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "second")
    {
        second = value;
        second.value_namespace = name_space;
        second.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nanosecond")
    {
        nanosecond = value;
        nanosecond.value_namespace = name_space;
        nanosecond.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::StubRouter::StartTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "second")
    {
        second.yfilter = yfilter;
    }
    if(value_path == "nanosecond")
    {
        nanosecond.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::StubRouter::StartTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "second" || name == "nanosecond")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::StubRouter::AbrResumeTime::AbrResumeTime()
    :
    second{YType::uint32, "second"},
    nanosecond{YType::uint32, "nanosecond"}
{

    yang_name = "abr-resume-time"; yang_parent_name = "stub-router"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::StubRouter::AbrResumeTime::~AbrResumeTime()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::StubRouter::AbrResumeTime::has_data() const
{
    return second.is_set
	|| nanosecond.is_set;
}

bool Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::StubRouter::AbrResumeTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(second.yfilter)
	|| ydk::is_set(nanosecond.yfilter);
}

std::string Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::StubRouter::AbrResumeTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "abr-resume-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::StubRouter::AbrResumeTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (second.is_set || is_set(second.yfilter)) leaf_name_data.push_back(second.get_name_leafdata());
    if (nanosecond.is_set || is_set(nanosecond.yfilter)) leaf_name_data.push_back(nanosecond.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::StubRouter::AbrResumeTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::StubRouter::AbrResumeTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::StubRouter::AbrResumeTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "second")
    {
        second = value;
        second.value_namespace = name_space;
        second.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nanosecond")
    {
        nanosecond = value;
        nanosecond.value_namespace = name_space;
        nanosecond.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::StubRouter::AbrResumeTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "second")
    {
        second.yfilter = yfilter;
    }
    if(value_path == "nanosecond")
    {
        nanosecond.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::StubRouter::AbrResumeTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "second" || name == "nanosecond")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::StubRouter::Trigger::Trigger()
    :
    trigger{YType::enumeration, "trigger"},
    wait_for_bgp{YType::boolean, "wait-for-bgp"},
    unset_reason{YType::enumeration, "unset-reason"},
    time{YType::uint32, "time"}
    	,
    unset_time(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::StubRouter::Trigger::UnsetTime>())
	,start_time(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::StubRouter::Trigger::StartTime>())
{
    unset_time->parent = this;
    start_time->parent = this;

    yang_name = "trigger"; yang_parent_name = "stub-router"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::StubRouter::Trigger::~Trigger()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::StubRouter::Trigger::has_data() const
{
    return trigger.is_set
	|| wait_for_bgp.is_set
	|| unset_reason.is_set
	|| time.is_set
	|| (unset_time !=  nullptr && unset_time->has_data())
	|| (start_time !=  nullptr && start_time->has_data());
}

bool Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::StubRouter::Trigger::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(trigger.yfilter)
	|| ydk::is_set(wait_for_bgp.yfilter)
	|| ydk::is_set(unset_reason.yfilter)
	|| ydk::is_set(time.yfilter)
	|| (unset_time !=  nullptr && unset_time->has_operation())
	|| (start_time !=  nullptr && start_time->has_operation());
}

std::string Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::StubRouter::Trigger::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trigger";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::StubRouter::Trigger::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trigger.is_set || is_set(trigger.yfilter)) leaf_name_data.push_back(trigger.get_name_leafdata());
    if (wait_for_bgp.is_set || is_set(wait_for_bgp.yfilter)) leaf_name_data.push_back(wait_for_bgp.get_name_leafdata());
    if (unset_reason.is_set || is_set(unset_reason.yfilter)) leaf_name_data.push_back(unset_reason.get_name_leafdata());
    if (time.is_set || is_set(time.yfilter)) leaf_name_data.push_back(time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::StubRouter::Trigger::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "unset-time")
    {
        if(unset_time == nullptr)
        {
            unset_time = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::StubRouter::Trigger::UnsetTime>();
        }
        return unset_time;
    }

    if(child_yang_name == "start-time")
    {
        if(start_time == nullptr)
        {
            start_time = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::StubRouter::Trigger::StartTime>();
        }
        return start_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::StubRouter::Trigger::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(unset_time != nullptr)
    {
        children["unset-time"] = unset_time;
    }

    if(start_time != nullptr)
    {
        children["start-time"] = start_time;
    }

    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::StubRouter::Trigger::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "trigger")
    {
        trigger = value;
        trigger.value_namespace = name_space;
        trigger.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wait-for-bgp")
    {
        wait_for_bgp = value;
        wait_for_bgp.value_namespace = name_space;
        wait_for_bgp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unset-reason")
    {
        unset_reason = value;
        unset_reason.value_namespace = name_space;
        unset_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time")
    {
        time = value;
        time.value_namespace = name_space;
        time.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::StubRouter::Trigger::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "trigger")
    {
        trigger.yfilter = yfilter;
    }
    if(value_path == "wait-for-bgp")
    {
        wait_for_bgp.yfilter = yfilter;
    }
    if(value_path == "unset-reason")
    {
        unset_reason.yfilter = yfilter;
    }
    if(value_path == "time")
    {
        time.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::StubRouter::Trigger::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unset-time" || name == "start-time" || name == "trigger" || name == "wait-for-bgp" || name == "unset-reason" || name == "time")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::StubRouter::Trigger::UnsetTime::UnsetTime()
    :
    second{YType::uint32, "second"},
    nanosecond{YType::uint32, "nanosecond"}
{

    yang_name = "unset-time"; yang_parent_name = "trigger"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::StubRouter::Trigger::UnsetTime::~UnsetTime()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::StubRouter::Trigger::UnsetTime::has_data() const
{
    return second.is_set
	|| nanosecond.is_set;
}

bool Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::StubRouter::Trigger::UnsetTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(second.yfilter)
	|| ydk::is_set(nanosecond.yfilter);
}

std::string Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::StubRouter::Trigger::UnsetTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unset-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::StubRouter::Trigger::UnsetTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (second.is_set || is_set(second.yfilter)) leaf_name_data.push_back(second.get_name_leafdata());
    if (nanosecond.is_set || is_set(nanosecond.yfilter)) leaf_name_data.push_back(nanosecond.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::StubRouter::Trigger::UnsetTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::StubRouter::Trigger::UnsetTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::StubRouter::Trigger::UnsetTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "second")
    {
        second = value;
        second.value_namespace = name_space;
        second.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nanosecond")
    {
        nanosecond = value;
        nanosecond.value_namespace = name_space;
        nanosecond.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::StubRouter::Trigger::UnsetTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "second")
    {
        second.yfilter = yfilter;
    }
    if(value_path == "nanosecond")
    {
        nanosecond.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::StubRouter::Trigger::UnsetTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "second" || name == "nanosecond")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::StubRouter::Trigger::StartTime::StartTime()
    :
    second{YType::uint32, "second"},
    nanosecond{YType::uint32, "nanosecond"}
{

    yang_name = "start-time"; yang_parent_name = "trigger"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::StubRouter::Trigger::StartTime::~StartTime()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::StubRouter::Trigger::StartTime::has_data() const
{
    return second.is_set
	|| nanosecond.is_set;
}

bool Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::StubRouter::Trigger::StartTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(second.yfilter)
	|| ydk::is_set(nanosecond.yfilter);
}

std::string Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::StubRouter::Trigger::StartTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "start-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::StubRouter::Trigger::StartTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (second.is_set || is_set(second.yfilter)) leaf_name_data.push_back(second.get_name_leafdata());
    if (nanosecond.is_set || is_set(nanosecond.yfilter)) leaf_name_data.push_back(nanosecond.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::StubRouter::Trigger::StartTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::StubRouter::Trigger::StartTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::StubRouter::Trigger::StartTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "second")
    {
        second = value;
        second.value_namespace = name_space;
        second.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nanosecond")
    {
        nanosecond = value;
        nanosecond.value_namespace = name_space;
        nanosecond.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::StubRouter::Trigger::StartTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "second")
    {
        second.yfilter = yfilter;
    }
    if(value_path == "nanosecond")
    {
        nanosecond.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::StubRouter::Trigger::StartTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "second" || name == "nanosecond")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::IpfrrTiebreakers::IpfrrTiebreakers()
    :
    tiebreaker_type{YType::enumeration, "tiebreaker-type"},
    tiebreaker_index{YType::uint32, "tiebreaker-index"}
{

    yang_name = "ipfrr-tiebreakers"; yang_parent_name = "ospfv3"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::IpfrrTiebreakers::~IpfrrTiebreakers()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::IpfrrTiebreakers::has_data() const
{
    return tiebreaker_type.is_set
	|| tiebreaker_index.is_set;
}

bool Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::IpfrrTiebreakers::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tiebreaker_type.yfilter)
	|| ydk::is_set(tiebreaker_index.yfilter);
}

std::string Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::IpfrrTiebreakers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipfrr-tiebreakers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::IpfrrTiebreakers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tiebreaker_type.is_set || is_set(tiebreaker_type.yfilter)) leaf_name_data.push_back(tiebreaker_type.get_name_leafdata());
    if (tiebreaker_index.is_set || is_set(tiebreaker_index.yfilter)) leaf_name_data.push_back(tiebreaker_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::IpfrrTiebreakers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::IpfrrTiebreakers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::IpfrrTiebreakers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tiebreaker-type")
    {
        tiebreaker_type = value;
        tiebreaker_type.value_namespace = name_space;
        tiebreaker_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tiebreaker-index")
    {
        tiebreaker_index = value;
        tiebreaker_index.value_namespace = name_space;
        tiebreaker_index.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::IpfrrTiebreakers::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tiebreaker-type")
    {
        tiebreaker_type.yfilter = yfilter;
    }
    if(value_path == "tiebreaker-index")
    {
        tiebreaker_index.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::Summary::Ospfv3_::IpfrrTiebreakers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tiebreaker-type" || name == "tiebreaker-index")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::Summary::Route::Route()
    :
    route_id{YType::str, "route-id"},
    intra_area_route{YType::uint32, "intra-area-route"},
    inter_area_route{YType::uint32, "inter-area-route"},
    extern_one_route{YType::uint32, "extern-one-route"},
    extern_two_route{YType::uint32, "extern-two-route"},
    nssa_one_route{YType::uint32, "nssa-one-route"},
    nssa_two_route{YType::uint32, "nssa-two-route"},
    total_sent_route{YType::uint32, "total-sent-route"},
    route_connected{YType::uint32, "route-connected"},
    redistribution_route{YType::uint32, "redistribution-route"},
    total_received_route{YType::uint32, "total-received-route"}
{

    yang_name = "route"; yang_parent_name = "summary"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::Summary::Route::~Route()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::Summary::Route::has_data() const
{
    return route_id.is_set
	|| intra_area_route.is_set
	|| inter_area_route.is_set
	|| extern_one_route.is_set
	|| extern_two_route.is_set
	|| nssa_one_route.is_set
	|| nssa_two_route.is_set
	|| total_sent_route.is_set
	|| route_connected.is_set
	|| redistribution_route.is_set
	|| total_received_route.is_set;
}

bool Ospfv3::Processes::Process::DefaultVrf::Summary::Route::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_id.yfilter)
	|| ydk::is_set(intra_area_route.yfilter)
	|| ydk::is_set(inter_area_route.yfilter)
	|| ydk::is_set(extern_one_route.yfilter)
	|| ydk::is_set(extern_two_route.yfilter)
	|| ydk::is_set(nssa_one_route.yfilter)
	|| ydk::is_set(nssa_two_route.yfilter)
	|| ydk::is_set(total_sent_route.yfilter)
	|| ydk::is_set(route_connected.yfilter)
	|| ydk::is_set(redistribution_route.yfilter)
	|| ydk::is_set(total_received_route.yfilter);
}

std::string Ospfv3::Processes::Process::DefaultVrf::Summary::Route::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::Summary::Route::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_id.is_set || is_set(route_id.yfilter)) leaf_name_data.push_back(route_id.get_name_leafdata());
    if (intra_area_route.is_set || is_set(intra_area_route.yfilter)) leaf_name_data.push_back(intra_area_route.get_name_leafdata());
    if (inter_area_route.is_set || is_set(inter_area_route.yfilter)) leaf_name_data.push_back(inter_area_route.get_name_leafdata());
    if (extern_one_route.is_set || is_set(extern_one_route.yfilter)) leaf_name_data.push_back(extern_one_route.get_name_leafdata());
    if (extern_two_route.is_set || is_set(extern_two_route.yfilter)) leaf_name_data.push_back(extern_two_route.get_name_leafdata());
    if (nssa_one_route.is_set || is_set(nssa_one_route.yfilter)) leaf_name_data.push_back(nssa_one_route.get_name_leafdata());
    if (nssa_two_route.is_set || is_set(nssa_two_route.yfilter)) leaf_name_data.push_back(nssa_two_route.get_name_leafdata());
    if (total_sent_route.is_set || is_set(total_sent_route.yfilter)) leaf_name_data.push_back(total_sent_route.get_name_leafdata());
    if (route_connected.is_set || is_set(route_connected.yfilter)) leaf_name_data.push_back(route_connected.get_name_leafdata());
    if (redistribution_route.is_set || is_set(redistribution_route.yfilter)) leaf_name_data.push_back(redistribution_route.get_name_leafdata());
    if (total_received_route.is_set || is_set(total_received_route.yfilter)) leaf_name_data.push_back(total_received_route.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::Summary::Route::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::Summary::Route::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::Summary::Route::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-id")
    {
        route_id = value;
        route_id.value_namespace = name_space;
        route_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "intra-area-route")
    {
        intra_area_route = value;
        intra_area_route.value_namespace = name_space;
        intra_area_route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inter-area-route")
    {
        inter_area_route = value;
        inter_area_route.value_namespace = name_space;
        inter_area_route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extern-one-route")
    {
        extern_one_route = value;
        extern_one_route.value_namespace = name_space;
        extern_one_route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extern-two-route")
    {
        extern_two_route = value;
        extern_two_route.value_namespace = name_space;
        extern_two_route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssa-one-route")
    {
        nssa_one_route = value;
        nssa_one_route.value_namespace = name_space;
        nssa_one_route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssa-two-route")
    {
        nssa_two_route = value;
        nssa_two_route.value_namespace = name_space;
        nssa_two_route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-sent-route")
    {
        total_sent_route = value;
        total_sent_route.value_namespace = name_space;
        total_sent_route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-connected")
    {
        route_connected = value;
        route_connected.value_namespace = name_space;
        route_connected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redistribution-route")
    {
        redistribution_route = value;
        redistribution_route.value_namespace = name_space;
        redistribution_route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-received-route")
    {
        total_received_route = value;
        total_received_route.value_namespace = name_space;
        total_received_route.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::DefaultVrf::Summary::Route::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-id")
    {
        route_id.yfilter = yfilter;
    }
    if(value_path == "intra-area-route")
    {
        intra_area_route.yfilter = yfilter;
    }
    if(value_path == "inter-area-route")
    {
        inter_area_route.yfilter = yfilter;
    }
    if(value_path == "extern-one-route")
    {
        extern_one_route.yfilter = yfilter;
    }
    if(value_path == "extern-two-route")
    {
        extern_two_route.yfilter = yfilter;
    }
    if(value_path == "nssa-one-route")
    {
        nssa_one_route.yfilter = yfilter;
    }
    if(value_path == "nssa-two-route")
    {
        nssa_two_route.yfilter = yfilter;
    }
    if(value_path == "total-sent-route")
    {
        total_sent_route.yfilter = yfilter;
    }
    if(value_path == "route-connected")
    {
        route_connected.yfilter = yfilter;
    }
    if(value_path == "redistribution-route")
    {
        redistribution_route.yfilter = yfilter;
    }
    if(value_path == "total-received-route")
    {
        total_received_route.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::Summary::Route::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-id" || name == "intra-area-route" || name == "inter-area-route" || name == "extern-one-route" || name == "extern-two-route" || name == "nssa-one-route" || name == "nssa-two-route" || name == "total-sent-route" || name == "route-connected" || name == "redistribution-route" || name == "total-received-route")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::RetransmissionListProcessTable::RetransmissionListProcessTable()
{

    yang_name = "retransmission-list-process-table"; yang_parent_name = "default-vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::RetransmissionListProcessTable::~RetransmissionListProcessTable()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::RetransmissionListProcessTable::has_data() const
{
    for (std::size_t index=0; index<retransmission.size(); index++)
    {
        if(retransmission[index]->has_data())
            return true;
    }
    return false;
}

bool Ospfv3::Processes::Process::DefaultVrf::RetransmissionListProcessTable::has_operation() const
{
    for (std::size_t index=0; index<retransmission.size(); index++)
    {
        if(retransmission[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospfv3::Processes::Process::DefaultVrf::RetransmissionListProcessTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "retransmission-list-process-table";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::RetransmissionListProcessTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::RetransmissionListProcessTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "retransmission")
    {
        auto c = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::RetransmissionListProcessTable::Retransmission>();
        c->parent = this;
        retransmission.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::RetransmissionListProcessTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : retransmission)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::RetransmissionListProcessTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospfv3::Processes::Process::DefaultVrf::RetransmissionListProcessTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospfv3::Processes::Process::DefaultVrf::RetransmissionListProcessTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "retransmission")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::RetransmissionListProcessTable::Retransmission::Retransmission()
    :
    interface_name{YType::str, "interface-name"},
    neighbor_address{YType::str, "neighbor-address"},
    retransmission_neighbor_address{YType::str, "retransmission-neighbor-address"},
    is_retransmissionvirtual_link{YType::boolean, "is-retransmissionvirtual-link"},
    retransmissionvirtual_link_id{YType::uint32, "retransmissionvirtual-link-id"},
    is_retransmission_sham_link{YType::boolean, "is-retransmission-sham-link"},
    retransmission_sham_link_id{YType::uint32, "retransmission-sham-link-id"},
    retransmission_timer{YType::uint32, "retransmission-timer"},
    retransmission_length{YType::uint32, "retransmission-length"}
{

    yang_name = "retransmission"; yang_parent_name = "retransmission-list-process-table"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::RetransmissionListProcessTable::Retransmission::~Retransmission()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::RetransmissionListProcessTable::Retransmission::has_data() const
{
    for (std::size_t index=0; index<retransmissionvirtual_link_db.size(); index++)
    {
        if(retransmissionvirtual_link_db[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<retransmission_area_db.size(); index++)
    {
        if(retransmission_area_db[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<retransmission_asdb.size(); index++)
    {
        if(retransmission_asdb[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| neighbor_address.is_set
	|| retransmission_neighbor_address.is_set
	|| is_retransmissionvirtual_link.is_set
	|| retransmissionvirtual_link_id.is_set
	|| is_retransmission_sham_link.is_set
	|| retransmission_sham_link_id.is_set
	|| retransmission_timer.is_set
	|| retransmission_length.is_set;
}

bool Ospfv3::Processes::Process::DefaultVrf::RetransmissionListProcessTable::Retransmission::has_operation() const
{
    for (std::size_t index=0; index<retransmissionvirtual_link_db.size(); index++)
    {
        if(retransmissionvirtual_link_db[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<retransmission_area_db.size(); index++)
    {
        if(retransmission_area_db[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<retransmission_asdb.size(); index++)
    {
        if(retransmission_asdb[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(neighbor_address.yfilter)
	|| ydk::is_set(retransmission_neighbor_address.yfilter)
	|| ydk::is_set(is_retransmissionvirtual_link.yfilter)
	|| ydk::is_set(retransmissionvirtual_link_id.yfilter)
	|| ydk::is_set(is_retransmission_sham_link.yfilter)
	|| ydk::is_set(retransmission_sham_link_id.yfilter)
	|| ydk::is_set(retransmission_timer.yfilter)
	|| ydk::is_set(retransmission_length.yfilter);
}

std::string Ospfv3::Processes::Process::DefaultVrf::RetransmissionListProcessTable::Retransmission::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "retransmission";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::RetransmissionListProcessTable::Retransmission::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (retransmission_neighbor_address.is_set || is_set(retransmission_neighbor_address.yfilter)) leaf_name_data.push_back(retransmission_neighbor_address.get_name_leafdata());
    if (is_retransmissionvirtual_link.is_set || is_set(is_retransmissionvirtual_link.yfilter)) leaf_name_data.push_back(is_retransmissionvirtual_link.get_name_leafdata());
    if (retransmissionvirtual_link_id.is_set || is_set(retransmissionvirtual_link_id.yfilter)) leaf_name_data.push_back(retransmissionvirtual_link_id.get_name_leafdata());
    if (is_retransmission_sham_link.is_set || is_set(is_retransmission_sham_link.yfilter)) leaf_name_data.push_back(is_retransmission_sham_link.get_name_leafdata());
    if (retransmission_sham_link_id.is_set || is_set(retransmission_sham_link_id.yfilter)) leaf_name_data.push_back(retransmission_sham_link_id.get_name_leafdata());
    if (retransmission_timer.is_set || is_set(retransmission_timer.yfilter)) leaf_name_data.push_back(retransmission_timer.get_name_leafdata());
    if (retransmission_length.is_set || is_set(retransmission_length.yfilter)) leaf_name_data.push_back(retransmission_length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::RetransmissionListProcessTable::Retransmission::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "retransmissionvirtual-link-db")
    {
        auto c = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::RetransmissionListProcessTable::Retransmission::RetransmissionvirtualLinkDb>();
        c->parent = this;
        retransmissionvirtual_link_db.push_back(c);
        return c;
    }

    if(child_yang_name == "retransmission-area-db")
    {
        auto c = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::RetransmissionListProcessTable::Retransmission::RetransmissionAreaDb>();
        c->parent = this;
        retransmission_area_db.push_back(c);
        return c;
    }

    if(child_yang_name == "retransmission-asdb")
    {
        auto c = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::RetransmissionListProcessTable::Retransmission::RetransmissionAsdb>();
        c->parent = this;
        retransmission_asdb.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::RetransmissionListProcessTable::Retransmission::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : retransmissionvirtual_link_db)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : retransmission_area_db)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : retransmission_asdb)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::RetransmissionListProcessTable::Retransmission::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
        neighbor_address.value_namespace = name_space;
        neighbor_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retransmission-neighbor-address")
    {
        retransmission_neighbor_address = value;
        retransmission_neighbor_address.value_namespace = name_space;
        retransmission_neighbor_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-retransmissionvirtual-link")
    {
        is_retransmissionvirtual_link = value;
        is_retransmissionvirtual_link.value_namespace = name_space;
        is_retransmissionvirtual_link.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retransmissionvirtual-link-id")
    {
        retransmissionvirtual_link_id = value;
        retransmissionvirtual_link_id.value_namespace = name_space;
        retransmissionvirtual_link_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-retransmission-sham-link")
    {
        is_retransmission_sham_link = value;
        is_retransmission_sham_link.value_namespace = name_space;
        is_retransmission_sham_link.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retransmission-sham-link-id")
    {
        retransmission_sham_link_id = value;
        retransmission_sham_link_id.value_namespace = name_space;
        retransmission_sham_link_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retransmission-timer")
    {
        retransmission_timer = value;
        retransmission_timer.value_namespace = name_space;
        retransmission_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retransmission-length")
    {
        retransmission_length = value;
        retransmission_length.value_namespace = name_space;
        retransmission_length.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::DefaultVrf::RetransmissionListProcessTable::Retransmission::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address.yfilter = yfilter;
    }
    if(value_path == "retransmission-neighbor-address")
    {
        retransmission_neighbor_address.yfilter = yfilter;
    }
    if(value_path == "is-retransmissionvirtual-link")
    {
        is_retransmissionvirtual_link.yfilter = yfilter;
    }
    if(value_path == "retransmissionvirtual-link-id")
    {
        retransmissionvirtual_link_id.yfilter = yfilter;
    }
    if(value_path == "is-retransmission-sham-link")
    {
        is_retransmission_sham_link.yfilter = yfilter;
    }
    if(value_path == "retransmission-sham-link-id")
    {
        retransmission_sham_link_id.yfilter = yfilter;
    }
    if(value_path == "retransmission-timer")
    {
        retransmission_timer.yfilter = yfilter;
    }
    if(value_path == "retransmission-length")
    {
        retransmission_length.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::RetransmissionListProcessTable::Retransmission::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "retransmissionvirtual-link-db" || name == "retransmission-area-db" || name == "retransmission-asdb" || name == "interface-name" || name == "neighbor-address" || name == "retransmission-neighbor-address" || name == "is-retransmissionvirtual-link" || name == "retransmissionvirtual-link-id" || name == "is-retransmission-sham-link" || name == "retransmission-sham-link-id" || name == "retransmission-timer" || name == "retransmission-length")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::RetransmissionListProcessTable::Retransmission::RetransmissionvirtualLinkDb::RetransmissionvirtualLinkDb()
    :
    header_lsa_type{YType::enumeration, "header-lsa-type"},
    header_lsa_age{YType::uint16, "header-lsa-age"},
    header_lsa_id{YType::str, "header-lsa-id"},
    header_advertising_router{YType::str, "header-advertising-router"},
    header_sequence_number{YType::int32, "header-sequence-number"}
{

    yang_name = "retransmissionvirtual-link-db"; yang_parent_name = "retransmission"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::RetransmissionListProcessTable::Retransmission::RetransmissionvirtualLinkDb::~RetransmissionvirtualLinkDb()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::RetransmissionListProcessTable::Retransmission::RetransmissionvirtualLinkDb::has_data() const
{
    return header_lsa_type.is_set
	|| header_lsa_age.is_set
	|| header_lsa_id.is_set
	|| header_advertising_router.is_set
	|| header_sequence_number.is_set;
}

bool Ospfv3::Processes::Process::DefaultVrf::RetransmissionListProcessTable::Retransmission::RetransmissionvirtualLinkDb::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(header_lsa_type.yfilter)
	|| ydk::is_set(header_lsa_age.yfilter)
	|| ydk::is_set(header_lsa_id.yfilter)
	|| ydk::is_set(header_advertising_router.yfilter)
	|| ydk::is_set(header_sequence_number.yfilter);
}

std::string Ospfv3::Processes::Process::DefaultVrf::RetransmissionListProcessTable::Retransmission::RetransmissionvirtualLinkDb::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "retransmissionvirtual-link-db";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::RetransmissionListProcessTable::Retransmission::RetransmissionvirtualLinkDb::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (header_lsa_type.is_set || is_set(header_lsa_type.yfilter)) leaf_name_data.push_back(header_lsa_type.get_name_leafdata());
    if (header_lsa_age.is_set || is_set(header_lsa_age.yfilter)) leaf_name_data.push_back(header_lsa_age.get_name_leafdata());
    if (header_lsa_id.is_set || is_set(header_lsa_id.yfilter)) leaf_name_data.push_back(header_lsa_id.get_name_leafdata());
    if (header_advertising_router.is_set || is_set(header_advertising_router.yfilter)) leaf_name_data.push_back(header_advertising_router.get_name_leafdata());
    if (header_sequence_number.is_set || is_set(header_sequence_number.yfilter)) leaf_name_data.push_back(header_sequence_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::RetransmissionListProcessTable::Retransmission::RetransmissionvirtualLinkDb::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::RetransmissionListProcessTable::Retransmission::RetransmissionvirtualLinkDb::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::RetransmissionListProcessTable::Retransmission::RetransmissionvirtualLinkDb::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "header-lsa-type")
    {
        header_lsa_type = value;
        header_lsa_type.value_namespace = name_space;
        header_lsa_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "header-lsa-age")
    {
        header_lsa_age = value;
        header_lsa_age.value_namespace = name_space;
        header_lsa_age.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "header-lsa-id")
    {
        header_lsa_id = value;
        header_lsa_id.value_namespace = name_space;
        header_lsa_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "header-advertising-router")
    {
        header_advertising_router = value;
        header_advertising_router.value_namespace = name_space;
        header_advertising_router.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "header-sequence-number")
    {
        header_sequence_number = value;
        header_sequence_number.value_namespace = name_space;
        header_sequence_number.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::DefaultVrf::RetransmissionListProcessTable::Retransmission::RetransmissionvirtualLinkDb::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "header-lsa-type")
    {
        header_lsa_type.yfilter = yfilter;
    }
    if(value_path == "header-lsa-age")
    {
        header_lsa_age.yfilter = yfilter;
    }
    if(value_path == "header-lsa-id")
    {
        header_lsa_id.yfilter = yfilter;
    }
    if(value_path == "header-advertising-router")
    {
        header_advertising_router.yfilter = yfilter;
    }
    if(value_path == "header-sequence-number")
    {
        header_sequence_number.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::RetransmissionListProcessTable::Retransmission::RetransmissionvirtualLinkDb::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "header-lsa-type" || name == "header-lsa-age" || name == "header-lsa-id" || name == "header-advertising-router" || name == "header-sequence-number")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::RetransmissionListProcessTable::Retransmission::RetransmissionAreaDb::RetransmissionAreaDb()
    :
    header_lsa_type{YType::enumeration, "header-lsa-type"},
    header_lsa_age{YType::uint16, "header-lsa-age"},
    header_lsa_id{YType::str, "header-lsa-id"},
    header_advertising_router{YType::str, "header-advertising-router"},
    header_sequence_number{YType::int32, "header-sequence-number"}
{

    yang_name = "retransmission-area-db"; yang_parent_name = "retransmission"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::RetransmissionListProcessTable::Retransmission::RetransmissionAreaDb::~RetransmissionAreaDb()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::RetransmissionListProcessTable::Retransmission::RetransmissionAreaDb::has_data() const
{
    return header_lsa_type.is_set
	|| header_lsa_age.is_set
	|| header_lsa_id.is_set
	|| header_advertising_router.is_set
	|| header_sequence_number.is_set;
}

bool Ospfv3::Processes::Process::DefaultVrf::RetransmissionListProcessTable::Retransmission::RetransmissionAreaDb::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(header_lsa_type.yfilter)
	|| ydk::is_set(header_lsa_age.yfilter)
	|| ydk::is_set(header_lsa_id.yfilter)
	|| ydk::is_set(header_advertising_router.yfilter)
	|| ydk::is_set(header_sequence_number.yfilter);
}

std::string Ospfv3::Processes::Process::DefaultVrf::RetransmissionListProcessTable::Retransmission::RetransmissionAreaDb::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "retransmission-area-db";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::RetransmissionListProcessTable::Retransmission::RetransmissionAreaDb::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (header_lsa_type.is_set || is_set(header_lsa_type.yfilter)) leaf_name_data.push_back(header_lsa_type.get_name_leafdata());
    if (header_lsa_age.is_set || is_set(header_lsa_age.yfilter)) leaf_name_data.push_back(header_lsa_age.get_name_leafdata());
    if (header_lsa_id.is_set || is_set(header_lsa_id.yfilter)) leaf_name_data.push_back(header_lsa_id.get_name_leafdata());
    if (header_advertising_router.is_set || is_set(header_advertising_router.yfilter)) leaf_name_data.push_back(header_advertising_router.get_name_leafdata());
    if (header_sequence_number.is_set || is_set(header_sequence_number.yfilter)) leaf_name_data.push_back(header_sequence_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::RetransmissionListProcessTable::Retransmission::RetransmissionAreaDb::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::RetransmissionListProcessTable::Retransmission::RetransmissionAreaDb::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::RetransmissionListProcessTable::Retransmission::RetransmissionAreaDb::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "header-lsa-type")
    {
        header_lsa_type = value;
        header_lsa_type.value_namespace = name_space;
        header_lsa_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "header-lsa-age")
    {
        header_lsa_age = value;
        header_lsa_age.value_namespace = name_space;
        header_lsa_age.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "header-lsa-id")
    {
        header_lsa_id = value;
        header_lsa_id.value_namespace = name_space;
        header_lsa_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "header-advertising-router")
    {
        header_advertising_router = value;
        header_advertising_router.value_namespace = name_space;
        header_advertising_router.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "header-sequence-number")
    {
        header_sequence_number = value;
        header_sequence_number.value_namespace = name_space;
        header_sequence_number.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::DefaultVrf::RetransmissionListProcessTable::Retransmission::RetransmissionAreaDb::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "header-lsa-type")
    {
        header_lsa_type.yfilter = yfilter;
    }
    if(value_path == "header-lsa-age")
    {
        header_lsa_age.yfilter = yfilter;
    }
    if(value_path == "header-lsa-id")
    {
        header_lsa_id.yfilter = yfilter;
    }
    if(value_path == "header-advertising-router")
    {
        header_advertising_router.yfilter = yfilter;
    }
    if(value_path == "header-sequence-number")
    {
        header_sequence_number.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::RetransmissionListProcessTable::Retransmission::RetransmissionAreaDb::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "header-lsa-type" || name == "header-lsa-age" || name == "header-lsa-id" || name == "header-advertising-router" || name == "header-sequence-number")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::RetransmissionListProcessTable::Retransmission::RetransmissionAsdb::RetransmissionAsdb()
    :
    header_lsa_type{YType::enumeration, "header-lsa-type"},
    header_lsa_age{YType::uint16, "header-lsa-age"},
    header_lsa_id{YType::str, "header-lsa-id"},
    header_advertising_router{YType::str, "header-advertising-router"},
    header_sequence_number{YType::int32, "header-sequence-number"}
{

    yang_name = "retransmission-asdb"; yang_parent_name = "retransmission"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::RetransmissionListProcessTable::Retransmission::RetransmissionAsdb::~RetransmissionAsdb()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::RetransmissionListProcessTable::Retransmission::RetransmissionAsdb::has_data() const
{
    return header_lsa_type.is_set
	|| header_lsa_age.is_set
	|| header_lsa_id.is_set
	|| header_advertising_router.is_set
	|| header_sequence_number.is_set;
}

bool Ospfv3::Processes::Process::DefaultVrf::RetransmissionListProcessTable::Retransmission::RetransmissionAsdb::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(header_lsa_type.yfilter)
	|| ydk::is_set(header_lsa_age.yfilter)
	|| ydk::is_set(header_lsa_id.yfilter)
	|| ydk::is_set(header_advertising_router.yfilter)
	|| ydk::is_set(header_sequence_number.yfilter);
}

std::string Ospfv3::Processes::Process::DefaultVrf::RetransmissionListProcessTable::Retransmission::RetransmissionAsdb::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "retransmission-asdb";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::RetransmissionListProcessTable::Retransmission::RetransmissionAsdb::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (header_lsa_type.is_set || is_set(header_lsa_type.yfilter)) leaf_name_data.push_back(header_lsa_type.get_name_leafdata());
    if (header_lsa_age.is_set || is_set(header_lsa_age.yfilter)) leaf_name_data.push_back(header_lsa_age.get_name_leafdata());
    if (header_lsa_id.is_set || is_set(header_lsa_id.yfilter)) leaf_name_data.push_back(header_lsa_id.get_name_leafdata());
    if (header_advertising_router.is_set || is_set(header_advertising_router.yfilter)) leaf_name_data.push_back(header_advertising_router.get_name_leafdata());
    if (header_sequence_number.is_set || is_set(header_sequence_number.yfilter)) leaf_name_data.push_back(header_sequence_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::RetransmissionListProcessTable::Retransmission::RetransmissionAsdb::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::RetransmissionListProcessTable::Retransmission::RetransmissionAsdb::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::RetransmissionListProcessTable::Retransmission::RetransmissionAsdb::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "header-lsa-type")
    {
        header_lsa_type = value;
        header_lsa_type.value_namespace = name_space;
        header_lsa_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "header-lsa-age")
    {
        header_lsa_age = value;
        header_lsa_age.value_namespace = name_space;
        header_lsa_age.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "header-lsa-id")
    {
        header_lsa_id = value;
        header_lsa_id.value_namespace = name_space;
        header_lsa_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "header-advertising-router")
    {
        header_advertising_router = value;
        header_advertising_router.value_namespace = name_space;
        header_advertising_router.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "header-sequence-number")
    {
        header_sequence_number = value;
        header_sequence_number.value_namespace = name_space;
        header_sequence_number.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::DefaultVrf::RetransmissionListProcessTable::Retransmission::RetransmissionAsdb::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "header-lsa-type")
    {
        header_lsa_type.yfilter = yfilter;
    }
    if(value_path == "header-lsa-age")
    {
        header_lsa_age.yfilter = yfilter;
    }
    if(value_path == "header-lsa-id")
    {
        header_lsa_id.yfilter = yfilter;
    }
    if(value_path == "header-advertising-router")
    {
        header_advertising_router.yfilter = yfilter;
    }
    if(value_path == "header-sequence-number")
    {
        header_sequence_number.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::RetransmissionListProcessTable::Retransmission::RetransmissionAsdb::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "header-lsa-type" || name == "header-lsa-age" || name == "header-lsa-id" || name == "header-advertising-router" || name == "header-sequence-number")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::BadChecksums::BadChecksums()
{

    yang_name = "bad-checksums"; yang_parent_name = "default-vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::BadChecksums::~BadChecksums()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::BadChecksums::has_data() const
{
    for (std::size_t index=0; index<bad_checksum.size(); index++)
    {
        if(bad_checksum[index]->has_data())
            return true;
    }
    return false;
}

bool Ospfv3::Processes::Process::DefaultVrf::BadChecksums::has_operation() const
{
    for (std::size_t index=0; index<bad_checksum.size(); index++)
    {
        if(bad_checksum[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospfv3::Processes::Process::DefaultVrf::BadChecksums::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bad-checksums";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::BadChecksums::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::BadChecksums::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bad-checksum")
    {
        auto c = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::BadChecksums::BadChecksum>();
        c->parent = this;
        bad_checksum.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::BadChecksums::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : bad_checksum)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::BadChecksums::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospfv3::Processes::Process::DefaultVrf::BadChecksums::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospfv3::Processes::Process::DefaultVrf::BadChecksums::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bad-checksum")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::BadChecksums::BadChecksum::BadChecksum()
    :
    packet_number{YType::uint32, "packet-number"},
    received_checksum{YType::uint16, "received-checksum"},
    computed_checksum{YType::uint16, "computed-checksum"},
    received_data{YType::str, "received-data"}
    	,
    timestamp(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::BadChecksums::BadChecksum::Timestamp>())
{
    timestamp->parent = this;

    yang_name = "bad-checksum"; yang_parent_name = "bad-checksums"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::BadChecksums::BadChecksum::~BadChecksum()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::BadChecksums::BadChecksum::has_data() const
{
    return packet_number.is_set
	|| received_checksum.is_set
	|| computed_checksum.is_set
	|| received_data.is_set
	|| (timestamp !=  nullptr && timestamp->has_data());
}

bool Ospfv3::Processes::Process::DefaultVrf::BadChecksums::BadChecksum::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packet_number.yfilter)
	|| ydk::is_set(received_checksum.yfilter)
	|| ydk::is_set(computed_checksum.yfilter)
	|| ydk::is_set(received_data.yfilter)
	|| (timestamp !=  nullptr && timestamp->has_operation());
}

std::string Ospfv3::Processes::Process::DefaultVrf::BadChecksums::BadChecksum::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bad-checksum" <<"[packet-number='" <<packet_number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::BadChecksums::BadChecksum::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packet_number.is_set || is_set(packet_number.yfilter)) leaf_name_data.push_back(packet_number.get_name_leafdata());
    if (received_checksum.is_set || is_set(received_checksum.yfilter)) leaf_name_data.push_back(received_checksum.get_name_leafdata());
    if (computed_checksum.is_set || is_set(computed_checksum.yfilter)) leaf_name_data.push_back(computed_checksum.get_name_leafdata());
    if (received_data.is_set || is_set(received_data.yfilter)) leaf_name_data.push_back(received_data.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::BadChecksums::BadChecksum::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "timestamp")
    {
        if(timestamp == nullptr)
        {
            timestamp = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::BadChecksums::BadChecksum::Timestamp>();
        }
        return timestamp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::BadChecksums::BadChecksum::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(timestamp != nullptr)
    {
        children["timestamp"] = timestamp;
    }

    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::BadChecksums::BadChecksum::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packet-number")
    {
        packet_number = value;
        packet_number.value_namespace = name_space;
        packet_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-checksum")
    {
        received_checksum = value;
        received_checksum.value_namespace = name_space;
        received_checksum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "computed-checksum")
    {
        computed_checksum = value;
        computed_checksum.value_namespace = name_space;
        computed_checksum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-data")
    {
        received_data = value;
        received_data.value_namespace = name_space;
        received_data.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::DefaultVrf::BadChecksums::BadChecksum::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packet-number")
    {
        packet_number.yfilter = yfilter;
    }
    if(value_path == "received-checksum")
    {
        received_checksum.yfilter = yfilter;
    }
    if(value_path == "computed-checksum")
    {
        computed_checksum.yfilter = yfilter;
    }
    if(value_path == "received-data")
    {
        received_data.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::BadChecksums::BadChecksum::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "timestamp" || name == "packet-number" || name == "received-checksum" || name == "computed-checksum" || name == "received-data")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::BadChecksums::BadChecksum::Timestamp::Timestamp()
    :
    second{YType::uint32, "second"},
    nanosecond{YType::uint32, "nanosecond"}
{

    yang_name = "timestamp"; yang_parent_name = "bad-checksum"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::BadChecksums::BadChecksum::Timestamp::~Timestamp()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::BadChecksums::BadChecksum::Timestamp::has_data() const
{
    return second.is_set
	|| nanosecond.is_set;
}

bool Ospfv3::Processes::Process::DefaultVrf::BadChecksums::BadChecksum::Timestamp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(second.yfilter)
	|| ydk::is_set(nanosecond.yfilter);
}

std::string Ospfv3::Processes::Process::DefaultVrf::BadChecksums::BadChecksum::Timestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timestamp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::BadChecksums::BadChecksum::Timestamp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (second.is_set || is_set(second.yfilter)) leaf_name_data.push_back(second.get_name_leafdata());
    if (nanosecond.is_set || is_set(nanosecond.yfilter)) leaf_name_data.push_back(nanosecond.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::BadChecksums::BadChecksum::Timestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::BadChecksums::BadChecksum::Timestamp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::BadChecksums::BadChecksum::Timestamp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "second")
    {
        second = value;
        second.value_namespace = name_space;
        second.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nanosecond")
    {
        nanosecond = value;
        nanosecond.value_namespace = name_space;
        nanosecond.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::DefaultVrf::BadChecksums::BadChecksum::Timestamp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "second")
    {
        second.yfilter = yfilter;
    }
    if(value_path == "nanosecond")
    {
        nanosecond.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::BadChecksums::BadChecksum::Timestamp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "second" || name == "nanosecond")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::DatabaseSummaryTable::DatabaseSummaryTable()
    :
    database_summary(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::DatabaseSummaryTable::DatabaseSummary>())
{
    database_summary->parent = this;

    yang_name = "database-summary-table"; yang_parent_name = "default-vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::DatabaseSummaryTable::~DatabaseSummaryTable()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::DatabaseSummaryTable::has_data() const
{
    return (database_summary !=  nullptr && database_summary->has_data());
}

bool Ospfv3::Processes::Process::DefaultVrf::DatabaseSummaryTable::has_operation() const
{
    return is_set(yfilter)
	|| (database_summary !=  nullptr && database_summary->has_operation());
}

std::string Ospfv3::Processes::Process::DefaultVrf::DatabaseSummaryTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database-summary-table";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::DatabaseSummaryTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::DatabaseSummaryTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "database-summary")
    {
        if(database_summary == nullptr)
        {
            database_summary = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::DatabaseSummaryTable::DatabaseSummary>();
        }
        return database_summary;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::DatabaseSummaryTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(database_summary != nullptr)
    {
        children["database-summary"] = database_summary;
    }

    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::DatabaseSummaryTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospfv3::Processes::Process::DefaultVrf::DatabaseSummaryTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospfv3::Processes::Process::DefaultVrf::DatabaseSummaryTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "database-summary")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::DatabaseSummaryTable::DatabaseSummary::DatabaseSummary()
    :
    database_router_id{YType::str, "database-router-id"},
    is_opaque_database_capable{YType::boolean, "is-opaque-database-capable"}
    	,
    database_counters(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::DatabaseSummaryTable::DatabaseSummary::DatabaseCounters>())
{
    database_counters->parent = this;

    yang_name = "database-summary"; yang_parent_name = "database-summary-table"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::DatabaseSummaryTable::DatabaseSummary::~DatabaseSummary()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::DatabaseSummaryTable::DatabaseSummary::has_data() const
{
    for (std::size_t index=0; index<area_database.size(); index++)
    {
        if(area_database[index]->has_data())
            return true;
    }
    return database_router_id.is_set
	|| is_opaque_database_capable.is_set
	|| (database_counters !=  nullptr && database_counters->has_data());
}

bool Ospfv3::Processes::Process::DefaultVrf::DatabaseSummaryTable::DatabaseSummary::has_operation() const
{
    for (std::size_t index=0; index<area_database.size(); index++)
    {
        if(area_database[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(database_router_id.yfilter)
	|| ydk::is_set(is_opaque_database_capable.yfilter)
	|| (database_counters !=  nullptr && database_counters->has_operation());
}

std::string Ospfv3::Processes::Process::DefaultVrf::DatabaseSummaryTable::DatabaseSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::DatabaseSummaryTable::DatabaseSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (database_router_id.is_set || is_set(database_router_id.yfilter)) leaf_name_data.push_back(database_router_id.get_name_leafdata());
    if (is_opaque_database_capable.is_set || is_set(is_opaque_database_capable.yfilter)) leaf_name_data.push_back(is_opaque_database_capable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::DatabaseSummaryTable::DatabaseSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "database-counters")
    {
        if(database_counters == nullptr)
        {
            database_counters = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::DatabaseSummaryTable::DatabaseSummary::DatabaseCounters>();
        }
        return database_counters;
    }

    if(child_yang_name == "area-database")
    {
        auto c = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::DatabaseSummaryTable::DatabaseSummary::AreaDatabase>();
        c->parent = this;
        area_database.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::DatabaseSummaryTable::DatabaseSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(database_counters != nullptr)
    {
        children["database-counters"] = database_counters;
    }

    count = 0;
    for (auto const & c : area_database)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::DatabaseSummaryTable::DatabaseSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "database-router-id")
    {
        database_router_id = value;
        database_router_id.value_namespace = name_space;
        database_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-opaque-database-capable")
    {
        is_opaque_database_capable = value;
        is_opaque_database_capable.value_namespace = name_space;
        is_opaque_database_capable.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::DefaultVrf::DatabaseSummaryTable::DatabaseSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "database-router-id")
    {
        database_router_id.yfilter = yfilter;
    }
    if(value_path == "is-opaque-database-capable")
    {
        is_opaque_database_capable.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::DatabaseSummaryTable::DatabaseSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "database-counters" || name == "area-database" || name == "database-router-id" || name == "is-opaque-database-capable")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::DatabaseSummaryTable::DatabaseSummary::DatabaseCounters::DatabaseCounters()
    :
    lsa{YType::uint32, "lsa"},
    deleted_lsa{YType::uint32, "deleted-lsa"},
    max_age_lsa{YType::uint32, "max-age-lsa"},
    lsa_checksum{YType::uint32, "lsa-checksum"}
{

    yang_name = "database-counters"; yang_parent_name = "database-summary"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::DatabaseSummaryTable::DatabaseSummary::DatabaseCounters::~DatabaseCounters()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::DatabaseSummaryTable::DatabaseSummary::DatabaseCounters::has_data() const
{
    for (auto const & leaf : lsa.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : deleted_lsa.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : max_age_lsa.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : lsa_checksum.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Ospfv3::Processes::Process::DefaultVrf::DatabaseSummaryTable::DatabaseSummary::DatabaseCounters::has_operation() const
{
    for (auto const & leaf : lsa.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : deleted_lsa.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : max_age_lsa.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : lsa_checksum.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(lsa.yfilter)
	|| ydk::is_set(deleted_lsa.yfilter)
	|| ydk::is_set(max_age_lsa.yfilter)
	|| ydk::is_set(lsa_checksum.yfilter);
}

std::string Ospfv3::Processes::Process::DefaultVrf::DatabaseSummaryTable::DatabaseSummary::DatabaseCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database-counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::DatabaseSummaryTable::DatabaseSummary::DatabaseCounters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto lsa_name_datas = lsa.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), lsa_name_datas.begin(), lsa_name_datas.end());
    auto deleted_lsa_name_datas = deleted_lsa.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), deleted_lsa_name_datas.begin(), deleted_lsa_name_datas.end());
    auto max_age_lsa_name_datas = max_age_lsa.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), max_age_lsa_name_datas.begin(), max_age_lsa_name_datas.end());
    auto lsa_checksum_name_datas = lsa_checksum.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), lsa_checksum_name_datas.begin(), lsa_checksum_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::DatabaseSummaryTable::DatabaseSummary::DatabaseCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::DatabaseSummaryTable::DatabaseSummary::DatabaseCounters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::DatabaseSummaryTable::DatabaseSummary::DatabaseCounters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsa")
    {
        lsa.append(value);
    }
    if(value_path == "deleted-lsa")
    {
        deleted_lsa.append(value);
    }
    if(value_path == "max-age-lsa")
    {
        max_age_lsa.append(value);
    }
    if(value_path == "lsa-checksum")
    {
        lsa_checksum.append(value);
    }
}

void Ospfv3::Processes::Process::DefaultVrf::DatabaseSummaryTable::DatabaseSummary::DatabaseCounters::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsa")
    {
        lsa.yfilter = yfilter;
    }
    if(value_path == "deleted-lsa")
    {
        deleted_lsa.yfilter = yfilter;
    }
    if(value_path == "max-age-lsa")
    {
        max_age_lsa.yfilter = yfilter;
    }
    if(value_path == "lsa-checksum")
    {
        lsa_checksum.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::DatabaseSummaryTable::DatabaseSummary::DatabaseCounters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsa" || name == "deleted-lsa" || name == "max-age-lsa" || name == "lsa-checksum")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::DatabaseSummaryTable::DatabaseSummary::AreaDatabase::AreaDatabase()
    :
    lsa_area_id{YType::str, "lsa-area-id"}
    	,
    area_database_summary(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::DatabaseSummaryTable::DatabaseSummary::AreaDatabase::AreaDatabaseSummary>())
{
    area_database_summary->parent = this;

    yang_name = "area-database"; yang_parent_name = "database-summary"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::DatabaseSummaryTable::DatabaseSummary::AreaDatabase::~AreaDatabase()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::DatabaseSummaryTable::DatabaseSummary::AreaDatabase::has_data() const
{
    return lsa_area_id.is_set
	|| (area_database_summary !=  nullptr && area_database_summary->has_data());
}

bool Ospfv3::Processes::Process::DefaultVrf::DatabaseSummaryTable::DatabaseSummary::AreaDatabase::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lsa_area_id.yfilter)
	|| (area_database_summary !=  nullptr && area_database_summary->has_operation());
}

std::string Ospfv3::Processes::Process::DefaultVrf::DatabaseSummaryTable::DatabaseSummary::AreaDatabase::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "area-database";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::DatabaseSummaryTable::DatabaseSummary::AreaDatabase::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsa_area_id.is_set || is_set(lsa_area_id.yfilter)) leaf_name_data.push_back(lsa_area_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::DatabaseSummaryTable::DatabaseSummary::AreaDatabase::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "area-database-summary")
    {
        if(area_database_summary == nullptr)
        {
            area_database_summary = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::DatabaseSummaryTable::DatabaseSummary::AreaDatabase::AreaDatabaseSummary>();
        }
        return area_database_summary;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::DatabaseSummaryTable::DatabaseSummary::AreaDatabase::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(area_database_summary != nullptr)
    {
        children["area-database-summary"] = area_database_summary;
    }

    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::DatabaseSummaryTable::DatabaseSummary::AreaDatabase::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsa-area-id")
    {
        lsa_area_id = value;
        lsa_area_id.value_namespace = name_space;
        lsa_area_id.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::DefaultVrf::DatabaseSummaryTable::DatabaseSummary::AreaDatabase::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsa-area-id")
    {
        lsa_area_id.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::DatabaseSummaryTable::DatabaseSummary::AreaDatabase::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "area-database-summary" || name == "lsa-area-id")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::DatabaseSummaryTable::DatabaseSummary::AreaDatabase::AreaDatabaseSummary::AreaDatabaseSummary()
    :
    lsa{YType::uint32, "lsa"},
    deleted_lsa{YType::uint32, "deleted-lsa"},
    max_age_lsa{YType::uint32, "max-age-lsa"},
    lsa_checksum{YType::uint32, "lsa-checksum"}
{

    yang_name = "area-database-summary"; yang_parent_name = "area-database"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::DatabaseSummaryTable::DatabaseSummary::AreaDatabase::AreaDatabaseSummary::~AreaDatabaseSummary()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::DatabaseSummaryTable::DatabaseSummary::AreaDatabase::AreaDatabaseSummary::has_data() const
{
    for (auto const & leaf : lsa.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : deleted_lsa.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : max_age_lsa.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : lsa_checksum.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Ospfv3::Processes::Process::DefaultVrf::DatabaseSummaryTable::DatabaseSummary::AreaDatabase::AreaDatabaseSummary::has_operation() const
{
    for (auto const & leaf : lsa.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : deleted_lsa.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : max_age_lsa.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : lsa_checksum.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(lsa.yfilter)
	|| ydk::is_set(deleted_lsa.yfilter)
	|| ydk::is_set(max_age_lsa.yfilter)
	|| ydk::is_set(lsa_checksum.yfilter);
}

std::string Ospfv3::Processes::Process::DefaultVrf::DatabaseSummaryTable::DatabaseSummary::AreaDatabase::AreaDatabaseSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "area-database-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::DatabaseSummaryTable::DatabaseSummary::AreaDatabase::AreaDatabaseSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto lsa_name_datas = lsa.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), lsa_name_datas.begin(), lsa_name_datas.end());
    auto deleted_lsa_name_datas = deleted_lsa.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), deleted_lsa_name_datas.begin(), deleted_lsa_name_datas.end());
    auto max_age_lsa_name_datas = max_age_lsa.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), max_age_lsa_name_datas.begin(), max_age_lsa_name_datas.end());
    auto lsa_checksum_name_datas = lsa_checksum.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), lsa_checksum_name_datas.begin(), lsa_checksum_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::DatabaseSummaryTable::DatabaseSummary::AreaDatabase::AreaDatabaseSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::DatabaseSummaryTable::DatabaseSummary::AreaDatabase::AreaDatabaseSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::DatabaseSummaryTable::DatabaseSummary::AreaDatabase::AreaDatabaseSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsa")
    {
        lsa.append(value);
    }
    if(value_path == "deleted-lsa")
    {
        deleted_lsa.append(value);
    }
    if(value_path == "max-age-lsa")
    {
        max_age_lsa.append(value);
    }
    if(value_path == "lsa-checksum")
    {
        lsa_checksum.append(value);
    }
}

void Ospfv3::Processes::Process::DefaultVrf::DatabaseSummaryTable::DatabaseSummary::AreaDatabase::AreaDatabaseSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsa")
    {
        lsa.yfilter = yfilter;
    }
    if(value_path == "deleted-lsa")
    {
        deleted_lsa.yfilter = yfilter;
    }
    if(value_path == "max-age-lsa")
    {
        max_age_lsa.yfilter = yfilter;
    }
    if(value_path == "lsa-checksum")
    {
        lsa_checksum.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::DatabaseSummaryTable::DatabaseSummary::AreaDatabase::AreaDatabaseSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsa" || name == "deleted-lsa" || name == "max-age-lsa" || name == "lsa-checksum")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::NeighborProcessTable::NeighborProcessTable()
{

    yang_name = "neighbor-process-table"; yang_parent_name = "default-vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::NeighborProcessTable::~NeighborProcessTable()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::NeighborProcessTable::has_data() const
{
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_data())
            return true;
    }
    return false;
}

bool Ospfv3::Processes::Process::DefaultVrf::NeighborProcessTable::has_operation() const
{
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospfv3::Processes::Process::DefaultVrf::NeighborProcessTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-process-table";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::NeighborProcessTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::NeighborProcessTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor")
    {
        auto c = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::NeighborProcessTable::Neighbor>();
        c->parent = this;
        neighbor.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::NeighborProcessTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : neighbor)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::NeighborProcessTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospfv3::Processes::Process::DefaultVrf::NeighborProcessTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospfv3::Processes::Process::DefaultVrf::NeighborProcessTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::NeighborProcessTable::Neighbor::Neighbor()
    :
    interface_name{YType::str, "interface-name"},
    neighbor_address{YType::str, "neighbor-address"},
    neighbor_address_xr{YType::str, "neighbor-address-xr"},
    neighbor_interface_id{YType::uint32, "neighbor-interface-id"},
    neighbor_dr_priority{YType::uint8, "neighbor-dr-priority"},
    neighbor_state{YType::enumeration, "neighbor-state"},
    neighbor_designated_router{YType::str, "neighbor-designated-router"},
    neighbor_dead_timer{YType::uint32, "neighbor-dead-timer"},
    neighbor_up_time{YType::uint32, "neighbor-up-time"},
    neighbor_virtual_link_id{YType::uint32, "neighbor-virtual-link-id"},
    is_neighbor_virtual_link{YType::boolean, "is-neighbor-virtual-link"},
    neighbor_sham_link_id{YType::uint32, "neighbor-sham-link-id"},
    is_neighbor_sham_link{YType::boolean, "is-neighbor-sham-link"}
    	,
    neighbor_detail(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::NeighborProcessTable::Neighbor::NeighborDetail>())
	,neighbor_bfd_info(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::NeighborProcessTable::Neighbor::NeighborBfdInfo>())
{
    neighbor_detail->parent = this;
    neighbor_bfd_info->parent = this;

    yang_name = "neighbor"; yang_parent_name = "neighbor-process-table"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::NeighborProcessTable::Neighbor::~Neighbor()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::NeighborProcessTable::Neighbor::has_data() const
{
    return interface_name.is_set
	|| neighbor_address.is_set
	|| neighbor_address_xr.is_set
	|| neighbor_interface_id.is_set
	|| neighbor_dr_priority.is_set
	|| neighbor_state.is_set
	|| neighbor_designated_router.is_set
	|| neighbor_dead_timer.is_set
	|| neighbor_up_time.is_set
	|| neighbor_virtual_link_id.is_set
	|| is_neighbor_virtual_link.is_set
	|| neighbor_sham_link_id.is_set
	|| is_neighbor_sham_link.is_set
	|| (neighbor_detail !=  nullptr && neighbor_detail->has_data())
	|| (neighbor_bfd_info !=  nullptr && neighbor_bfd_info->has_data());
}

bool Ospfv3::Processes::Process::DefaultVrf::NeighborProcessTable::Neighbor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(neighbor_address.yfilter)
	|| ydk::is_set(neighbor_address_xr.yfilter)
	|| ydk::is_set(neighbor_interface_id.yfilter)
	|| ydk::is_set(neighbor_dr_priority.yfilter)
	|| ydk::is_set(neighbor_state.yfilter)
	|| ydk::is_set(neighbor_designated_router.yfilter)
	|| ydk::is_set(neighbor_dead_timer.yfilter)
	|| ydk::is_set(neighbor_up_time.yfilter)
	|| ydk::is_set(neighbor_virtual_link_id.yfilter)
	|| ydk::is_set(is_neighbor_virtual_link.yfilter)
	|| ydk::is_set(neighbor_sham_link_id.yfilter)
	|| ydk::is_set(is_neighbor_sham_link.yfilter)
	|| (neighbor_detail !=  nullptr && neighbor_detail->has_operation())
	|| (neighbor_bfd_info !=  nullptr && neighbor_bfd_info->has_operation());
}

std::string Ospfv3::Processes::Process::DefaultVrf::NeighborProcessTable::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::NeighborProcessTable::Neighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (neighbor_address_xr.is_set || is_set(neighbor_address_xr.yfilter)) leaf_name_data.push_back(neighbor_address_xr.get_name_leafdata());
    if (neighbor_interface_id.is_set || is_set(neighbor_interface_id.yfilter)) leaf_name_data.push_back(neighbor_interface_id.get_name_leafdata());
    if (neighbor_dr_priority.is_set || is_set(neighbor_dr_priority.yfilter)) leaf_name_data.push_back(neighbor_dr_priority.get_name_leafdata());
    if (neighbor_state.is_set || is_set(neighbor_state.yfilter)) leaf_name_data.push_back(neighbor_state.get_name_leafdata());
    if (neighbor_designated_router.is_set || is_set(neighbor_designated_router.yfilter)) leaf_name_data.push_back(neighbor_designated_router.get_name_leafdata());
    if (neighbor_dead_timer.is_set || is_set(neighbor_dead_timer.yfilter)) leaf_name_data.push_back(neighbor_dead_timer.get_name_leafdata());
    if (neighbor_up_time.is_set || is_set(neighbor_up_time.yfilter)) leaf_name_data.push_back(neighbor_up_time.get_name_leafdata());
    if (neighbor_virtual_link_id.is_set || is_set(neighbor_virtual_link_id.yfilter)) leaf_name_data.push_back(neighbor_virtual_link_id.get_name_leafdata());
    if (is_neighbor_virtual_link.is_set || is_set(is_neighbor_virtual_link.yfilter)) leaf_name_data.push_back(is_neighbor_virtual_link.get_name_leafdata());
    if (neighbor_sham_link_id.is_set || is_set(neighbor_sham_link_id.yfilter)) leaf_name_data.push_back(neighbor_sham_link_id.get_name_leafdata());
    if (is_neighbor_sham_link.is_set || is_set(is_neighbor_sham_link.yfilter)) leaf_name_data.push_back(is_neighbor_sham_link.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::NeighborProcessTable::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor-detail")
    {
        if(neighbor_detail == nullptr)
        {
            neighbor_detail = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::NeighborProcessTable::Neighbor::NeighborDetail>();
        }
        return neighbor_detail;
    }

    if(child_yang_name == "neighbor-bfd-info")
    {
        if(neighbor_bfd_info == nullptr)
        {
            neighbor_bfd_info = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::NeighborProcessTable::Neighbor::NeighborBfdInfo>();
        }
        return neighbor_bfd_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::NeighborProcessTable::Neighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(neighbor_detail != nullptr)
    {
        children["neighbor-detail"] = neighbor_detail;
    }

    if(neighbor_bfd_info != nullptr)
    {
        children["neighbor-bfd-info"] = neighbor_bfd_info;
    }

    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::NeighborProcessTable::Neighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
        neighbor_address.value_namespace = name_space;
        neighbor_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-address-xr")
    {
        neighbor_address_xr = value;
        neighbor_address_xr.value_namespace = name_space;
        neighbor_address_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-interface-id")
    {
        neighbor_interface_id = value;
        neighbor_interface_id.value_namespace = name_space;
        neighbor_interface_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-dr-priority")
    {
        neighbor_dr_priority = value;
        neighbor_dr_priority.value_namespace = name_space;
        neighbor_dr_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-state")
    {
        neighbor_state = value;
        neighbor_state.value_namespace = name_space;
        neighbor_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-designated-router")
    {
        neighbor_designated_router = value;
        neighbor_designated_router.value_namespace = name_space;
        neighbor_designated_router.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-dead-timer")
    {
        neighbor_dead_timer = value;
        neighbor_dead_timer.value_namespace = name_space;
        neighbor_dead_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-up-time")
    {
        neighbor_up_time = value;
        neighbor_up_time.value_namespace = name_space;
        neighbor_up_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-virtual-link-id")
    {
        neighbor_virtual_link_id = value;
        neighbor_virtual_link_id.value_namespace = name_space;
        neighbor_virtual_link_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-neighbor-virtual-link")
    {
        is_neighbor_virtual_link = value;
        is_neighbor_virtual_link.value_namespace = name_space;
        is_neighbor_virtual_link.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-sham-link-id")
    {
        neighbor_sham_link_id = value;
        neighbor_sham_link_id.value_namespace = name_space;
        neighbor_sham_link_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-neighbor-sham-link")
    {
        is_neighbor_sham_link = value;
        is_neighbor_sham_link.value_namespace = name_space;
        is_neighbor_sham_link.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::DefaultVrf::NeighborProcessTable::Neighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address.yfilter = yfilter;
    }
    if(value_path == "neighbor-address-xr")
    {
        neighbor_address_xr.yfilter = yfilter;
    }
    if(value_path == "neighbor-interface-id")
    {
        neighbor_interface_id.yfilter = yfilter;
    }
    if(value_path == "neighbor-dr-priority")
    {
        neighbor_dr_priority.yfilter = yfilter;
    }
    if(value_path == "neighbor-state")
    {
        neighbor_state.yfilter = yfilter;
    }
    if(value_path == "neighbor-designated-router")
    {
        neighbor_designated_router.yfilter = yfilter;
    }
    if(value_path == "neighbor-dead-timer")
    {
        neighbor_dead_timer.yfilter = yfilter;
    }
    if(value_path == "neighbor-up-time")
    {
        neighbor_up_time.yfilter = yfilter;
    }
    if(value_path == "neighbor-virtual-link-id")
    {
        neighbor_virtual_link_id.yfilter = yfilter;
    }
    if(value_path == "is-neighbor-virtual-link")
    {
        is_neighbor_virtual_link.yfilter = yfilter;
    }
    if(value_path == "neighbor-sham-link-id")
    {
        neighbor_sham_link_id.yfilter = yfilter;
    }
    if(value_path == "is-neighbor-sham-link")
    {
        is_neighbor_sham_link.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::NeighborProcessTable::Neighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor-detail" || name == "neighbor-bfd-info" || name == "interface-name" || name == "neighbor-address" || name == "neighbor-address-xr" || name == "neighbor-interface-id" || name == "neighbor-dr-priority" || name == "neighbor-state" || name == "neighbor-designated-router" || name == "neighbor-dead-timer" || name == "neighbor-up-time" || name == "neighbor-virtual-link-id" || name == "is-neighbor-virtual-link" || name == "neighbor-sham-link-id" || name == "is-neighbor-sham-link")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::NeighborProcessTable::Neighbor::NeighborDetail::NeighborDetail()
    :
    state_changes{YType::uint16, "state-changes"},
    neighbor_cost{YType::uint16, "neighbor-cost"},
    is_neighbor_filtered{YType::boolean, "is-neighbor-filtered"},
    neighbor_designated_router_address{YType::str, "neighbor-designated-router-address"},
    neighbor_backup_designated_router_address{YType::str, "neighbor-backup-designated-router-address"},
    interface_type{YType::enumeration, "interface-type"},
    poll_interval{YType::uint32, "poll-interval"},
    next_poll_interval{YType::uint32, "next-poll-interval"},
    neighbor_ignore_timer{YType::uint32, "neighbor-ignore-timer"},
    neighbor_option{YType::uint32, "neighbor-option"},
    pending_events{YType::uint16, "pending-events"}
    	,
    neighbor_retransmission(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::NeighborProcessTable::Neighbor::NeighborDetail::NeighborRetransmission>())
{
    neighbor_retransmission->parent = this;

    yang_name = "neighbor-detail"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::NeighborProcessTable::Neighbor::NeighborDetail::~NeighborDetail()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::NeighborProcessTable::Neighbor::NeighborDetail::has_data() const
{
    return state_changes.is_set
	|| neighbor_cost.is_set
	|| is_neighbor_filtered.is_set
	|| neighbor_designated_router_address.is_set
	|| neighbor_backup_designated_router_address.is_set
	|| interface_type.is_set
	|| poll_interval.is_set
	|| next_poll_interval.is_set
	|| neighbor_ignore_timer.is_set
	|| neighbor_option.is_set
	|| pending_events.is_set
	|| (neighbor_retransmission !=  nullptr && neighbor_retransmission->has_data());
}

bool Ospfv3::Processes::Process::DefaultVrf::NeighborProcessTable::Neighbor::NeighborDetail::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(state_changes.yfilter)
	|| ydk::is_set(neighbor_cost.yfilter)
	|| ydk::is_set(is_neighbor_filtered.yfilter)
	|| ydk::is_set(neighbor_designated_router_address.yfilter)
	|| ydk::is_set(neighbor_backup_designated_router_address.yfilter)
	|| ydk::is_set(interface_type.yfilter)
	|| ydk::is_set(poll_interval.yfilter)
	|| ydk::is_set(next_poll_interval.yfilter)
	|| ydk::is_set(neighbor_ignore_timer.yfilter)
	|| ydk::is_set(neighbor_option.yfilter)
	|| ydk::is_set(pending_events.yfilter)
	|| (neighbor_retransmission !=  nullptr && neighbor_retransmission->has_operation());
}

std::string Ospfv3::Processes::Process::DefaultVrf::NeighborProcessTable::Neighbor::NeighborDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::NeighborProcessTable::Neighbor::NeighborDetail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (state_changes.is_set || is_set(state_changes.yfilter)) leaf_name_data.push_back(state_changes.get_name_leafdata());
    if (neighbor_cost.is_set || is_set(neighbor_cost.yfilter)) leaf_name_data.push_back(neighbor_cost.get_name_leafdata());
    if (is_neighbor_filtered.is_set || is_set(is_neighbor_filtered.yfilter)) leaf_name_data.push_back(is_neighbor_filtered.get_name_leafdata());
    if (neighbor_designated_router_address.is_set || is_set(neighbor_designated_router_address.yfilter)) leaf_name_data.push_back(neighbor_designated_router_address.get_name_leafdata());
    if (neighbor_backup_designated_router_address.is_set || is_set(neighbor_backup_designated_router_address.yfilter)) leaf_name_data.push_back(neighbor_backup_designated_router_address.get_name_leafdata());
    if (interface_type.is_set || is_set(interface_type.yfilter)) leaf_name_data.push_back(interface_type.get_name_leafdata());
    if (poll_interval.is_set || is_set(poll_interval.yfilter)) leaf_name_data.push_back(poll_interval.get_name_leafdata());
    if (next_poll_interval.is_set || is_set(next_poll_interval.yfilter)) leaf_name_data.push_back(next_poll_interval.get_name_leafdata());
    if (neighbor_ignore_timer.is_set || is_set(neighbor_ignore_timer.yfilter)) leaf_name_data.push_back(neighbor_ignore_timer.get_name_leafdata());
    if (neighbor_option.is_set || is_set(neighbor_option.yfilter)) leaf_name_data.push_back(neighbor_option.get_name_leafdata());
    if (pending_events.is_set || is_set(pending_events.yfilter)) leaf_name_data.push_back(pending_events.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::NeighborProcessTable::Neighbor::NeighborDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor-retransmission")
    {
        if(neighbor_retransmission == nullptr)
        {
            neighbor_retransmission = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::NeighborProcessTable::Neighbor::NeighborDetail::NeighborRetransmission>();
        }
        return neighbor_retransmission;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::NeighborProcessTable::Neighbor::NeighborDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(neighbor_retransmission != nullptr)
    {
        children["neighbor-retransmission"] = neighbor_retransmission;
    }

    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::NeighborProcessTable::Neighbor::NeighborDetail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "state-changes")
    {
        state_changes = value;
        state_changes.value_namespace = name_space;
        state_changes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-cost")
    {
        neighbor_cost = value;
        neighbor_cost.value_namespace = name_space;
        neighbor_cost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-neighbor-filtered")
    {
        is_neighbor_filtered = value;
        is_neighbor_filtered.value_namespace = name_space;
        is_neighbor_filtered.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-designated-router-address")
    {
        neighbor_designated_router_address = value;
        neighbor_designated_router_address.value_namespace = name_space;
        neighbor_designated_router_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-backup-designated-router-address")
    {
        neighbor_backup_designated_router_address = value;
        neighbor_backup_designated_router_address.value_namespace = name_space;
        neighbor_backup_designated_router_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-type")
    {
        interface_type = value;
        interface_type.value_namespace = name_space;
        interface_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "poll-interval")
    {
        poll_interval = value;
        poll_interval.value_namespace = name_space;
        poll_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-poll-interval")
    {
        next_poll_interval = value;
        next_poll_interval.value_namespace = name_space;
        next_poll_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-ignore-timer")
    {
        neighbor_ignore_timer = value;
        neighbor_ignore_timer.value_namespace = name_space;
        neighbor_ignore_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-option")
    {
        neighbor_option = value;
        neighbor_option.value_namespace = name_space;
        neighbor_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pending-events")
    {
        pending_events = value;
        pending_events.value_namespace = name_space;
        pending_events.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::DefaultVrf::NeighborProcessTable::Neighbor::NeighborDetail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "state-changes")
    {
        state_changes.yfilter = yfilter;
    }
    if(value_path == "neighbor-cost")
    {
        neighbor_cost.yfilter = yfilter;
    }
    if(value_path == "is-neighbor-filtered")
    {
        is_neighbor_filtered.yfilter = yfilter;
    }
    if(value_path == "neighbor-designated-router-address")
    {
        neighbor_designated_router_address.yfilter = yfilter;
    }
    if(value_path == "neighbor-backup-designated-router-address")
    {
        neighbor_backup_designated_router_address.yfilter = yfilter;
    }
    if(value_path == "interface-type")
    {
        interface_type.yfilter = yfilter;
    }
    if(value_path == "poll-interval")
    {
        poll_interval.yfilter = yfilter;
    }
    if(value_path == "next-poll-interval")
    {
        next_poll_interval.yfilter = yfilter;
    }
    if(value_path == "neighbor-ignore-timer")
    {
        neighbor_ignore_timer.yfilter = yfilter;
    }
    if(value_path == "neighbor-option")
    {
        neighbor_option.yfilter = yfilter;
    }
    if(value_path == "pending-events")
    {
        pending_events.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::NeighborProcessTable::Neighbor::NeighborDetail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor-retransmission" || name == "state-changes" || name == "neighbor-cost" || name == "is-neighbor-filtered" || name == "neighbor-designated-router-address" || name == "neighbor-backup-designated-router-address" || name == "interface-type" || name == "poll-interval" || name == "next-poll-interval" || name == "neighbor-ignore-timer" || name == "neighbor-option" || name == "pending-events")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::NeighborProcessTable::Neighbor::NeighborDetail::NeighborRetransmission::NeighborRetransmission()
    :
    database_descriptor_retransmissions{YType::uint32, "database-descriptor-retransmissions"},
    area_flood_index{YType::uint32, "area-flood-index"},
    as_flood_index{YType::uint32, "as-flood-index"},
    link_flood_index{YType::uint32, "link-flood-index"},
    neighbor_retransmissions{YType::uint32, "neighbor-retransmissions"},
    retransmissions{YType::uint32, "retransmissions"},
    area_first_flood{YType::uint32, "area-first-flood"},
    area_first_flood_index{YType::uint32, "area-first-flood-index"},
    as_first_flood{YType::uint32, "as-first-flood"},
    as_first_flood_index{YType::uint32, "as-first-flood-index"},
    link_first_flood{YType::uint32, "link-first-flood"},
    link_first_flood_index{YType::uint32, "link-first-flood-index"},
    area_next_flood{YType::uint32, "area-next-flood"},
    area_next_flood_index{YType::uint32, "area-next-flood-index"},
    as_next_flood{YType::uint32, "as-next-flood"},
    as_next_flood_index{YType::uint32, "as-next-flood-index"},
    link_next_flood{YType::uint32, "link-next-flood"},
    link_next_flood_index{YType::uint32, "link-next-flood-index"},
    last_retransmission_length{YType::uint32, "last-retransmission-length"},
    maximum_retransmission_length{YType::uint32, "maximum-retransmission-length"},
    last_retransmission_time{YType::uint32, "last-retransmission-time"},
    maximum_retransmission_time{YType::uint32, "maximum-retransmission-time"},
    lsa_retransmission_timer{YType::uint32, "lsa-retransmission-timer"}
{

    yang_name = "neighbor-retransmission"; yang_parent_name = "neighbor-detail"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::NeighborProcessTable::Neighbor::NeighborDetail::NeighborRetransmission::~NeighborRetransmission()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::NeighborProcessTable::Neighbor::NeighborDetail::NeighborRetransmission::has_data() const
{
    return database_descriptor_retransmissions.is_set
	|| area_flood_index.is_set
	|| as_flood_index.is_set
	|| link_flood_index.is_set
	|| neighbor_retransmissions.is_set
	|| retransmissions.is_set
	|| area_first_flood.is_set
	|| area_first_flood_index.is_set
	|| as_first_flood.is_set
	|| as_first_flood_index.is_set
	|| link_first_flood.is_set
	|| link_first_flood_index.is_set
	|| area_next_flood.is_set
	|| area_next_flood_index.is_set
	|| as_next_flood.is_set
	|| as_next_flood_index.is_set
	|| link_next_flood.is_set
	|| link_next_flood_index.is_set
	|| last_retransmission_length.is_set
	|| maximum_retransmission_length.is_set
	|| last_retransmission_time.is_set
	|| maximum_retransmission_time.is_set
	|| lsa_retransmission_timer.is_set;
}

bool Ospfv3::Processes::Process::DefaultVrf::NeighborProcessTable::Neighbor::NeighborDetail::NeighborRetransmission::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(database_descriptor_retransmissions.yfilter)
	|| ydk::is_set(area_flood_index.yfilter)
	|| ydk::is_set(as_flood_index.yfilter)
	|| ydk::is_set(link_flood_index.yfilter)
	|| ydk::is_set(neighbor_retransmissions.yfilter)
	|| ydk::is_set(retransmissions.yfilter)
	|| ydk::is_set(area_first_flood.yfilter)
	|| ydk::is_set(area_first_flood_index.yfilter)
	|| ydk::is_set(as_first_flood.yfilter)
	|| ydk::is_set(as_first_flood_index.yfilter)
	|| ydk::is_set(link_first_flood.yfilter)
	|| ydk::is_set(link_first_flood_index.yfilter)
	|| ydk::is_set(area_next_flood.yfilter)
	|| ydk::is_set(area_next_flood_index.yfilter)
	|| ydk::is_set(as_next_flood.yfilter)
	|| ydk::is_set(as_next_flood_index.yfilter)
	|| ydk::is_set(link_next_flood.yfilter)
	|| ydk::is_set(link_next_flood_index.yfilter)
	|| ydk::is_set(last_retransmission_length.yfilter)
	|| ydk::is_set(maximum_retransmission_length.yfilter)
	|| ydk::is_set(last_retransmission_time.yfilter)
	|| ydk::is_set(maximum_retransmission_time.yfilter)
	|| ydk::is_set(lsa_retransmission_timer.yfilter);
}

std::string Ospfv3::Processes::Process::DefaultVrf::NeighborProcessTable::Neighbor::NeighborDetail::NeighborRetransmission::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-retransmission";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::NeighborProcessTable::Neighbor::NeighborDetail::NeighborRetransmission::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (database_descriptor_retransmissions.is_set || is_set(database_descriptor_retransmissions.yfilter)) leaf_name_data.push_back(database_descriptor_retransmissions.get_name_leafdata());
    if (area_flood_index.is_set || is_set(area_flood_index.yfilter)) leaf_name_data.push_back(area_flood_index.get_name_leafdata());
    if (as_flood_index.is_set || is_set(as_flood_index.yfilter)) leaf_name_data.push_back(as_flood_index.get_name_leafdata());
    if (link_flood_index.is_set || is_set(link_flood_index.yfilter)) leaf_name_data.push_back(link_flood_index.get_name_leafdata());
    if (neighbor_retransmissions.is_set || is_set(neighbor_retransmissions.yfilter)) leaf_name_data.push_back(neighbor_retransmissions.get_name_leafdata());
    if (retransmissions.is_set || is_set(retransmissions.yfilter)) leaf_name_data.push_back(retransmissions.get_name_leafdata());
    if (area_first_flood.is_set || is_set(area_first_flood.yfilter)) leaf_name_data.push_back(area_first_flood.get_name_leafdata());
    if (area_first_flood_index.is_set || is_set(area_first_flood_index.yfilter)) leaf_name_data.push_back(area_first_flood_index.get_name_leafdata());
    if (as_first_flood.is_set || is_set(as_first_flood.yfilter)) leaf_name_data.push_back(as_first_flood.get_name_leafdata());
    if (as_first_flood_index.is_set || is_set(as_first_flood_index.yfilter)) leaf_name_data.push_back(as_first_flood_index.get_name_leafdata());
    if (link_first_flood.is_set || is_set(link_first_flood.yfilter)) leaf_name_data.push_back(link_first_flood.get_name_leafdata());
    if (link_first_flood_index.is_set || is_set(link_first_flood_index.yfilter)) leaf_name_data.push_back(link_first_flood_index.get_name_leafdata());
    if (area_next_flood.is_set || is_set(area_next_flood.yfilter)) leaf_name_data.push_back(area_next_flood.get_name_leafdata());
    if (area_next_flood_index.is_set || is_set(area_next_flood_index.yfilter)) leaf_name_data.push_back(area_next_flood_index.get_name_leafdata());
    if (as_next_flood.is_set || is_set(as_next_flood.yfilter)) leaf_name_data.push_back(as_next_flood.get_name_leafdata());
    if (as_next_flood_index.is_set || is_set(as_next_flood_index.yfilter)) leaf_name_data.push_back(as_next_flood_index.get_name_leafdata());
    if (link_next_flood.is_set || is_set(link_next_flood.yfilter)) leaf_name_data.push_back(link_next_flood.get_name_leafdata());
    if (link_next_flood_index.is_set || is_set(link_next_flood_index.yfilter)) leaf_name_data.push_back(link_next_flood_index.get_name_leafdata());
    if (last_retransmission_length.is_set || is_set(last_retransmission_length.yfilter)) leaf_name_data.push_back(last_retransmission_length.get_name_leafdata());
    if (maximum_retransmission_length.is_set || is_set(maximum_retransmission_length.yfilter)) leaf_name_data.push_back(maximum_retransmission_length.get_name_leafdata());
    if (last_retransmission_time.is_set || is_set(last_retransmission_time.yfilter)) leaf_name_data.push_back(last_retransmission_time.get_name_leafdata());
    if (maximum_retransmission_time.is_set || is_set(maximum_retransmission_time.yfilter)) leaf_name_data.push_back(maximum_retransmission_time.get_name_leafdata());
    if (lsa_retransmission_timer.is_set || is_set(lsa_retransmission_timer.yfilter)) leaf_name_data.push_back(lsa_retransmission_timer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::NeighborProcessTable::Neighbor::NeighborDetail::NeighborRetransmission::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::NeighborProcessTable::Neighbor::NeighborDetail::NeighborRetransmission::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::NeighborProcessTable::Neighbor::NeighborDetail::NeighborRetransmission::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "database-descriptor-retransmissions")
    {
        database_descriptor_retransmissions = value;
        database_descriptor_retransmissions.value_namespace = name_space;
        database_descriptor_retransmissions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-flood-index")
    {
        area_flood_index = value;
        area_flood_index.value_namespace = name_space;
        area_flood_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-flood-index")
    {
        as_flood_index = value;
        as_flood_index.value_namespace = name_space;
        as_flood_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-flood-index")
    {
        link_flood_index = value;
        link_flood_index.value_namespace = name_space;
        link_flood_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-retransmissions")
    {
        neighbor_retransmissions = value;
        neighbor_retransmissions.value_namespace = name_space;
        neighbor_retransmissions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retransmissions")
    {
        retransmissions = value;
        retransmissions.value_namespace = name_space;
        retransmissions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-first-flood")
    {
        area_first_flood = value;
        area_first_flood.value_namespace = name_space;
        area_first_flood.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-first-flood-index")
    {
        area_first_flood_index = value;
        area_first_flood_index.value_namespace = name_space;
        area_first_flood_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-first-flood")
    {
        as_first_flood = value;
        as_first_flood.value_namespace = name_space;
        as_first_flood.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-first-flood-index")
    {
        as_first_flood_index = value;
        as_first_flood_index.value_namespace = name_space;
        as_first_flood_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-first-flood")
    {
        link_first_flood = value;
        link_first_flood.value_namespace = name_space;
        link_first_flood.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-first-flood-index")
    {
        link_first_flood_index = value;
        link_first_flood_index.value_namespace = name_space;
        link_first_flood_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-next-flood")
    {
        area_next_flood = value;
        area_next_flood.value_namespace = name_space;
        area_next_flood.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-next-flood-index")
    {
        area_next_flood_index = value;
        area_next_flood_index.value_namespace = name_space;
        area_next_flood_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-next-flood")
    {
        as_next_flood = value;
        as_next_flood.value_namespace = name_space;
        as_next_flood.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-next-flood-index")
    {
        as_next_flood_index = value;
        as_next_flood_index.value_namespace = name_space;
        as_next_flood_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-next-flood")
    {
        link_next_flood = value;
        link_next_flood.value_namespace = name_space;
        link_next_flood.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-next-flood-index")
    {
        link_next_flood_index = value;
        link_next_flood_index.value_namespace = name_space;
        link_next_flood_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-retransmission-length")
    {
        last_retransmission_length = value;
        last_retransmission_length.value_namespace = name_space;
        last_retransmission_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-retransmission-length")
    {
        maximum_retransmission_length = value;
        maximum_retransmission_length.value_namespace = name_space;
        maximum_retransmission_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-retransmission-time")
    {
        last_retransmission_time = value;
        last_retransmission_time.value_namespace = name_space;
        last_retransmission_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-retransmission-time")
    {
        maximum_retransmission_time = value;
        maximum_retransmission_time.value_namespace = name_space;
        maximum_retransmission_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-retransmission-timer")
    {
        lsa_retransmission_timer = value;
        lsa_retransmission_timer.value_namespace = name_space;
        lsa_retransmission_timer.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::DefaultVrf::NeighborProcessTable::Neighbor::NeighborDetail::NeighborRetransmission::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "database-descriptor-retransmissions")
    {
        database_descriptor_retransmissions.yfilter = yfilter;
    }
    if(value_path == "area-flood-index")
    {
        area_flood_index.yfilter = yfilter;
    }
    if(value_path == "as-flood-index")
    {
        as_flood_index.yfilter = yfilter;
    }
    if(value_path == "link-flood-index")
    {
        link_flood_index.yfilter = yfilter;
    }
    if(value_path == "neighbor-retransmissions")
    {
        neighbor_retransmissions.yfilter = yfilter;
    }
    if(value_path == "retransmissions")
    {
        retransmissions.yfilter = yfilter;
    }
    if(value_path == "area-first-flood")
    {
        area_first_flood.yfilter = yfilter;
    }
    if(value_path == "area-first-flood-index")
    {
        area_first_flood_index.yfilter = yfilter;
    }
    if(value_path == "as-first-flood")
    {
        as_first_flood.yfilter = yfilter;
    }
    if(value_path == "as-first-flood-index")
    {
        as_first_flood_index.yfilter = yfilter;
    }
    if(value_path == "link-first-flood")
    {
        link_first_flood.yfilter = yfilter;
    }
    if(value_path == "link-first-flood-index")
    {
        link_first_flood_index.yfilter = yfilter;
    }
    if(value_path == "area-next-flood")
    {
        area_next_flood.yfilter = yfilter;
    }
    if(value_path == "area-next-flood-index")
    {
        area_next_flood_index.yfilter = yfilter;
    }
    if(value_path == "as-next-flood")
    {
        as_next_flood.yfilter = yfilter;
    }
    if(value_path == "as-next-flood-index")
    {
        as_next_flood_index.yfilter = yfilter;
    }
    if(value_path == "link-next-flood")
    {
        link_next_flood.yfilter = yfilter;
    }
    if(value_path == "link-next-flood-index")
    {
        link_next_flood_index.yfilter = yfilter;
    }
    if(value_path == "last-retransmission-length")
    {
        last_retransmission_length.yfilter = yfilter;
    }
    if(value_path == "maximum-retransmission-length")
    {
        maximum_retransmission_length.yfilter = yfilter;
    }
    if(value_path == "last-retransmission-time")
    {
        last_retransmission_time.yfilter = yfilter;
    }
    if(value_path == "maximum-retransmission-time")
    {
        maximum_retransmission_time.yfilter = yfilter;
    }
    if(value_path == "lsa-retransmission-timer")
    {
        lsa_retransmission_timer.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::NeighborProcessTable::Neighbor::NeighborDetail::NeighborRetransmission::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "database-descriptor-retransmissions" || name == "area-flood-index" || name == "as-flood-index" || name == "link-flood-index" || name == "neighbor-retransmissions" || name == "retransmissions" || name == "area-first-flood" || name == "area-first-flood-index" || name == "as-first-flood" || name == "as-first-flood-index" || name == "link-first-flood" || name == "link-first-flood-index" || name == "area-next-flood" || name == "area-next-flood-index" || name == "as-next-flood" || name == "as-next-flood-index" || name == "link-next-flood" || name == "link-next-flood-index" || name == "last-retransmission-length" || name == "maximum-retransmission-length" || name == "last-retransmission-time" || name == "maximum-retransmission-time" || name == "lsa-retransmission-timer")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::NeighborProcessTable::Neighbor::NeighborBfdInfo::NeighborBfdInfo()
    :
    bfd_intf_enable_mode{YType::uint32, "bfd-intf-enable-mode"},
    bfd_status_flag{YType::uint8, "bfd-status-flag"}
{

    yang_name = "neighbor-bfd-info"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::NeighborProcessTable::Neighbor::NeighborBfdInfo::~NeighborBfdInfo()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::NeighborProcessTable::Neighbor::NeighborBfdInfo::has_data() const
{
    return bfd_intf_enable_mode.is_set
	|| bfd_status_flag.is_set;
}

bool Ospfv3::Processes::Process::DefaultVrf::NeighborProcessTable::Neighbor::NeighborBfdInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bfd_intf_enable_mode.yfilter)
	|| ydk::is_set(bfd_status_flag.yfilter);
}

std::string Ospfv3::Processes::Process::DefaultVrf::NeighborProcessTable::Neighbor::NeighborBfdInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-bfd-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::NeighborProcessTable::Neighbor::NeighborBfdInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bfd_intf_enable_mode.is_set || is_set(bfd_intf_enable_mode.yfilter)) leaf_name_data.push_back(bfd_intf_enable_mode.get_name_leafdata());
    if (bfd_status_flag.is_set || is_set(bfd_status_flag.yfilter)) leaf_name_data.push_back(bfd_status_flag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::NeighborProcessTable::Neighbor::NeighborBfdInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::NeighborProcessTable::Neighbor::NeighborBfdInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::NeighborProcessTable::Neighbor::NeighborBfdInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bfd-intf-enable-mode")
    {
        bfd_intf_enable_mode = value;
        bfd_intf_enable_mode.value_namespace = name_space;
        bfd_intf_enable_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-status-flag")
    {
        bfd_status_flag = value;
        bfd_status_flag.value_namespace = name_space;
        bfd_status_flag.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::DefaultVrf::NeighborProcessTable::Neighbor::NeighborBfdInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bfd-intf-enable-mode")
    {
        bfd_intf_enable_mode.yfilter = yfilter;
    }
    if(value_path == "bfd-status-flag")
    {
        bfd_status_flag.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::NeighborProcessTable::Neighbor::NeighborBfdInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bfd-intf-enable-mode" || name == "bfd-status-flag")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::FastReroutes::FastReroutes()
{

    yang_name = "fast-reroutes"; yang_parent_name = "default-vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::FastReroutes::~FastReroutes()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::FastReroutes::has_data() const
{
    for (std::size_t index=0; index<fast_reroute.size(); index++)
    {
        if(fast_reroute[index]->has_data())
            return true;
    }
    return false;
}

bool Ospfv3::Processes::Process::DefaultVrf::FastReroutes::has_operation() const
{
    for (std::size_t index=0; index<fast_reroute.size(); index++)
    {
        if(fast_reroute[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospfv3::Processes::Process::DefaultVrf::FastReroutes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fast-reroutes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::FastReroutes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::FastReroutes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fast-reroute")
    {
        auto c = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::FastReroutes::FastReroute>();
        c->parent = this;
        fast_reroute.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::FastReroutes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : fast_reroute)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::FastReroutes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospfv3::Processes::Process::DefaultVrf::FastReroutes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospfv3::Processes::Process::DefaultVrf::FastReroutes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fast-reroute")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::FastReroutes::FastReroute::FastReroute()
    :
    router_id{YType::str, "router-id"},
    area_id{YType::int32, "area-id"},
    ipfrr_topo_area_id{YType::str, "ipfrr-topo-area-id"},
    ipfrr_router_id{YType::str, "ipfrr-router-id"},
    ipfrr_area_revision{YType::uint32, "ipfrr-area-revision"}
{

    yang_name = "fast-reroute"; yang_parent_name = "fast-reroutes"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::FastReroutes::FastReroute::~FastReroute()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::FastReroutes::FastReroute::has_data() const
{
    for (std::size_t index=0; index<ipfrr_topo.size(); index++)
    {
        if(ipfrr_topo[index]->has_data())
            return true;
    }
    return router_id.is_set
	|| area_id.is_set
	|| ipfrr_topo_area_id.is_set
	|| ipfrr_router_id.is_set
	|| ipfrr_area_revision.is_set;
}

bool Ospfv3::Processes::Process::DefaultVrf::FastReroutes::FastReroute::has_operation() const
{
    for (std::size_t index=0; index<ipfrr_topo.size(); index++)
    {
        if(ipfrr_topo[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(router_id.yfilter)
	|| ydk::is_set(area_id.yfilter)
	|| ydk::is_set(ipfrr_topo_area_id.yfilter)
	|| ydk::is_set(ipfrr_router_id.yfilter)
	|| ydk::is_set(ipfrr_area_revision.yfilter);
}

std::string Ospfv3::Processes::Process::DefaultVrf::FastReroutes::FastReroute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fast-reroute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::FastReroutes::FastReroute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());
    if (area_id.is_set || is_set(area_id.yfilter)) leaf_name_data.push_back(area_id.get_name_leafdata());
    if (ipfrr_topo_area_id.is_set || is_set(ipfrr_topo_area_id.yfilter)) leaf_name_data.push_back(ipfrr_topo_area_id.get_name_leafdata());
    if (ipfrr_router_id.is_set || is_set(ipfrr_router_id.yfilter)) leaf_name_data.push_back(ipfrr_router_id.get_name_leafdata());
    if (ipfrr_area_revision.is_set || is_set(ipfrr_area_revision.yfilter)) leaf_name_data.push_back(ipfrr_area_revision.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::FastReroutes::FastReroute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipfrr-topo")
    {
        auto c = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::FastReroutes::FastReroute::IpfrrTopo>();
        c->parent = this;
        ipfrr_topo.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::FastReroutes::FastReroute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : ipfrr_topo)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::FastReroutes::FastReroute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-id")
    {
        area_id = value;
        area_id.value_namespace = name_space;
        area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipfrr-topo-area-id")
    {
        ipfrr_topo_area_id = value;
        ipfrr_topo_area_id.value_namespace = name_space;
        ipfrr_topo_area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipfrr-router-id")
    {
        ipfrr_router_id = value;
        ipfrr_router_id.value_namespace = name_space;
        ipfrr_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipfrr-area-revision")
    {
        ipfrr_area_revision = value;
        ipfrr_area_revision.value_namespace = name_space;
        ipfrr_area_revision.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::DefaultVrf::FastReroutes::FastReroute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
    if(value_path == "area-id")
    {
        area_id.yfilter = yfilter;
    }
    if(value_path == "ipfrr-topo-area-id")
    {
        ipfrr_topo_area_id.yfilter = yfilter;
    }
    if(value_path == "ipfrr-router-id")
    {
        ipfrr_router_id.yfilter = yfilter;
    }
    if(value_path == "ipfrr-area-revision")
    {
        ipfrr_area_revision.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::FastReroutes::FastReroute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipfrr-topo" || name == "router-id" || name == "area-id" || name == "ipfrr-topo-area-id" || name == "ipfrr-router-id" || name == "ipfrr-area-revision")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::FastReroutes::FastReroute::IpfrrTopo::IpfrrTopo()
    :
    node_id{YType::str, "node-id"},
    lsaid{YType::uint32, "lsaid"},
    distance{YType::uint32, "distance"},
    type4{YType::boolean, "type4"},
    revision{YType::uint32, "revision"},
    neighbor_sourced{YType::boolean, "neighbor-sourced"},
    dr{YType::boolean, "dr"}
{

    yang_name = "ipfrr-topo"; yang_parent_name = "fast-reroute"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::FastReroutes::FastReroute::IpfrrTopo::~IpfrrTopo()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::FastReroutes::FastReroute::IpfrrTopo::has_data() const
{
    return node_id.is_set
	|| lsaid.is_set
	|| distance.is_set
	|| type4.is_set
	|| revision.is_set
	|| neighbor_sourced.is_set
	|| dr.is_set;
}

bool Ospfv3::Processes::Process::DefaultVrf::FastReroutes::FastReroute::IpfrrTopo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_id.yfilter)
	|| ydk::is_set(lsaid.yfilter)
	|| ydk::is_set(distance.yfilter)
	|| ydk::is_set(type4.yfilter)
	|| ydk::is_set(revision.yfilter)
	|| ydk::is_set(neighbor_sourced.yfilter)
	|| ydk::is_set(dr.yfilter);
}

std::string Ospfv3::Processes::Process::DefaultVrf::FastReroutes::FastReroute::IpfrrTopo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipfrr-topo";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::FastReroutes::FastReroute::IpfrrTopo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_id.is_set || is_set(node_id.yfilter)) leaf_name_data.push_back(node_id.get_name_leafdata());
    if (lsaid.is_set || is_set(lsaid.yfilter)) leaf_name_data.push_back(lsaid.get_name_leafdata());
    if (distance.is_set || is_set(distance.yfilter)) leaf_name_data.push_back(distance.get_name_leafdata());
    if (type4.is_set || is_set(type4.yfilter)) leaf_name_data.push_back(type4.get_name_leafdata());
    if (revision.is_set || is_set(revision.yfilter)) leaf_name_data.push_back(revision.get_name_leafdata());
    if (neighbor_sourced.is_set || is_set(neighbor_sourced.yfilter)) leaf_name_data.push_back(neighbor_sourced.get_name_leafdata());
    if (dr.is_set || is_set(dr.yfilter)) leaf_name_data.push_back(dr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::FastReroutes::FastReroute::IpfrrTopo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::FastReroutes::FastReroute::IpfrrTopo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::FastReroutes::FastReroute::IpfrrTopo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-id")
    {
        node_id = value;
        node_id.value_namespace = name_space;
        node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsaid")
    {
        lsaid = value;
        lsaid.value_namespace = name_space;
        lsaid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "distance")
    {
        distance = value;
        distance.value_namespace = name_space;
        distance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type4")
    {
        type4 = value;
        type4.value_namespace = name_space;
        type4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "revision")
    {
        revision = value;
        revision.value_namespace = name_space;
        revision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-sourced")
    {
        neighbor_sourced = value;
        neighbor_sourced.value_namespace = name_space;
        neighbor_sourced.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dr")
    {
        dr = value;
        dr.value_namespace = name_space;
        dr.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::DefaultVrf::FastReroutes::FastReroute::IpfrrTopo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-id")
    {
        node_id.yfilter = yfilter;
    }
    if(value_path == "lsaid")
    {
        lsaid.yfilter = yfilter;
    }
    if(value_path == "distance")
    {
        distance.yfilter = yfilter;
    }
    if(value_path == "type4")
    {
        type4.yfilter = yfilter;
    }
    if(value_path == "revision")
    {
        revision.yfilter = yfilter;
    }
    if(value_path == "neighbor-sourced")
    {
        neighbor_sourced.yfilter = yfilter;
    }
    if(value_path == "dr")
    {
        dr.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::FastReroutes::FastReroute::IpfrrTopo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node-id" || name == "lsaid" || name == "distance" || name == "type4" || name == "revision" || name == "neighbor-sourced" || name == "dr")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::InterfaceBriefProcessTable::InterfaceBriefProcessTable()
{

    yang_name = "interface-brief-process-table"; yang_parent_name = "default-vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::InterfaceBriefProcessTable::~InterfaceBriefProcessTable()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::InterfaceBriefProcessTable::has_data() const
{
    for (std::size_t index=0; index<interface_brief.size(); index++)
    {
        if(interface_brief[index]->has_data())
            return true;
    }
    return false;
}

bool Ospfv3::Processes::Process::DefaultVrf::InterfaceBriefProcessTable::has_operation() const
{
    for (std::size_t index=0; index<interface_brief.size(); index++)
    {
        if(interface_brief[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospfv3::Processes::Process::DefaultVrf::InterfaceBriefProcessTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-brief-process-table";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::InterfaceBriefProcessTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::InterfaceBriefProcessTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-brief")
    {
        auto c = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::InterfaceBriefProcessTable::InterfaceBrief>();
        c->parent = this;
        interface_brief.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::InterfaceBriefProcessTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : interface_brief)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::InterfaceBriefProcessTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospfv3::Processes::Process::DefaultVrf::InterfaceBriefProcessTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospfv3::Processes::Process::DefaultVrf::InterfaceBriefProcessTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-brief")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::InterfaceBriefProcessTable::InterfaceBrief::InterfaceBrief()
    :
    interface_name{YType::str, "interface-name"},
    interface_address{YType::str, "interface-address"},
    interface_link_cost{YType::uint16, "interface-link-cost"},
    ospf_interface_state{YType::enumeration, "ospf-interface-state"},
    interface_neighbors{YType::uint16, "interface-neighbors"},
    interface_adjacent_neighbors{YType::uint16, "interface-adjacent-neighbors"},
    network_type{YType::enumeration, "network-type"}
{

    yang_name = "interface-brief"; yang_parent_name = "interface-brief-process-table"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::InterfaceBriefProcessTable::InterfaceBrief::~InterfaceBrief()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::InterfaceBriefProcessTable::InterfaceBrief::has_data() const
{
    return interface_name.is_set
	|| interface_address.is_set
	|| interface_link_cost.is_set
	|| ospf_interface_state.is_set
	|| interface_neighbors.is_set
	|| interface_adjacent_neighbors.is_set
	|| network_type.is_set;
}

bool Ospfv3::Processes::Process::DefaultVrf::InterfaceBriefProcessTable::InterfaceBrief::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(interface_address.yfilter)
	|| ydk::is_set(interface_link_cost.yfilter)
	|| ydk::is_set(ospf_interface_state.yfilter)
	|| ydk::is_set(interface_neighbors.yfilter)
	|| ydk::is_set(interface_adjacent_neighbors.yfilter)
	|| ydk::is_set(network_type.yfilter);
}

std::string Ospfv3::Processes::Process::DefaultVrf::InterfaceBriefProcessTable::InterfaceBrief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-brief" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::InterfaceBriefProcessTable::InterfaceBrief::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (interface_address.is_set || is_set(interface_address.yfilter)) leaf_name_data.push_back(interface_address.get_name_leafdata());
    if (interface_link_cost.is_set || is_set(interface_link_cost.yfilter)) leaf_name_data.push_back(interface_link_cost.get_name_leafdata());
    if (ospf_interface_state.is_set || is_set(ospf_interface_state.yfilter)) leaf_name_data.push_back(ospf_interface_state.get_name_leafdata());
    if (interface_neighbors.is_set || is_set(interface_neighbors.yfilter)) leaf_name_data.push_back(interface_neighbors.get_name_leafdata());
    if (interface_adjacent_neighbors.is_set || is_set(interface_adjacent_neighbors.yfilter)) leaf_name_data.push_back(interface_adjacent_neighbors.get_name_leafdata());
    if (network_type.is_set || is_set(network_type.yfilter)) leaf_name_data.push_back(network_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::InterfaceBriefProcessTable::InterfaceBrief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::InterfaceBriefProcessTable::InterfaceBrief::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::InterfaceBriefProcessTable::InterfaceBrief::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-address")
    {
        interface_address = value;
        interface_address.value_namespace = name_space;
        interface_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-link-cost")
    {
        interface_link_cost = value;
        interface_link_cost.value_namespace = name_space;
        interface_link_cost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospf-interface-state")
    {
        ospf_interface_state = value;
        ospf_interface_state.value_namespace = name_space;
        ospf_interface_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-neighbors")
    {
        interface_neighbors = value;
        interface_neighbors.value_namespace = name_space;
        interface_neighbors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-adjacent-neighbors")
    {
        interface_adjacent_neighbors = value;
        interface_adjacent_neighbors.value_namespace = name_space;
        interface_adjacent_neighbors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "network-type")
    {
        network_type = value;
        network_type.value_namespace = name_space;
        network_type.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::DefaultVrf::InterfaceBriefProcessTable::InterfaceBrief::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "interface-address")
    {
        interface_address.yfilter = yfilter;
    }
    if(value_path == "interface-link-cost")
    {
        interface_link_cost.yfilter = yfilter;
    }
    if(value_path == "ospf-interface-state")
    {
        ospf_interface_state.yfilter = yfilter;
    }
    if(value_path == "interface-neighbors")
    {
        interface_neighbors.yfilter = yfilter;
    }
    if(value_path == "interface-adjacent-neighbors")
    {
        interface_adjacent_neighbors.yfilter = yfilter;
    }
    if(value_path == "network-type")
    {
        network_type.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::InterfaceBriefProcessTable::InterfaceBrief::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "interface-address" || name == "interface-link-cost" || name == "ospf-interface-state" || name == "interface-neighbors" || name == "interface-adjacent-neighbors" || name == "network-type")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::NeighborDetailProcessTable::NeighborDetailProcessTable()
{

    yang_name = "neighbor-detail-process-table"; yang_parent_name = "default-vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::NeighborDetailProcessTable::~NeighborDetailProcessTable()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::NeighborDetailProcessTable::has_data() const
{
    for (std::size_t index=0; index<neighbor_detail.size(); index++)
    {
        if(neighbor_detail[index]->has_data())
            return true;
    }
    return false;
}

bool Ospfv3::Processes::Process::DefaultVrf::NeighborDetailProcessTable::has_operation() const
{
    for (std::size_t index=0; index<neighbor_detail.size(); index++)
    {
        if(neighbor_detail[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospfv3::Processes::Process::DefaultVrf::NeighborDetailProcessTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-detail-process-table";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::NeighborDetailProcessTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::NeighborDetailProcessTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor-detail")
    {
        auto c = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::NeighborDetailProcessTable::NeighborDetail>();
        c->parent = this;
        neighbor_detail.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::NeighborDetailProcessTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : neighbor_detail)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::NeighborDetailProcessTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospfv3::Processes::Process::DefaultVrf::NeighborDetailProcessTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospfv3::Processes::Process::DefaultVrf::NeighborDetailProcessTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor-detail")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::NeighborDetailProcessTable::NeighborDetail::NeighborDetail()
    :
    interface_name{YType::str, "interface-name"},
    neighbor_address{YType::str, "neighbor-address"},
    neighbor_address_xr{YType::str, "neighbor-address-xr"},
    neighbor_interface_id{YType::uint32, "neighbor-interface-id"},
    neighbor_dr_priority{YType::uint8, "neighbor-dr-priority"},
    neighbor_state{YType::enumeration, "neighbor-state"},
    neighbor_designated_router{YType::str, "neighbor-designated-router"},
    neighbor_dead_timer{YType::uint32, "neighbor-dead-timer"},
    neighbor_up_time{YType::uint32, "neighbor-up-time"},
    neighbor_virtual_link_id{YType::uint32, "neighbor-virtual-link-id"},
    is_neighbor_virtual_link{YType::boolean, "is-neighbor-virtual-link"},
    neighbor_sham_link_id{YType::uint32, "neighbor-sham-link-id"},
    is_neighbor_sham_link{YType::boolean, "is-neighbor-sham-link"}
    	,
    neighbor_detail(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::NeighborDetailProcessTable::NeighborDetail::NeighborDetail_>())
	,neighbor_bfd_info(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::NeighborDetailProcessTable::NeighborDetail::NeighborBfdInfo>())
{
    neighbor_detail->parent = this;
    neighbor_bfd_info->parent = this;

    yang_name = "neighbor-detail"; yang_parent_name = "neighbor-detail-process-table"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::NeighborDetailProcessTable::NeighborDetail::~NeighborDetail()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::NeighborDetailProcessTable::NeighborDetail::has_data() const
{
    return interface_name.is_set
	|| neighbor_address.is_set
	|| neighbor_address_xr.is_set
	|| neighbor_interface_id.is_set
	|| neighbor_dr_priority.is_set
	|| neighbor_state.is_set
	|| neighbor_designated_router.is_set
	|| neighbor_dead_timer.is_set
	|| neighbor_up_time.is_set
	|| neighbor_virtual_link_id.is_set
	|| is_neighbor_virtual_link.is_set
	|| neighbor_sham_link_id.is_set
	|| is_neighbor_sham_link.is_set
	|| (neighbor_detail !=  nullptr && neighbor_detail->has_data())
	|| (neighbor_bfd_info !=  nullptr && neighbor_bfd_info->has_data());
}

bool Ospfv3::Processes::Process::DefaultVrf::NeighborDetailProcessTable::NeighborDetail::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(neighbor_address.yfilter)
	|| ydk::is_set(neighbor_address_xr.yfilter)
	|| ydk::is_set(neighbor_interface_id.yfilter)
	|| ydk::is_set(neighbor_dr_priority.yfilter)
	|| ydk::is_set(neighbor_state.yfilter)
	|| ydk::is_set(neighbor_designated_router.yfilter)
	|| ydk::is_set(neighbor_dead_timer.yfilter)
	|| ydk::is_set(neighbor_up_time.yfilter)
	|| ydk::is_set(neighbor_virtual_link_id.yfilter)
	|| ydk::is_set(is_neighbor_virtual_link.yfilter)
	|| ydk::is_set(neighbor_sham_link_id.yfilter)
	|| ydk::is_set(is_neighbor_sham_link.yfilter)
	|| (neighbor_detail !=  nullptr && neighbor_detail->has_operation())
	|| (neighbor_bfd_info !=  nullptr && neighbor_bfd_info->has_operation());
}

std::string Ospfv3::Processes::Process::DefaultVrf::NeighborDetailProcessTable::NeighborDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::NeighborDetailProcessTable::NeighborDetail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (neighbor_address_xr.is_set || is_set(neighbor_address_xr.yfilter)) leaf_name_data.push_back(neighbor_address_xr.get_name_leafdata());
    if (neighbor_interface_id.is_set || is_set(neighbor_interface_id.yfilter)) leaf_name_data.push_back(neighbor_interface_id.get_name_leafdata());
    if (neighbor_dr_priority.is_set || is_set(neighbor_dr_priority.yfilter)) leaf_name_data.push_back(neighbor_dr_priority.get_name_leafdata());
    if (neighbor_state.is_set || is_set(neighbor_state.yfilter)) leaf_name_data.push_back(neighbor_state.get_name_leafdata());
    if (neighbor_designated_router.is_set || is_set(neighbor_designated_router.yfilter)) leaf_name_data.push_back(neighbor_designated_router.get_name_leafdata());
    if (neighbor_dead_timer.is_set || is_set(neighbor_dead_timer.yfilter)) leaf_name_data.push_back(neighbor_dead_timer.get_name_leafdata());
    if (neighbor_up_time.is_set || is_set(neighbor_up_time.yfilter)) leaf_name_data.push_back(neighbor_up_time.get_name_leafdata());
    if (neighbor_virtual_link_id.is_set || is_set(neighbor_virtual_link_id.yfilter)) leaf_name_data.push_back(neighbor_virtual_link_id.get_name_leafdata());
    if (is_neighbor_virtual_link.is_set || is_set(is_neighbor_virtual_link.yfilter)) leaf_name_data.push_back(is_neighbor_virtual_link.get_name_leafdata());
    if (neighbor_sham_link_id.is_set || is_set(neighbor_sham_link_id.yfilter)) leaf_name_data.push_back(neighbor_sham_link_id.get_name_leafdata());
    if (is_neighbor_sham_link.is_set || is_set(is_neighbor_sham_link.yfilter)) leaf_name_data.push_back(is_neighbor_sham_link.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::NeighborDetailProcessTable::NeighborDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor-detail")
    {
        if(neighbor_detail == nullptr)
        {
            neighbor_detail = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::NeighborDetailProcessTable::NeighborDetail::NeighborDetail_>();
        }
        return neighbor_detail;
    }

    if(child_yang_name == "neighbor-bfd-info")
    {
        if(neighbor_bfd_info == nullptr)
        {
            neighbor_bfd_info = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::NeighborDetailProcessTable::NeighborDetail::NeighborBfdInfo>();
        }
        return neighbor_bfd_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::NeighborDetailProcessTable::NeighborDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(neighbor_detail != nullptr)
    {
        children["neighbor-detail"] = neighbor_detail;
    }

    if(neighbor_bfd_info != nullptr)
    {
        children["neighbor-bfd-info"] = neighbor_bfd_info;
    }

    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::NeighborDetailProcessTable::NeighborDetail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
        neighbor_address.value_namespace = name_space;
        neighbor_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-address-xr")
    {
        neighbor_address_xr = value;
        neighbor_address_xr.value_namespace = name_space;
        neighbor_address_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-interface-id")
    {
        neighbor_interface_id = value;
        neighbor_interface_id.value_namespace = name_space;
        neighbor_interface_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-dr-priority")
    {
        neighbor_dr_priority = value;
        neighbor_dr_priority.value_namespace = name_space;
        neighbor_dr_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-state")
    {
        neighbor_state = value;
        neighbor_state.value_namespace = name_space;
        neighbor_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-designated-router")
    {
        neighbor_designated_router = value;
        neighbor_designated_router.value_namespace = name_space;
        neighbor_designated_router.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-dead-timer")
    {
        neighbor_dead_timer = value;
        neighbor_dead_timer.value_namespace = name_space;
        neighbor_dead_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-up-time")
    {
        neighbor_up_time = value;
        neighbor_up_time.value_namespace = name_space;
        neighbor_up_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-virtual-link-id")
    {
        neighbor_virtual_link_id = value;
        neighbor_virtual_link_id.value_namespace = name_space;
        neighbor_virtual_link_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-neighbor-virtual-link")
    {
        is_neighbor_virtual_link = value;
        is_neighbor_virtual_link.value_namespace = name_space;
        is_neighbor_virtual_link.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-sham-link-id")
    {
        neighbor_sham_link_id = value;
        neighbor_sham_link_id.value_namespace = name_space;
        neighbor_sham_link_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-neighbor-sham-link")
    {
        is_neighbor_sham_link = value;
        is_neighbor_sham_link.value_namespace = name_space;
        is_neighbor_sham_link.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::DefaultVrf::NeighborDetailProcessTable::NeighborDetail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address.yfilter = yfilter;
    }
    if(value_path == "neighbor-address-xr")
    {
        neighbor_address_xr.yfilter = yfilter;
    }
    if(value_path == "neighbor-interface-id")
    {
        neighbor_interface_id.yfilter = yfilter;
    }
    if(value_path == "neighbor-dr-priority")
    {
        neighbor_dr_priority.yfilter = yfilter;
    }
    if(value_path == "neighbor-state")
    {
        neighbor_state.yfilter = yfilter;
    }
    if(value_path == "neighbor-designated-router")
    {
        neighbor_designated_router.yfilter = yfilter;
    }
    if(value_path == "neighbor-dead-timer")
    {
        neighbor_dead_timer.yfilter = yfilter;
    }
    if(value_path == "neighbor-up-time")
    {
        neighbor_up_time.yfilter = yfilter;
    }
    if(value_path == "neighbor-virtual-link-id")
    {
        neighbor_virtual_link_id.yfilter = yfilter;
    }
    if(value_path == "is-neighbor-virtual-link")
    {
        is_neighbor_virtual_link.yfilter = yfilter;
    }
    if(value_path == "neighbor-sham-link-id")
    {
        neighbor_sham_link_id.yfilter = yfilter;
    }
    if(value_path == "is-neighbor-sham-link")
    {
        is_neighbor_sham_link.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::NeighborDetailProcessTable::NeighborDetail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor-detail" || name == "neighbor-bfd-info" || name == "interface-name" || name == "neighbor-address" || name == "neighbor-address-xr" || name == "neighbor-interface-id" || name == "neighbor-dr-priority" || name == "neighbor-state" || name == "neighbor-designated-router" || name == "neighbor-dead-timer" || name == "neighbor-up-time" || name == "neighbor-virtual-link-id" || name == "is-neighbor-virtual-link" || name == "neighbor-sham-link-id" || name == "is-neighbor-sham-link")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::NeighborDetailProcessTable::NeighborDetail::NeighborDetail_::NeighborDetail_()
    :
    state_changes{YType::uint16, "state-changes"},
    neighbor_cost{YType::uint16, "neighbor-cost"},
    is_neighbor_filtered{YType::boolean, "is-neighbor-filtered"},
    neighbor_designated_router_address{YType::str, "neighbor-designated-router-address"},
    neighbor_backup_designated_router_address{YType::str, "neighbor-backup-designated-router-address"},
    interface_type{YType::enumeration, "interface-type"},
    poll_interval{YType::uint32, "poll-interval"},
    next_poll_interval{YType::uint32, "next-poll-interval"},
    neighbor_ignore_timer{YType::uint32, "neighbor-ignore-timer"},
    neighbor_option{YType::uint32, "neighbor-option"},
    pending_events{YType::uint16, "pending-events"}
    	,
    neighbor_retransmission(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::NeighborDetailProcessTable::NeighborDetail::NeighborDetail_::NeighborRetransmission>())
{
    neighbor_retransmission->parent = this;

    yang_name = "neighbor-detail"; yang_parent_name = "neighbor-detail"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::NeighborDetailProcessTable::NeighborDetail::NeighborDetail_::~NeighborDetail_()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::NeighborDetailProcessTable::NeighborDetail::NeighborDetail_::has_data() const
{
    return state_changes.is_set
	|| neighbor_cost.is_set
	|| is_neighbor_filtered.is_set
	|| neighbor_designated_router_address.is_set
	|| neighbor_backup_designated_router_address.is_set
	|| interface_type.is_set
	|| poll_interval.is_set
	|| next_poll_interval.is_set
	|| neighbor_ignore_timer.is_set
	|| neighbor_option.is_set
	|| pending_events.is_set
	|| (neighbor_retransmission !=  nullptr && neighbor_retransmission->has_data());
}

bool Ospfv3::Processes::Process::DefaultVrf::NeighborDetailProcessTable::NeighborDetail::NeighborDetail_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(state_changes.yfilter)
	|| ydk::is_set(neighbor_cost.yfilter)
	|| ydk::is_set(is_neighbor_filtered.yfilter)
	|| ydk::is_set(neighbor_designated_router_address.yfilter)
	|| ydk::is_set(neighbor_backup_designated_router_address.yfilter)
	|| ydk::is_set(interface_type.yfilter)
	|| ydk::is_set(poll_interval.yfilter)
	|| ydk::is_set(next_poll_interval.yfilter)
	|| ydk::is_set(neighbor_ignore_timer.yfilter)
	|| ydk::is_set(neighbor_option.yfilter)
	|| ydk::is_set(pending_events.yfilter)
	|| (neighbor_retransmission !=  nullptr && neighbor_retransmission->has_operation());
}

std::string Ospfv3::Processes::Process::DefaultVrf::NeighborDetailProcessTable::NeighborDetail::NeighborDetail_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::NeighborDetailProcessTable::NeighborDetail::NeighborDetail_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (state_changes.is_set || is_set(state_changes.yfilter)) leaf_name_data.push_back(state_changes.get_name_leafdata());
    if (neighbor_cost.is_set || is_set(neighbor_cost.yfilter)) leaf_name_data.push_back(neighbor_cost.get_name_leafdata());
    if (is_neighbor_filtered.is_set || is_set(is_neighbor_filtered.yfilter)) leaf_name_data.push_back(is_neighbor_filtered.get_name_leafdata());
    if (neighbor_designated_router_address.is_set || is_set(neighbor_designated_router_address.yfilter)) leaf_name_data.push_back(neighbor_designated_router_address.get_name_leafdata());
    if (neighbor_backup_designated_router_address.is_set || is_set(neighbor_backup_designated_router_address.yfilter)) leaf_name_data.push_back(neighbor_backup_designated_router_address.get_name_leafdata());
    if (interface_type.is_set || is_set(interface_type.yfilter)) leaf_name_data.push_back(interface_type.get_name_leafdata());
    if (poll_interval.is_set || is_set(poll_interval.yfilter)) leaf_name_data.push_back(poll_interval.get_name_leafdata());
    if (next_poll_interval.is_set || is_set(next_poll_interval.yfilter)) leaf_name_data.push_back(next_poll_interval.get_name_leafdata());
    if (neighbor_ignore_timer.is_set || is_set(neighbor_ignore_timer.yfilter)) leaf_name_data.push_back(neighbor_ignore_timer.get_name_leafdata());
    if (neighbor_option.is_set || is_set(neighbor_option.yfilter)) leaf_name_data.push_back(neighbor_option.get_name_leafdata());
    if (pending_events.is_set || is_set(pending_events.yfilter)) leaf_name_data.push_back(pending_events.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::NeighborDetailProcessTable::NeighborDetail::NeighborDetail_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor-retransmission")
    {
        if(neighbor_retransmission == nullptr)
        {
            neighbor_retransmission = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::NeighborDetailProcessTable::NeighborDetail::NeighborDetail_::NeighborRetransmission>();
        }
        return neighbor_retransmission;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::NeighborDetailProcessTable::NeighborDetail::NeighborDetail_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(neighbor_retransmission != nullptr)
    {
        children["neighbor-retransmission"] = neighbor_retransmission;
    }

    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::NeighborDetailProcessTable::NeighborDetail::NeighborDetail_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "state-changes")
    {
        state_changes = value;
        state_changes.value_namespace = name_space;
        state_changes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-cost")
    {
        neighbor_cost = value;
        neighbor_cost.value_namespace = name_space;
        neighbor_cost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-neighbor-filtered")
    {
        is_neighbor_filtered = value;
        is_neighbor_filtered.value_namespace = name_space;
        is_neighbor_filtered.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-designated-router-address")
    {
        neighbor_designated_router_address = value;
        neighbor_designated_router_address.value_namespace = name_space;
        neighbor_designated_router_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-backup-designated-router-address")
    {
        neighbor_backup_designated_router_address = value;
        neighbor_backup_designated_router_address.value_namespace = name_space;
        neighbor_backup_designated_router_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-type")
    {
        interface_type = value;
        interface_type.value_namespace = name_space;
        interface_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "poll-interval")
    {
        poll_interval = value;
        poll_interval.value_namespace = name_space;
        poll_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-poll-interval")
    {
        next_poll_interval = value;
        next_poll_interval.value_namespace = name_space;
        next_poll_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-ignore-timer")
    {
        neighbor_ignore_timer = value;
        neighbor_ignore_timer.value_namespace = name_space;
        neighbor_ignore_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-option")
    {
        neighbor_option = value;
        neighbor_option.value_namespace = name_space;
        neighbor_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pending-events")
    {
        pending_events = value;
        pending_events.value_namespace = name_space;
        pending_events.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::DefaultVrf::NeighborDetailProcessTable::NeighborDetail::NeighborDetail_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "state-changes")
    {
        state_changes.yfilter = yfilter;
    }
    if(value_path == "neighbor-cost")
    {
        neighbor_cost.yfilter = yfilter;
    }
    if(value_path == "is-neighbor-filtered")
    {
        is_neighbor_filtered.yfilter = yfilter;
    }
    if(value_path == "neighbor-designated-router-address")
    {
        neighbor_designated_router_address.yfilter = yfilter;
    }
    if(value_path == "neighbor-backup-designated-router-address")
    {
        neighbor_backup_designated_router_address.yfilter = yfilter;
    }
    if(value_path == "interface-type")
    {
        interface_type.yfilter = yfilter;
    }
    if(value_path == "poll-interval")
    {
        poll_interval.yfilter = yfilter;
    }
    if(value_path == "next-poll-interval")
    {
        next_poll_interval.yfilter = yfilter;
    }
    if(value_path == "neighbor-ignore-timer")
    {
        neighbor_ignore_timer.yfilter = yfilter;
    }
    if(value_path == "neighbor-option")
    {
        neighbor_option.yfilter = yfilter;
    }
    if(value_path == "pending-events")
    {
        pending_events.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::NeighborDetailProcessTable::NeighborDetail::NeighborDetail_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor-retransmission" || name == "state-changes" || name == "neighbor-cost" || name == "is-neighbor-filtered" || name == "neighbor-designated-router-address" || name == "neighbor-backup-designated-router-address" || name == "interface-type" || name == "poll-interval" || name == "next-poll-interval" || name == "neighbor-ignore-timer" || name == "neighbor-option" || name == "pending-events")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::NeighborDetailProcessTable::NeighborDetail::NeighborDetail_::NeighborRetransmission::NeighborRetransmission()
    :
    database_descriptor_retransmissions{YType::uint32, "database-descriptor-retransmissions"},
    area_flood_index{YType::uint32, "area-flood-index"},
    as_flood_index{YType::uint32, "as-flood-index"},
    link_flood_index{YType::uint32, "link-flood-index"},
    neighbor_retransmissions{YType::uint32, "neighbor-retransmissions"},
    retransmissions{YType::uint32, "retransmissions"},
    area_first_flood{YType::uint32, "area-first-flood"},
    area_first_flood_index{YType::uint32, "area-first-flood-index"},
    as_first_flood{YType::uint32, "as-first-flood"},
    as_first_flood_index{YType::uint32, "as-first-flood-index"},
    link_first_flood{YType::uint32, "link-first-flood"},
    link_first_flood_index{YType::uint32, "link-first-flood-index"},
    area_next_flood{YType::uint32, "area-next-flood"},
    area_next_flood_index{YType::uint32, "area-next-flood-index"},
    as_next_flood{YType::uint32, "as-next-flood"},
    as_next_flood_index{YType::uint32, "as-next-flood-index"},
    link_next_flood{YType::uint32, "link-next-flood"},
    link_next_flood_index{YType::uint32, "link-next-flood-index"},
    last_retransmission_length{YType::uint32, "last-retransmission-length"},
    maximum_retransmission_length{YType::uint32, "maximum-retransmission-length"},
    last_retransmission_time{YType::uint32, "last-retransmission-time"},
    maximum_retransmission_time{YType::uint32, "maximum-retransmission-time"},
    lsa_retransmission_timer{YType::uint32, "lsa-retransmission-timer"}
{

    yang_name = "neighbor-retransmission"; yang_parent_name = "neighbor-detail"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::NeighborDetailProcessTable::NeighborDetail::NeighborDetail_::NeighborRetransmission::~NeighborRetransmission()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::NeighborDetailProcessTable::NeighborDetail::NeighborDetail_::NeighborRetransmission::has_data() const
{
    return database_descriptor_retransmissions.is_set
	|| area_flood_index.is_set
	|| as_flood_index.is_set
	|| link_flood_index.is_set
	|| neighbor_retransmissions.is_set
	|| retransmissions.is_set
	|| area_first_flood.is_set
	|| area_first_flood_index.is_set
	|| as_first_flood.is_set
	|| as_first_flood_index.is_set
	|| link_first_flood.is_set
	|| link_first_flood_index.is_set
	|| area_next_flood.is_set
	|| area_next_flood_index.is_set
	|| as_next_flood.is_set
	|| as_next_flood_index.is_set
	|| link_next_flood.is_set
	|| link_next_flood_index.is_set
	|| last_retransmission_length.is_set
	|| maximum_retransmission_length.is_set
	|| last_retransmission_time.is_set
	|| maximum_retransmission_time.is_set
	|| lsa_retransmission_timer.is_set;
}

bool Ospfv3::Processes::Process::DefaultVrf::NeighborDetailProcessTable::NeighborDetail::NeighborDetail_::NeighborRetransmission::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(database_descriptor_retransmissions.yfilter)
	|| ydk::is_set(area_flood_index.yfilter)
	|| ydk::is_set(as_flood_index.yfilter)
	|| ydk::is_set(link_flood_index.yfilter)
	|| ydk::is_set(neighbor_retransmissions.yfilter)
	|| ydk::is_set(retransmissions.yfilter)
	|| ydk::is_set(area_first_flood.yfilter)
	|| ydk::is_set(area_first_flood_index.yfilter)
	|| ydk::is_set(as_first_flood.yfilter)
	|| ydk::is_set(as_first_flood_index.yfilter)
	|| ydk::is_set(link_first_flood.yfilter)
	|| ydk::is_set(link_first_flood_index.yfilter)
	|| ydk::is_set(area_next_flood.yfilter)
	|| ydk::is_set(area_next_flood_index.yfilter)
	|| ydk::is_set(as_next_flood.yfilter)
	|| ydk::is_set(as_next_flood_index.yfilter)
	|| ydk::is_set(link_next_flood.yfilter)
	|| ydk::is_set(link_next_flood_index.yfilter)
	|| ydk::is_set(last_retransmission_length.yfilter)
	|| ydk::is_set(maximum_retransmission_length.yfilter)
	|| ydk::is_set(last_retransmission_time.yfilter)
	|| ydk::is_set(maximum_retransmission_time.yfilter)
	|| ydk::is_set(lsa_retransmission_timer.yfilter);
}

std::string Ospfv3::Processes::Process::DefaultVrf::NeighborDetailProcessTable::NeighborDetail::NeighborDetail_::NeighborRetransmission::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-retransmission";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::NeighborDetailProcessTable::NeighborDetail::NeighborDetail_::NeighborRetransmission::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (database_descriptor_retransmissions.is_set || is_set(database_descriptor_retransmissions.yfilter)) leaf_name_data.push_back(database_descriptor_retransmissions.get_name_leafdata());
    if (area_flood_index.is_set || is_set(area_flood_index.yfilter)) leaf_name_data.push_back(area_flood_index.get_name_leafdata());
    if (as_flood_index.is_set || is_set(as_flood_index.yfilter)) leaf_name_data.push_back(as_flood_index.get_name_leafdata());
    if (link_flood_index.is_set || is_set(link_flood_index.yfilter)) leaf_name_data.push_back(link_flood_index.get_name_leafdata());
    if (neighbor_retransmissions.is_set || is_set(neighbor_retransmissions.yfilter)) leaf_name_data.push_back(neighbor_retransmissions.get_name_leafdata());
    if (retransmissions.is_set || is_set(retransmissions.yfilter)) leaf_name_data.push_back(retransmissions.get_name_leafdata());
    if (area_first_flood.is_set || is_set(area_first_flood.yfilter)) leaf_name_data.push_back(area_first_flood.get_name_leafdata());
    if (area_first_flood_index.is_set || is_set(area_first_flood_index.yfilter)) leaf_name_data.push_back(area_first_flood_index.get_name_leafdata());
    if (as_first_flood.is_set || is_set(as_first_flood.yfilter)) leaf_name_data.push_back(as_first_flood.get_name_leafdata());
    if (as_first_flood_index.is_set || is_set(as_first_flood_index.yfilter)) leaf_name_data.push_back(as_first_flood_index.get_name_leafdata());
    if (link_first_flood.is_set || is_set(link_first_flood.yfilter)) leaf_name_data.push_back(link_first_flood.get_name_leafdata());
    if (link_first_flood_index.is_set || is_set(link_first_flood_index.yfilter)) leaf_name_data.push_back(link_first_flood_index.get_name_leafdata());
    if (area_next_flood.is_set || is_set(area_next_flood.yfilter)) leaf_name_data.push_back(area_next_flood.get_name_leafdata());
    if (area_next_flood_index.is_set || is_set(area_next_flood_index.yfilter)) leaf_name_data.push_back(area_next_flood_index.get_name_leafdata());
    if (as_next_flood.is_set || is_set(as_next_flood.yfilter)) leaf_name_data.push_back(as_next_flood.get_name_leafdata());
    if (as_next_flood_index.is_set || is_set(as_next_flood_index.yfilter)) leaf_name_data.push_back(as_next_flood_index.get_name_leafdata());
    if (link_next_flood.is_set || is_set(link_next_flood.yfilter)) leaf_name_data.push_back(link_next_flood.get_name_leafdata());
    if (link_next_flood_index.is_set || is_set(link_next_flood_index.yfilter)) leaf_name_data.push_back(link_next_flood_index.get_name_leafdata());
    if (last_retransmission_length.is_set || is_set(last_retransmission_length.yfilter)) leaf_name_data.push_back(last_retransmission_length.get_name_leafdata());
    if (maximum_retransmission_length.is_set || is_set(maximum_retransmission_length.yfilter)) leaf_name_data.push_back(maximum_retransmission_length.get_name_leafdata());
    if (last_retransmission_time.is_set || is_set(last_retransmission_time.yfilter)) leaf_name_data.push_back(last_retransmission_time.get_name_leafdata());
    if (maximum_retransmission_time.is_set || is_set(maximum_retransmission_time.yfilter)) leaf_name_data.push_back(maximum_retransmission_time.get_name_leafdata());
    if (lsa_retransmission_timer.is_set || is_set(lsa_retransmission_timer.yfilter)) leaf_name_data.push_back(lsa_retransmission_timer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::NeighborDetailProcessTable::NeighborDetail::NeighborDetail_::NeighborRetransmission::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::NeighborDetailProcessTable::NeighborDetail::NeighborDetail_::NeighborRetransmission::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::NeighborDetailProcessTable::NeighborDetail::NeighborDetail_::NeighborRetransmission::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "database-descriptor-retransmissions")
    {
        database_descriptor_retransmissions = value;
        database_descriptor_retransmissions.value_namespace = name_space;
        database_descriptor_retransmissions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-flood-index")
    {
        area_flood_index = value;
        area_flood_index.value_namespace = name_space;
        area_flood_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-flood-index")
    {
        as_flood_index = value;
        as_flood_index.value_namespace = name_space;
        as_flood_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-flood-index")
    {
        link_flood_index = value;
        link_flood_index.value_namespace = name_space;
        link_flood_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-retransmissions")
    {
        neighbor_retransmissions = value;
        neighbor_retransmissions.value_namespace = name_space;
        neighbor_retransmissions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retransmissions")
    {
        retransmissions = value;
        retransmissions.value_namespace = name_space;
        retransmissions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-first-flood")
    {
        area_first_flood = value;
        area_first_flood.value_namespace = name_space;
        area_first_flood.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-first-flood-index")
    {
        area_first_flood_index = value;
        area_first_flood_index.value_namespace = name_space;
        area_first_flood_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-first-flood")
    {
        as_first_flood = value;
        as_first_flood.value_namespace = name_space;
        as_first_flood.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-first-flood-index")
    {
        as_first_flood_index = value;
        as_first_flood_index.value_namespace = name_space;
        as_first_flood_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-first-flood")
    {
        link_first_flood = value;
        link_first_flood.value_namespace = name_space;
        link_first_flood.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-first-flood-index")
    {
        link_first_flood_index = value;
        link_first_flood_index.value_namespace = name_space;
        link_first_flood_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-next-flood")
    {
        area_next_flood = value;
        area_next_flood.value_namespace = name_space;
        area_next_flood.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-next-flood-index")
    {
        area_next_flood_index = value;
        area_next_flood_index.value_namespace = name_space;
        area_next_flood_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-next-flood")
    {
        as_next_flood = value;
        as_next_flood.value_namespace = name_space;
        as_next_flood.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-next-flood-index")
    {
        as_next_flood_index = value;
        as_next_flood_index.value_namespace = name_space;
        as_next_flood_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-next-flood")
    {
        link_next_flood = value;
        link_next_flood.value_namespace = name_space;
        link_next_flood.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-next-flood-index")
    {
        link_next_flood_index = value;
        link_next_flood_index.value_namespace = name_space;
        link_next_flood_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-retransmission-length")
    {
        last_retransmission_length = value;
        last_retransmission_length.value_namespace = name_space;
        last_retransmission_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-retransmission-length")
    {
        maximum_retransmission_length = value;
        maximum_retransmission_length.value_namespace = name_space;
        maximum_retransmission_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-retransmission-time")
    {
        last_retransmission_time = value;
        last_retransmission_time.value_namespace = name_space;
        last_retransmission_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-retransmission-time")
    {
        maximum_retransmission_time = value;
        maximum_retransmission_time.value_namespace = name_space;
        maximum_retransmission_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-retransmission-timer")
    {
        lsa_retransmission_timer = value;
        lsa_retransmission_timer.value_namespace = name_space;
        lsa_retransmission_timer.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::DefaultVrf::NeighborDetailProcessTable::NeighborDetail::NeighborDetail_::NeighborRetransmission::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "database-descriptor-retransmissions")
    {
        database_descriptor_retransmissions.yfilter = yfilter;
    }
    if(value_path == "area-flood-index")
    {
        area_flood_index.yfilter = yfilter;
    }
    if(value_path == "as-flood-index")
    {
        as_flood_index.yfilter = yfilter;
    }
    if(value_path == "link-flood-index")
    {
        link_flood_index.yfilter = yfilter;
    }
    if(value_path == "neighbor-retransmissions")
    {
        neighbor_retransmissions.yfilter = yfilter;
    }
    if(value_path == "retransmissions")
    {
        retransmissions.yfilter = yfilter;
    }
    if(value_path == "area-first-flood")
    {
        area_first_flood.yfilter = yfilter;
    }
    if(value_path == "area-first-flood-index")
    {
        area_first_flood_index.yfilter = yfilter;
    }
    if(value_path == "as-first-flood")
    {
        as_first_flood.yfilter = yfilter;
    }
    if(value_path == "as-first-flood-index")
    {
        as_first_flood_index.yfilter = yfilter;
    }
    if(value_path == "link-first-flood")
    {
        link_first_flood.yfilter = yfilter;
    }
    if(value_path == "link-first-flood-index")
    {
        link_first_flood_index.yfilter = yfilter;
    }
    if(value_path == "area-next-flood")
    {
        area_next_flood.yfilter = yfilter;
    }
    if(value_path == "area-next-flood-index")
    {
        area_next_flood_index.yfilter = yfilter;
    }
    if(value_path == "as-next-flood")
    {
        as_next_flood.yfilter = yfilter;
    }
    if(value_path == "as-next-flood-index")
    {
        as_next_flood_index.yfilter = yfilter;
    }
    if(value_path == "link-next-flood")
    {
        link_next_flood.yfilter = yfilter;
    }
    if(value_path == "link-next-flood-index")
    {
        link_next_flood_index.yfilter = yfilter;
    }
    if(value_path == "last-retransmission-length")
    {
        last_retransmission_length.yfilter = yfilter;
    }
    if(value_path == "maximum-retransmission-length")
    {
        maximum_retransmission_length.yfilter = yfilter;
    }
    if(value_path == "last-retransmission-time")
    {
        last_retransmission_time.yfilter = yfilter;
    }
    if(value_path == "maximum-retransmission-time")
    {
        maximum_retransmission_time.yfilter = yfilter;
    }
    if(value_path == "lsa-retransmission-timer")
    {
        lsa_retransmission_timer.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::NeighborDetailProcessTable::NeighborDetail::NeighborDetail_::NeighborRetransmission::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "database-descriptor-retransmissions" || name == "area-flood-index" || name == "as-flood-index" || name == "link-flood-index" || name == "neighbor-retransmissions" || name == "retransmissions" || name == "area-first-flood" || name == "area-first-flood-index" || name == "as-first-flood" || name == "as-first-flood-index" || name == "link-first-flood" || name == "link-first-flood-index" || name == "area-next-flood" || name == "area-next-flood-index" || name == "as-next-flood" || name == "as-next-flood-index" || name == "link-next-flood" || name == "link-next-flood-index" || name == "last-retransmission-length" || name == "maximum-retransmission-length" || name == "last-retransmission-time" || name == "maximum-retransmission-time" || name == "lsa-retransmission-timer")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::NeighborDetailProcessTable::NeighborDetail::NeighborBfdInfo::NeighborBfdInfo()
    :
    bfd_intf_enable_mode{YType::uint32, "bfd-intf-enable-mode"},
    bfd_status_flag{YType::uint8, "bfd-status-flag"}
{

    yang_name = "neighbor-bfd-info"; yang_parent_name = "neighbor-detail"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::NeighborDetailProcessTable::NeighborDetail::NeighborBfdInfo::~NeighborBfdInfo()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::NeighborDetailProcessTable::NeighborDetail::NeighborBfdInfo::has_data() const
{
    return bfd_intf_enable_mode.is_set
	|| bfd_status_flag.is_set;
}

bool Ospfv3::Processes::Process::DefaultVrf::NeighborDetailProcessTable::NeighborDetail::NeighborBfdInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bfd_intf_enable_mode.yfilter)
	|| ydk::is_set(bfd_status_flag.yfilter);
}

std::string Ospfv3::Processes::Process::DefaultVrf::NeighborDetailProcessTable::NeighborDetail::NeighborBfdInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-bfd-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::NeighborDetailProcessTable::NeighborDetail::NeighborBfdInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bfd_intf_enable_mode.is_set || is_set(bfd_intf_enable_mode.yfilter)) leaf_name_data.push_back(bfd_intf_enable_mode.get_name_leafdata());
    if (bfd_status_flag.is_set || is_set(bfd_status_flag.yfilter)) leaf_name_data.push_back(bfd_status_flag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::NeighborDetailProcessTable::NeighborDetail::NeighborBfdInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::NeighborDetailProcessTable::NeighborDetail::NeighborBfdInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::NeighborDetailProcessTable::NeighborDetail::NeighborBfdInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bfd-intf-enable-mode")
    {
        bfd_intf_enable_mode = value;
        bfd_intf_enable_mode.value_namespace = name_space;
        bfd_intf_enable_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-status-flag")
    {
        bfd_status_flag = value;
        bfd_status_flag.value_namespace = name_space;
        bfd_status_flag.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::DefaultVrf::NeighborDetailProcessTable::NeighborDetail::NeighborBfdInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bfd-intf-enable-mode")
    {
        bfd_intf_enable_mode.yfilter = yfilter;
    }
    if(value_path == "bfd-status-flag")
    {
        bfd_status_flag.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::NeighborDetailProcessTable::NeighborDetail::NeighborBfdInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bfd-intf-enable-mode" || name == "bfd-status-flag")
        return true;
    return false;
}


}
}

