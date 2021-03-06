
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_infra_xtc_oper_0.hpp"
#include "Cisco_IOS_XR_infra_xtc_oper_1.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_infra_xtc_oper {

PceLspData::PceLspData()
    :
    tunnel_infos(std::make_shared<PceLspData::TunnelInfos>())
	,lsp_summary(std::make_shared<PceLspData::LspSummary>())
	,tunnel_detail_infos(std::make_shared<PceLspData::TunnelDetailInfos>())
{
    tunnel_infos->parent = this;
    lsp_summary->parent = this;
    tunnel_detail_infos->parent = this;

    yang_name = "pce-lsp-data"; yang_parent_name = "Cisco-IOS-XR-infra-xtc-oper"; is_top_level_class = true; has_list_ancestor = false;
}

PceLspData::~PceLspData()
{
}

bool PceLspData::has_data() const
{
    return (tunnel_infos !=  nullptr && tunnel_infos->has_data())
	|| (lsp_summary !=  nullptr && lsp_summary->has_data())
	|| (tunnel_detail_infos !=  nullptr && tunnel_detail_infos->has_data());
}

bool PceLspData::has_operation() const
{
    return is_set(yfilter)
	|| (tunnel_infos !=  nullptr && tunnel_infos->has_operation())
	|| (lsp_summary !=  nullptr && lsp_summary->has_operation())
	|| (tunnel_detail_infos !=  nullptr && tunnel_detail_infos->has_operation());
}

std::string PceLspData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-xtc-oper:pce-lsp-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceLspData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PceLspData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tunnel-infos")
    {
        if(tunnel_infos == nullptr)
        {
            tunnel_infos = std::make_shared<PceLspData::TunnelInfos>();
        }
        return tunnel_infos;
    }

    if(child_yang_name == "lsp-summary")
    {
        if(lsp_summary == nullptr)
        {
            lsp_summary = std::make_shared<PceLspData::LspSummary>();
        }
        return lsp_summary;
    }

    if(child_yang_name == "tunnel-detail-infos")
    {
        if(tunnel_detail_infos == nullptr)
        {
            tunnel_detail_infos = std::make_shared<PceLspData::TunnelDetailInfos>();
        }
        return tunnel_detail_infos;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PceLspData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(tunnel_infos != nullptr)
    {
        children["tunnel-infos"] = tunnel_infos;
    }

    if(lsp_summary != nullptr)
    {
        children["lsp-summary"] = lsp_summary;
    }

    if(tunnel_detail_infos != nullptr)
    {
        children["tunnel-detail-infos"] = tunnel_detail_infos;
    }

    return children;
}

void PceLspData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PceLspData::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> PceLspData::clone_ptr() const
{
    return std::make_shared<PceLspData>();
}

std::string PceLspData::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string PceLspData::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function PceLspData::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> PceLspData::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool PceLspData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tunnel-infos" || name == "lsp-summary" || name == "tunnel-detail-infos")
        return true;
    return false;
}

PceLspData::TunnelInfos::TunnelInfos()
{

    yang_name = "tunnel-infos"; yang_parent_name = "pce-lsp-data"; is_top_level_class = false; has_list_ancestor = false;
}

PceLspData::TunnelInfos::~TunnelInfos()
{
}

bool PceLspData::TunnelInfos::has_data() const
{
    for (std::size_t index=0; index<tunnel_info.size(); index++)
    {
        if(tunnel_info[index]->has_data())
            return true;
    }
    return false;
}

bool PceLspData::TunnelInfos::has_operation() const
{
    for (std::size_t index=0; index<tunnel_info.size(); index++)
    {
        if(tunnel_info[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PceLspData::TunnelInfos::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-xtc-oper:pce-lsp-data/" << get_segment_path();
    return path_buffer.str();
}

std::string PceLspData::TunnelInfos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-infos";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceLspData::TunnelInfos::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PceLspData::TunnelInfos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tunnel-info")
    {
        auto c = std::make_shared<PceLspData::TunnelInfos::TunnelInfo>();
        c->parent = this;
        tunnel_info.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PceLspData::TunnelInfos::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : tunnel_info)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PceLspData::TunnelInfos::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PceLspData::TunnelInfos::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PceLspData::TunnelInfos::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tunnel-info")
        return true;
    return false;
}

PceLspData::TunnelInfos::TunnelInfo::TunnelInfo()
    :
    peer_address{YType::str, "peer-address"},
    plsp_id{YType::int32, "plsp-id"},
    tunnel_name{YType::str, "tunnel-name"},
    pcc_address{YType::str, "pcc-address"},
    tunnel_name_xr{YType::str, "tunnel-name-xr"}
{

    yang_name = "tunnel-info"; yang_parent_name = "tunnel-infos"; is_top_level_class = false; has_list_ancestor = false;
}

PceLspData::TunnelInfos::TunnelInfo::~TunnelInfo()
{
}

bool PceLspData::TunnelInfos::TunnelInfo::has_data() const
{
    for (std::size_t index=0; index<brief_lsp_information.size(); index++)
    {
        if(brief_lsp_information[index]->has_data())
            return true;
    }
    return peer_address.is_set
	|| plsp_id.is_set
	|| tunnel_name.is_set
	|| pcc_address.is_set
	|| tunnel_name_xr.is_set;
}

bool PceLspData::TunnelInfos::TunnelInfo::has_operation() const
{
    for (std::size_t index=0; index<brief_lsp_information.size(); index++)
    {
        if(brief_lsp_information[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(peer_address.yfilter)
	|| ydk::is_set(plsp_id.yfilter)
	|| ydk::is_set(tunnel_name.yfilter)
	|| ydk::is_set(pcc_address.yfilter)
	|| ydk::is_set(tunnel_name_xr.yfilter);
}

std::string PceLspData::TunnelInfos::TunnelInfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-xtc-oper:pce-lsp-data/tunnel-infos/" << get_segment_path();
    return path_buffer.str();
}

std::string PceLspData::TunnelInfos::TunnelInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-info" <<"[peer-address='" <<peer_address <<"']" <<"[plsp-id='" <<plsp_id <<"']" <<"[tunnel-name='" <<tunnel_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceLspData::TunnelInfos::TunnelInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer_address.is_set || is_set(peer_address.yfilter)) leaf_name_data.push_back(peer_address.get_name_leafdata());
    if (plsp_id.is_set || is_set(plsp_id.yfilter)) leaf_name_data.push_back(plsp_id.get_name_leafdata());
    if (tunnel_name.is_set || is_set(tunnel_name.yfilter)) leaf_name_data.push_back(tunnel_name.get_name_leafdata());
    if (pcc_address.is_set || is_set(pcc_address.yfilter)) leaf_name_data.push_back(pcc_address.get_name_leafdata());
    if (tunnel_name_xr.is_set || is_set(tunnel_name_xr.yfilter)) leaf_name_data.push_back(tunnel_name_xr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PceLspData::TunnelInfos::TunnelInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "brief-lsp-information")
    {
        auto c = std::make_shared<PceLspData::TunnelInfos::TunnelInfo::BriefLspInformation>();
        c->parent = this;
        brief_lsp_information.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PceLspData::TunnelInfos::TunnelInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : brief_lsp_information)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PceLspData::TunnelInfos::TunnelInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "peer-address")
    {
        peer_address = value;
        peer_address.value_namespace = name_space;
        peer_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "plsp-id")
    {
        plsp_id = value;
        plsp_id.value_namespace = name_space;
        plsp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-name")
    {
        tunnel_name = value;
        tunnel_name.value_namespace = name_space;
        tunnel_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcc-address")
    {
        pcc_address = value;
        pcc_address.value_namespace = name_space;
        pcc_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-name-xr")
    {
        tunnel_name_xr = value;
        tunnel_name_xr.value_namespace = name_space;
        tunnel_name_xr.value_namespace_prefix = name_space_prefix;
    }
}

void PceLspData::TunnelInfos::TunnelInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "peer-address")
    {
        peer_address.yfilter = yfilter;
    }
    if(value_path == "plsp-id")
    {
        plsp_id.yfilter = yfilter;
    }
    if(value_path == "tunnel-name")
    {
        tunnel_name.yfilter = yfilter;
    }
    if(value_path == "pcc-address")
    {
        pcc_address.yfilter = yfilter;
    }
    if(value_path == "tunnel-name-xr")
    {
        tunnel_name_xr.yfilter = yfilter;
    }
}

bool PceLspData::TunnelInfos::TunnelInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "brief-lsp-information" || name == "peer-address" || name == "plsp-id" || name == "tunnel-name" || name == "pcc-address" || name == "tunnel-name-xr")
        return true;
    return false;
}

PceLspData::TunnelInfos::TunnelInfo::BriefLspInformation::BriefLspInformation()
    :
    source_address{YType::str, "source-address"},
    destination_address{YType::str, "destination-address"},
    tunnel_id{YType::uint32, "tunnel-id"},
    lspid{YType::uint32, "lspid"},
    binding_sid{YType::uint32, "binding-sid"},
    lsp_setup_type{YType::enumeration, "lsp-setup-type"},
    operational_state{YType::enumeration, "operational-state"},
    administrative_state{YType::enumeration, "administrative-state"}
{

    yang_name = "brief-lsp-information"; yang_parent_name = "tunnel-info"; is_top_level_class = false; has_list_ancestor = true;
}

PceLspData::TunnelInfos::TunnelInfo::BriefLspInformation::~BriefLspInformation()
{
}

bool PceLspData::TunnelInfos::TunnelInfo::BriefLspInformation::has_data() const
{
    return source_address.is_set
	|| destination_address.is_set
	|| tunnel_id.is_set
	|| lspid.is_set
	|| binding_sid.is_set
	|| lsp_setup_type.is_set
	|| operational_state.is_set
	|| administrative_state.is_set;
}

bool PceLspData::TunnelInfos::TunnelInfo::BriefLspInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(lspid.yfilter)
	|| ydk::is_set(binding_sid.yfilter)
	|| ydk::is_set(lsp_setup_type.yfilter)
	|| ydk::is_set(operational_state.yfilter)
	|| ydk::is_set(administrative_state.yfilter);
}

std::string PceLspData::TunnelInfos::TunnelInfo::BriefLspInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "brief-lsp-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceLspData::TunnelInfos::TunnelInfo::BriefLspInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (lspid.is_set || is_set(lspid.yfilter)) leaf_name_data.push_back(lspid.get_name_leafdata());
    if (binding_sid.is_set || is_set(binding_sid.yfilter)) leaf_name_data.push_back(binding_sid.get_name_leafdata());
    if (lsp_setup_type.is_set || is_set(lsp_setup_type.yfilter)) leaf_name_data.push_back(lsp_setup_type.get_name_leafdata());
    if (operational_state.is_set || is_set(operational_state.yfilter)) leaf_name_data.push_back(operational_state.get_name_leafdata());
    if (administrative_state.is_set || is_set(administrative_state.yfilter)) leaf_name_data.push_back(administrative_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PceLspData::TunnelInfos::TunnelInfo::BriefLspInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PceLspData::TunnelInfos::TunnelInfo::BriefLspInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PceLspData::TunnelInfos::TunnelInfo::BriefLspInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lspid")
    {
        lspid = value;
        lspid.value_namespace = name_space;
        lspid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "binding-sid")
    {
        binding_sid = value;
        binding_sid.value_namespace = name_space;
        binding_sid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-setup-type")
    {
        lsp_setup_type = value;
        lsp_setup_type.value_namespace = name_space;
        lsp_setup_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operational-state")
    {
        operational_state = value;
        operational_state.value_namespace = name_space;
        operational_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "administrative-state")
    {
        administrative_state = value;
        administrative_state.value_namespace = name_space;
        administrative_state.value_namespace_prefix = name_space_prefix;
    }
}

void PceLspData::TunnelInfos::TunnelInfo::BriefLspInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "lspid")
    {
        lspid.yfilter = yfilter;
    }
    if(value_path == "binding-sid")
    {
        binding_sid.yfilter = yfilter;
    }
    if(value_path == "lsp-setup-type")
    {
        lsp_setup_type.yfilter = yfilter;
    }
    if(value_path == "operational-state")
    {
        operational_state.yfilter = yfilter;
    }
    if(value_path == "administrative-state")
    {
        administrative_state.yfilter = yfilter;
    }
}

bool PceLspData::TunnelInfos::TunnelInfo::BriefLspInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source-address" || name == "destination-address" || name == "tunnel-id" || name == "lspid" || name == "binding-sid" || name == "lsp-setup-type" || name == "operational-state" || name == "administrative-state")
        return true;
    return false;
}

PceLspData::LspSummary::LspSummary()
    :
    all_ls_ps(std::make_shared<PceLspData::LspSummary::AllLsPs>())
{
    all_ls_ps->parent = this;

    yang_name = "lsp-summary"; yang_parent_name = "pce-lsp-data"; is_top_level_class = false; has_list_ancestor = false;
}

PceLspData::LspSummary::~LspSummary()
{
}

bool PceLspData::LspSummary::has_data() const
{
    for (std::size_t index=0; index<peer_ls_ps_info.size(); index++)
    {
        if(peer_ls_ps_info[index]->has_data())
            return true;
    }
    return (all_ls_ps !=  nullptr && all_ls_ps->has_data());
}

bool PceLspData::LspSummary::has_operation() const
{
    for (std::size_t index=0; index<peer_ls_ps_info.size(); index++)
    {
        if(peer_ls_ps_info[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (all_ls_ps !=  nullptr && all_ls_ps->has_operation());
}

std::string PceLspData::LspSummary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-xtc-oper:pce-lsp-data/" << get_segment_path();
    return path_buffer.str();
}

std::string PceLspData::LspSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceLspData::LspSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PceLspData::LspSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "all-ls-ps")
    {
        if(all_ls_ps == nullptr)
        {
            all_ls_ps = std::make_shared<PceLspData::LspSummary::AllLsPs>();
        }
        return all_ls_ps;
    }

    if(child_yang_name == "peer-ls-ps-info")
    {
        auto c = std::make_shared<PceLspData::LspSummary::PeerLsPsInfo>();
        c->parent = this;
        peer_ls_ps_info.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PceLspData::LspSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(all_ls_ps != nullptr)
    {
        children["all-ls-ps"] = all_ls_ps;
    }

    count = 0;
    for (auto const & c : peer_ls_ps_info)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PceLspData::LspSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PceLspData::LspSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PceLspData::LspSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all-ls-ps" || name == "peer-ls-ps-info")
        return true;
    return false;
}

PceLspData::LspSummary::AllLsPs::AllLsPs()
    :
    all_ls_ps{YType::uint32, "all-ls-ps"},
    up_ls_ps{YType::uint32, "up-ls-ps"},
    admin_up_ls_ps{YType::uint32, "admin-up-ls-ps"},
    sr_ls_ps{YType::uint32, "sr-ls-ps"},
    rsvp_ls_ps{YType::uint32, "rsvp-ls-ps"}
{

    yang_name = "all-ls-ps"; yang_parent_name = "lsp-summary"; is_top_level_class = false; has_list_ancestor = false;
}

PceLspData::LspSummary::AllLsPs::~AllLsPs()
{
}

bool PceLspData::LspSummary::AllLsPs::has_data() const
{
    return all_ls_ps.is_set
	|| up_ls_ps.is_set
	|| admin_up_ls_ps.is_set
	|| sr_ls_ps.is_set
	|| rsvp_ls_ps.is_set;
}

bool PceLspData::LspSummary::AllLsPs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all_ls_ps.yfilter)
	|| ydk::is_set(up_ls_ps.yfilter)
	|| ydk::is_set(admin_up_ls_ps.yfilter)
	|| ydk::is_set(sr_ls_ps.yfilter)
	|| ydk::is_set(rsvp_ls_ps.yfilter);
}

std::string PceLspData::LspSummary::AllLsPs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-xtc-oper:pce-lsp-data/lsp-summary/" << get_segment_path();
    return path_buffer.str();
}

std::string PceLspData::LspSummary::AllLsPs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all-ls-ps";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceLspData::LspSummary::AllLsPs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all_ls_ps.is_set || is_set(all_ls_ps.yfilter)) leaf_name_data.push_back(all_ls_ps.get_name_leafdata());
    if (up_ls_ps.is_set || is_set(up_ls_ps.yfilter)) leaf_name_data.push_back(up_ls_ps.get_name_leafdata());
    if (admin_up_ls_ps.is_set || is_set(admin_up_ls_ps.yfilter)) leaf_name_data.push_back(admin_up_ls_ps.get_name_leafdata());
    if (sr_ls_ps.is_set || is_set(sr_ls_ps.yfilter)) leaf_name_data.push_back(sr_ls_ps.get_name_leafdata());
    if (rsvp_ls_ps.is_set || is_set(rsvp_ls_ps.yfilter)) leaf_name_data.push_back(rsvp_ls_ps.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PceLspData::LspSummary::AllLsPs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PceLspData::LspSummary::AllLsPs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PceLspData::LspSummary::AllLsPs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all-ls-ps")
    {
        all_ls_ps = value;
        all_ls_ps.value_namespace = name_space;
        all_ls_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "up-ls-ps")
    {
        up_ls_ps = value;
        up_ls_ps.value_namespace = name_space;
        up_ls_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "admin-up-ls-ps")
    {
        admin_up_ls_ps = value;
        admin_up_ls_ps.value_namespace = name_space;
        admin_up_ls_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sr-ls-ps")
    {
        sr_ls_ps = value;
        sr_ls_ps.value_namespace = name_space;
        sr_ls_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvp-ls-ps")
    {
        rsvp_ls_ps = value;
        rsvp_ls_ps.value_namespace = name_space;
        rsvp_ls_ps.value_namespace_prefix = name_space_prefix;
    }
}

void PceLspData::LspSummary::AllLsPs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all-ls-ps")
    {
        all_ls_ps.yfilter = yfilter;
    }
    if(value_path == "up-ls-ps")
    {
        up_ls_ps.yfilter = yfilter;
    }
    if(value_path == "admin-up-ls-ps")
    {
        admin_up_ls_ps.yfilter = yfilter;
    }
    if(value_path == "sr-ls-ps")
    {
        sr_ls_ps.yfilter = yfilter;
    }
    if(value_path == "rsvp-ls-ps")
    {
        rsvp_ls_ps.yfilter = yfilter;
    }
}

bool PceLspData::LspSummary::AllLsPs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all-ls-ps" || name == "up-ls-ps" || name == "admin-up-ls-ps" || name == "sr-ls-ps" || name == "rsvp-ls-ps")
        return true;
    return false;
}

PceLspData::LspSummary::PeerLsPsInfo::PeerLsPsInfo()
    :
    peer_address{YType::str, "peer-address"}
    	,
    lsp_summary(std::make_shared<PceLspData::LspSummary::PeerLsPsInfo::LspSummary_>())
{
    lsp_summary->parent = this;

    yang_name = "peer-ls-ps-info"; yang_parent_name = "lsp-summary"; is_top_level_class = false; has_list_ancestor = false;
}

PceLspData::LspSummary::PeerLsPsInfo::~PeerLsPsInfo()
{
}

bool PceLspData::LspSummary::PeerLsPsInfo::has_data() const
{
    return peer_address.is_set
	|| (lsp_summary !=  nullptr && lsp_summary->has_data());
}

bool PceLspData::LspSummary::PeerLsPsInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(peer_address.yfilter)
	|| (lsp_summary !=  nullptr && lsp_summary->has_operation());
}

std::string PceLspData::LspSummary::PeerLsPsInfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-xtc-oper:pce-lsp-data/lsp-summary/" << get_segment_path();
    return path_buffer.str();
}

std::string PceLspData::LspSummary::PeerLsPsInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-ls-ps-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceLspData::LspSummary::PeerLsPsInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer_address.is_set || is_set(peer_address.yfilter)) leaf_name_data.push_back(peer_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PceLspData::LspSummary::PeerLsPsInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsp-summary")
    {
        if(lsp_summary == nullptr)
        {
            lsp_summary = std::make_shared<PceLspData::LspSummary::PeerLsPsInfo::LspSummary_>();
        }
        return lsp_summary;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PceLspData::LspSummary::PeerLsPsInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(lsp_summary != nullptr)
    {
        children["lsp-summary"] = lsp_summary;
    }

    return children;
}

void PceLspData::LspSummary::PeerLsPsInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "peer-address")
    {
        peer_address = value;
        peer_address.value_namespace = name_space;
        peer_address.value_namespace_prefix = name_space_prefix;
    }
}

void PceLspData::LspSummary::PeerLsPsInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "peer-address")
    {
        peer_address.yfilter = yfilter;
    }
}

bool PceLspData::LspSummary::PeerLsPsInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsp-summary" || name == "peer-address")
        return true;
    return false;
}

PceLspData::LspSummary::PeerLsPsInfo::LspSummary_::LspSummary_()
    :
    all_ls_ps{YType::uint32, "all-ls-ps"},
    up_ls_ps{YType::uint32, "up-ls-ps"},
    admin_up_ls_ps{YType::uint32, "admin-up-ls-ps"},
    sr_ls_ps{YType::uint32, "sr-ls-ps"},
    rsvp_ls_ps{YType::uint32, "rsvp-ls-ps"}
{

    yang_name = "lsp-summary"; yang_parent_name = "peer-ls-ps-info"; is_top_level_class = false; has_list_ancestor = false;
}

PceLspData::LspSummary::PeerLsPsInfo::LspSummary_::~LspSummary_()
{
}

bool PceLspData::LspSummary::PeerLsPsInfo::LspSummary_::has_data() const
{
    return all_ls_ps.is_set
	|| up_ls_ps.is_set
	|| admin_up_ls_ps.is_set
	|| sr_ls_ps.is_set
	|| rsvp_ls_ps.is_set;
}

bool PceLspData::LspSummary::PeerLsPsInfo::LspSummary_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all_ls_ps.yfilter)
	|| ydk::is_set(up_ls_ps.yfilter)
	|| ydk::is_set(admin_up_ls_ps.yfilter)
	|| ydk::is_set(sr_ls_ps.yfilter)
	|| ydk::is_set(rsvp_ls_ps.yfilter);
}

std::string PceLspData::LspSummary::PeerLsPsInfo::LspSummary_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-xtc-oper:pce-lsp-data/lsp-summary/peer-ls-ps-info/" << get_segment_path();
    return path_buffer.str();
}

std::string PceLspData::LspSummary::PeerLsPsInfo::LspSummary_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceLspData::LspSummary::PeerLsPsInfo::LspSummary_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all_ls_ps.is_set || is_set(all_ls_ps.yfilter)) leaf_name_data.push_back(all_ls_ps.get_name_leafdata());
    if (up_ls_ps.is_set || is_set(up_ls_ps.yfilter)) leaf_name_data.push_back(up_ls_ps.get_name_leafdata());
    if (admin_up_ls_ps.is_set || is_set(admin_up_ls_ps.yfilter)) leaf_name_data.push_back(admin_up_ls_ps.get_name_leafdata());
    if (sr_ls_ps.is_set || is_set(sr_ls_ps.yfilter)) leaf_name_data.push_back(sr_ls_ps.get_name_leafdata());
    if (rsvp_ls_ps.is_set || is_set(rsvp_ls_ps.yfilter)) leaf_name_data.push_back(rsvp_ls_ps.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PceLspData::LspSummary::PeerLsPsInfo::LspSummary_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PceLspData::LspSummary::PeerLsPsInfo::LspSummary_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PceLspData::LspSummary::PeerLsPsInfo::LspSummary_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all-ls-ps")
    {
        all_ls_ps = value;
        all_ls_ps.value_namespace = name_space;
        all_ls_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "up-ls-ps")
    {
        up_ls_ps = value;
        up_ls_ps.value_namespace = name_space;
        up_ls_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "admin-up-ls-ps")
    {
        admin_up_ls_ps = value;
        admin_up_ls_ps.value_namespace = name_space;
        admin_up_ls_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sr-ls-ps")
    {
        sr_ls_ps = value;
        sr_ls_ps.value_namespace = name_space;
        sr_ls_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvp-ls-ps")
    {
        rsvp_ls_ps = value;
        rsvp_ls_ps.value_namespace = name_space;
        rsvp_ls_ps.value_namespace_prefix = name_space_prefix;
    }
}

void PceLspData::LspSummary::PeerLsPsInfo::LspSummary_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all-ls-ps")
    {
        all_ls_ps.yfilter = yfilter;
    }
    if(value_path == "up-ls-ps")
    {
        up_ls_ps.yfilter = yfilter;
    }
    if(value_path == "admin-up-ls-ps")
    {
        admin_up_ls_ps.yfilter = yfilter;
    }
    if(value_path == "sr-ls-ps")
    {
        sr_ls_ps.yfilter = yfilter;
    }
    if(value_path == "rsvp-ls-ps")
    {
        rsvp_ls_ps.yfilter = yfilter;
    }
}

bool PceLspData::LspSummary::PeerLsPsInfo::LspSummary_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all-ls-ps" || name == "up-ls-ps" || name == "admin-up-ls-ps" || name == "sr-ls-ps" || name == "rsvp-ls-ps")
        return true;
    return false;
}

PceLspData::TunnelDetailInfos::TunnelDetailInfos()
{

    yang_name = "tunnel-detail-infos"; yang_parent_name = "pce-lsp-data"; is_top_level_class = false; has_list_ancestor = false;
}

PceLspData::TunnelDetailInfos::~TunnelDetailInfos()
{
}

bool PceLspData::TunnelDetailInfos::has_data() const
{
    for (std::size_t index=0; index<tunnel_detail_info.size(); index++)
    {
        if(tunnel_detail_info[index]->has_data())
            return true;
    }
    return false;
}

bool PceLspData::TunnelDetailInfos::has_operation() const
{
    for (std::size_t index=0; index<tunnel_detail_info.size(); index++)
    {
        if(tunnel_detail_info[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PceLspData::TunnelDetailInfos::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-xtc-oper:pce-lsp-data/" << get_segment_path();
    return path_buffer.str();
}

std::string PceLspData::TunnelDetailInfos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-detail-infos";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceLspData::TunnelDetailInfos::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PceLspData::TunnelDetailInfos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tunnel-detail-info")
    {
        auto c = std::make_shared<PceLspData::TunnelDetailInfos::TunnelDetailInfo>();
        c->parent = this;
        tunnel_detail_info.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PceLspData::TunnelDetailInfos::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : tunnel_detail_info)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PceLspData::TunnelDetailInfos::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PceLspData::TunnelDetailInfos::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PceLspData::TunnelDetailInfos::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tunnel-detail-info")
        return true;
    return false;
}

PceLspData::TunnelDetailInfos::TunnelDetailInfo::TunnelDetailInfo()
    :
    peer_address{YType::str, "peer-address"},
    plsp_id{YType::int32, "plsp-id"},
    tunnel_name{YType::str, "tunnel-name"},
    pcc_address{YType::str, "pcc-address"},
    tunnel_name_xr{YType::str, "tunnel-name-xr"}
    	,
    private_lsp_information(std::make_shared<PceLspData::TunnelDetailInfos::TunnelDetailInfo::PrivateLspInformation>())
{
    private_lsp_information->parent = this;

    yang_name = "tunnel-detail-info"; yang_parent_name = "tunnel-detail-infos"; is_top_level_class = false; has_list_ancestor = false;
}

PceLspData::TunnelDetailInfos::TunnelDetailInfo::~TunnelDetailInfo()
{
}

bool PceLspData::TunnelDetailInfos::TunnelDetailInfo::has_data() const
{
    for (std::size_t index=0; index<detail_lsp_information.size(); index++)
    {
        if(detail_lsp_information[index]->has_data())
            return true;
    }
    return peer_address.is_set
	|| plsp_id.is_set
	|| tunnel_name.is_set
	|| pcc_address.is_set
	|| tunnel_name_xr.is_set
	|| (private_lsp_information !=  nullptr && private_lsp_information->has_data());
}

bool PceLspData::TunnelDetailInfos::TunnelDetailInfo::has_operation() const
{
    for (std::size_t index=0; index<detail_lsp_information.size(); index++)
    {
        if(detail_lsp_information[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(peer_address.yfilter)
	|| ydk::is_set(plsp_id.yfilter)
	|| ydk::is_set(tunnel_name.yfilter)
	|| ydk::is_set(pcc_address.yfilter)
	|| ydk::is_set(tunnel_name_xr.yfilter)
	|| (private_lsp_information !=  nullptr && private_lsp_information->has_operation());
}

std::string PceLspData::TunnelDetailInfos::TunnelDetailInfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-xtc-oper:pce-lsp-data/tunnel-detail-infos/" << get_segment_path();
    return path_buffer.str();
}

std::string PceLspData::TunnelDetailInfos::TunnelDetailInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-detail-info" <<"[peer-address='" <<peer_address <<"']" <<"[plsp-id='" <<plsp_id <<"']" <<"[tunnel-name='" <<tunnel_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceLspData::TunnelDetailInfos::TunnelDetailInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer_address.is_set || is_set(peer_address.yfilter)) leaf_name_data.push_back(peer_address.get_name_leafdata());
    if (plsp_id.is_set || is_set(plsp_id.yfilter)) leaf_name_data.push_back(plsp_id.get_name_leafdata());
    if (tunnel_name.is_set || is_set(tunnel_name.yfilter)) leaf_name_data.push_back(tunnel_name.get_name_leafdata());
    if (pcc_address.is_set || is_set(pcc_address.yfilter)) leaf_name_data.push_back(pcc_address.get_name_leafdata());
    if (tunnel_name_xr.is_set || is_set(tunnel_name_xr.yfilter)) leaf_name_data.push_back(tunnel_name_xr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PceLspData::TunnelDetailInfos::TunnelDetailInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "private-lsp-information")
    {
        if(private_lsp_information == nullptr)
        {
            private_lsp_information = std::make_shared<PceLspData::TunnelDetailInfos::TunnelDetailInfo::PrivateLspInformation>();
        }
        return private_lsp_information;
    }

    if(child_yang_name == "detail-lsp-information")
    {
        auto c = std::make_shared<PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation>();
        c->parent = this;
        detail_lsp_information.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PceLspData::TunnelDetailInfos::TunnelDetailInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(private_lsp_information != nullptr)
    {
        children["private-lsp-information"] = private_lsp_information;
    }

    count = 0;
    for (auto const & c : detail_lsp_information)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PceLspData::TunnelDetailInfos::TunnelDetailInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "peer-address")
    {
        peer_address = value;
        peer_address.value_namespace = name_space;
        peer_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "plsp-id")
    {
        plsp_id = value;
        plsp_id.value_namespace = name_space;
        plsp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-name")
    {
        tunnel_name = value;
        tunnel_name.value_namespace = name_space;
        tunnel_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcc-address")
    {
        pcc_address = value;
        pcc_address.value_namespace = name_space;
        pcc_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-name-xr")
    {
        tunnel_name_xr = value;
        tunnel_name_xr.value_namespace = name_space;
        tunnel_name_xr.value_namespace_prefix = name_space_prefix;
    }
}

void PceLspData::TunnelDetailInfos::TunnelDetailInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "peer-address")
    {
        peer_address.yfilter = yfilter;
    }
    if(value_path == "plsp-id")
    {
        plsp_id.yfilter = yfilter;
    }
    if(value_path == "tunnel-name")
    {
        tunnel_name.yfilter = yfilter;
    }
    if(value_path == "pcc-address")
    {
        pcc_address.yfilter = yfilter;
    }
    if(value_path == "tunnel-name-xr")
    {
        tunnel_name_xr.yfilter = yfilter;
    }
}

bool PceLspData::TunnelDetailInfos::TunnelDetailInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "private-lsp-information" || name == "detail-lsp-information" || name == "peer-address" || name == "plsp-id" || name == "tunnel-name" || name == "pcc-address" || name == "tunnel-name-xr")
        return true;
    return false;
}

PceLspData::TunnelDetailInfos::TunnelDetailInfo::PrivateLspInformation::PrivateLspInformation()
{

    yang_name = "private-lsp-information"; yang_parent_name = "tunnel-detail-info"; is_top_level_class = false; has_list_ancestor = true;
}

PceLspData::TunnelDetailInfos::TunnelDetailInfo::PrivateLspInformation::~PrivateLspInformation()
{
}

bool PceLspData::TunnelDetailInfos::TunnelDetailInfo::PrivateLspInformation::has_data() const
{
    for (std::size_t index=0; index<event_buffer.size(); index++)
    {
        if(event_buffer[index]->has_data())
            return true;
    }
    return false;
}

bool PceLspData::TunnelDetailInfos::TunnelDetailInfo::PrivateLspInformation::has_operation() const
{
    for (std::size_t index=0; index<event_buffer.size(); index++)
    {
        if(event_buffer[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PceLspData::TunnelDetailInfos::TunnelDetailInfo::PrivateLspInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "private-lsp-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceLspData::TunnelDetailInfos::TunnelDetailInfo::PrivateLspInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PceLspData::TunnelDetailInfos::TunnelDetailInfo::PrivateLspInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "event-buffer")
    {
        auto c = std::make_shared<PceLspData::TunnelDetailInfos::TunnelDetailInfo::PrivateLspInformation::EventBuffer>();
        c->parent = this;
        event_buffer.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PceLspData::TunnelDetailInfos::TunnelDetailInfo::PrivateLspInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : event_buffer)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PceLspData::TunnelDetailInfos::TunnelDetailInfo::PrivateLspInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PceLspData::TunnelDetailInfos::TunnelDetailInfo::PrivateLspInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PceLspData::TunnelDetailInfos::TunnelDetailInfo::PrivateLspInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "event-buffer")
        return true;
    return false;
}

PceLspData::TunnelDetailInfos::TunnelDetailInfo::PrivateLspInformation::EventBuffer::EventBuffer()
    :
    event_message{YType::str, "event-message"},
    time_stamp{YType::uint32, "time-stamp"}
{

    yang_name = "event-buffer"; yang_parent_name = "private-lsp-information"; is_top_level_class = false; has_list_ancestor = true;
}

PceLspData::TunnelDetailInfos::TunnelDetailInfo::PrivateLspInformation::EventBuffer::~EventBuffer()
{
}

bool PceLspData::TunnelDetailInfos::TunnelDetailInfo::PrivateLspInformation::EventBuffer::has_data() const
{
    return event_message.is_set
	|| time_stamp.is_set;
}

bool PceLspData::TunnelDetailInfos::TunnelDetailInfo::PrivateLspInformation::EventBuffer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(event_message.yfilter)
	|| ydk::is_set(time_stamp.yfilter);
}

std::string PceLspData::TunnelDetailInfos::TunnelDetailInfo::PrivateLspInformation::EventBuffer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "event-buffer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceLspData::TunnelDetailInfos::TunnelDetailInfo::PrivateLspInformation::EventBuffer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (event_message.is_set || is_set(event_message.yfilter)) leaf_name_data.push_back(event_message.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PceLspData::TunnelDetailInfos::TunnelDetailInfo::PrivateLspInformation::EventBuffer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PceLspData::TunnelDetailInfos::TunnelDetailInfo::PrivateLspInformation::EventBuffer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PceLspData::TunnelDetailInfos::TunnelDetailInfo::PrivateLspInformation::EventBuffer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "event-message")
    {
        event_message = value;
        event_message.value_namespace = name_space;
        event_message.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-stamp")
    {
        time_stamp = value;
        time_stamp.value_namespace = name_space;
        time_stamp.value_namespace_prefix = name_space_prefix;
    }
}

void PceLspData::TunnelDetailInfos::TunnelDetailInfo::PrivateLspInformation::EventBuffer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "event-message")
    {
        event_message.yfilter = yfilter;
    }
    if(value_path == "time-stamp")
    {
        time_stamp.yfilter = yfilter;
    }
}

bool PceLspData::TunnelDetailInfos::TunnelDetailInfo::PrivateLspInformation::EventBuffer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "event-message" || name == "time-stamp")
        return true;
    return false;
}

PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::DetailLspInformation()
    :
    signaled_bandwidth_specified{YType::boolean, "signaled-bandwidth-specified"},
    signaled_bandwidth{YType::uint64, "signaled-bandwidth"},
    actual_bandwidth_specified{YType::boolean, "actual-bandwidth-specified"},
    actual_bandwidth{YType::uint64, "actual-bandwidth"},
    lsp_role{YType::uint32, "lsp-role"},
    computing_pce{YType::uint32, "computing-pce"},
    sub_delegated_pce{YType::str, "sub-delegated-pce"},
    state_sync_pce{YType::str, "state-sync-pce"},
    reporting_pcc_address{YType::str, "reporting-pcc-address"},
    srlg_info{YType::uint32, "srlg-info"}
    	,
    brief_lsp_information(std::make_shared<PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::BriefLspInformation>())
	,er_os(std::make_shared<PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs>())
	,lsppcep_information(std::make_shared<PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LsppcepInformation>())
	,lsp_association_info(std::make_shared<PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LspAssociationInfo>())
	,lsp_attributes(std::make_shared<PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LspAttributes>())
{
    brief_lsp_information->parent = this;
    er_os->parent = this;
    lsppcep_information->parent = this;
    lsp_association_info->parent = this;
    lsp_attributes->parent = this;

    yang_name = "detail-lsp-information"; yang_parent_name = "tunnel-detail-info"; is_top_level_class = false; has_list_ancestor = true;
}

PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::~DetailLspInformation()
{
}

bool PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::has_data() const
{
    for (std::size_t index=0; index<rro.size(); index++)
    {
        if(rro[index]->has_data())
            return true;
    }
    for (auto const & leaf : srlg_info.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return signaled_bandwidth_specified.is_set
	|| signaled_bandwidth.is_set
	|| actual_bandwidth_specified.is_set
	|| actual_bandwidth.is_set
	|| lsp_role.is_set
	|| computing_pce.is_set
	|| sub_delegated_pce.is_set
	|| state_sync_pce.is_set
	|| reporting_pcc_address.is_set
	|| (brief_lsp_information !=  nullptr && brief_lsp_information->has_data())
	|| (er_os !=  nullptr && er_os->has_data())
	|| (lsppcep_information !=  nullptr && lsppcep_information->has_data())
	|| (lsp_association_info !=  nullptr && lsp_association_info->has_data())
	|| (lsp_attributes !=  nullptr && lsp_attributes->has_data());
}

bool PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::has_operation() const
{
    for (std::size_t index=0; index<rro.size(); index++)
    {
        if(rro[index]->has_operation())
            return true;
    }
    for (auto const & leaf : srlg_info.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(signaled_bandwidth_specified.yfilter)
	|| ydk::is_set(signaled_bandwidth.yfilter)
	|| ydk::is_set(actual_bandwidth_specified.yfilter)
	|| ydk::is_set(actual_bandwidth.yfilter)
	|| ydk::is_set(lsp_role.yfilter)
	|| ydk::is_set(computing_pce.yfilter)
	|| ydk::is_set(sub_delegated_pce.yfilter)
	|| ydk::is_set(state_sync_pce.yfilter)
	|| ydk::is_set(reporting_pcc_address.yfilter)
	|| ydk::is_set(srlg_info.yfilter)
	|| (brief_lsp_information !=  nullptr && brief_lsp_information->has_operation())
	|| (er_os !=  nullptr && er_os->has_operation())
	|| (lsppcep_information !=  nullptr && lsppcep_information->has_operation())
	|| (lsp_association_info !=  nullptr && lsp_association_info->has_operation())
	|| (lsp_attributes !=  nullptr && lsp_attributes->has_operation());
}

std::string PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detail-lsp-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (signaled_bandwidth_specified.is_set || is_set(signaled_bandwidth_specified.yfilter)) leaf_name_data.push_back(signaled_bandwidth_specified.get_name_leafdata());
    if (signaled_bandwidth.is_set || is_set(signaled_bandwidth.yfilter)) leaf_name_data.push_back(signaled_bandwidth.get_name_leafdata());
    if (actual_bandwidth_specified.is_set || is_set(actual_bandwidth_specified.yfilter)) leaf_name_data.push_back(actual_bandwidth_specified.get_name_leafdata());
    if (actual_bandwidth.is_set || is_set(actual_bandwidth.yfilter)) leaf_name_data.push_back(actual_bandwidth.get_name_leafdata());
    if (lsp_role.is_set || is_set(lsp_role.yfilter)) leaf_name_data.push_back(lsp_role.get_name_leafdata());
    if (computing_pce.is_set || is_set(computing_pce.yfilter)) leaf_name_data.push_back(computing_pce.get_name_leafdata());
    if (sub_delegated_pce.is_set || is_set(sub_delegated_pce.yfilter)) leaf_name_data.push_back(sub_delegated_pce.get_name_leafdata());
    if (state_sync_pce.is_set || is_set(state_sync_pce.yfilter)) leaf_name_data.push_back(state_sync_pce.get_name_leafdata());
    if (reporting_pcc_address.is_set || is_set(reporting_pcc_address.yfilter)) leaf_name_data.push_back(reporting_pcc_address.get_name_leafdata());

    auto srlg_info_name_datas = srlg_info.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), srlg_info_name_datas.begin(), srlg_info_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "brief-lsp-information")
    {
        if(brief_lsp_information == nullptr)
        {
            brief_lsp_information = std::make_shared<PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::BriefLspInformation>();
        }
        return brief_lsp_information;
    }

    if(child_yang_name == "er-os")
    {
        if(er_os == nullptr)
        {
            er_os = std::make_shared<PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs>();
        }
        return er_os;
    }

    if(child_yang_name == "lsppcep-information")
    {
        if(lsppcep_information == nullptr)
        {
            lsppcep_information = std::make_shared<PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LsppcepInformation>();
        }
        return lsppcep_information;
    }

    if(child_yang_name == "lsp-association-info")
    {
        if(lsp_association_info == nullptr)
        {
            lsp_association_info = std::make_shared<PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LspAssociationInfo>();
        }
        return lsp_association_info;
    }

    if(child_yang_name == "lsp-attributes")
    {
        if(lsp_attributes == nullptr)
        {
            lsp_attributes = std::make_shared<PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LspAttributes>();
        }
        return lsp_attributes;
    }

    if(child_yang_name == "rro")
    {
        auto c = std::make_shared<PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::Rro>();
        c->parent = this;
        rro.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(brief_lsp_information != nullptr)
    {
        children["brief-lsp-information"] = brief_lsp_information;
    }

    if(er_os != nullptr)
    {
        children["er-os"] = er_os;
    }

    if(lsppcep_information != nullptr)
    {
        children["lsppcep-information"] = lsppcep_information;
    }

    if(lsp_association_info != nullptr)
    {
        children["lsp-association-info"] = lsp_association_info;
    }

    if(lsp_attributes != nullptr)
    {
        children["lsp-attributes"] = lsp_attributes;
    }

    count = 0;
    for (auto const & c : rro)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "signaled-bandwidth-specified")
    {
        signaled_bandwidth_specified = value;
        signaled_bandwidth_specified.value_namespace = name_space;
        signaled_bandwidth_specified.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "signaled-bandwidth")
    {
        signaled_bandwidth = value;
        signaled_bandwidth.value_namespace = name_space;
        signaled_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "actual-bandwidth-specified")
    {
        actual_bandwidth_specified = value;
        actual_bandwidth_specified.value_namespace = name_space;
        actual_bandwidth_specified.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "actual-bandwidth")
    {
        actual_bandwidth = value;
        actual_bandwidth.value_namespace = name_space;
        actual_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-role")
    {
        lsp_role = value;
        lsp_role.value_namespace = name_space;
        lsp_role.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "computing-pce")
    {
        computing_pce = value;
        computing_pce.value_namespace = name_space;
        computing_pce.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-delegated-pce")
    {
        sub_delegated_pce = value;
        sub_delegated_pce.value_namespace = name_space;
        sub_delegated_pce.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state-sync-pce")
    {
        state_sync_pce = value;
        state_sync_pce.value_namespace = name_space;
        state_sync_pce.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reporting-pcc-address")
    {
        reporting_pcc_address = value;
        reporting_pcc_address.value_namespace = name_space;
        reporting_pcc_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srlg-info")
    {
        srlg_info.append(value);
    }
}

void PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "signaled-bandwidth-specified")
    {
        signaled_bandwidth_specified.yfilter = yfilter;
    }
    if(value_path == "signaled-bandwidth")
    {
        signaled_bandwidth.yfilter = yfilter;
    }
    if(value_path == "actual-bandwidth-specified")
    {
        actual_bandwidth_specified.yfilter = yfilter;
    }
    if(value_path == "actual-bandwidth")
    {
        actual_bandwidth.yfilter = yfilter;
    }
    if(value_path == "lsp-role")
    {
        lsp_role.yfilter = yfilter;
    }
    if(value_path == "computing-pce")
    {
        computing_pce.yfilter = yfilter;
    }
    if(value_path == "sub-delegated-pce")
    {
        sub_delegated_pce.yfilter = yfilter;
    }
    if(value_path == "state-sync-pce")
    {
        state_sync_pce.yfilter = yfilter;
    }
    if(value_path == "reporting-pcc-address")
    {
        reporting_pcc_address.yfilter = yfilter;
    }
    if(value_path == "srlg-info")
    {
        srlg_info.yfilter = yfilter;
    }
}

bool PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "brief-lsp-information" || name == "er-os" || name == "lsppcep-information" || name == "lsp-association-info" || name == "lsp-attributes" || name == "rro" || name == "signaled-bandwidth-specified" || name == "signaled-bandwidth" || name == "actual-bandwidth-specified" || name == "actual-bandwidth" || name == "lsp-role" || name == "computing-pce" || name == "sub-delegated-pce" || name == "state-sync-pce" || name == "reporting-pcc-address" || name == "srlg-info")
        return true;
    return false;
}

PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::BriefLspInformation::BriefLspInformation()
    :
    source_address{YType::str, "source-address"},
    destination_address{YType::str, "destination-address"},
    tunnel_id{YType::uint32, "tunnel-id"},
    lspid{YType::uint32, "lspid"},
    binding_sid{YType::uint32, "binding-sid"},
    lsp_setup_type{YType::enumeration, "lsp-setup-type"},
    operational_state{YType::enumeration, "operational-state"},
    administrative_state{YType::enumeration, "administrative-state"}
{

    yang_name = "brief-lsp-information"; yang_parent_name = "detail-lsp-information"; is_top_level_class = false; has_list_ancestor = true;
}

PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::BriefLspInformation::~BriefLspInformation()
{
}

bool PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::BriefLspInformation::has_data() const
{
    return source_address.is_set
	|| destination_address.is_set
	|| tunnel_id.is_set
	|| lspid.is_set
	|| binding_sid.is_set
	|| lsp_setup_type.is_set
	|| operational_state.is_set
	|| administrative_state.is_set;
}

bool PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::BriefLspInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(lspid.yfilter)
	|| ydk::is_set(binding_sid.yfilter)
	|| ydk::is_set(lsp_setup_type.yfilter)
	|| ydk::is_set(operational_state.yfilter)
	|| ydk::is_set(administrative_state.yfilter);
}

std::string PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::BriefLspInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "brief-lsp-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::BriefLspInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (lspid.is_set || is_set(lspid.yfilter)) leaf_name_data.push_back(lspid.get_name_leafdata());
    if (binding_sid.is_set || is_set(binding_sid.yfilter)) leaf_name_data.push_back(binding_sid.get_name_leafdata());
    if (lsp_setup_type.is_set || is_set(lsp_setup_type.yfilter)) leaf_name_data.push_back(lsp_setup_type.get_name_leafdata());
    if (operational_state.is_set || is_set(operational_state.yfilter)) leaf_name_data.push_back(operational_state.get_name_leafdata());
    if (administrative_state.is_set || is_set(administrative_state.yfilter)) leaf_name_data.push_back(administrative_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::BriefLspInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::BriefLspInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::BriefLspInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lspid")
    {
        lspid = value;
        lspid.value_namespace = name_space;
        lspid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "binding-sid")
    {
        binding_sid = value;
        binding_sid.value_namespace = name_space;
        binding_sid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-setup-type")
    {
        lsp_setup_type = value;
        lsp_setup_type.value_namespace = name_space;
        lsp_setup_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operational-state")
    {
        operational_state = value;
        operational_state.value_namespace = name_space;
        operational_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "administrative-state")
    {
        administrative_state = value;
        administrative_state.value_namespace = name_space;
        administrative_state.value_namespace_prefix = name_space_prefix;
    }
}

void PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::BriefLspInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "lspid")
    {
        lspid.yfilter = yfilter;
    }
    if(value_path == "binding-sid")
    {
        binding_sid.yfilter = yfilter;
    }
    if(value_path == "lsp-setup-type")
    {
        lsp_setup_type.yfilter = yfilter;
    }
    if(value_path == "operational-state")
    {
        operational_state.yfilter = yfilter;
    }
    if(value_path == "administrative-state")
    {
        administrative_state.yfilter = yfilter;
    }
}

bool PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::BriefLspInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source-address" || name == "destination-address" || name == "tunnel-id" || name == "lspid" || name == "binding-sid" || name == "lsp-setup-type" || name == "operational-state" || name == "administrative-state")
        return true;
    return false;
}

PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ErOs()
    :
    reported_metric_type{YType::uint32, "reported-metric-type"},
    reported_metric_value{YType::uint32, "reported-metric-value"},
    computed_metric_type{YType::uint32, "computed-metric-type"},
    computed_metric_value{YType::uint32, "computed-metric-value"},
    computed_hop_list_time{YType::uint32, "computed-hop-list-time"}
{

    yang_name = "er-os"; yang_parent_name = "detail-lsp-information"; is_top_level_class = false; has_list_ancestor = true;
}

PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::~ErOs()
{
}

bool PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::has_data() const
{
    for (std::size_t index=0; index<reported_rsvp_path.size(); index++)
    {
        if(reported_rsvp_path[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<reported_sr_path.size(); index++)
    {
        if(reported_sr_path[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<computed_rsvp_path.size(); index++)
    {
        if(computed_rsvp_path[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<computed_sr_path.size(); index++)
    {
        if(computed_sr_path[index]->has_data())
            return true;
    }
    return reported_metric_type.is_set
	|| reported_metric_value.is_set
	|| computed_metric_type.is_set
	|| computed_metric_value.is_set
	|| computed_hop_list_time.is_set;
}

bool PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::has_operation() const
{
    for (std::size_t index=0; index<reported_rsvp_path.size(); index++)
    {
        if(reported_rsvp_path[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<reported_sr_path.size(); index++)
    {
        if(reported_sr_path[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<computed_rsvp_path.size(); index++)
    {
        if(computed_rsvp_path[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<computed_sr_path.size(); index++)
    {
        if(computed_sr_path[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(reported_metric_type.yfilter)
	|| ydk::is_set(reported_metric_value.yfilter)
	|| ydk::is_set(computed_metric_type.yfilter)
	|| ydk::is_set(computed_metric_value.yfilter)
	|| ydk::is_set(computed_hop_list_time.yfilter);
}

std::string PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "er-os";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reported_metric_type.is_set || is_set(reported_metric_type.yfilter)) leaf_name_data.push_back(reported_metric_type.get_name_leafdata());
    if (reported_metric_value.is_set || is_set(reported_metric_value.yfilter)) leaf_name_data.push_back(reported_metric_value.get_name_leafdata());
    if (computed_metric_type.is_set || is_set(computed_metric_type.yfilter)) leaf_name_data.push_back(computed_metric_type.get_name_leafdata());
    if (computed_metric_value.is_set || is_set(computed_metric_value.yfilter)) leaf_name_data.push_back(computed_metric_value.get_name_leafdata());
    if (computed_hop_list_time.is_set || is_set(computed_hop_list_time.yfilter)) leaf_name_data.push_back(computed_hop_list_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "reported-rsvp-path")
    {
        auto c = std::make_shared<PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ReportedRsvpPath>();
        c->parent = this;
        reported_rsvp_path.push_back(c);
        return c;
    }

    if(child_yang_name == "reported-sr-path")
    {
        auto c = std::make_shared<PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ReportedSrPath>();
        c->parent = this;
        reported_sr_path.push_back(c);
        return c;
    }

    if(child_yang_name == "computed-rsvp-path")
    {
        auto c = std::make_shared<PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ComputedRsvpPath>();
        c->parent = this;
        computed_rsvp_path.push_back(c);
        return c;
    }

    if(child_yang_name == "computed-sr-path")
    {
        auto c = std::make_shared<PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ComputedSrPath>();
        c->parent = this;
        computed_sr_path.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : reported_rsvp_path)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : reported_sr_path)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : computed_rsvp_path)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : computed_sr_path)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reported-metric-type")
    {
        reported_metric_type = value;
        reported_metric_type.value_namespace = name_space;
        reported_metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reported-metric-value")
    {
        reported_metric_value = value;
        reported_metric_value.value_namespace = name_space;
        reported_metric_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "computed-metric-type")
    {
        computed_metric_type = value;
        computed_metric_type.value_namespace = name_space;
        computed_metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "computed-metric-value")
    {
        computed_metric_value = value;
        computed_metric_value.value_namespace = name_space;
        computed_metric_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "computed-hop-list-time")
    {
        computed_hop_list_time = value;
        computed_hop_list_time.value_namespace = name_space;
        computed_hop_list_time.value_namespace_prefix = name_space_prefix;
    }
}

void PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reported-metric-type")
    {
        reported_metric_type.yfilter = yfilter;
    }
    if(value_path == "reported-metric-value")
    {
        reported_metric_value.yfilter = yfilter;
    }
    if(value_path == "computed-metric-type")
    {
        computed_metric_type.yfilter = yfilter;
    }
    if(value_path == "computed-metric-value")
    {
        computed_metric_value.yfilter = yfilter;
    }
    if(value_path == "computed-hop-list-time")
    {
        computed_hop_list_time.yfilter = yfilter;
    }
}

bool PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reported-rsvp-path" || name == "reported-sr-path" || name == "computed-rsvp-path" || name == "computed-sr-path" || name == "reported-metric-type" || name == "reported-metric-value" || name == "computed-metric-type" || name == "computed-metric-value" || name == "computed-hop-list-time")
        return true;
    return false;
}

PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ReportedRsvpPath::ReportedRsvpPath()
    :
    hop_address{YType::str, "hop-address"}
{

    yang_name = "reported-rsvp-path"; yang_parent_name = "er-os"; is_top_level_class = false; has_list_ancestor = true;
}

PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ReportedRsvpPath::~ReportedRsvpPath()
{
}

bool PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ReportedRsvpPath::has_data() const
{
    return hop_address.is_set;
}

bool PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ReportedRsvpPath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hop_address.yfilter);
}

std::string PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ReportedRsvpPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reported-rsvp-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ReportedRsvpPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hop_address.is_set || is_set(hop_address.yfilter)) leaf_name_data.push_back(hop_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ReportedRsvpPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ReportedRsvpPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ReportedRsvpPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hop-address")
    {
        hop_address = value;
        hop_address.value_namespace = name_space;
        hop_address.value_namespace_prefix = name_space_prefix;
    }
}

void PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ReportedRsvpPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hop-address")
    {
        hop_address.yfilter = yfilter;
    }
}

bool PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ReportedRsvpPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hop-address")
        return true;
    return false;
}

PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ReportedSrPath::ReportedSrPath()
    :
    sid_type{YType::enumeration, "sid-type"},
    mpls_label{YType::uint32, "mpls-label"},
    local_addr{YType::str, "local-addr"},
    remote_addr{YType::str, "remote-addr"}
{

    yang_name = "reported-sr-path"; yang_parent_name = "er-os"; is_top_level_class = false; has_list_ancestor = true;
}

PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ReportedSrPath::~ReportedSrPath()
{
}

bool PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ReportedSrPath::has_data() const
{
    return sid_type.is_set
	|| mpls_label.is_set
	|| local_addr.is_set
	|| remote_addr.is_set;
}

bool PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ReportedSrPath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sid_type.yfilter)
	|| ydk::is_set(mpls_label.yfilter)
	|| ydk::is_set(local_addr.yfilter)
	|| ydk::is_set(remote_addr.yfilter);
}

std::string PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ReportedSrPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reported-sr-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ReportedSrPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sid_type.is_set || is_set(sid_type.yfilter)) leaf_name_data.push_back(sid_type.get_name_leafdata());
    if (mpls_label.is_set || is_set(mpls_label.yfilter)) leaf_name_data.push_back(mpls_label.get_name_leafdata());
    if (local_addr.is_set || is_set(local_addr.yfilter)) leaf_name_data.push_back(local_addr.get_name_leafdata());
    if (remote_addr.is_set || is_set(remote_addr.yfilter)) leaf_name_data.push_back(remote_addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ReportedSrPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ReportedSrPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ReportedSrPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sid-type")
    {
        sid_type = value;
        sid_type.value_namespace = name_space;
        sid_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-label")
    {
        mpls_label = value;
        mpls_label.value_namespace = name_space;
        mpls_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-addr")
    {
        local_addr = value;
        local_addr.value_namespace = name_space;
        local_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-addr")
    {
        remote_addr = value;
        remote_addr.value_namespace = name_space;
        remote_addr.value_namespace_prefix = name_space_prefix;
    }
}

void PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ReportedSrPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sid-type")
    {
        sid_type.yfilter = yfilter;
    }
    if(value_path == "mpls-label")
    {
        mpls_label.yfilter = yfilter;
    }
    if(value_path == "local-addr")
    {
        local_addr.yfilter = yfilter;
    }
    if(value_path == "remote-addr")
    {
        remote_addr.yfilter = yfilter;
    }
}

bool PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ReportedSrPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sid-type" || name == "mpls-label" || name == "local-addr" || name == "remote-addr")
        return true;
    return false;
}

PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ComputedRsvpPath::ComputedRsvpPath()
    :
    hop_address{YType::str, "hop-address"}
{

    yang_name = "computed-rsvp-path"; yang_parent_name = "er-os"; is_top_level_class = false; has_list_ancestor = true;
}

PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ComputedRsvpPath::~ComputedRsvpPath()
{
}

bool PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ComputedRsvpPath::has_data() const
{
    return hop_address.is_set;
}

bool PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ComputedRsvpPath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hop_address.yfilter);
}

std::string PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ComputedRsvpPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "computed-rsvp-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ComputedRsvpPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hop_address.is_set || is_set(hop_address.yfilter)) leaf_name_data.push_back(hop_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ComputedRsvpPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ComputedRsvpPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ComputedRsvpPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hop-address")
    {
        hop_address = value;
        hop_address.value_namespace = name_space;
        hop_address.value_namespace_prefix = name_space_prefix;
    }
}

void PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ComputedRsvpPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hop-address")
    {
        hop_address.yfilter = yfilter;
    }
}

bool PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ComputedRsvpPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hop-address")
        return true;
    return false;
}

PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ComputedSrPath::ComputedSrPath()
    :
    sid_type{YType::enumeration, "sid-type"},
    mpls_label{YType::uint32, "mpls-label"},
    local_addr{YType::str, "local-addr"},
    remote_addr{YType::str, "remote-addr"}
{

    yang_name = "computed-sr-path"; yang_parent_name = "er-os"; is_top_level_class = false; has_list_ancestor = true;
}

PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ComputedSrPath::~ComputedSrPath()
{
}

bool PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ComputedSrPath::has_data() const
{
    return sid_type.is_set
	|| mpls_label.is_set
	|| local_addr.is_set
	|| remote_addr.is_set;
}

bool PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ComputedSrPath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sid_type.yfilter)
	|| ydk::is_set(mpls_label.yfilter)
	|| ydk::is_set(local_addr.yfilter)
	|| ydk::is_set(remote_addr.yfilter);
}

std::string PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ComputedSrPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "computed-sr-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ComputedSrPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sid_type.is_set || is_set(sid_type.yfilter)) leaf_name_data.push_back(sid_type.get_name_leafdata());
    if (mpls_label.is_set || is_set(mpls_label.yfilter)) leaf_name_data.push_back(mpls_label.get_name_leafdata());
    if (local_addr.is_set || is_set(local_addr.yfilter)) leaf_name_data.push_back(local_addr.get_name_leafdata());
    if (remote_addr.is_set || is_set(remote_addr.yfilter)) leaf_name_data.push_back(remote_addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ComputedSrPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ComputedSrPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ComputedSrPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sid-type")
    {
        sid_type = value;
        sid_type.value_namespace = name_space;
        sid_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-label")
    {
        mpls_label = value;
        mpls_label.value_namespace = name_space;
        mpls_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-addr")
    {
        local_addr = value;
        local_addr.value_namespace = name_space;
        local_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-addr")
    {
        remote_addr = value;
        remote_addr.value_namespace = name_space;
        remote_addr.value_namespace_prefix = name_space_prefix;
    }
}

void PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ComputedSrPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sid-type")
    {
        sid_type.yfilter = yfilter;
    }
    if(value_path == "mpls-label")
    {
        mpls_label.yfilter = yfilter;
    }
    if(value_path == "local-addr")
    {
        local_addr.yfilter = yfilter;
    }
    if(value_path == "remote-addr")
    {
        remote_addr.yfilter = yfilter;
    }
}

bool PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ComputedSrPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sid-type" || name == "mpls-label" || name == "local-addr" || name == "remote-addr")
        return true;
    return false;
}

PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LsppcepInformation::LsppcepInformation()
    :
    pcepid{YType::uint32, "pcepid"},
    pcep_flag_d{YType::boolean, "pcep-flag-d"},
    pcep_flag_s{YType::boolean, "pcep-flag-s"},
    pcep_flag_r{YType::boolean, "pcep-flag-r"},
    pcep_flag_a{YType::boolean, "pcep-flag-a"},
    pcep_flag_o{YType::uint8, "pcep-flag-o"},
    pcep_flag_c{YType::uint8, "pcep-flag-c"}
    	,
    rsvp_error(std::make_shared<PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LsppcepInformation::RsvpError>())
{
    rsvp_error->parent = this;

    yang_name = "lsppcep-information"; yang_parent_name = "detail-lsp-information"; is_top_level_class = false; has_list_ancestor = true;
}

PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LsppcepInformation::~LsppcepInformation()
{
}

bool PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LsppcepInformation::has_data() const
{
    return pcepid.is_set
	|| pcep_flag_d.is_set
	|| pcep_flag_s.is_set
	|| pcep_flag_r.is_set
	|| pcep_flag_a.is_set
	|| pcep_flag_o.is_set
	|| pcep_flag_c.is_set
	|| (rsvp_error !=  nullptr && rsvp_error->has_data());
}

bool PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LsppcepInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pcepid.yfilter)
	|| ydk::is_set(pcep_flag_d.yfilter)
	|| ydk::is_set(pcep_flag_s.yfilter)
	|| ydk::is_set(pcep_flag_r.yfilter)
	|| ydk::is_set(pcep_flag_a.yfilter)
	|| ydk::is_set(pcep_flag_o.yfilter)
	|| ydk::is_set(pcep_flag_c.yfilter)
	|| (rsvp_error !=  nullptr && rsvp_error->has_operation());
}

std::string PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LsppcepInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsppcep-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LsppcepInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pcepid.is_set || is_set(pcepid.yfilter)) leaf_name_data.push_back(pcepid.get_name_leafdata());
    if (pcep_flag_d.is_set || is_set(pcep_flag_d.yfilter)) leaf_name_data.push_back(pcep_flag_d.get_name_leafdata());
    if (pcep_flag_s.is_set || is_set(pcep_flag_s.yfilter)) leaf_name_data.push_back(pcep_flag_s.get_name_leafdata());
    if (pcep_flag_r.is_set || is_set(pcep_flag_r.yfilter)) leaf_name_data.push_back(pcep_flag_r.get_name_leafdata());
    if (pcep_flag_a.is_set || is_set(pcep_flag_a.yfilter)) leaf_name_data.push_back(pcep_flag_a.get_name_leafdata());
    if (pcep_flag_o.is_set || is_set(pcep_flag_o.yfilter)) leaf_name_data.push_back(pcep_flag_o.get_name_leafdata());
    if (pcep_flag_c.is_set || is_set(pcep_flag_c.yfilter)) leaf_name_data.push_back(pcep_flag_c.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LsppcepInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rsvp-error")
    {
        if(rsvp_error == nullptr)
        {
            rsvp_error = std::make_shared<PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LsppcepInformation::RsvpError>();
        }
        return rsvp_error;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LsppcepInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(rsvp_error != nullptr)
    {
        children["rsvp-error"] = rsvp_error;
    }

    return children;
}

void PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LsppcepInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pcepid")
    {
        pcepid = value;
        pcepid.value_namespace = name_space;
        pcepid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcep-flag-d")
    {
        pcep_flag_d = value;
        pcep_flag_d.value_namespace = name_space;
        pcep_flag_d.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcep-flag-s")
    {
        pcep_flag_s = value;
        pcep_flag_s.value_namespace = name_space;
        pcep_flag_s.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcep-flag-r")
    {
        pcep_flag_r = value;
        pcep_flag_r.value_namespace = name_space;
        pcep_flag_r.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcep-flag-a")
    {
        pcep_flag_a = value;
        pcep_flag_a.value_namespace = name_space;
        pcep_flag_a.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcep-flag-o")
    {
        pcep_flag_o = value;
        pcep_flag_o.value_namespace = name_space;
        pcep_flag_o.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcep-flag-c")
    {
        pcep_flag_c = value;
        pcep_flag_c.value_namespace = name_space;
        pcep_flag_c.value_namespace_prefix = name_space_prefix;
    }
}

void PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LsppcepInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pcepid")
    {
        pcepid.yfilter = yfilter;
    }
    if(value_path == "pcep-flag-d")
    {
        pcep_flag_d.yfilter = yfilter;
    }
    if(value_path == "pcep-flag-s")
    {
        pcep_flag_s.yfilter = yfilter;
    }
    if(value_path == "pcep-flag-r")
    {
        pcep_flag_r.yfilter = yfilter;
    }
    if(value_path == "pcep-flag-a")
    {
        pcep_flag_a.yfilter = yfilter;
    }
    if(value_path == "pcep-flag-o")
    {
        pcep_flag_o.yfilter = yfilter;
    }
    if(value_path == "pcep-flag-c")
    {
        pcep_flag_c.yfilter = yfilter;
    }
}

bool PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LsppcepInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rsvp-error" || name == "pcepid" || name == "pcep-flag-d" || name == "pcep-flag-s" || name == "pcep-flag-r" || name == "pcep-flag-a" || name == "pcep-flag-o" || name == "pcep-flag-c")
        return true;
    return false;
}

PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LsppcepInformation::RsvpError::RsvpError()
    :
    node_address{YType::str, "node-address"},
    error_flags{YType::uint8, "error-flags"},
    error_code{YType::uint8, "error-code"},
    error_value{YType::uint16, "error-value"}
{

    yang_name = "rsvp-error"; yang_parent_name = "lsppcep-information"; is_top_level_class = false; has_list_ancestor = true;
}

PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LsppcepInformation::RsvpError::~RsvpError()
{
}

bool PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LsppcepInformation::RsvpError::has_data() const
{
    return node_address.is_set
	|| error_flags.is_set
	|| error_code.is_set
	|| error_value.is_set;
}

bool PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LsppcepInformation::RsvpError::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_address.yfilter)
	|| ydk::is_set(error_flags.yfilter)
	|| ydk::is_set(error_code.yfilter)
	|| ydk::is_set(error_value.yfilter);
}

std::string PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LsppcepInformation::RsvpError::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsvp-error";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LsppcepInformation::RsvpError::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_address.is_set || is_set(node_address.yfilter)) leaf_name_data.push_back(node_address.get_name_leafdata());
    if (error_flags.is_set || is_set(error_flags.yfilter)) leaf_name_data.push_back(error_flags.get_name_leafdata());
    if (error_code.is_set || is_set(error_code.yfilter)) leaf_name_data.push_back(error_code.get_name_leafdata());
    if (error_value.is_set || is_set(error_value.yfilter)) leaf_name_data.push_back(error_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LsppcepInformation::RsvpError::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LsppcepInformation::RsvpError::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LsppcepInformation::RsvpError::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-address")
    {
        node_address = value;
        node_address.value_namespace = name_space;
        node_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error-flags")
    {
        error_flags = value;
        error_flags.value_namespace = name_space;
        error_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error-code")
    {
        error_code = value;
        error_code.value_namespace = name_space;
        error_code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error-value")
    {
        error_value = value;
        error_value.value_namespace = name_space;
        error_value.value_namespace_prefix = name_space_prefix;
    }
}

void PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LsppcepInformation::RsvpError::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-address")
    {
        node_address.yfilter = yfilter;
    }
    if(value_path == "error-flags")
    {
        error_flags.yfilter = yfilter;
    }
    if(value_path == "error-code")
    {
        error_code.yfilter = yfilter;
    }
    if(value_path == "error-value")
    {
        error_value.yfilter = yfilter;
    }
}

bool PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LsppcepInformation::RsvpError::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node-address" || name == "error-flags" || name == "error-code" || name == "error-value")
        return true;
    return false;
}

PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LspAssociationInfo::LspAssociationInfo()
    :
    association_type{YType::uint32, "association-type"},
    association_id{YType::uint32, "association-id"},
    association_source{YType::str, "association-source"}
{

    yang_name = "lsp-association-info"; yang_parent_name = "detail-lsp-information"; is_top_level_class = false; has_list_ancestor = true;
}

PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LspAssociationInfo::~LspAssociationInfo()
{
}

bool PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LspAssociationInfo::has_data() const
{
    return association_type.is_set
	|| association_id.is_set
	|| association_source.is_set;
}

bool PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LspAssociationInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(association_type.yfilter)
	|| ydk::is_set(association_id.yfilter)
	|| ydk::is_set(association_source.yfilter);
}

std::string PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LspAssociationInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-association-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LspAssociationInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (association_type.is_set || is_set(association_type.yfilter)) leaf_name_data.push_back(association_type.get_name_leafdata());
    if (association_id.is_set || is_set(association_id.yfilter)) leaf_name_data.push_back(association_id.get_name_leafdata());
    if (association_source.is_set || is_set(association_source.yfilter)) leaf_name_data.push_back(association_source.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LspAssociationInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LspAssociationInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LspAssociationInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "association-type")
    {
        association_type = value;
        association_type.value_namespace = name_space;
        association_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "association-id")
    {
        association_id = value;
        association_id.value_namespace = name_space;
        association_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "association-source")
    {
        association_source = value;
        association_source.value_namespace = name_space;
        association_source.value_namespace_prefix = name_space_prefix;
    }
}

void PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LspAssociationInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "association-type")
    {
        association_type.yfilter = yfilter;
    }
    if(value_path == "association-id")
    {
        association_id.yfilter = yfilter;
    }
    if(value_path == "association-source")
    {
        association_source.yfilter = yfilter;
    }
}

bool PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LspAssociationInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "association-type" || name == "association-id" || name == "association-source")
        return true;
    return false;
}

PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LspAttributes::LspAttributes()
    :
    affinity_exclude_any{YType::uint32, "affinity-exclude-any"},
    affinity_include_any{YType::uint32, "affinity-include-any"},
    affinity_include_all{YType::uint32, "affinity-include-all"},
    setup_priority{YType::uint8, "setup-priority"},
    hold_priority{YType::uint8, "hold-priority"},
    local_protection{YType::boolean, "local-protection"}
{

    yang_name = "lsp-attributes"; yang_parent_name = "detail-lsp-information"; is_top_level_class = false; has_list_ancestor = true;
}

PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LspAttributes::~LspAttributes()
{
}

bool PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LspAttributes::has_data() const
{
    return affinity_exclude_any.is_set
	|| affinity_include_any.is_set
	|| affinity_include_all.is_set
	|| setup_priority.is_set
	|| hold_priority.is_set
	|| local_protection.is_set;
}

bool PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LspAttributes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(affinity_exclude_any.yfilter)
	|| ydk::is_set(affinity_include_any.yfilter)
	|| ydk::is_set(affinity_include_all.yfilter)
	|| ydk::is_set(setup_priority.yfilter)
	|| ydk::is_set(hold_priority.yfilter)
	|| ydk::is_set(local_protection.yfilter);
}

std::string PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LspAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-attributes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LspAttributes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_exclude_any.is_set || is_set(affinity_exclude_any.yfilter)) leaf_name_data.push_back(affinity_exclude_any.get_name_leafdata());
    if (affinity_include_any.is_set || is_set(affinity_include_any.yfilter)) leaf_name_data.push_back(affinity_include_any.get_name_leafdata());
    if (affinity_include_all.is_set || is_set(affinity_include_all.yfilter)) leaf_name_data.push_back(affinity_include_all.get_name_leafdata());
    if (setup_priority.is_set || is_set(setup_priority.yfilter)) leaf_name_data.push_back(setup_priority.get_name_leafdata());
    if (hold_priority.is_set || is_set(hold_priority.yfilter)) leaf_name_data.push_back(hold_priority.get_name_leafdata());
    if (local_protection.is_set || is_set(local_protection.yfilter)) leaf_name_data.push_back(local_protection.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LspAttributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LspAttributes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LspAttributes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-exclude-any")
    {
        affinity_exclude_any = value;
        affinity_exclude_any.value_namespace = name_space;
        affinity_exclude_any.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity-include-any")
    {
        affinity_include_any = value;
        affinity_include_any.value_namespace = name_space;
        affinity_include_any.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity-include-all")
    {
        affinity_include_all = value;
        affinity_include_all.value_namespace = name_space;
        affinity_include_all.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-priority")
    {
        setup_priority = value;
        setup_priority.value_namespace = name_space;
        setup_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hold-priority")
    {
        hold_priority = value;
        hold_priority.value_namespace = name_space;
        hold_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-protection")
    {
        local_protection = value;
        local_protection.value_namespace = name_space;
        local_protection.value_namespace_prefix = name_space_prefix;
    }
}

void PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LspAttributes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-exclude-any")
    {
        affinity_exclude_any.yfilter = yfilter;
    }
    if(value_path == "affinity-include-any")
    {
        affinity_include_any.yfilter = yfilter;
    }
    if(value_path == "affinity-include-all")
    {
        affinity_include_all.yfilter = yfilter;
    }
    if(value_path == "setup-priority")
    {
        setup_priority.yfilter = yfilter;
    }
    if(value_path == "hold-priority")
    {
        hold_priority.yfilter = yfilter;
    }
    if(value_path == "local-protection")
    {
        local_protection.yfilter = yfilter;
    }
}

bool PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LspAttributes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity-exclude-any" || name == "affinity-include-any" || name == "affinity-include-all" || name == "setup-priority" || name == "hold-priority" || name == "local-protection")
        return true;
    return false;
}

PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::Rro::Rro()
    :
    rro_type{YType::enumeration, "rro-type"},
    ipv4_address{YType::str, "ipv4-address"},
    mpls_label{YType::uint32, "mpls-label"},
    flags{YType::uint8, "flags"}
    	,
    sr_rro(std::make_shared<PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::Rro::SrRro>())
{
    sr_rro->parent = this;

    yang_name = "rro"; yang_parent_name = "detail-lsp-information"; is_top_level_class = false; has_list_ancestor = true;
}

PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::Rro::~Rro()
{
}

bool PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::Rro::has_data() const
{
    return rro_type.is_set
	|| ipv4_address.is_set
	|| mpls_label.is_set
	|| flags.is_set
	|| (sr_rro !=  nullptr && sr_rro->has_data());
}

bool PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::Rro::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rro_type.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(mpls_label.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| (sr_rro !=  nullptr && sr_rro->has_operation());
}

std::string PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::Rro::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rro";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::Rro::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rro_type.is_set || is_set(rro_type.yfilter)) leaf_name_data.push_back(rro_type.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (mpls_label.is_set || is_set(mpls_label.yfilter)) leaf_name_data.push_back(mpls_label.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::Rro::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sr-rro")
    {
        if(sr_rro == nullptr)
        {
            sr_rro = std::make_shared<PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::Rro::SrRro>();
        }
        return sr_rro;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::Rro::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(sr_rro != nullptr)
    {
        children["sr-rro"] = sr_rro;
    }

    return children;
}

void PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::Rro::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rro-type")
    {
        rro_type = value;
        rro_type.value_namespace = name_space;
        rro_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-label")
    {
        mpls_label = value;
        mpls_label.value_namespace = name_space;
        mpls_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
}

void PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::Rro::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rro-type")
    {
        rro_type.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "mpls-label")
    {
        mpls_label.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
}

bool PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::Rro::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sr-rro" || name == "rro-type" || name == "ipv4-address" || name == "mpls-label" || name == "flags")
        return true;
    return false;
}

PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::Rro::SrRro::SrRro()
    :
    sid_type{YType::enumeration, "sid-type"},
    mpls_label{YType::uint32, "mpls-label"},
    local_addr{YType::str, "local-addr"},
    remote_addr{YType::str, "remote-addr"}
{

    yang_name = "sr-rro"; yang_parent_name = "rro"; is_top_level_class = false; has_list_ancestor = true;
}

PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::Rro::SrRro::~SrRro()
{
}

bool PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::Rro::SrRro::has_data() const
{
    return sid_type.is_set
	|| mpls_label.is_set
	|| local_addr.is_set
	|| remote_addr.is_set;
}

bool PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::Rro::SrRro::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sid_type.yfilter)
	|| ydk::is_set(mpls_label.yfilter)
	|| ydk::is_set(local_addr.yfilter)
	|| ydk::is_set(remote_addr.yfilter);
}

std::string PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::Rro::SrRro::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-rro";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::Rro::SrRro::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sid_type.is_set || is_set(sid_type.yfilter)) leaf_name_data.push_back(sid_type.get_name_leafdata());
    if (mpls_label.is_set || is_set(mpls_label.yfilter)) leaf_name_data.push_back(mpls_label.get_name_leafdata());
    if (local_addr.is_set || is_set(local_addr.yfilter)) leaf_name_data.push_back(local_addr.get_name_leafdata());
    if (remote_addr.is_set || is_set(remote_addr.yfilter)) leaf_name_data.push_back(remote_addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::Rro::SrRro::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::Rro::SrRro::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::Rro::SrRro::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sid-type")
    {
        sid_type = value;
        sid_type.value_namespace = name_space;
        sid_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-label")
    {
        mpls_label = value;
        mpls_label.value_namespace = name_space;
        mpls_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-addr")
    {
        local_addr = value;
        local_addr.value_namespace = name_space;
        local_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-addr")
    {
        remote_addr = value;
        remote_addr.value_namespace = name_space;
        remote_addr.value_namespace_prefix = name_space_prefix;
    }
}

void PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::Rro::SrRro::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sid-type")
    {
        sid_type.yfilter = yfilter;
    }
    if(value_path == "mpls-label")
    {
        mpls_label.yfilter = yfilter;
    }
    if(value_path == "local-addr")
    {
        local_addr.yfilter = yfilter;
    }
    if(value_path == "remote-addr")
    {
        remote_addr.yfilter = yfilter;
    }
}

bool PceLspData::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::Rro::SrRro::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sid-type" || name == "mpls-label" || name == "local-addr" || name == "remote-addr")
        return true;
    return false;
}

PcePeer::PcePeer()
    :
    peer_detail_infos(std::make_shared<PcePeer::PeerDetailInfos>())
	,peer_infos(std::make_shared<PcePeer::PeerInfos>())
{
    peer_detail_infos->parent = this;
    peer_infos->parent = this;

    yang_name = "pce-peer"; yang_parent_name = "Cisco-IOS-XR-infra-xtc-oper"; is_top_level_class = true; has_list_ancestor = false;
}

PcePeer::~PcePeer()
{
}

bool PcePeer::has_data() const
{
    return (peer_detail_infos !=  nullptr && peer_detail_infos->has_data())
	|| (peer_infos !=  nullptr && peer_infos->has_data());
}

bool PcePeer::has_operation() const
{
    return is_set(yfilter)
	|| (peer_detail_infos !=  nullptr && peer_detail_infos->has_operation())
	|| (peer_infos !=  nullptr && peer_infos->has_operation());
}

std::string PcePeer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-xtc-oper:pce-peer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PcePeer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PcePeer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer-detail-infos")
    {
        if(peer_detail_infos == nullptr)
        {
            peer_detail_infos = std::make_shared<PcePeer::PeerDetailInfos>();
        }
        return peer_detail_infos;
    }

    if(child_yang_name == "peer-infos")
    {
        if(peer_infos == nullptr)
        {
            peer_infos = std::make_shared<PcePeer::PeerInfos>();
        }
        return peer_infos;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PcePeer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(peer_detail_infos != nullptr)
    {
        children["peer-detail-infos"] = peer_detail_infos;
    }

    if(peer_infos != nullptr)
    {
        children["peer-infos"] = peer_infos;
    }

    return children;
}

void PcePeer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PcePeer::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> PcePeer::clone_ptr() const
{
    return std::make_shared<PcePeer>();
}

std::string PcePeer::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string PcePeer::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function PcePeer::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> PcePeer::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool PcePeer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-detail-infos" || name == "peer-infos")
        return true;
    return false;
}

PcePeer::PeerDetailInfos::PeerDetailInfos()
{

    yang_name = "peer-detail-infos"; yang_parent_name = "pce-peer"; is_top_level_class = false; has_list_ancestor = false;
}

PcePeer::PeerDetailInfos::~PeerDetailInfos()
{
}

bool PcePeer::PeerDetailInfos::has_data() const
{
    for (std::size_t index=0; index<peer_detail_info.size(); index++)
    {
        if(peer_detail_info[index]->has_data())
            return true;
    }
    return false;
}

bool PcePeer::PeerDetailInfos::has_operation() const
{
    for (std::size_t index=0; index<peer_detail_info.size(); index++)
    {
        if(peer_detail_info[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PcePeer::PeerDetailInfos::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-xtc-oper:pce-peer/" << get_segment_path();
    return path_buffer.str();
}

std::string PcePeer::PeerDetailInfos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-detail-infos";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PcePeer::PeerDetailInfos::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PcePeer::PeerDetailInfos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer-detail-info")
    {
        auto c = std::make_shared<PcePeer::PeerDetailInfos::PeerDetailInfo>();
        c->parent = this;
        peer_detail_info.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PcePeer::PeerDetailInfos::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : peer_detail_info)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PcePeer::PeerDetailInfos::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PcePeer::PeerDetailInfos::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PcePeer::PeerDetailInfos::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-detail-info")
        return true;
    return false;
}

PcePeer::PeerDetailInfos::PeerDetailInfo::PeerDetailInfo()
    :
    peer_address{YType::str, "peer-address"},
    peer_address_xr{YType::str, "peer-address-xr"},
    peer_protocol{YType::enumeration, "peer-protocol"}
    	,
    detail_pcep_information(std::make_shared<PcePeer::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation>())
{
    detail_pcep_information->parent = this;

    yang_name = "peer-detail-info"; yang_parent_name = "peer-detail-infos"; is_top_level_class = false; has_list_ancestor = false;
}

PcePeer::PeerDetailInfos::PeerDetailInfo::~PeerDetailInfo()
{
}

bool PcePeer::PeerDetailInfos::PeerDetailInfo::has_data() const
{
    return peer_address.is_set
	|| peer_address_xr.is_set
	|| peer_protocol.is_set
	|| (detail_pcep_information !=  nullptr && detail_pcep_information->has_data());
}

bool PcePeer::PeerDetailInfos::PeerDetailInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(peer_address.yfilter)
	|| ydk::is_set(peer_address_xr.yfilter)
	|| ydk::is_set(peer_protocol.yfilter)
	|| (detail_pcep_information !=  nullptr && detail_pcep_information->has_operation());
}

std::string PcePeer::PeerDetailInfos::PeerDetailInfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-xtc-oper:pce-peer/peer-detail-infos/" << get_segment_path();
    return path_buffer.str();
}

std::string PcePeer::PeerDetailInfos::PeerDetailInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-detail-info" <<"[peer-address='" <<peer_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PcePeer::PeerDetailInfos::PeerDetailInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer_address.is_set || is_set(peer_address.yfilter)) leaf_name_data.push_back(peer_address.get_name_leafdata());
    if (peer_address_xr.is_set || is_set(peer_address_xr.yfilter)) leaf_name_data.push_back(peer_address_xr.get_name_leafdata());
    if (peer_protocol.is_set || is_set(peer_protocol.yfilter)) leaf_name_data.push_back(peer_protocol.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PcePeer::PeerDetailInfos::PeerDetailInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "detail-pcep-information")
    {
        if(detail_pcep_information == nullptr)
        {
            detail_pcep_information = std::make_shared<PcePeer::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation>();
        }
        return detail_pcep_information;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PcePeer::PeerDetailInfos::PeerDetailInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(detail_pcep_information != nullptr)
    {
        children["detail-pcep-information"] = detail_pcep_information;
    }

    return children;
}

void PcePeer::PeerDetailInfos::PeerDetailInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "peer-address")
    {
        peer_address = value;
        peer_address.value_namespace = name_space;
        peer_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-address-xr")
    {
        peer_address_xr = value;
        peer_address_xr.value_namespace = name_space;
        peer_address_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-protocol")
    {
        peer_protocol = value;
        peer_protocol.value_namespace = name_space;
        peer_protocol.value_namespace_prefix = name_space_prefix;
    }
}

void PcePeer::PeerDetailInfos::PeerDetailInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "peer-address")
    {
        peer_address.yfilter = yfilter;
    }
    if(value_path == "peer-address-xr")
    {
        peer_address_xr.yfilter = yfilter;
    }
    if(value_path == "peer-protocol")
    {
        peer_protocol.yfilter = yfilter;
    }
}

bool PcePeer::PeerDetailInfos::PeerDetailInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "detail-pcep-information" || name == "peer-address" || name == "peer-address-xr" || name == "peer-protocol")
        return true;
    return false;
}

PcePeer::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::DetailPcepInformation()
    :
    error{YType::str, "error"},
    speaker_id{YType::str, "speaker-id"},
    pcep_up_time{YType::uint32, "pcep-up-time"},
    keepalives{YType::uint32, "keepalives"},
    md5_enabled{YType::boolean, "md5-enabled"},
    keychain_enabled{YType::boolean, "keychain-enabled"},
    negotiated_local_keepalive{YType::uint32, "negotiated-local-keepalive"},
    negotiated_remote_keepalive{YType::uint32, "negotiated-remote-keepalive"},
    negotiated_dead_time{YType::uint32, "negotiated-dead-time"},
    pce_request_rx{YType::uint32, "pce-request-rx"},
    pce_request_tx{YType::uint32, "pce-request-tx"},
    pce_reply_rx{YType::uint32, "pce-reply-rx"},
    pce_reply_tx{YType::uint32, "pce-reply-tx"},
    pce_error_rx{YType::uint32, "pce-error-rx"},
    pce_error_tx{YType::uint32, "pce-error-tx"},
    pce_open_tx{YType::uint32, "pce-open-tx"},
    pce_open_rx{YType::uint32, "pce-open-rx"},
    pce_report_rx{YType::uint32, "pce-report-rx"},
    pce_report_tx{YType::uint32, "pce-report-tx"},
    pce_update_rx{YType::uint32, "pce-update-rx"},
    pce_update_tx{YType::uint32, "pce-update-tx"},
    pce_initiate_rx{YType::uint32, "pce-initiate-rx"},
    pce_initiate_tx{YType::uint32, "pce-initiate-tx"},
    pce_keepalive_tx{YType::uint64, "pce-keepalive-tx"},
    pce_keepalive_rx{YType::uint64, "pce-keepalive-rx"},
    local_session_id{YType::uint8, "local-session-id"},
    remote_session_id{YType::uint8, "remote-session-id"},
    minimum_keepalive_interval{YType::uint8, "minimum-keepalive-interval"},
    maximum_dead_interval{YType::uint8, "maximum-dead-interval"}
    	,
    brief_pcep_information(std::make_shared<PcePeer::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::BriefPcepInformation>())
	,last_error_rx(std::make_shared<PcePeer::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::LastErrorRx>())
	,last_error_tx(std::make_shared<PcePeer::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::LastErrorTx>())
{
    brief_pcep_information->parent = this;
    last_error_rx->parent = this;
    last_error_tx->parent = this;

    yang_name = "detail-pcep-information"; yang_parent_name = "peer-detail-info"; is_top_level_class = false; has_list_ancestor = true;
}

PcePeer::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::~DetailPcepInformation()
{
}

bool PcePeer::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::has_data() const
{
    return error.is_set
	|| speaker_id.is_set
	|| pcep_up_time.is_set
	|| keepalives.is_set
	|| md5_enabled.is_set
	|| keychain_enabled.is_set
	|| negotiated_local_keepalive.is_set
	|| negotiated_remote_keepalive.is_set
	|| negotiated_dead_time.is_set
	|| pce_request_rx.is_set
	|| pce_request_tx.is_set
	|| pce_reply_rx.is_set
	|| pce_reply_tx.is_set
	|| pce_error_rx.is_set
	|| pce_error_tx.is_set
	|| pce_open_tx.is_set
	|| pce_open_rx.is_set
	|| pce_report_rx.is_set
	|| pce_report_tx.is_set
	|| pce_update_rx.is_set
	|| pce_update_tx.is_set
	|| pce_initiate_rx.is_set
	|| pce_initiate_tx.is_set
	|| pce_keepalive_tx.is_set
	|| pce_keepalive_rx.is_set
	|| local_session_id.is_set
	|| remote_session_id.is_set
	|| minimum_keepalive_interval.is_set
	|| maximum_dead_interval.is_set
	|| (brief_pcep_information !=  nullptr && brief_pcep_information->has_data())
	|| (last_error_rx !=  nullptr && last_error_rx->has_data())
	|| (last_error_tx !=  nullptr && last_error_tx->has_data());
}

bool PcePeer::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(error.yfilter)
	|| ydk::is_set(speaker_id.yfilter)
	|| ydk::is_set(pcep_up_time.yfilter)
	|| ydk::is_set(keepalives.yfilter)
	|| ydk::is_set(md5_enabled.yfilter)
	|| ydk::is_set(keychain_enabled.yfilter)
	|| ydk::is_set(negotiated_local_keepalive.yfilter)
	|| ydk::is_set(negotiated_remote_keepalive.yfilter)
	|| ydk::is_set(negotiated_dead_time.yfilter)
	|| ydk::is_set(pce_request_rx.yfilter)
	|| ydk::is_set(pce_request_tx.yfilter)
	|| ydk::is_set(pce_reply_rx.yfilter)
	|| ydk::is_set(pce_reply_tx.yfilter)
	|| ydk::is_set(pce_error_rx.yfilter)
	|| ydk::is_set(pce_error_tx.yfilter)
	|| ydk::is_set(pce_open_tx.yfilter)
	|| ydk::is_set(pce_open_rx.yfilter)
	|| ydk::is_set(pce_report_rx.yfilter)
	|| ydk::is_set(pce_report_tx.yfilter)
	|| ydk::is_set(pce_update_rx.yfilter)
	|| ydk::is_set(pce_update_tx.yfilter)
	|| ydk::is_set(pce_initiate_rx.yfilter)
	|| ydk::is_set(pce_initiate_tx.yfilter)
	|| ydk::is_set(pce_keepalive_tx.yfilter)
	|| ydk::is_set(pce_keepalive_rx.yfilter)
	|| ydk::is_set(local_session_id.yfilter)
	|| ydk::is_set(remote_session_id.yfilter)
	|| ydk::is_set(minimum_keepalive_interval.yfilter)
	|| ydk::is_set(maximum_dead_interval.yfilter)
	|| (brief_pcep_information !=  nullptr && brief_pcep_information->has_operation())
	|| (last_error_rx !=  nullptr && last_error_rx->has_operation())
	|| (last_error_tx !=  nullptr && last_error_tx->has_operation());
}

std::string PcePeer::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detail-pcep-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PcePeer::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());
    if (speaker_id.is_set || is_set(speaker_id.yfilter)) leaf_name_data.push_back(speaker_id.get_name_leafdata());
    if (pcep_up_time.is_set || is_set(pcep_up_time.yfilter)) leaf_name_data.push_back(pcep_up_time.get_name_leafdata());
    if (keepalives.is_set || is_set(keepalives.yfilter)) leaf_name_data.push_back(keepalives.get_name_leafdata());
    if (md5_enabled.is_set || is_set(md5_enabled.yfilter)) leaf_name_data.push_back(md5_enabled.get_name_leafdata());
    if (keychain_enabled.is_set || is_set(keychain_enabled.yfilter)) leaf_name_data.push_back(keychain_enabled.get_name_leafdata());
    if (negotiated_local_keepalive.is_set || is_set(negotiated_local_keepalive.yfilter)) leaf_name_data.push_back(negotiated_local_keepalive.get_name_leafdata());
    if (negotiated_remote_keepalive.is_set || is_set(negotiated_remote_keepalive.yfilter)) leaf_name_data.push_back(negotiated_remote_keepalive.get_name_leafdata());
    if (negotiated_dead_time.is_set || is_set(negotiated_dead_time.yfilter)) leaf_name_data.push_back(negotiated_dead_time.get_name_leafdata());
    if (pce_request_rx.is_set || is_set(pce_request_rx.yfilter)) leaf_name_data.push_back(pce_request_rx.get_name_leafdata());
    if (pce_request_tx.is_set || is_set(pce_request_tx.yfilter)) leaf_name_data.push_back(pce_request_tx.get_name_leafdata());
    if (pce_reply_rx.is_set || is_set(pce_reply_rx.yfilter)) leaf_name_data.push_back(pce_reply_rx.get_name_leafdata());
    if (pce_reply_tx.is_set || is_set(pce_reply_tx.yfilter)) leaf_name_data.push_back(pce_reply_tx.get_name_leafdata());
    if (pce_error_rx.is_set || is_set(pce_error_rx.yfilter)) leaf_name_data.push_back(pce_error_rx.get_name_leafdata());
    if (pce_error_tx.is_set || is_set(pce_error_tx.yfilter)) leaf_name_data.push_back(pce_error_tx.get_name_leafdata());
    if (pce_open_tx.is_set || is_set(pce_open_tx.yfilter)) leaf_name_data.push_back(pce_open_tx.get_name_leafdata());
    if (pce_open_rx.is_set || is_set(pce_open_rx.yfilter)) leaf_name_data.push_back(pce_open_rx.get_name_leafdata());
    if (pce_report_rx.is_set || is_set(pce_report_rx.yfilter)) leaf_name_data.push_back(pce_report_rx.get_name_leafdata());
    if (pce_report_tx.is_set || is_set(pce_report_tx.yfilter)) leaf_name_data.push_back(pce_report_tx.get_name_leafdata());
    if (pce_update_rx.is_set || is_set(pce_update_rx.yfilter)) leaf_name_data.push_back(pce_update_rx.get_name_leafdata());
    if (pce_update_tx.is_set || is_set(pce_update_tx.yfilter)) leaf_name_data.push_back(pce_update_tx.get_name_leafdata());
    if (pce_initiate_rx.is_set || is_set(pce_initiate_rx.yfilter)) leaf_name_data.push_back(pce_initiate_rx.get_name_leafdata());
    if (pce_initiate_tx.is_set || is_set(pce_initiate_tx.yfilter)) leaf_name_data.push_back(pce_initiate_tx.get_name_leafdata());
    if (pce_keepalive_tx.is_set || is_set(pce_keepalive_tx.yfilter)) leaf_name_data.push_back(pce_keepalive_tx.get_name_leafdata());
    if (pce_keepalive_rx.is_set || is_set(pce_keepalive_rx.yfilter)) leaf_name_data.push_back(pce_keepalive_rx.get_name_leafdata());
    if (local_session_id.is_set || is_set(local_session_id.yfilter)) leaf_name_data.push_back(local_session_id.get_name_leafdata());
    if (remote_session_id.is_set || is_set(remote_session_id.yfilter)) leaf_name_data.push_back(remote_session_id.get_name_leafdata());
    if (minimum_keepalive_interval.is_set || is_set(minimum_keepalive_interval.yfilter)) leaf_name_data.push_back(minimum_keepalive_interval.get_name_leafdata());
    if (maximum_dead_interval.is_set || is_set(maximum_dead_interval.yfilter)) leaf_name_data.push_back(maximum_dead_interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PcePeer::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "brief-pcep-information")
    {
        if(brief_pcep_information == nullptr)
        {
            brief_pcep_information = std::make_shared<PcePeer::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::BriefPcepInformation>();
        }
        return brief_pcep_information;
    }

    if(child_yang_name == "last-error-rx")
    {
        if(last_error_rx == nullptr)
        {
            last_error_rx = std::make_shared<PcePeer::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::LastErrorRx>();
        }
        return last_error_rx;
    }

    if(child_yang_name == "last-error-tx")
    {
        if(last_error_tx == nullptr)
        {
            last_error_tx = std::make_shared<PcePeer::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::LastErrorTx>();
        }
        return last_error_tx;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PcePeer::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(brief_pcep_information != nullptr)
    {
        children["brief-pcep-information"] = brief_pcep_information;
    }

    if(last_error_rx != nullptr)
    {
        children["last-error-rx"] = last_error_rx;
    }

    if(last_error_tx != nullptr)
    {
        children["last-error-tx"] = last_error_tx;
    }

    return children;
}

void PcePeer::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "error")
    {
        error = value;
        error.value_namespace = name_space;
        error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "speaker-id")
    {
        speaker_id = value;
        speaker_id.value_namespace = name_space;
        speaker_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcep-up-time")
    {
        pcep_up_time = value;
        pcep_up_time.value_namespace = name_space;
        pcep_up_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keepalives")
    {
        keepalives = value;
        keepalives.value_namespace = name_space;
        keepalives.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "md5-enabled")
    {
        md5_enabled = value;
        md5_enabled.value_namespace = name_space;
        md5_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keychain-enabled")
    {
        keychain_enabled = value;
        keychain_enabled.value_namespace = name_space;
        keychain_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "negotiated-local-keepalive")
    {
        negotiated_local_keepalive = value;
        negotiated_local_keepalive.value_namespace = name_space;
        negotiated_local_keepalive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "negotiated-remote-keepalive")
    {
        negotiated_remote_keepalive = value;
        negotiated_remote_keepalive.value_namespace = name_space;
        negotiated_remote_keepalive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "negotiated-dead-time")
    {
        negotiated_dead_time = value;
        negotiated_dead_time.value_namespace = name_space;
        negotiated_dead_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-request-rx")
    {
        pce_request_rx = value;
        pce_request_rx.value_namespace = name_space;
        pce_request_rx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-request-tx")
    {
        pce_request_tx = value;
        pce_request_tx.value_namespace = name_space;
        pce_request_tx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-reply-rx")
    {
        pce_reply_rx = value;
        pce_reply_rx.value_namespace = name_space;
        pce_reply_rx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-reply-tx")
    {
        pce_reply_tx = value;
        pce_reply_tx.value_namespace = name_space;
        pce_reply_tx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-error-rx")
    {
        pce_error_rx = value;
        pce_error_rx.value_namespace = name_space;
        pce_error_rx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-error-tx")
    {
        pce_error_tx = value;
        pce_error_tx.value_namespace = name_space;
        pce_error_tx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-open-tx")
    {
        pce_open_tx = value;
        pce_open_tx.value_namespace = name_space;
        pce_open_tx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-open-rx")
    {
        pce_open_rx = value;
        pce_open_rx.value_namespace = name_space;
        pce_open_rx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-report-rx")
    {
        pce_report_rx = value;
        pce_report_rx.value_namespace = name_space;
        pce_report_rx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-report-tx")
    {
        pce_report_tx = value;
        pce_report_tx.value_namespace = name_space;
        pce_report_tx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-update-rx")
    {
        pce_update_rx = value;
        pce_update_rx.value_namespace = name_space;
        pce_update_rx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-update-tx")
    {
        pce_update_tx = value;
        pce_update_tx.value_namespace = name_space;
        pce_update_tx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-initiate-rx")
    {
        pce_initiate_rx = value;
        pce_initiate_rx.value_namespace = name_space;
        pce_initiate_rx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-initiate-tx")
    {
        pce_initiate_tx = value;
        pce_initiate_tx.value_namespace = name_space;
        pce_initiate_tx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-keepalive-tx")
    {
        pce_keepalive_tx = value;
        pce_keepalive_tx.value_namespace = name_space;
        pce_keepalive_tx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-keepalive-rx")
    {
        pce_keepalive_rx = value;
        pce_keepalive_rx.value_namespace = name_space;
        pce_keepalive_rx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-session-id")
    {
        local_session_id = value;
        local_session_id.value_namespace = name_space;
        local_session_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-session-id")
    {
        remote_session_id = value;
        remote_session_id.value_namespace = name_space;
        remote_session_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-keepalive-interval")
    {
        minimum_keepalive_interval = value;
        minimum_keepalive_interval.value_namespace = name_space;
        minimum_keepalive_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-dead-interval")
    {
        maximum_dead_interval = value;
        maximum_dead_interval.value_namespace = name_space;
        maximum_dead_interval.value_namespace_prefix = name_space_prefix;
    }
}

void PcePeer::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "error")
    {
        error.yfilter = yfilter;
    }
    if(value_path == "speaker-id")
    {
        speaker_id.yfilter = yfilter;
    }
    if(value_path == "pcep-up-time")
    {
        pcep_up_time.yfilter = yfilter;
    }
    if(value_path == "keepalives")
    {
        keepalives.yfilter = yfilter;
    }
    if(value_path == "md5-enabled")
    {
        md5_enabled.yfilter = yfilter;
    }
    if(value_path == "keychain-enabled")
    {
        keychain_enabled.yfilter = yfilter;
    }
    if(value_path == "negotiated-local-keepalive")
    {
        negotiated_local_keepalive.yfilter = yfilter;
    }
    if(value_path == "negotiated-remote-keepalive")
    {
        negotiated_remote_keepalive.yfilter = yfilter;
    }
    if(value_path == "negotiated-dead-time")
    {
        negotiated_dead_time.yfilter = yfilter;
    }
    if(value_path == "pce-request-rx")
    {
        pce_request_rx.yfilter = yfilter;
    }
    if(value_path == "pce-request-tx")
    {
        pce_request_tx.yfilter = yfilter;
    }
    if(value_path == "pce-reply-rx")
    {
        pce_reply_rx.yfilter = yfilter;
    }
    if(value_path == "pce-reply-tx")
    {
        pce_reply_tx.yfilter = yfilter;
    }
    if(value_path == "pce-error-rx")
    {
        pce_error_rx.yfilter = yfilter;
    }
    if(value_path == "pce-error-tx")
    {
        pce_error_tx.yfilter = yfilter;
    }
    if(value_path == "pce-open-tx")
    {
        pce_open_tx.yfilter = yfilter;
    }
    if(value_path == "pce-open-rx")
    {
        pce_open_rx.yfilter = yfilter;
    }
    if(value_path == "pce-report-rx")
    {
        pce_report_rx.yfilter = yfilter;
    }
    if(value_path == "pce-report-tx")
    {
        pce_report_tx.yfilter = yfilter;
    }
    if(value_path == "pce-update-rx")
    {
        pce_update_rx.yfilter = yfilter;
    }
    if(value_path == "pce-update-tx")
    {
        pce_update_tx.yfilter = yfilter;
    }
    if(value_path == "pce-initiate-rx")
    {
        pce_initiate_rx.yfilter = yfilter;
    }
    if(value_path == "pce-initiate-tx")
    {
        pce_initiate_tx.yfilter = yfilter;
    }
    if(value_path == "pce-keepalive-tx")
    {
        pce_keepalive_tx.yfilter = yfilter;
    }
    if(value_path == "pce-keepalive-rx")
    {
        pce_keepalive_rx.yfilter = yfilter;
    }
    if(value_path == "local-session-id")
    {
        local_session_id.yfilter = yfilter;
    }
    if(value_path == "remote-session-id")
    {
        remote_session_id.yfilter = yfilter;
    }
    if(value_path == "minimum-keepalive-interval")
    {
        minimum_keepalive_interval.yfilter = yfilter;
    }
    if(value_path == "maximum-dead-interval")
    {
        maximum_dead_interval.yfilter = yfilter;
    }
}

bool PcePeer::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "brief-pcep-information" || name == "last-error-rx" || name == "last-error-tx" || name == "error" || name == "speaker-id" || name == "pcep-up-time" || name == "keepalives" || name == "md5-enabled" || name == "keychain-enabled" || name == "negotiated-local-keepalive" || name == "negotiated-remote-keepalive" || name == "negotiated-dead-time" || name == "pce-request-rx" || name == "pce-request-tx" || name == "pce-reply-rx" || name == "pce-reply-tx" || name == "pce-error-rx" || name == "pce-error-tx" || name == "pce-open-tx" || name == "pce-open-rx" || name == "pce-report-rx" || name == "pce-report-tx" || name == "pce-update-rx" || name == "pce-update-tx" || name == "pce-initiate-rx" || name == "pce-initiate-tx" || name == "pce-keepalive-tx" || name == "pce-keepalive-rx" || name == "local-session-id" || name == "remote-session-id" || name == "minimum-keepalive-interval" || name == "maximum-dead-interval")
        return true;
    return false;
}

PcePeer::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::BriefPcepInformation::BriefPcepInformation()
    :
    pcep_state{YType::enumeration, "pcep-state"},
    stateful{YType::boolean, "stateful"},
    capability_update{YType::boolean, "capability-update"},
    capability_instantiate{YType::boolean, "capability-instantiate"},
    capability_segment_routing{YType::boolean, "capability-segment-routing"},
    capability_triggered_sync{YType::boolean, "capability-triggered-sync"},
    capability_db_version{YType::boolean, "capability-db-version"},
    capability_delta_sync{YType::boolean, "capability-delta-sync"}
{

    yang_name = "brief-pcep-information"; yang_parent_name = "detail-pcep-information"; is_top_level_class = false; has_list_ancestor = true;
}

PcePeer::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::BriefPcepInformation::~BriefPcepInformation()
{
}

bool PcePeer::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::BriefPcepInformation::has_data() const
{
    return pcep_state.is_set
	|| stateful.is_set
	|| capability_update.is_set
	|| capability_instantiate.is_set
	|| capability_segment_routing.is_set
	|| capability_triggered_sync.is_set
	|| capability_db_version.is_set
	|| capability_delta_sync.is_set;
}

bool PcePeer::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::BriefPcepInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pcep_state.yfilter)
	|| ydk::is_set(stateful.yfilter)
	|| ydk::is_set(capability_update.yfilter)
	|| ydk::is_set(capability_instantiate.yfilter)
	|| ydk::is_set(capability_segment_routing.yfilter)
	|| ydk::is_set(capability_triggered_sync.yfilter)
	|| ydk::is_set(capability_db_version.yfilter)
	|| ydk::is_set(capability_delta_sync.yfilter);
}

std::string PcePeer::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::BriefPcepInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "brief-pcep-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PcePeer::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::BriefPcepInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pcep_state.is_set || is_set(pcep_state.yfilter)) leaf_name_data.push_back(pcep_state.get_name_leafdata());
    if (stateful.is_set || is_set(stateful.yfilter)) leaf_name_data.push_back(stateful.get_name_leafdata());
    if (capability_update.is_set || is_set(capability_update.yfilter)) leaf_name_data.push_back(capability_update.get_name_leafdata());
    if (capability_instantiate.is_set || is_set(capability_instantiate.yfilter)) leaf_name_data.push_back(capability_instantiate.get_name_leafdata());
    if (capability_segment_routing.is_set || is_set(capability_segment_routing.yfilter)) leaf_name_data.push_back(capability_segment_routing.get_name_leafdata());
    if (capability_triggered_sync.is_set || is_set(capability_triggered_sync.yfilter)) leaf_name_data.push_back(capability_triggered_sync.get_name_leafdata());
    if (capability_db_version.is_set || is_set(capability_db_version.yfilter)) leaf_name_data.push_back(capability_db_version.get_name_leafdata());
    if (capability_delta_sync.is_set || is_set(capability_delta_sync.yfilter)) leaf_name_data.push_back(capability_delta_sync.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PcePeer::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::BriefPcepInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PcePeer::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::BriefPcepInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PcePeer::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::BriefPcepInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pcep-state")
    {
        pcep_state = value;
        pcep_state.value_namespace = name_space;
        pcep_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stateful")
    {
        stateful = value;
        stateful.value_namespace = name_space;
        stateful.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "capability-update")
    {
        capability_update = value;
        capability_update.value_namespace = name_space;
        capability_update.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "capability-instantiate")
    {
        capability_instantiate = value;
        capability_instantiate.value_namespace = name_space;
        capability_instantiate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "capability-segment-routing")
    {
        capability_segment_routing = value;
        capability_segment_routing.value_namespace = name_space;
        capability_segment_routing.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "capability-triggered-sync")
    {
        capability_triggered_sync = value;
        capability_triggered_sync.value_namespace = name_space;
        capability_triggered_sync.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "capability-db-version")
    {
        capability_db_version = value;
        capability_db_version.value_namespace = name_space;
        capability_db_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "capability-delta-sync")
    {
        capability_delta_sync = value;
        capability_delta_sync.value_namespace = name_space;
        capability_delta_sync.value_namespace_prefix = name_space_prefix;
    }
}

void PcePeer::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::BriefPcepInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pcep-state")
    {
        pcep_state.yfilter = yfilter;
    }
    if(value_path == "stateful")
    {
        stateful.yfilter = yfilter;
    }
    if(value_path == "capability-update")
    {
        capability_update.yfilter = yfilter;
    }
    if(value_path == "capability-instantiate")
    {
        capability_instantiate.yfilter = yfilter;
    }
    if(value_path == "capability-segment-routing")
    {
        capability_segment_routing.yfilter = yfilter;
    }
    if(value_path == "capability-triggered-sync")
    {
        capability_triggered_sync.yfilter = yfilter;
    }
    if(value_path == "capability-db-version")
    {
        capability_db_version.yfilter = yfilter;
    }
    if(value_path == "capability-delta-sync")
    {
        capability_delta_sync.yfilter = yfilter;
    }
}

bool PcePeer::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::BriefPcepInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pcep-state" || name == "stateful" || name == "capability-update" || name == "capability-instantiate" || name == "capability-segment-routing" || name == "capability-triggered-sync" || name == "capability-db-version" || name == "capability-delta-sync")
        return true;
    return false;
}

PcePeer::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::LastErrorRx::LastErrorRx()
    :
    pc_error_type{YType::uint8, "pc-error-type"},
    pc_error_value{YType::uint8, "pc-error-value"}
{

    yang_name = "last-error-rx"; yang_parent_name = "detail-pcep-information"; is_top_level_class = false; has_list_ancestor = true;
}

PcePeer::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::LastErrorRx::~LastErrorRx()
{
}

bool PcePeer::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::LastErrorRx::has_data() const
{
    return pc_error_type.is_set
	|| pc_error_value.is_set;
}

bool PcePeer::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::LastErrorRx::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pc_error_type.yfilter)
	|| ydk::is_set(pc_error_value.yfilter);
}

std::string PcePeer::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::LastErrorRx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-error-rx";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PcePeer::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::LastErrorRx::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pc_error_type.is_set || is_set(pc_error_type.yfilter)) leaf_name_data.push_back(pc_error_type.get_name_leafdata());
    if (pc_error_value.is_set || is_set(pc_error_value.yfilter)) leaf_name_data.push_back(pc_error_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PcePeer::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::LastErrorRx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PcePeer::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::LastErrorRx::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PcePeer::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::LastErrorRx::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pc-error-type")
    {
        pc_error_type = value;
        pc_error_type.value_namespace = name_space;
        pc_error_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pc-error-value")
    {
        pc_error_value = value;
        pc_error_value.value_namespace = name_space;
        pc_error_value.value_namespace_prefix = name_space_prefix;
    }
}

void PcePeer::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::LastErrorRx::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pc-error-type")
    {
        pc_error_type.yfilter = yfilter;
    }
    if(value_path == "pc-error-value")
    {
        pc_error_value.yfilter = yfilter;
    }
}

bool PcePeer::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::LastErrorRx::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pc-error-type" || name == "pc-error-value")
        return true;
    return false;
}

PcePeer::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::LastErrorTx::LastErrorTx()
    :
    pc_error_type{YType::uint8, "pc-error-type"},
    pc_error_value{YType::uint8, "pc-error-value"}
{

    yang_name = "last-error-tx"; yang_parent_name = "detail-pcep-information"; is_top_level_class = false; has_list_ancestor = true;
}

PcePeer::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::LastErrorTx::~LastErrorTx()
{
}

bool PcePeer::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::LastErrorTx::has_data() const
{
    return pc_error_type.is_set
	|| pc_error_value.is_set;
}

bool PcePeer::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::LastErrorTx::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pc_error_type.yfilter)
	|| ydk::is_set(pc_error_value.yfilter);
}

std::string PcePeer::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::LastErrorTx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-error-tx";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PcePeer::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::LastErrorTx::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pc_error_type.is_set || is_set(pc_error_type.yfilter)) leaf_name_data.push_back(pc_error_type.get_name_leafdata());
    if (pc_error_value.is_set || is_set(pc_error_value.yfilter)) leaf_name_data.push_back(pc_error_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PcePeer::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::LastErrorTx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PcePeer::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::LastErrorTx::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PcePeer::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::LastErrorTx::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pc-error-type")
    {
        pc_error_type = value;
        pc_error_type.value_namespace = name_space;
        pc_error_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pc-error-value")
    {
        pc_error_value = value;
        pc_error_value.value_namespace = name_space;
        pc_error_value.value_namespace_prefix = name_space_prefix;
    }
}

void PcePeer::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::LastErrorTx::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pc-error-type")
    {
        pc_error_type.yfilter = yfilter;
    }
    if(value_path == "pc-error-value")
    {
        pc_error_value.yfilter = yfilter;
    }
}

bool PcePeer::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::LastErrorTx::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pc-error-type" || name == "pc-error-value")
        return true;
    return false;
}

PcePeer::PeerInfos::PeerInfos()
{

    yang_name = "peer-infos"; yang_parent_name = "pce-peer"; is_top_level_class = false; has_list_ancestor = false;
}

PcePeer::PeerInfos::~PeerInfos()
{
}

bool PcePeer::PeerInfos::has_data() const
{
    for (std::size_t index=0; index<peer_info.size(); index++)
    {
        if(peer_info[index]->has_data())
            return true;
    }
    return false;
}

bool PcePeer::PeerInfos::has_operation() const
{
    for (std::size_t index=0; index<peer_info.size(); index++)
    {
        if(peer_info[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PcePeer::PeerInfos::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-xtc-oper:pce-peer/" << get_segment_path();
    return path_buffer.str();
}

std::string PcePeer::PeerInfos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-infos";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PcePeer::PeerInfos::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PcePeer::PeerInfos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer-info")
    {
        auto c = std::make_shared<PcePeer::PeerInfos::PeerInfo>();
        c->parent = this;
        peer_info.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PcePeer::PeerInfos::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : peer_info)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PcePeer::PeerInfos::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PcePeer::PeerInfos::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PcePeer::PeerInfos::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-info")
        return true;
    return false;
}

PcePeer::PeerInfos::PeerInfo::PeerInfo()
    :
    peer_address{YType::str, "peer-address"},
    peer_address_xr{YType::str, "peer-address-xr"},
    peer_protocol{YType::enumeration, "peer-protocol"}
    	,
    brief_pcep_information(std::make_shared<PcePeer::PeerInfos::PeerInfo::BriefPcepInformation>())
{
    brief_pcep_information->parent = this;

    yang_name = "peer-info"; yang_parent_name = "peer-infos"; is_top_level_class = false; has_list_ancestor = false;
}

PcePeer::PeerInfos::PeerInfo::~PeerInfo()
{
}

bool PcePeer::PeerInfos::PeerInfo::has_data() const
{
    return peer_address.is_set
	|| peer_address_xr.is_set
	|| peer_protocol.is_set
	|| (brief_pcep_information !=  nullptr && brief_pcep_information->has_data());
}

bool PcePeer::PeerInfos::PeerInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(peer_address.yfilter)
	|| ydk::is_set(peer_address_xr.yfilter)
	|| ydk::is_set(peer_protocol.yfilter)
	|| (brief_pcep_information !=  nullptr && brief_pcep_information->has_operation());
}

std::string PcePeer::PeerInfos::PeerInfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-xtc-oper:pce-peer/peer-infos/" << get_segment_path();
    return path_buffer.str();
}

std::string PcePeer::PeerInfos::PeerInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-info" <<"[peer-address='" <<peer_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PcePeer::PeerInfos::PeerInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer_address.is_set || is_set(peer_address.yfilter)) leaf_name_data.push_back(peer_address.get_name_leafdata());
    if (peer_address_xr.is_set || is_set(peer_address_xr.yfilter)) leaf_name_data.push_back(peer_address_xr.get_name_leafdata());
    if (peer_protocol.is_set || is_set(peer_protocol.yfilter)) leaf_name_data.push_back(peer_protocol.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PcePeer::PeerInfos::PeerInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "brief-pcep-information")
    {
        if(brief_pcep_information == nullptr)
        {
            brief_pcep_information = std::make_shared<PcePeer::PeerInfos::PeerInfo::BriefPcepInformation>();
        }
        return brief_pcep_information;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PcePeer::PeerInfos::PeerInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(brief_pcep_information != nullptr)
    {
        children["brief-pcep-information"] = brief_pcep_information;
    }

    return children;
}

void PcePeer::PeerInfos::PeerInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "peer-address")
    {
        peer_address = value;
        peer_address.value_namespace = name_space;
        peer_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-address-xr")
    {
        peer_address_xr = value;
        peer_address_xr.value_namespace = name_space;
        peer_address_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-protocol")
    {
        peer_protocol = value;
        peer_protocol.value_namespace = name_space;
        peer_protocol.value_namespace_prefix = name_space_prefix;
    }
}

void PcePeer::PeerInfos::PeerInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "peer-address")
    {
        peer_address.yfilter = yfilter;
    }
    if(value_path == "peer-address-xr")
    {
        peer_address_xr.yfilter = yfilter;
    }
    if(value_path == "peer-protocol")
    {
        peer_protocol.yfilter = yfilter;
    }
}

bool PcePeer::PeerInfos::PeerInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "brief-pcep-information" || name == "peer-address" || name == "peer-address-xr" || name == "peer-protocol")
        return true;
    return false;
}

PcePeer::PeerInfos::PeerInfo::BriefPcepInformation::BriefPcepInformation()
    :
    pcep_state{YType::enumeration, "pcep-state"},
    stateful{YType::boolean, "stateful"},
    capability_update{YType::boolean, "capability-update"},
    capability_instantiate{YType::boolean, "capability-instantiate"},
    capability_segment_routing{YType::boolean, "capability-segment-routing"},
    capability_triggered_sync{YType::boolean, "capability-triggered-sync"},
    capability_db_version{YType::boolean, "capability-db-version"},
    capability_delta_sync{YType::boolean, "capability-delta-sync"}
{

    yang_name = "brief-pcep-information"; yang_parent_name = "peer-info"; is_top_level_class = false; has_list_ancestor = true;
}

PcePeer::PeerInfos::PeerInfo::BriefPcepInformation::~BriefPcepInformation()
{
}

bool PcePeer::PeerInfos::PeerInfo::BriefPcepInformation::has_data() const
{
    return pcep_state.is_set
	|| stateful.is_set
	|| capability_update.is_set
	|| capability_instantiate.is_set
	|| capability_segment_routing.is_set
	|| capability_triggered_sync.is_set
	|| capability_db_version.is_set
	|| capability_delta_sync.is_set;
}

bool PcePeer::PeerInfos::PeerInfo::BriefPcepInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pcep_state.yfilter)
	|| ydk::is_set(stateful.yfilter)
	|| ydk::is_set(capability_update.yfilter)
	|| ydk::is_set(capability_instantiate.yfilter)
	|| ydk::is_set(capability_segment_routing.yfilter)
	|| ydk::is_set(capability_triggered_sync.yfilter)
	|| ydk::is_set(capability_db_version.yfilter)
	|| ydk::is_set(capability_delta_sync.yfilter);
}

std::string PcePeer::PeerInfos::PeerInfo::BriefPcepInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "brief-pcep-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PcePeer::PeerInfos::PeerInfo::BriefPcepInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pcep_state.is_set || is_set(pcep_state.yfilter)) leaf_name_data.push_back(pcep_state.get_name_leafdata());
    if (stateful.is_set || is_set(stateful.yfilter)) leaf_name_data.push_back(stateful.get_name_leafdata());
    if (capability_update.is_set || is_set(capability_update.yfilter)) leaf_name_data.push_back(capability_update.get_name_leafdata());
    if (capability_instantiate.is_set || is_set(capability_instantiate.yfilter)) leaf_name_data.push_back(capability_instantiate.get_name_leafdata());
    if (capability_segment_routing.is_set || is_set(capability_segment_routing.yfilter)) leaf_name_data.push_back(capability_segment_routing.get_name_leafdata());
    if (capability_triggered_sync.is_set || is_set(capability_triggered_sync.yfilter)) leaf_name_data.push_back(capability_triggered_sync.get_name_leafdata());
    if (capability_db_version.is_set || is_set(capability_db_version.yfilter)) leaf_name_data.push_back(capability_db_version.get_name_leafdata());
    if (capability_delta_sync.is_set || is_set(capability_delta_sync.yfilter)) leaf_name_data.push_back(capability_delta_sync.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PcePeer::PeerInfos::PeerInfo::BriefPcepInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PcePeer::PeerInfos::PeerInfo::BriefPcepInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PcePeer::PeerInfos::PeerInfo::BriefPcepInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pcep-state")
    {
        pcep_state = value;
        pcep_state.value_namespace = name_space;
        pcep_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stateful")
    {
        stateful = value;
        stateful.value_namespace = name_space;
        stateful.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "capability-update")
    {
        capability_update = value;
        capability_update.value_namespace = name_space;
        capability_update.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "capability-instantiate")
    {
        capability_instantiate = value;
        capability_instantiate.value_namespace = name_space;
        capability_instantiate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "capability-segment-routing")
    {
        capability_segment_routing = value;
        capability_segment_routing.value_namespace = name_space;
        capability_segment_routing.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "capability-triggered-sync")
    {
        capability_triggered_sync = value;
        capability_triggered_sync.value_namespace = name_space;
        capability_triggered_sync.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "capability-db-version")
    {
        capability_db_version = value;
        capability_db_version.value_namespace = name_space;
        capability_db_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "capability-delta-sync")
    {
        capability_delta_sync = value;
        capability_delta_sync.value_namespace = name_space;
        capability_delta_sync.value_namespace_prefix = name_space_prefix;
    }
}

void PcePeer::PeerInfos::PeerInfo::BriefPcepInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pcep-state")
    {
        pcep_state.yfilter = yfilter;
    }
    if(value_path == "stateful")
    {
        stateful.yfilter = yfilter;
    }
    if(value_path == "capability-update")
    {
        capability_update.yfilter = yfilter;
    }
    if(value_path == "capability-instantiate")
    {
        capability_instantiate.yfilter = yfilter;
    }
    if(value_path == "capability-segment-routing")
    {
        capability_segment_routing.yfilter = yfilter;
    }
    if(value_path == "capability-triggered-sync")
    {
        capability_triggered_sync.yfilter = yfilter;
    }
    if(value_path == "capability-db-version")
    {
        capability_db_version.yfilter = yfilter;
    }
    if(value_path == "capability-delta-sync")
    {
        capability_delta_sync.yfilter = yfilter;
    }
}

bool PcePeer::PeerInfos::PeerInfo::BriefPcepInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pcep-state" || name == "stateful" || name == "capability-update" || name == "capability-instantiate" || name == "capability-segment-routing" || name == "capability-triggered-sync" || name == "capability-db-version" || name == "capability-delta-sync")
        return true;
    return false;
}

PceTopology::PceTopology()
    :
    topology_summary(std::make_shared<PceTopology::TopologySummary>())
	,topology_nodes(std::make_shared<PceTopology::TopologyNodes>())
	,prefix_infos(std::make_shared<PceTopology::PrefixInfos>())
{
    topology_summary->parent = this;
    topology_nodes->parent = this;
    prefix_infos->parent = this;

    yang_name = "pce-topology"; yang_parent_name = "Cisco-IOS-XR-infra-xtc-oper"; is_top_level_class = true; has_list_ancestor = false;
}

PceTopology::~PceTopology()
{
}

bool PceTopology::has_data() const
{
    return (topology_summary !=  nullptr && topology_summary->has_data())
	|| (topology_nodes !=  nullptr && topology_nodes->has_data())
	|| (prefix_infos !=  nullptr && prefix_infos->has_data());
}

bool PceTopology::has_operation() const
{
    return is_set(yfilter)
	|| (topology_summary !=  nullptr && topology_summary->has_operation())
	|| (topology_nodes !=  nullptr && topology_nodes->has_operation())
	|| (prefix_infos !=  nullptr && prefix_infos->has_operation());
}

std::string PceTopology::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-xtc-oper:pce-topology";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PceTopology::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "topology-summary")
    {
        if(topology_summary == nullptr)
        {
            topology_summary = std::make_shared<PceTopology::TopologySummary>();
        }
        return topology_summary;
    }

    if(child_yang_name == "topology-nodes")
    {
        if(topology_nodes == nullptr)
        {
            topology_nodes = std::make_shared<PceTopology::TopologyNodes>();
        }
        return topology_nodes;
    }

    if(child_yang_name == "prefix-infos")
    {
        if(prefix_infos == nullptr)
        {
            prefix_infos = std::make_shared<PceTopology::PrefixInfos>();
        }
        return prefix_infos;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PceTopology::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(topology_summary != nullptr)
    {
        children["topology-summary"] = topology_summary;
    }

    if(topology_nodes != nullptr)
    {
        children["topology-nodes"] = topology_nodes;
    }

    if(prefix_infos != nullptr)
    {
        children["prefix-infos"] = prefix_infos;
    }

    return children;
}

void PceTopology::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PceTopology::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> PceTopology::clone_ptr() const
{
    return std::make_shared<PceTopology>();
}

std::string PceTopology::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string PceTopology::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function PceTopology::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> PceTopology::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool PceTopology::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "topology-summary" || name == "topology-nodes" || name == "prefix-infos")
        return true;
    return false;
}

PceTopology::TopologySummary::TopologySummary()
    :
    nodes{YType::uint32, "nodes"},
    lookup_nodes{YType::uint32, "lookup-nodes"},
    prefixes{YType::uint32, "prefixes"},
    prefix_sids{YType::uint32, "prefix-sids"},
    regular_prefix_sids{YType::uint32, "regular-prefix-sids"},
    strict_prefix_sids{YType::uint32, "strict-prefix-sids"},
    links{YType::uint32, "links"},
    epe_links{YType::uint32, "epe-links"},
    adjacency_sids{YType::uint32, "adjacency-sids"},
    epesids{YType::uint32, "epesids"},
    protected_adjacency_sids{YType::uint32, "protected-adjacency-sids"},
    un_protected_adjacency_sids{YType::uint32, "un-protected-adjacency-sids"},
    topology_consistent{YType::boolean, "topology-consistent"}
    	,
    stats_topology_update(std::make_shared<PceTopology::TopologySummary::StatsTopologyUpdate>())
{
    stats_topology_update->parent = this;

    yang_name = "topology-summary"; yang_parent_name = "pce-topology"; is_top_level_class = false; has_list_ancestor = false;
}

PceTopology::TopologySummary::~TopologySummary()
{
}

bool PceTopology::TopologySummary::has_data() const
{
    return nodes.is_set
	|| lookup_nodes.is_set
	|| prefixes.is_set
	|| prefix_sids.is_set
	|| regular_prefix_sids.is_set
	|| strict_prefix_sids.is_set
	|| links.is_set
	|| epe_links.is_set
	|| adjacency_sids.is_set
	|| epesids.is_set
	|| protected_adjacency_sids.is_set
	|| un_protected_adjacency_sids.is_set
	|| topology_consistent.is_set
	|| (stats_topology_update !=  nullptr && stats_topology_update->has_data());
}

bool PceTopology::TopologySummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nodes.yfilter)
	|| ydk::is_set(lookup_nodes.yfilter)
	|| ydk::is_set(prefixes.yfilter)
	|| ydk::is_set(prefix_sids.yfilter)
	|| ydk::is_set(regular_prefix_sids.yfilter)
	|| ydk::is_set(strict_prefix_sids.yfilter)
	|| ydk::is_set(links.yfilter)
	|| ydk::is_set(epe_links.yfilter)
	|| ydk::is_set(adjacency_sids.yfilter)
	|| ydk::is_set(epesids.yfilter)
	|| ydk::is_set(protected_adjacency_sids.yfilter)
	|| ydk::is_set(un_protected_adjacency_sids.yfilter)
	|| ydk::is_set(topology_consistent.yfilter)
	|| (stats_topology_update !=  nullptr && stats_topology_update->has_operation());
}

std::string PceTopology::TopologySummary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-xtc-oper:pce-topology/" << get_segment_path();
    return path_buffer.str();
}

std::string PceTopology::TopologySummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::TopologySummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nodes.is_set || is_set(nodes.yfilter)) leaf_name_data.push_back(nodes.get_name_leafdata());
    if (lookup_nodes.is_set || is_set(lookup_nodes.yfilter)) leaf_name_data.push_back(lookup_nodes.get_name_leafdata());
    if (prefixes.is_set || is_set(prefixes.yfilter)) leaf_name_data.push_back(prefixes.get_name_leafdata());
    if (prefix_sids.is_set || is_set(prefix_sids.yfilter)) leaf_name_data.push_back(prefix_sids.get_name_leafdata());
    if (regular_prefix_sids.is_set || is_set(regular_prefix_sids.yfilter)) leaf_name_data.push_back(regular_prefix_sids.get_name_leafdata());
    if (strict_prefix_sids.is_set || is_set(strict_prefix_sids.yfilter)) leaf_name_data.push_back(strict_prefix_sids.get_name_leafdata());
    if (links.is_set || is_set(links.yfilter)) leaf_name_data.push_back(links.get_name_leafdata());
    if (epe_links.is_set || is_set(epe_links.yfilter)) leaf_name_data.push_back(epe_links.get_name_leafdata());
    if (adjacency_sids.is_set || is_set(adjacency_sids.yfilter)) leaf_name_data.push_back(adjacency_sids.get_name_leafdata());
    if (epesids.is_set || is_set(epesids.yfilter)) leaf_name_data.push_back(epesids.get_name_leafdata());
    if (protected_adjacency_sids.is_set || is_set(protected_adjacency_sids.yfilter)) leaf_name_data.push_back(protected_adjacency_sids.get_name_leafdata());
    if (un_protected_adjacency_sids.is_set || is_set(un_protected_adjacency_sids.yfilter)) leaf_name_data.push_back(un_protected_adjacency_sids.get_name_leafdata());
    if (topology_consistent.is_set || is_set(topology_consistent.yfilter)) leaf_name_data.push_back(topology_consistent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PceTopology::TopologySummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stats-topology-update")
    {
        if(stats_topology_update == nullptr)
        {
            stats_topology_update = std::make_shared<PceTopology::TopologySummary::StatsTopologyUpdate>();
        }
        return stats_topology_update;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PceTopology::TopologySummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(stats_topology_update != nullptr)
    {
        children["stats-topology-update"] = stats_topology_update;
    }

    return children;
}

void PceTopology::TopologySummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nodes")
    {
        nodes = value;
        nodes.value_namespace = name_space;
        nodes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lookup-nodes")
    {
        lookup_nodes = value;
        lookup_nodes.value_namespace = name_space;
        lookup_nodes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefixes")
    {
        prefixes = value;
        prefixes.value_namespace = name_space;
        prefixes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-sids")
    {
        prefix_sids = value;
        prefix_sids.value_namespace = name_space;
        prefix_sids.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "regular-prefix-sids")
    {
        regular_prefix_sids = value;
        regular_prefix_sids.value_namespace = name_space;
        regular_prefix_sids.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "strict-prefix-sids")
    {
        strict_prefix_sids = value;
        strict_prefix_sids.value_namespace = name_space;
        strict_prefix_sids.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "links")
    {
        links = value;
        links.value_namespace = name_space;
        links.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "epe-links")
    {
        epe_links = value;
        epe_links.value_namespace = name_space;
        epe_links.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adjacency-sids")
    {
        adjacency_sids = value;
        adjacency_sids.value_namespace = name_space;
        adjacency_sids.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "epesids")
    {
        epesids = value;
        epesids.value_namespace = name_space;
        epesids.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protected-adjacency-sids")
    {
        protected_adjacency_sids = value;
        protected_adjacency_sids.value_namespace = name_space;
        protected_adjacency_sids.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "un-protected-adjacency-sids")
    {
        un_protected_adjacency_sids = value;
        un_protected_adjacency_sids.value_namespace = name_space;
        un_protected_adjacency_sids.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "topology-consistent")
    {
        topology_consistent = value;
        topology_consistent.value_namespace = name_space;
        topology_consistent.value_namespace_prefix = name_space_prefix;
    }
}

void PceTopology::TopologySummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nodes")
    {
        nodes.yfilter = yfilter;
    }
    if(value_path == "lookup-nodes")
    {
        lookup_nodes.yfilter = yfilter;
    }
    if(value_path == "prefixes")
    {
        prefixes.yfilter = yfilter;
    }
    if(value_path == "prefix-sids")
    {
        prefix_sids.yfilter = yfilter;
    }
    if(value_path == "regular-prefix-sids")
    {
        regular_prefix_sids.yfilter = yfilter;
    }
    if(value_path == "strict-prefix-sids")
    {
        strict_prefix_sids.yfilter = yfilter;
    }
    if(value_path == "links")
    {
        links.yfilter = yfilter;
    }
    if(value_path == "epe-links")
    {
        epe_links.yfilter = yfilter;
    }
    if(value_path == "adjacency-sids")
    {
        adjacency_sids.yfilter = yfilter;
    }
    if(value_path == "epesids")
    {
        epesids.yfilter = yfilter;
    }
    if(value_path == "protected-adjacency-sids")
    {
        protected_adjacency_sids.yfilter = yfilter;
    }
    if(value_path == "un-protected-adjacency-sids")
    {
        un_protected_adjacency_sids.yfilter = yfilter;
    }
    if(value_path == "topology-consistent")
    {
        topology_consistent.yfilter = yfilter;
    }
}

bool PceTopology::TopologySummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stats-topology-update" || name == "nodes" || name == "lookup-nodes" || name == "prefixes" || name == "prefix-sids" || name == "regular-prefix-sids" || name == "strict-prefix-sids" || name == "links" || name == "epe-links" || name == "adjacency-sids" || name == "epesids" || name == "protected-adjacency-sids" || name == "un-protected-adjacency-sids" || name == "topology-consistent")
        return true;
    return false;
}

PceTopology::TopologySummary::StatsTopologyUpdate::StatsTopologyUpdate()
    :
    num_nodes_added{YType::uint32, "num-nodes-added"},
    num_nodes_deleted{YType::uint32, "num-nodes-deleted"},
    num_links_added{YType::uint32, "num-links-added"},
    num_links_deleted{YType::uint32, "num-links-deleted"},
    num_prefixes_added{YType::uint32, "num-prefixes-added"},
    num_prefixes_deleted{YType::uint32, "num-prefixes-deleted"}
{

    yang_name = "stats-topology-update"; yang_parent_name = "topology-summary"; is_top_level_class = false; has_list_ancestor = false;
}

PceTopology::TopologySummary::StatsTopologyUpdate::~StatsTopologyUpdate()
{
}

bool PceTopology::TopologySummary::StatsTopologyUpdate::has_data() const
{
    return num_nodes_added.is_set
	|| num_nodes_deleted.is_set
	|| num_links_added.is_set
	|| num_links_deleted.is_set
	|| num_prefixes_added.is_set
	|| num_prefixes_deleted.is_set;
}

bool PceTopology::TopologySummary::StatsTopologyUpdate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(num_nodes_added.yfilter)
	|| ydk::is_set(num_nodes_deleted.yfilter)
	|| ydk::is_set(num_links_added.yfilter)
	|| ydk::is_set(num_links_deleted.yfilter)
	|| ydk::is_set(num_prefixes_added.yfilter)
	|| ydk::is_set(num_prefixes_deleted.yfilter);
}

std::string PceTopology::TopologySummary::StatsTopologyUpdate::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-xtc-oper:pce-topology/topology-summary/" << get_segment_path();
    return path_buffer.str();
}

std::string PceTopology::TopologySummary::StatsTopologyUpdate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stats-topology-update";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::TopologySummary::StatsTopologyUpdate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (num_nodes_added.is_set || is_set(num_nodes_added.yfilter)) leaf_name_data.push_back(num_nodes_added.get_name_leafdata());
    if (num_nodes_deleted.is_set || is_set(num_nodes_deleted.yfilter)) leaf_name_data.push_back(num_nodes_deleted.get_name_leafdata());
    if (num_links_added.is_set || is_set(num_links_added.yfilter)) leaf_name_data.push_back(num_links_added.get_name_leafdata());
    if (num_links_deleted.is_set || is_set(num_links_deleted.yfilter)) leaf_name_data.push_back(num_links_deleted.get_name_leafdata());
    if (num_prefixes_added.is_set || is_set(num_prefixes_added.yfilter)) leaf_name_data.push_back(num_prefixes_added.get_name_leafdata());
    if (num_prefixes_deleted.is_set || is_set(num_prefixes_deleted.yfilter)) leaf_name_data.push_back(num_prefixes_deleted.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PceTopology::TopologySummary::StatsTopologyUpdate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PceTopology::TopologySummary::StatsTopologyUpdate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PceTopology::TopologySummary::StatsTopologyUpdate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "num-nodes-added")
    {
        num_nodes_added = value;
        num_nodes_added.value_namespace = name_space;
        num_nodes_added.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-nodes-deleted")
    {
        num_nodes_deleted = value;
        num_nodes_deleted.value_namespace = name_space;
        num_nodes_deleted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-links-added")
    {
        num_links_added = value;
        num_links_added.value_namespace = name_space;
        num_links_added.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-links-deleted")
    {
        num_links_deleted = value;
        num_links_deleted.value_namespace = name_space;
        num_links_deleted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-prefixes-added")
    {
        num_prefixes_added = value;
        num_prefixes_added.value_namespace = name_space;
        num_prefixes_added.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-prefixes-deleted")
    {
        num_prefixes_deleted = value;
        num_prefixes_deleted.value_namespace = name_space;
        num_prefixes_deleted.value_namespace_prefix = name_space_prefix;
    }
}

void PceTopology::TopologySummary::StatsTopologyUpdate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "num-nodes-added")
    {
        num_nodes_added.yfilter = yfilter;
    }
    if(value_path == "num-nodes-deleted")
    {
        num_nodes_deleted.yfilter = yfilter;
    }
    if(value_path == "num-links-added")
    {
        num_links_added.yfilter = yfilter;
    }
    if(value_path == "num-links-deleted")
    {
        num_links_deleted.yfilter = yfilter;
    }
    if(value_path == "num-prefixes-added")
    {
        num_prefixes_added.yfilter = yfilter;
    }
    if(value_path == "num-prefixes-deleted")
    {
        num_prefixes_deleted.yfilter = yfilter;
    }
}

bool PceTopology::TopologySummary::StatsTopologyUpdate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "num-nodes-added" || name == "num-nodes-deleted" || name == "num-links-added" || name == "num-links-deleted" || name == "num-prefixes-added" || name == "num-prefixes-deleted")
        return true;
    return false;
}

PceTopology::TopologyNodes::TopologyNodes()
{

    yang_name = "topology-nodes"; yang_parent_name = "pce-topology"; is_top_level_class = false; has_list_ancestor = false;
}

PceTopology::TopologyNodes::~TopologyNodes()
{
}

bool PceTopology::TopologyNodes::has_data() const
{
    for (std::size_t index=0; index<topology_node.size(); index++)
    {
        if(topology_node[index]->has_data())
            return true;
    }
    return false;
}

bool PceTopology::TopologyNodes::has_operation() const
{
    for (std::size_t index=0; index<topology_node.size(); index++)
    {
        if(topology_node[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PceTopology::TopologyNodes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-xtc-oper:pce-topology/" << get_segment_path();
    return path_buffer.str();
}

std::string PceTopology::TopologyNodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology-nodes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::TopologyNodes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PceTopology::TopologyNodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "topology-node")
    {
        auto c = std::make_shared<PceTopology::TopologyNodes::TopologyNode>();
        c->parent = this;
        topology_node.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PceTopology::TopologyNodes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : topology_node)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PceTopology::TopologyNodes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PceTopology::TopologyNodes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PceTopology::TopologyNodes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "topology-node")
        return true;
    return false;
}

PceTopology::TopologyNodes::TopologyNode::TopologyNode()
    :
    node_identifier{YType::int32, "node-identifier"},
    node_identifier_xr{YType::uint32, "node-identifier-xr"},
    overload{YType::boolean, "overload"}
    	,
    node_protocol_identifier(std::make_shared<PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier>())
{
    node_protocol_identifier->parent = this;

    yang_name = "topology-node"; yang_parent_name = "topology-nodes"; is_top_level_class = false; has_list_ancestor = false;
}

PceTopology::TopologyNodes::TopologyNode::~TopologyNode()
{
}

bool PceTopology::TopologyNodes::TopologyNode::has_data() const
{
    for (std::size_t index=0; index<prefix_sid.size(); index++)
    {
        if(prefix_sid[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ipv4_link.size(); index++)
    {
        if(ipv4_link[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ipv6_link.size(); index++)
    {
        if(ipv6_link[index]->has_data())
            return true;
    }
    return node_identifier.is_set
	|| node_identifier_xr.is_set
	|| overload.is_set
	|| (node_protocol_identifier !=  nullptr && node_protocol_identifier->has_data());
}

bool PceTopology::TopologyNodes::TopologyNode::has_operation() const
{
    for (std::size_t index=0; index<prefix_sid.size(); index++)
    {
        if(prefix_sid[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ipv4_link.size(); index++)
    {
        if(ipv4_link[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ipv6_link.size(); index++)
    {
        if(ipv6_link[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(node_identifier.yfilter)
	|| ydk::is_set(node_identifier_xr.yfilter)
	|| ydk::is_set(overload.yfilter)
	|| (node_protocol_identifier !=  nullptr && node_protocol_identifier->has_operation());
}

std::string PceTopology::TopologyNodes::TopologyNode::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-xtc-oper:pce-topology/topology-nodes/" << get_segment_path();
    return path_buffer.str();
}

std::string PceTopology::TopologyNodes::TopologyNode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology-node" <<"[node-identifier='" <<node_identifier <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::TopologyNodes::TopologyNode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_identifier.is_set || is_set(node_identifier.yfilter)) leaf_name_data.push_back(node_identifier.get_name_leafdata());
    if (node_identifier_xr.is_set || is_set(node_identifier_xr.yfilter)) leaf_name_data.push_back(node_identifier_xr.get_name_leafdata());
    if (overload.is_set || is_set(overload.yfilter)) leaf_name_data.push_back(overload.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PceTopology::TopologyNodes::TopologyNode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node-protocol-identifier")
    {
        if(node_protocol_identifier == nullptr)
        {
            node_protocol_identifier = std::make_shared<PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier>();
        }
        return node_protocol_identifier;
    }

    if(child_yang_name == "prefix-sid")
    {
        auto c = std::make_shared<PceTopology::TopologyNodes::TopologyNode::PrefixSid>();
        c->parent = this;
        prefix_sid.push_back(c);
        return c;
    }

    if(child_yang_name == "ipv4-link")
    {
        auto c = std::make_shared<PceTopology::TopologyNodes::TopologyNode::Ipv4Link>();
        c->parent = this;
        ipv4_link.push_back(c);
        return c;
    }

    if(child_yang_name == "ipv6-link")
    {
        auto c = std::make_shared<PceTopology::TopologyNodes::TopologyNode::Ipv6Link>();
        c->parent = this;
        ipv6_link.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PceTopology::TopologyNodes::TopologyNode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(node_protocol_identifier != nullptr)
    {
        children["node-protocol-identifier"] = node_protocol_identifier;
    }

    count = 0;
    for (auto const & c : prefix_sid)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : ipv4_link)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : ipv6_link)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PceTopology::TopologyNodes::TopologyNode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-identifier")
    {
        node_identifier = value;
        node_identifier.value_namespace = name_space;
        node_identifier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-identifier-xr")
    {
        node_identifier_xr = value;
        node_identifier_xr.value_namespace = name_space;
        node_identifier_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "overload")
    {
        overload = value;
        overload.value_namespace = name_space;
        overload.value_namespace_prefix = name_space_prefix;
    }
}

void PceTopology::TopologyNodes::TopologyNode::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-identifier")
    {
        node_identifier.yfilter = yfilter;
    }
    if(value_path == "node-identifier-xr")
    {
        node_identifier_xr.yfilter = yfilter;
    }
    if(value_path == "overload")
    {
        overload.yfilter = yfilter;
    }
}

bool PceTopology::TopologyNodes::TopologyNode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node-protocol-identifier" || name == "prefix-sid" || name == "ipv4-link" || name == "ipv6-link" || name == "node-identifier" || name == "node-identifier-xr" || name == "overload")
        return true;
    return false;
}

PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::NodeProtocolIdentifier()
    :
    node_name{YType::str, "node-name"},
    ipv4_bgp_router_id_set{YType::boolean, "ipv4-bgp-router-id-set"},
    ipv4_bgp_router_id{YType::str, "ipv4-bgp-router-id"},
    ipv4te_router_id_set{YType::boolean, "ipv4te-router-id-set"},
    ipv4te_router_id{YType::str, "ipv4te-router-id"}
{

    yang_name = "node-protocol-identifier"; yang_parent_name = "topology-node"; is_top_level_class = false; has_list_ancestor = true;
}

PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::~NodeProtocolIdentifier()
{
}

bool PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::has_data() const
{
    for (std::size_t index=0; index<igp_information.size(); index++)
    {
        if(igp_information[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<srgb_information.size(); index++)
    {
        if(srgb_information[index]->has_data())
            return true;
    }
    return node_name.is_set
	|| ipv4_bgp_router_id_set.is_set
	|| ipv4_bgp_router_id.is_set
	|| ipv4te_router_id_set.is_set
	|| ipv4te_router_id.is_set;
}

bool PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::has_operation() const
{
    for (std::size_t index=0; index<igp_information.size(); index++)
    {
        if(igp_information[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<srgb_information.size(); index++)
    {
        if(srgb_information[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(node_name.yfilter)
	|| ydk::is_set(ipv4_bgp_router_id_set.yfilter)
	|| ydk::is_set(ipv4_bgp_router_id.yfilter)
	|| ydk::is_set(ipv4te_router_id_set.yfilter)
	|| ydk::is_set(ipv4te_router_id.yfilter);
}

std::string PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node-protocol-identifier";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());
    if (ipv4_bgp_router_id_set.is_set || is_set(ipv4_bgp_router_id_set.yfilter)) leaf_name_data.push_back(ipv4_bgp_router_id_set.get_name_leafdata());
    if (ipv4_bgp_router_id.is_set || is_set(ipv4_bgp_router_id.yfilter)) leaf_name_data.push_back(ipv4_bgp_router_id.get_name_leafdata());
    if (ipv4te_router_id_set.is_set || is_set(ipv4te_router_id_set.yfilter)) leaf_name_data.push_back(ipv4te_router_id_set.get_name_leafdata());
    if (ipv4te_router_id.is_set || is_set(ipv4te_router_id.yfilter)) leaf_name_data.push_back(ipv4te_router_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "igp-information")
    {
        auto c = std::make_shared<PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation>();
        c->parent = this;
        igp_information.push_back(c);
        return c;
    }

    if(child_yang_name == "srgb-information")
    {
        auto c = std::make_shared<PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation>();
        c->parent = this;
        srgb_information.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : igp_information)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : srgb_information)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-name")
    {
        node_name = value;
        node_name.value_namespace = name_space;
        node_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-bgp-router-id-set")
    {
        ipv4_bgp_router_id_set = value;
        ipv4_bgp_router_id_set.value_namespace = name_space;
        ipv4_bgp_router_id_set.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-bgp-router-id")
    {
        ipv4_bgp_router_id = value;
        ipv4_bgp_router_id.value_namespace = name_space;
        ipv4_bgp_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4te-router-id-set")
    {
        ipv4te_router_id_set = value;
        ipv4te_router_id_set.value_namespace = name_space;
        ipv4te_router_id_set.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4te-router-id")
    {
        ipv4te_router_id = value;
        ipv4te_router_id.value_namespace = name_space;
        ipv4te_router_id.value_namespace_prefix = name_space_prefix;
    }
}

void PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-name")
    {
        node_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-bgp-router-id-set")
    {
        ipv4_bgp_router_id_set.yfilter = yfilter;
    }
    if(value_path == "ipv4-bgp-router-id")
    {
        ipv4_bgp_router_id.yfilter = yfilter;
    }
    if(value_path == "ipv4te-router-id-set")
    {
        ipv4te_router_id_set.yfilter = yfilter;
    }
    if(value_path == "ipv4te-router-id")
    {
        ipv4te_router_id.yfilter = yfilter;
    }
}

bool PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "igp-information" || name == "srgb-information" || name == "node-name" || name == "ipv4-bgp-router-id-set" || name == "ipv4-bgp-router-id" || name == "ipv4te-router-id-set" || name == "ipv4te-router-id")
        return true;
    return false;
}

PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::IgpInformation()
    :
    domain_identifier{YType::uint64, "domain-identifier"},
    autonomous_system_number{YType::uint32, "autonomous-system-number"}
    	,
    igp(std::make_shared<PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp>())
{
    igp->parent = this;

    yang_name = "igp-information"; yang_parent_name = "node-protocol-identifier"; is_top_level_class = false; has_list_ancestor = true;
}

PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::~IgpInformation()
{
}

bool PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::has_data() const
{
    return domain_identifier.is_set
	|| autonomous_system_number.is_set
	|| (igp !=  nullptr && igp->has_data());
}

bool PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(domain_identifier.yfilter)
	|| ydk::is_set(autonomous_system_number.yfilter)
	|| (igp !=  nullptr && igp->has_operation());
}

std::string PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "igp-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (domain_identifier.is_set || is_set(domain_identifier.yfilter)) leaf_name_data.push_back(domain_identifier.get_name_leafdata());
    if (autonomous_system_number.is_set || is_set(autonomous_system_number.yfilter)) leaf_name_data.push_back(autonomous_system_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "igp")
    {
        if(igp == nullptr)
        {
            igp = std::make_shared<PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp>();
        }
        return igp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(igp != nullptr)
    {
        children["igp"] = igp;
    }

    return children;
}

void PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "domain-identifier")
    {
        domain_identifier = value;
        domain_identifier.value_namespace = name_space;
        domain_identifier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "autonomous-system-number")
    {
        autonomous_system_number = value;
        autonomous_system_number.value_namespace = name_space;
        autonomous_system_number.value_namespace_prefix = name_space_prefix;
    }
}

void PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "domain-identifier")
    {
        domain_identifier.yfilter = yfilter;
    }
    if(value_path == "autonomous-system-number")
    {
        autonomous_system_number.yfilter = yfilter;
    }
}

bool PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "igp" || name == "domain-identifier" || name == "autonomous-system-number")
        return true;
    return false;
}

PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::Igp()
    :
    igp_id{YType::enumeration, "igp-id"}
    	,
    isis(std::make_shared<PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::Isis>())
	,ospf(std::make_shared<PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::Ospf>())
	,bgp(std::make_shared<PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::Bgp>())
{
    isis->parent = this;
    ospf->parent = this;
    bgp->parent = this;

    yang_name = "igp"; yang_parent_name = "igp-information"; is_top_level_class = false; has_list_ancestor = true;
}

PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::~Igp()
{
}

bool PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::has_data() const
{
    return igp_id.is_set
	|| (isis !=  nullptr && isis->has_data())
	|| (ospf !=  nullptr && ospf->has_data())
	|| (bgp !=  nullptr && bgp->has_data());
}

bool PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(igp_id.yfilter)
	|| (isis !=  nullptr && isis->has_operation())
	|| (ospf !=  nullptr && ospf->has_operation())
	|| (bgp !=  nullptr && bgp->has_operation());
}

std::string PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "igp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (igp_id.is_set || is_set(igp_id.yfilter)) leaf_name_data.push_back(igp_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "isis")
    {
        if(isis == nullptr)
        {
            isis = std::make_shared<PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::Isis>();
        }
        return isis;
    }

    if(child_yang_name == "ospf")
    {
        if(ospf == nullptr)
        {
            ospf = std::make_shared<PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::Ospf>();
        }
        return ospf;
    }

    if(child_yang_name == "bgp")
    {
        if(bgp == nullptr)
        {
            bgp = std::make_shared<PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::Bgp>();
        }
        return bgp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(isis != nullptr)
    {
        children["isis"] = isis;
    }

    if(ospf != nullptr)
    {
        children["ospf"] = ospf;
    }

    if(bgp != nullptr)
    {
        children["bgp"] = bgp;
    }

    return children;
}

void PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "igp-id")
    {
        igp_id = value;
        igp_id.value_namespace = name_space;
        igp_id.value_namespace_prefix = name_space_prefix;
    }
}

void PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "igp-id")
    {
        igp_id.yfilter = yfilter;
    }
}

bool PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "isis" || name == "ospf" || name == "bgp" || name == "igp-id")
        return true;
    return false;
}

PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::Isis::Isis()
    :
    system_id{YType::str, "system-id"},
    level{YType::uint32, "level"}
{

    yang_name = "isis"; yang_parent_name = "igp"; is_top_level_class = false; has_list_ancestor = true;
}

PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::Isis::~Isis()
{
}

bool PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::Isis::has_data() const
{
    return system_id.is_set
	|| level.is_set;
}

bool PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::Isis::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(system_id.yfilter)
	|| ydk::is_set(level.yfilter);
}

std::string PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::Isis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::Isis::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (system_id.is_set || is_set(system_id.yfilter)) leaf_name_data.push_back(system_id.get_name_leafdata());
    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::Isis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::Isis::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::Isis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "system-id")
    {
        system_id = value;
        system_id.value_namespace = name_space;
        system_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
}

void PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::Isis::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "system-id")
    {
        system_id.yfilter = yfilter;
    }
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
}

bool PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::Isis::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "system-id" || name == "level")
        return true;
    return false;
}

PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::Ospf::Ospf()
    :
    router_id{YType::str, "router-id"},
    area{YType::uint32, "area"}
{

    yang_name = "ospf"; yang_parent_name = "igp"; is_top_level_class = false; has_list_ancestor = true;
}

PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::Ospf::~Ospf()
{
}

bool PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::Ospf::has_data() const
{
    return router_id.is_set
	|| area.is_set;
}

bool PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::Ospf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(router_id.yfilter)
	|| ydk::is_set(area.yfilter);
}

std::string PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::Ospf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::Ospf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());
    if (area.is_set || is_set(area.yfilter)) leaf_name_data.push_back(area.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::Ospf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::Ospf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::Ospf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area")
    {
        area = value;
        area.value_namespace = name_space;
        area.value_namespace_prefix = name_space_prefix;
    }
}

void PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::Ospf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
    if(value_path == "area")
    {
        area.yfilter = yfilter;
    }
}

bool PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::Ospf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "router-id" || name == "area")
        return true;
    return false;
}

PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::Bgp::Bgp()
    :
    router_id{YType::str, "router-id"},
    confed_asn{YType::uint32, "confed-asn"}
{

    yang_name = "bgp"; yang_parent_name = "igp"; is_top_level_class = false; has_list_ancestor = true;
}

PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::Bgp::~Bgp()
{
}

bool PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::Bgp::has_data() const
{
    return router_id.is_set
	|| confed_asn.is_set;
}

bool PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::Bgp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(router_id.yfilter)
	|| ydk::is_set(confed_asn.yfilter);
}

std::string PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::Bgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::Bgp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());
    if (confed_asn.is_set || is_set(confed_asn.yfilter)) leaf_name_data.push_back(confed_asn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::Bgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::Bgp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::Bgp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "confed-asn")
    {
        confed_asn = value;
        confed_asn.value_namespace = name_space;
        confed_asn.value_namespace_prefix = name_space_prefix;
    }
}

void PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::Bgp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
    if(value_path == "confed-asn")
    {
        confed_asn.yfilter = yfilter;
    }
}

bool PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::Bgp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "router-id" || name == "confed-asn")
        return true;
    return false;
}

PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::SrgbInformation()
    :
    start{YType::uint32, "start"},
    size{YType::uint32, "size"}
    	,
    igp_srgb(std::make_shared<PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::IgpSrgb>())
{
    igp_srgb->parent = this;

    yang_name = "srgb-information"; yang_parent_name = "node-protocol-identifier"; is_top_level_class = false; has_list_ancestor = true;
}

PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::~SrgbInformation()
{
}

bool PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::has_data() const
{
    return start.is_set
	|| size.is_set
	|| (igp_srgb !=  nullptr && igp_srgb->has_data());
}

bool PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(start.yfilter)
	|| ydk::is_set(size.yfilter)
	|| (igp_srgb !=  nullptr && igp_srgb->has_operation());
}

std::string PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srgb-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (start.is_set || is_set(start.yfilter)) leaf_name_data.push_back(start.get_name_leafdata());
    if (size.is_set || is_set(size.yfilter)) leaf_name_data.push_back(size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "igp-srgb")
    {
        if(igp_srgb == nullptr)
        {
            igp_srgb = std::make_shared<PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::IgpSrgb>();
        }
        return igp_srgb;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(igp_srgb != nullptr)
    {
        children["igp-srgb"] = igp_srgb;
    }

    return children;
}

void PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "start")
    {
        start = value;
        start.value_namespace = name_space;
        start.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "size")
    {
        size = value;
        size.value_namespace = name_space;
        size.value_namespace_prefix = name_space_prefix;
    }
}

void PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "start")
    {
        start.yfilter = yfilter;
    }
    if(value_path == "size")
    {
        size.yfilter = yfilter;
    }
}

bool PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "igp-srgb" || name == "start" || name == "size")
        return true;
    return false;
}

PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::IgpSrgb()
    :
    igp_id{YType::enumeration, "igp-id"}
    	,
    isis(std::make_shared<PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Isis>())
	,ospf(std::make_shared<PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Ospf>())
	,bgp(std::make_shared<PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Bgp>())
{
    isis->parent = this;
    ospf->parent = this;
    bgp->parent = this;

    yang_name = "igp-srgb"; yang_parent_name = "srgb-information"; is_top_level_class = false; has_list_ancestor = true;
}

PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::~IgpSrgb()
{
}

bool PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::has_data() const
{
    return igp_id.is_set
	|| (isis !=  nullptr && isis->has_data())
	|| (ospf !=  nullptr && ospf->has_data())
	|| (bgp !=  nullptr && bgp->has_data());
}

bool PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(igp_id.yfilter)
	|| (isis !=  nullptr && isis->has_operation())
	|| (ospf !=  nullptr && ospf->has_operation())
	|| (bgp !=  nullptr && bgp->has_operation());
}

std::string PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "igp-srgb";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (igp_id.is_set || is_set(igp_id.yfilter)) leaf_name_data.push_back(igp_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "isis")
    {
        if(isis == nullptr)
        {
            isis = std::make_shared<PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Isis>();
        }
        return isis;
    }

    if(child_yang_name == "ospf")
    {
        if(ospf == nullptr)
        {
            ospf = std::make_shared<PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Ospf>();
        }
        return ospf;
    }

    if(child_yang_name == "bgp")
    {
        if(bgp == nullptr)
        {
            bgp = std::make_shared<PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Bgp>();
        }
        return bgp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(isis != nullptr)
    {
        children["isis"] = isis;
    }

    if(ospf != nullptr)
    {
        children["ospf"] = ospf;
    }

    if(bgp != nullptr)
    {
        children["bgp"] = bgp;
    }

    return children;
}

void PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "igp-id")
    {
        igp_id = value;
        igp_id.value_namespace = name_space;
        igp_id.value_namespace_prefix = name_space_prefix;
    }
}

void PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "igp-id")
    {
        igp_id.yfilter = yfilter;
    }
}

bool PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "isis" || name == "ospf" || name == "bgp" || name == "igp-id")
        return true;
    return false;
}

PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Isis::Isis()
    :
    system_id{YType::str, "system-id"},
    level{YType::uint32, "level"}
{

    yang_name = "isis"; yang_parent_name = "igp-srgb"; is_top_level_class = false; has_list_ancestor = true;
}

PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Isis::~Isis()
{
}

bool PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Isis::has_data() const
{
    return system_id.is_set
	|| level.is_set;
}

bool PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Isis::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(system_id.yfilter)
	|| ydk::is_set(level.yfilter);
}

std::string PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Isis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Isis::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (system_id.is_set || is_set(system_id.yfilter)) leaf_name_data.push_back(system_id.get_name_leafdata());
    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Isis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Isis::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Isis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "system-id")
    {
        system_id = value;
        system_id.value_namespace = name_space;
        system_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
}

void PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Isis::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "system-id")
    {
        system_id.yfilter = yfilter;
    }
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
}

bool PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Isis::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "system-id" || name == "level")
        return true;
    return false;
}

PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Ospf::Ospf()
    :
    router_id{YType::str, "router-id"},
    area{YType::uint32, "area"}
{

    yang_name = "ospf"; yang_parent_name = "igp-srgb"; is_top_level_class = false; has_list_ancestor = true;
}

PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Ospf::~Ospf()
{
}

bool PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Ospf::has_data() const
{
    return router_id.is_set
	|| area.is_set;
}

bool PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Ospf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(router_id.yfilter)
	|| ydk::is_set(area.yfilter);
}

std::string PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Ospf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Ospf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());
    if (area.is_set || is_set(area.yfilter)) leaf_name_data.push_back(area.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Ospf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Ospf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Ospf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area")
    {
        area = value;
        area.value_namespace = name_space;
        area.value_namespace_prefix = name_space_prefix;
    }
}

void PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Ospf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
    if(value_path == "area")
    {
        area.yfilter = yfilter;
    }
}

bool PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Ospf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "router-id" || name == "area")
        return true;
    return false;
}

PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Bgp::Bgp()
    :
    router_id{YType::str, "router-id"},
    confed_asn{YType::uint32, "confed-asn"}
{

    yang_name = "bgp"; yang_parent_name = "igp-srgb"; is_top_level_class = false; has_list_ancestor = true;
}

PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Bgp::~Bgp()
{
}

bool PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Bgp::has_data() const
{
    return router_id.is_set
	|| confed_asn.is_set;
}

bool PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Bgp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(router_id.yfilter)
	|| ydk::is_set(confed_asn.yfilter);
}

std::string PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Bgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Bgp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());
    if (confed_asn.is_set || is_set(confed_asn.yfilter)) leaf_name_data.push_back(confed_asn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Bgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Bgp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Bgp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "confed-asn")
    {
        confed_asn = value;
        confed_asn.value_namespace = name_space;
        confed_asn.value_namespace_prefix = name_space_prefix;
    }
}

void PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Bgp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
    if(value_path == "confed-asn")
    {
        confed_asn.yfilter = yfilter;
    }
}

bool PceTopology::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Bgp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "router-id" || name == "confed-asn")
        return true;
    return false;
}

PceTopology::TopologyNodes::TopologyNode::PrefixSid::PrefixSid()
    :
    sid_type{YType::enumeration, "sid-type"},
    mpls_label{YType::uint32, "mpls-label"},
    domain_identifier{YType::uint64, "domain-identifier"},
    rflag{YType::boolean, "rflag"},
    nflag{YType::boolean, "nflag"},
    pflag{YType::boolean, "pflag"},
    eflag{YType::boolean, "eflag"},
    vflag{YType::boolean, "vflag"},
    lflag{YType::boolean, "lflag"}
    	,
    sid_prefix(std::make_shared<PceTopology::TopologyNodes::TopologyNode::PrefixSid::SidPrefix>())
{
    sid_prefix->parent = this;

    yang_name = "prefix-sid"; yang_parent_name = "topology-node"; is_top_level_class = false; has_list_ancestor = true;
}

PceTopology::TopologyNodes::TopologyNode::PrefixSid::~PrefixSid()
{
}

bool PceTopology::TopologyNodes::TopologyNode::PrefixSid::has_data() const
{
    return sid_type.is_set
	|| mpls_label.is_set
	|| domain_identifier.is_set
	|| rflag.is_set
	|| nflag.is_set
	|| pflag.is_set
	|| eflag.is_set
	|| vflag.is_set
	|| lflag.is_set
	|| (sid_prefix !=  nullptr && sid_prefix->has_data());
}

bool PceTopology::TopologyNodes::TopologyNode::PrefixSid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sid_type.yfilter)
	|| ydk::is_set(mpls_label.yfilter)
	|| ydk::is_set(domain_identifier.yfilter)
	|| ydk::is_set(rflag.yfilter)
	|| ydk::is_set(nflag.yfilter)
	|| ydk::is_set(pflag.yfilter)
	|| ydk::is_set(eflag.yfilter)
	|| ydk::is_set(vflag.yfilter)
	|| ydk::is_set(lflag.yfilter)
	|| (sid_prefix !=  nullptr && sid_prefix->has_operation());
}

std::string PceTopology::TopologyNodes::TopologyNode::PrefixSid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-sid";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::TopologyNodes::TopologyNode::PrefixSid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sid_type.is_set || is_set(sid_type.yfilter)) leaf_name_data.push_back(sid_type.get_name_leafdata());
    if (mpls_label.is_set || is_set(mpls_label.yfilter)) leaf_name_data.push_back(mpls_label.get_name_leafdata());
    if (domain_identifier.is_set || is_set(domain_identifier.yfilter)) leaf_name_data.push_back(domain_identifier.get_name_leafdata());
    if (rflag.is_set || is_set(rflag.yfilter)) leaf_name_data.push_back(rflag.get_name_leafdata());
    if (nflag.is_set || is_set(nflag.yfilter)) leaf_name_data.push_back(nflag.get_name_leafdata());
    if (pflag.is_set || is_set(pflag.yfilter)) leaf_name_data.push_back(pflag.get_name_leafdata());
    if (eflag.is_set || is_set(eflag.yfilter)) leaf_name_data.push_back(eflag.get_name_leafdata());
    if (vflag.is_set || is_set(vflag.yfilter)) leaf_name_data.push_back(vflag.get_name_leafdata());
    if (lflag.is_set || is_set(lflag.yfilter)) leaf_name_data.push_back(lflag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PceTopology::TopologyNodes::TopologyNode::PrefixSid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sid-prefix")
    {
        if(sid_prefix == nullptr)
        {
            sid_prefix = std::make_shared<PceTopology::TopologyNodes::TopologyNode::PrefixSid::SidPrefix>();
        }
        return sid_prefix;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PceTopology::TopologyNodes::TopologyNode::PrefixSid::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(sid_prefix != nullptr)
    {
        children["sid-prefix"] = sid_prefix;
    }

    return children;
}

void PceTopology::TopologyNodes::TopologyNode::PrefixSid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sid-type")
    {
        sid_type = value;
        sid_type.value_namespace = name_space;
        sid_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-label")
    {
        mpls_label = value;
        mpls_label.value_namespace = name_space;
        mpls_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "domain-identifier")
    {
        domain_identifier = value;
        domain_identifier.value_namespace = name_space;
        domain_identifier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rflag")
    {
        rflag = value;
        rflag.value_namespace = name_space;
        rflag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nflag")
    {
        nflag = value;
        nflag.value_namespace = name_space;
        nflag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pflag")
    {
        pflag = value;
        pflag.value_namespace = name_space;
        pflag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eflag")
    {
        eflag = value;
        eflag.value_namespace = name_space;
        eflag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vflag")
    {
        vflag = value;
        vflag.value_namespace = name_space;
        vflag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lflag")
    {
        lflag = value;
        lflag.value_namespace = name_space;
        lflag.value_namespace_prefix = name_space_prefix;
    }
}

void PceTopology::TopologyNodes::TopologyNode::PrefixSid::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sid-type")
    {
        sid_type.yfilter = yfilter;
    }
    if(value_path == "mpls-label")
    {
        mpls_label.yfilter = yfilter;
    }
    if(value_path == "domain-identifier")
    {
        domain_identifier.yfilter = yfilter;
    }
    if(value_path == "rflag")
    {
        rflag.yfilter = yfilter;
    }
    if(value_path == "nflag")
    {
        nflag.yfilter = yfilter;
    }
    if(value_path == "pflag")
    {
        pflag.yfilter = yfilter;
    }
    if(value_path == "eflag")
    {
        eflag.yfilter = yfilter;
    }
    if(value_path == "vflag")
    {
        vflag.yfilter = yfilter;
    }
    if(value_path == "lflag")
    {
        lflag.yfilter = yfilter;
    }
}

bool PceTopology::TopologyNodes::TopologyNode::PrefixSid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sid-prefix" || name == "sid-type" || name == "mpls-label" || name == "domain-identifier" || name == "rflag" || name == "nflag" || name == "pflag" || name == "eflag" || name == "vflag" || name == "lflag")
        return true;
    return false;
}

PceTopology::TopologyNodes::TopologyNode::PrefixSid::SidPrefix::SidPrefix()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "sid-prefix"; yang_parent_name = "prefix-sid"; is_top_level_class = false; has_list_ancestor = true;
}

PceTopology::TopologyNodes::TopologyNode::PrefixSid::SidPrefix::~SidPrefix()
{
}

bool PceTopology::TopologyNodes::TopologyNode::PrefixSid::SidPrefix::has_data() const
{
    return af_name.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool PceTopology::TopologyNodes::TopologyNode::PrefixSid::SidPrefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string PceTopology::TopologyNodes::TopologyNode::PrefixSid::SidPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sid-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::TopologyNodes::TopologyNode::PrefixSid::SidPrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PceTopology::TopologyNodes::TopologyNode::PrefixSid::SidPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PceTopology::TopologyNodes::TopologyNode::PrefixSid::SidPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PceTopology::TopologyNodes::TopologyNode::PrefixSid::SidPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void PceTopology::TopologyNodes::TopologyNode::PrefixSid::SidPrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
}

bool PceTopology::TopologyNodes::TopologyNode::PrefixSid::SidPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

PceTopology::TopologyNodes::TopologyNode::Ipv4Link::Ipv4Link()
    :
    local_ipv4_address{YType::str, "local-ipv4-address"},
    remote_ipv4_address{YType::str, "remote-ipv4-address"},
    igp_metric{YType::uint32, "igp-metric"},
    te_metric{YType::uint32, "te-metric"},
    maximum_link_bandwidth{YType::uint64, "maximum-link-bandwidth"},
    max_reservable_bandwidth{YType::uint64, "max-reservable-bandwidth"},
    srlgs{YType::uint32, "srlgs"}
    	,
    local_igp_information(std::make_shared<PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation>())
	,remote_node_protocol_identifier(std::make_shared<PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier>())
{
    local_igp_information->parent = this;
    remote_node_protocol_identifier->parent = this;

    yang_name = "ipv4-link"; yang_parent_name = "topology-node"; is_top_level_class = false; has_list_ancestor = true;
}

PceTopology::TopologyNodes::TopologyNode::Ipv4Link::~Ipv4Link()
{
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv4Link::has_data() const
{
    for (std::size_t index=0; index<adjacency_sid.size(); index++)
    {
        if(adjacency_sid[index]->has_data())
            return true;
    }
    for (auto const & leaf : srlgs.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return local_ipv4_address.is_set
	|| remote_ipv4_address.is_set
	|| igp_metric.is_set
	|| te_metric.is_set
	|| maximum_link_bandwidth.is_set
	|| max_reservable_bandwidth.is_set
	|| (local_igp_information !=  nullptr && local_igp_information->has_data())
	|| (remote_node_protocol_identifier !=  nullptr && remote_node_protocol_identifier->has_data());
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv4Link::has_operation() const
{
    for (std::size_t index=0; index<adjacency_sid.size(); index++)
    {
        if(adjacency_sid[index]->has_operation())
            return true;
    }
    for (auto const & leaf : srlgs.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(local_ipv4_address.yfilter)
	|| ydk::is_set(remote_ipv4_address.yfilter)
	|| ydk::is_set(igp_metric.yfilter)
	|| ydk::is_set(te_metric.yfilter)
	|| ydk::is_set(maximum_link_bandwidth.yfilter)
	|| ydk::is_set(max_reservable_bandwidth.yfilter)
	|| ydk::is_set(srlgs.yfilter)
	|| (local_igp_information !=  nullptr && local_igp_information->has_operation())
	|| (remote_node_protocol_identifier !=  nullptr && remote_node_protocol_identifier->has_operation());
}

std::string PceTopology::TopologyNodes::TopologyNode::Ipv4Link::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-link";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::TopologyNodes::TopologyNode::Ipv4Link::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_ipv4_address.is_set || is_set(local_ipv4_address.yfilter)) leaf_name_data.push_back(local_ipv4_address.get_name_leafdata());
    if (remote_ipv4_address.is_set || is_set(remote_ipv4_address.yfilter)) leaf_name_data.push_back(remote_ipv4_address.get_name_leafdata());
    if (igp_metric.is_set || is_set(igp_metric.yfilter)) leaf_name_data.push_back(igp_metric.get_name_leafdata());
    if (te_metric.is_set || is_set(te_metric.yfilter)) leaf_name_data.push_back(te_metric.get_name_leafdata());
    if (maximum_link_bandwidth.is_set || is_set(maximum_link_bandwidth.yfilter)) leaf_name_data.push_back(maximum_link_bandwidth.get_name_leafdata());
    if (max_reservable_bandwidth.is_set || is_set(max_reservable_bandwidth.yfilter)) leaf_name_data.push_back(max_reservable_bandwidth.get_name_leafdata());

    auto srlgs_name_datas = srlgs.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), srlgs_name_datas.begin(), srlgs_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> PceTopology::TopologyNodes::TopologyNode::Ipv4Link::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "local-igp-information")
    {
        if(local_igp_information == nullptr)
        {
            local_igp_information = std::make_shared<PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation>();
        }
        return local_igp_information;
    }

    if(child_yang_name == "remote-node-protocol-identifier")
    {
        if(remote_node_protocol_identifier == nullptr)
        {
            remote_node_protocol_identifier = std::make_shared<PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier>();
        }
        return remote_node_protocol_identifier;
    }

    if(child_yang_name == "adjacency-sid")
    {
        auto c = std::make_shared<PceTopology::TopologyNodes::TopologyNode::Ipv4Link::AdjacencySid>();
        c->parent = this;
        adjacency_sid.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PceTopology::TopologyNodes::TopologyNode::Ipv4Link::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(local_igp_information != nullptr)
    {
        children["local-igp-information"] = local_igp_information;
    }

    if(remote_node_protocol_identifier != nullptr)
    {
        children["remote-node-protocol-identifier"] = remote_node_protocol_identifier;
    }

    count = 0;
    for (auto const & c : adjacency_sid)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PceTopology::TopologyNodes::TopologyNode::Ipv4Link::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "local-ipv4-address")
    {
        local_ipv4_address = value;
        local_ipv4_address.value_namespace = name_space;
        local_ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-ipv4-address")
    {
        remote_ipv4_address = value;
        remote_ipv4_address.value_namespace = name_space;
        remote_ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igp-metric")
    {
        igp_metric = value;
        igp_metric.value_namespace = name_space;
        igp_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "te-metric")
    {
        te_metric = value;
        te_metric.value_namespace = name_space;
        te_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-link-bandwidth")
    {
        maximum_link_bandwidth = value;
        maximum_link_bandwidth.value_namespace = name_space;
        maximum_link_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-reservable-bandwidth")
    {
        max_reservable_bandwidth = value;
        max_reservable_bandwidth.value_namespace = name_space;
        max_reservable_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srlgs")
    {
        srlgs.append(value);
    }
}

void PceTopology::TopologyNodes::TopologyNode::Ipv4Link::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "local-ipv4-address")
    {
        local_ipv4_address.yfilter = yfilter;
    }
    if(value_path == "remote-ipv4-address")
    {
        remote_ipv4_address.yfilter = yfilter;
    }
    if(value_path == "igp-metric")
    {
        igp_metric.yfilter = yfilter;
    }
    if(value_path == "te-metric")
    {
        te_metric.yfilter = yfilter;
    }
    if(value_path == "maximum-link-bandwidth")
    {
        maximum_link_bandwidth.yfilter = yfilter;
    }
    if(value_path == "max-reservable-bandwidth")
    {
        max_reservable_bandwidth.yfilter = yfilter;
    }
    if(value_path == "srlgs")
    {
        srlgs.yfilter = yfilter;
    }
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv4Link::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local-igp-information" || name == "remote-node-protocol-identifier" || name == "adjacency-sid" || name == "local-ipv4-address" || name == "remote-ipv4-address" || name == "igp-metric" || name == "te-metric" || name == "maximum-link-bandwidth" || name == "max-reservable-bandwidth" || name == "srlgs")
        return true;
    return false;
}

PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::LocalIgpInformation()
    :
    domain_identifier{YType::uint64, "domain-identifier"},
    autonomous_system_number{YType::uint32, "autonomous-system-number"}
    	,
    igp(std::make_shared<PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp>())
{
    igp->parent = this;

    yang_name = "local-igp-information"; yang_parent_name = "ipv4-link"; is_top_level_class = false; has_list_ancestor = true;
}

PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::~LocalIgpInformation()
{
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::has_data() const
{
    return domain_identifier.is_set
	|| autonomous_system_number.is_set
	|| (igp !=  nullptr && igp->has_data());
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(domain_identifier.yfilter)
	|| ydk::is_set(autonomous_system_number.yfilter)
	|| (igp !=  nullptr && igp->has_operation());
}

std::string PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-igp-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (domain_identifier.is_set || is_set(domain_identifier.yfilter)) leaf_name_data.push_back(domain_identifier.get_name_leafdata());
    if (autonomous_system_number.is_set || is_set(autonomous_system_number.yfilter)) leaf_name_data.push_back(autonomous_system_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "igp")
    {
        if(igp == nullptr)
        {
            igp = std::make_shared<PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp>();
        }
        return igp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(igp != nullptr)
    {
        children["igp"] = igp;
    }

    return children;
}

void PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "domain-identifier")
    {
        domain_identifier = value;
        domain_identifier.value_namespace = name_space;
        domain_identifier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "autonomous-system-number")
    {
        autonomous_system_number = value;
        autonomous_system_number.value_namespace = name_space;
        autonomous_system_number.value_namespace_prefix = name_space_prefix;
    }
}

void PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "domain-identifier")
    {
        domain_identifier.yfilter = yfilter;
    }
    if(value_path == "autonomous-system-number")
    {
        autonomous_system_number.yfilter = yfilter;
    }
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "igp" || name == "domain-identifier" || name == "autonomous-system-number")
        return true;
    return false;
}

PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::Igp()
    :
    igp_id{YType::enumeration, "igp-id"}
    	,
    isis(std::make_shared<PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::Isis>())
	,ospf(std::make_shared<PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::Ospf>())
	,bgp(std::make_shared<PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::Bgp>())
{
    isis->parent = this;
    ospf->parent = this;
    bgp->parent = this;

    yang_name = "igp"; yang_parent_name = "local-igp-information"; is_top_level_class = false; has_list_ancestor = true;
}

PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::~Igp()
{
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::has_data() const
{
    return igp_id.is_set
	|| (isis !=  nullptr && isis->has_data())
	|| (ospf !=  nullptr && ospf->has_data())
	|| (bgp !=  nullptr && bgp->has_data());
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(igp_id.yfilter)
	|| (isis !=  nullptr && isis->has_operation())
	|| (ospf !=  nullptr && ospf->has_operation())
	|| (bgp !=  nullptr && bgp->has_operation());
}

std::string PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "igp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (igp_id.is_set || is_set(igp_id.yfilter)) leaf_name_data.push_back(igp_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "isis")
    {
        if(isis == nullptr)
        {
            isis = std::make_shared<PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::Isis>();
        }
        return isis;
    }

    if(child_yang_name == "ospf")
    {
        if(ospf == nullptr)
        {
            ospf = std::make_shared<PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::Ospf>();
        }
        return ospf;
    }

    if(child_yang_name == "bgp")
    {
        if(bgp == nullptr)
        {
            bgp = std::make_shared<PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::Bgp>();
        }
        return bgp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(isis != nullptr)
    {
        children["isis"] = isis;
    }

    if(ospf != nullptr)
    {
        children["ospf"] = ospf;
    }

    if(bgp != nullptr)
    {
        children["bgp"] = bgp;
    }

    return children;
}

void PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "igp-id")
    {
        igp_id = value;
        igp_id.value_namespace = name_space;
        igp_id.value_namespace_prefix = name_space_prefix;
    }
}

void PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "igp-id")
    {
        igp_id.yfilter = yfilter;
    }
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "isis" || name == "ospf" || name == "bgp" || name == "igp-id")
        return true;
    return false;
}

PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::Isis::Isis()
    :
    system_id{YType::str, "system-id"},
    level{YType::uint32, "level"}
{

    yang_name = "isis"; yang_parent_name = "igp"; is_top_level_class = false; has_list_ancestor = true;
}

PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::Isis::~Isis()
{
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::Isis::has_data() const
{
    return system_id.is_set
	|| level.is_set;
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::Isis::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(system_id.yfilter)
	|| ydk::is_set(level.yfilter);
}

std::string PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::Isis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::Isis::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (system_id.is_set || is_set(system_id.yfilter)) leaf_name_data.push_back(system_id.get_name_leafdata());
    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::Isis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::Isis::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::Isis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "system-id")
    {
        system_id = value;
        system_id.value_namespace = name_space;
        system_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
}

void PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::Isis::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "system-id")
    {
        system_id.yfilter = yfilter;
    }
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::Isis::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "system-id" || name == "level")
        return true;
    return false;
}

PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::Ospf::Ospf()
    :
    router_id{YType::str, "router-id"},
    area{YType::uint32, "area"}
{

    yang_name = "ospf"; yang_parent_name = "igp"; is_top_level_class = false; has_list_ancestor = true;
}

PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::Ospf::~Ospf()
{
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::Ospf::has_data() const
{
    return router_id.is_set
	|| area.is_set;
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::Ospf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(router_id.yfilter)
	|| ydk::is_set(area.yfilter);
}

std::string PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::Ospf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::Ospf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());
    if (area.is_set || is_set(area.yfilter)) leaf_name_data.push_back(area.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::Ospf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::Ospf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::Ospf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area")
    {
        area = value;
        area.value_namespace = name_space;
        area.value_namespace_prefix = name_space_prefix;
    }
}

void PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::Ospf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
    if(value_path == "area")
    {
        area.yfilter = yfilter;
    }
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::Ospf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "router-id" || name == "area")
        return true;
    return false;
}

PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::Bgp::Bgp()
    :
    router_id{YType::str, "router-id"},
    confed_asn{YType::uint32, "confed-asn"}
{

    yang_name = "bgp"; yang_parent_name = "igp"; is_top_level_class = false; has_list_ancestor = true;
}

PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::Bgp::~Bgp()
{
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::Bgp::has_data() const
{
    return router_id.is_set
	|| confed_asn.is_set;
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::Bgp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(router_id.yfilter)
	|| ydk::is_set(confed_asn.yfilter);
}

std::string PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::Bgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::Bgp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());
    if (confed_asn.is_set || is_set(confed_asn.yfilter)) leaf_name_data.push_back(confed_asn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::Bgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::Bgp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::Bgp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "confed-asn")
    {
        confed_asn = value;
        confed_asn.value_namespace = name_space;
        confed_asn.value_namespace_prefix = name_space_prefix;
    }
}

void PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::Bgp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
    if(value_path == "confed-asn")
    {
        confed_asn.yfilter = yfilter;
    }
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::Bgp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "router-id" || name == "confed-asn")
        return true;
    return false;
}

PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::RemoteNodeProtocolIdentifier()
    :
    node_name{YType::str, "node-name"},
    ipv4_bgp_router_id_set{YType::boolean, "ipv4-bgp-router-id-set"},
    ipv4_bgp_router_id{YType::str, "ipv4-bgp-router-id"},
    ipv4te_router_id_set{YType::boolean, "ipv4te-router-id-set"},
    ipv4te_router_id{YType::str, "ipv4te-router-id"}
{

    yang_name = "remote-node-protocol-identifier"; yang_parent_name = "ipv4-link"; is_top_level_class = false; has_list_ancestor = true;
}

PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::~RemoteNodeProtocolIdentifier()
{
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::has_data() const
{
    for (std::size_t index=0; index<igp_information.size(); index++)
    {
        if(igp_information[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<srgb_information.size(); index++)
    {
        if(srgb_information[index]->has_data())
            return true;
    }
    return node_name.is_set
	|| ipv4_bgp_router_id_set.is_set
	|| ipv4_bgp_router_id.is_set
	|| ipv4te_router_id_set.is_set
	|| ipv4te_router_id.is_set;
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::has_operation() const
{
    for (std::size_t index=0; index<igp_information.size(); index++)
    {
        if(igp_information[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<srgb_information.size(); index++)
    {
        if(srgb_information[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(node_name.yfilter)
	|| ydk::is_set(ipv4_bgp_router_id_set.yfilter)
	|| ydk::is_set(ipv4_bgp_router_id.yfilter)
	|| ydk::is_set(ipv4te_router_id_set.yfilter)
	|| ydk::is_set(ipv4te_router_id.yfilter);
}

std::string PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-node-protocol-identifier";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());
    if (ipv4_bgp_router_id_set.is_set || is_set(ipv4_bgp_router_id_set.yfilter)) leaf_name_data.push_back(ipv4_bgp_router_id_set.get_name_leafdata());
    if (ipv4_bgp_router_id.is_set || is_set(ipv4_bgp_router_id.yfilter)) leaf_name_data.push_back(ipv4_bgp_router_id.get_name_leafdata());
    if (ipv4te_router_id_set.is_set || is_set(ipv4te_router_id_set.yfilter)) leaf_name_data.push_back(ipv4te_router_id_set.get_name_leafdata());
    if (ipv4te_router_id.is_set || is_set(ipv4te_router_id.yfilter)) leaf_name_data.push_back(ipv4te_router_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "igp-information")
    {
        auto c = std::make_shared<PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation>();
        c->parent = this;
        igp_information.push_back(c);
        return c;
    }

    if(child_yang_name == "srgb-information")
    {
        auto c = std::make_shared<PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation>();
        c->parent = this;
        srgb_information.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : igp_information)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : srgb_information)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-name")
    {
        node_name = value;
        node_name.value_namespace = name_space;
        node_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-bgp-router-id-set")
    {
        ipv4_bgp_router_id_set = value;
        ipv4_bgp_router_id_set.value_namespace = name_space;
        ipv4_bgp_router_id_set.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-bgp-router-id")
    {
        ipv4_bgp_router_id = value;
        ipv4_bgp_router_id.value_namespace = name_space;
        ipv4_bgp_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4te-router-id-set")
    {
        ipv4te_router_id_set = value;
        ipv4te_router_id_set.value_namespace = name_space;
        ipv4te_router_id_set.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4te-router-id")
    {
        ipv4te_router_id = value;
        ipv4te_router_id.value_namespace = name_space;
        ipv4te_router_id.value_namespace_prefix = name_space_prefix;
    }
}

void PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-name")
    {
        node_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-bgp-router-id-set")
    {
        ipv4_bgp_router_id_set.yfilter = yfilter;
    }
    if(value_path == "ipv4-bgp-router-id")
    {
        ipv4_bgp_router_id.yfilter = yfilter;
    }
    if(value_path == "ipv4te-router-id-set")
    {
        ipv4te_router_id_set.yfilter = yfilter;
    }
    if(value_path == "ipv4te-router-id")
    {
        ipv4te_router_id.yfilter = yfilter;
    }
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "igp-information" || name == "srgb-information" || name == "node-name" || name == "ipv4-bgp-router-id-set" || name == "ipv4-bgp-router-id" || name == "ipv4te-router-id-set" || name == "ipv4te-router-id")
        return true;
    return false;
}

PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::IgpInformation()
    :
    domain_identifier{YType::uint64, "domain-identifier"},
    autonomous_system_number{YType::uint32, "autonomous-system-number"}
    	,
    igp(std::make_shared<PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp>())
{
    igp->parent = this;

    yang_name = "igp-information"; yang_parent_name = "remote-node-protocol-identifier"; is_top_level_class = false; has_list_ancestor = true;
}

PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::~IgpInformation()
{
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::has_data() const
{
    return domain_identifier.is_set
	|| autonomous_system_number.is_set
	|| (igp !=  nullptr && igp->has_data());
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(domain_identifier.yfilter)
	|| ydk::is_set(autonomous_system_number.yfilter)
	|| (igp !=  nullptr && igp->has_operation());
}

std::string PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "igp-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (domain_identifier.is_set || is_set(domain_identifier.yfilter)) leaf_name_data.push_back(domain_identifier.get_name_leafdata());
    if (autonomous_system_number.is_set || is_set(autonomous_system_number.yfilter)) leaf_name_data.push_back(autonomous_system_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "igp")
    {
        if(igp == nullptr)
        {
            igp = std::make_shared<PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp>();
        }
        return igp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(igp != nullptr)
    {
        children["igp"] = igp;
    }

    return children;
}

void PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "domain-identifier")
    {
        domain_identifier = value;
        domain_identifier.value_namespace = name_space;
        domain_identifier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "autonomous-system-number")
    {
        autonomous_system_number = value;
        autonomous_system_number.value_namespace = name_space;
        autonomous_system_number.value_namespace_prefix = name_space_prefix;
    }
}

void PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "domain-identifier")
    {
        domain_identifier.yfilter = yfilter;
    }
    if(value_path == "autonomous-system-number")
    {
        autonomous_system_number.yfilter = yfilter;
    }
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "igp" || name == "domain-identifier" || name == "autonomous-system-number")
        return true;
    return false;
}

PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Igp()
    :
    igp_id{YType::enumeration, "igp-id"}
    	,
    isis(std::make_shared<PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Isis>())
	,ospf(std::make_shared<PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Ospf>())
	,bgp(std::make_shared<PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Bgp>())
{
    isis->parent = this;
    ospf->parent = this;
    bgp->parent = this;

    yang_name = "igp"; yang_parent_name = "igp-information"; is_top_level_class = false; has_list_ancestor = true;
}

PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::~Igp()
{
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::has_data() const
{
    return igp_id.is_set
	|| (isis !=  nullptr && isis->has_data())
	|| (ospf !=  nullptr && ospf->has_data())
	|| (bgp !=  nullptr && bgp->has_data());
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(igp_id.yfilter)
	|| (isis !=  nullptr && isis->has_operation())
	|| (ospf !=  nullptr && ospf->has_operation())
	|| (bgp !=  nullptr && bgp->has_operation());
}

std::string PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "igp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (igp_id.is_set || is_set(igp_id.yfilter)) leaf_name_data.push_back(igp_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "isis")
    {
        if(isis == nullptr)
        {
            isis = std::make_shared<PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Isis>();
        }
        return isis;
    }

    if(child_yang_name == "ospf")
    {
        if(ospf == nullptr)
        {
            ospf = std::make_shared<PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Ospf>();
        }
        return ospf;
    }

    if(child_yang_name == "bgp")
    {
        if(bgp == nullptr)
        {
            bgp = std::make_shared<PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Bgp>();
        }
        return bgp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(isis != nullptr)
    {
        children["isis"] = isis;
    }

    if(ospf != nullptr)
    {
        children["ospf"] = ospf;
    }

    if(bgp != nullptr)
    {
        children["bgp"] = bgp;
    }

    return children;
}

void PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "igp-id")
    {
        igp_id = value;
        igp_id.value_namespace = name_space;
        igp_id.value_namespace_prefix = name_space_prefix;
    }
}

void PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "igp-id")
    {
        igp_id.yfilter = yfilter;
    }
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "isis" || name == "ospf" || name == "bgp" || name == "igp-id")
        return true;
    return false;
}

PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Isis::Isis()
    :
    system_id{YType::str, "system-id"},
    level{YType::uint32, "level"}
{

    yang_name = "isis"; yang_parent_name = "igp"; is_top_level_class = false; has_list_ancestor = true;
}

PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Isis::~Isis()
{
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Isis::has_data() const
{
    return system_id.is_set
	|| level.is_set;
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Isis::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(system_id.yfilter)
	|| ydk::is_set(level.yfilter);
}

std::string PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Isis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Isis::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (system_id.is_set || is_set(system_id.yfilter)) leaf_name_data.push_back(system_id.get_name_leafdata());
    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Isis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Isis::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Isis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "system-id")
    {
        system_id = value;
        system_id.value_namespace = name_space;
        system_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
}

void PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Isis::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "system-id")
    {
        system_id.yfilter = yfilter;
    }
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Isis::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "system-id" || name == "level")
        return true;
    return false;
}

PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Ospf::Ospf()
    :
    router_id{YType::str, "router-id"},
    area{YType::uint32, "area"}
{

    yang_name = "ospf"; yang_parent_name = "igp"; is_top_level_class = false; has_list_ancestor = true;
}

PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Ospf::~Ospf()
{
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Ospf::has_data() const
{
    return router_id.is_set
	|| area.is_set;
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Ospf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(router_id.yfilter)
	|| ydk::is_set(area.yfilter);
}

std::string PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Ospf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Ospf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());
    if (area.is_set || is_set(area.yfilter)) leaf_name_data.push_back(area.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Ospf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Ospf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Ospf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area")
    {
        area = value;
        area.value_namespace = name_space;
        area.value_namespace_prefix = name_space_prefix;
    }
}

void PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Ospf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
    if(value_path == "area")
    {
        area.yfilter = yfilter;
    }
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Ospf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "router-id" || name == "area")
        return true;
    return false;
}

PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Bgp::Bgp()
    :
    router_id{YType::str, "router-id"},
    confed_asn{YType::uint32, "confed-asn"}
{

    yang_name = "bgp"; yang_parent_name = "igp"; is_top_level_class = false; has_list_ancestor = true;
}

PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Bgp::~Bgp()
{
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Bgp::has_data() const
{
    return router_id.is_set
	|| confed_asn.is_set;
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Bgp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(router_id.yfilter)
	|| ydk::is_set(confed_asn.yfilter);
}

std::string PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Bgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Bgp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());
    if (confed_asn.is_set || is_set(confed_asn.yfilter)) leaf_name_data.push_back(confed_asn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Bgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Bgp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Bgp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "confed-asn")
    {
        confed_asn = value;
        confed_asn.value_namespace = name_space;
        confed_asn.value_namespace_prefix = name_space_prefix;
    }
}

void PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Bgp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
    if(value_path == "confed-asn")
    {
        confed_asn.yfilter = yfilter;
    }
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Bgp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "router-id" || name == "confed-asn")
        return true;
    return false;
}

PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::SrgbInformation()
    :
    start{YType::uint32, "start"},
    size{YType::uint32, "size"}
    	,
    igp_srgb(std::make_shared<PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb>())
{
    igp_srgb->parent = this;

    yang_name = "srgb-information"; yang_parent_name = "remote-node-protocol-identifier"; is_top_level_class = false; has_list_ancestor = true;
}

PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::~SrgbInformation()
{
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::has_data() const
{
    return start.is_set
	|| size.is_set
	|| (igp_srgb !=  nullptr && igp_srgb->has_data());
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(start.yfilter)
	|| ydk::is_set(size.yfilter)
	|| (igp_srgb !=  nullptr && igp_srgb->has_operation());
}

std::string PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srgb-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (start.is_set || is_set(start.yfilter)) leaf_name_data.push_back(start.get_name_leafdata());
    if (size.is_set || is_set(size.yfilter)) leaf_name_data.push_back(size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "igp-srgb")
    {
        if(igp_srgb == nullptr)
        {
            igp_srgb = std::make_shared<PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb>();
        }
        return igp_srgb;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(igp_srgb != nullptr)
    {
        children["igp-srgb"] = igp_srgb;
    }

    return children;
}

void PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "start")
    {
        start = value;
        start.value_namespace = name_space;
        start.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "size")
    {
        size = value;
        size.value_namespace = name_space;
        size.value_namespace_prefix = name_space_prefix;
    }
}

void PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "start")
    {
        start.yfilter = yfilter;
    }
    if(value_path == "size")
    {
        size.yfilter = yfilter;
    }
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "igp-srgb" || name == "start" || name == "size")
        return true;
    return false;
}

PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::IgpSrgb()
    :
    igp_id{YType::enumeration, "igp-id"}
    	,
    isis(std::make_shared<PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Isis>())
	,ospf(std::make_shared<PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Ospf>())
	,bgp(std::make_shared<PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Bgp>())
{
    isis->parent = this;
    ospf->parent = this;
    bgp->parent = this;

    yang_name = "igp-srgb"; yang_parent_name = "srgb-information"; is_top_level_class = false; has_list_ancestor = true;
}

PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::~IgpSrgb()
{
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::has_data() const
{
    return igp_id.is_set
	|| (isis !=  nullptr && isis->has_data())
	|| (ospf !=  nullptr && ospf->has_data())
	|| (bgp !=  nullptr && bgp->has_data());
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(igp_id.yfilter)
	|| (isis !=  nullptr && isis->has_operation())
	|| (ospf !=  nullptr && ospf->has_operation())
	|| (bgp !=  nullptr && bgp->has_operation());
}

std::string PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "igp-srgb";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (igp_id.is_set || is_set(igp_id.yfilter)) leaf_name_data.push_back(igp_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "isis")
    {
        if(isis == nullptr)
        {
            isis = std::make_shared<PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Isis>();
        }
        return isis;
    }

    if(child_yang_name == "ospf")
    {
        if(ospf == nullptr)
        {
            ospf = std::make_shared<PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Ospf>();
        }
        return ospf;
    }

    if(child_yang_name == "bgp")
    {
        if(bgp == nullptr)
        {
            bgp = std::make_shared<PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Bgp>();
        }
        return bgp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(isis != nullptr)
    {
        children["isis"] = isis;
    }

    if(ospf != nullptr)
    {
        children["ospf"] = ospf;
    }

    if(bgp != nullptr)
    {
        children["bgp"] = bgp;
    }

    return children;
}

void PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "igp-id")
    {
        igp_id = value;
        igp_id.value_namespace = name_space;
        igp_id.value_namespace_prefix = name_space_prefix;
    }
}

void PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "igp-id")
    {
        igp_id.yfilter = yfilter;
    }
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "isis" || name == "ospf" || name == "bgp" || name == "igp-id")
        return true;
    return false;
}

PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Isis::Isis()
    :
    system_id{YType::str, "system-id"},
    level{YType::uint32, "level"}
{

    yang_name = "isis"; yang_parent_name = "igp-srgb"; is_top_level_class = false; has_list_ancestor = true;
}

PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Isis::~Isis()
{
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Isis::has_data() const
{
    return system_id.is_set
	|| level.is_set;
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Isis::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(system_id.yfilter)
	|| ydk::is_set(level.yfilter);
}

std::string PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Isis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Isis::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (system_id.is_set || is_set(system_id.yfilter)) leaf_name_data.push_back(system_id.get_name_leafdata());
    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Isis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Isis::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Isis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "system-id")
    {
        system_id = value;
        system_id.value_namespace = name_space;
        system_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
}

void PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Isis::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "system-id")
    {
        system_id.yfilter = yfilter;
    }
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Isis::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "system-id" || name == "level")
        return true;
    return false;
}

PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Ospf::Ospf()
    :
    router_id{YType::str, "router-id"},
    area{YType::uint32, "area"}
{

    yang_name = "ospf"; yang_parent_name = "igp-srgb"; is_top_level_class = false; has_list_ancestor = true;
}

PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Ospf::~Ospf()
{
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Ospf::has_data() const
{
    return router_id.is_set
	|| area.is_set;
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Ospf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(router_id.yfilter)
	|| ydk::is_set(area.yfilter);
}

std::string PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Ospf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Ospf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());
    if (area.is_set || is_set(area.yfilter)) leaf_name_data.push_back(area.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Ospf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Ospf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Ospf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area")
    {
        area = value;
        area.value_namespace = name_space;
        area.value_namespace_prefix = name_space_prefix;
    }
}

void PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Ospf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
    if(value_path == "area")
    {
        area.yfilter = yfilter;
    }
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Ospf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "router-id" || name == "area")
        return true;
    return false;
}

PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Bgp::Bgp()
    :
    router_id{YType::str, "router-id"},
    confed_asn{YType::uint32, "confed-asn"}
{

    yang_name = "bgp"; yang_parent_name = "igp-srgb"; is_top_level_class = false; has_list_ancestor = true;
}

PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Bgp::~Bgp()
{
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Bgp::has_data() const
{
    return router_id.is_set
	|| confed_asn.is_set;
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Bgp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(router_id.yfilter)
	|| ydk::is_set(confed_asn.yfilter);
}

std::string PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Bgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Bgp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());
    if (confed_asn.is_set || is_set(confed_asn.yfilter)) leaf_name_data.push_back(confed_asn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Bgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Bgp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Bgp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "confed-asn")
    {
        confed_asn = value;
        confed_asn.value_namespace = name_space;
        confed_asn.value_namespace_prefix = name_space_prefix;
    }
}

void PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Bgp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
    if(value_path == "confed-asn")
    {
        confed_asn.yfilter = yfilter;
    }
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Bgp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "router-id" || name == "confed-asn")
        return true;
    return false;
}

PceTopology::TopologyNodes::TopologyNode::Ipv4Link::AdjacencySid::AdjacencySid()
    :
    sid_type{YType::enumeration, "sid-type"},
    mpls_label{YType::uint32, "mpls-label"},
    domain_identifier{YType::uint64, "domain-identifier"},
    rflag{YType::boolean, "rflag"},
    nflag{YType::boolean, "nflag"},
    pflag{YType::boolean, "pflag"},
    eflag{YType::boolean, "eflag"},
    vflag{YType::boolean, "vflag"},
    lflag{YType::boolean, "lflag"}
    	,
    sid_prefix(std::make_shared<PceTopology::TopologyNodes::TopologyNode::Ipv4Link::AdjacencySid::SidPrefix>())
{
    sid_prefix->parent = this;

    yang_name = "adjacency-sid"; yang_parent_name = "ipv4-link"; is_top_level_class = false; has_list_ancestor = true;
}

PceTopology::TopologyNodes::TopologyNode::Ipv4Link::AdjacencySid::~AdjacencySid()
{
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv4Link::AdjacencySid::has_data() const
{
    return sid_type.is_set
	|| mpls_label.is_set
	|| domain_identifier.is_set
	|| rflag.is_set
	|| nflag.is_set
	|| pflag.is_set
	|| eflag.is_set
	|| vflag.is_set
	|| lflag.is_set
	|| (sid_prefix !=  nullptr && sid_prefix->has_data());
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv4Link::AdjacencySid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sid_type.yfilter)
	|| ydk::is_set(mpls_label.yfilter)
	|| ydk::is_set(domain_identifier.yfilter)
	|| ydk::is_set(rflag.yfilter)
	|| ydk::is_set(nflag.yfilter)
	|| ydk::is_set(pflag.yfilter)
	|| ydk::is_set(eflag.yfilter)
	|| ydk::is_set(vflag.yfilter)
	|| ydk::is_set(lflag.yfilter)
	|| (sid_prefix !=  nullptr && sid_prefix->has_operation());
}

std::string PceTopology::TopologyNodes::TopologyNode::Ipv4Link::AdjacencySid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adjacency-sid";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::TopologyNodes::TopologyNode::Ipv4Link::AdjacencySid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sid_type.is_set || is_set(sid_type.yfilter)) leaf_name_data.push_back(sid_type.get_name_leafdata());
    if (mpls_label.is_set || is_set(mpls_label.yfilter)) leaf_name_data.push_back(mpls_label.get_name_leafdata());
    if (domain_identifier.is_set || is_set(domain_identifier.yfilter)) leaf_name_data.push_back(domain_identifier.get_name_leafdata());
    if (rflag.is_set || is_set(rflag.yfilter)) leaf_name_data.push_back(rflag.get_name_leafdata());
    if (nflag.is_set || is_set(nflag.yfilter)) leaf_name_data.push_back(nflag.get_name_leafdata());
    if (pflag.is_set || is_set(pflag.yfilter)) leaf_name_data.push_back(pflag.get_name_leafdata());
    if (eflag.is_set || is_set(eflag.yfilter)) leaf_name_data.push_back(eflag.get_name_leafdata());
    if (vflag.is_set || is_set(vflag.yfilter)) leaf_name_data.push_back(vflag.get_name_leafdata());
    if (lflag.is_set || is_set(lflag.yfilter)) leaf_name_data.push_back(lflag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PceTopology::TopologyNodes::TopologyNode::Ipv4Link::AdjacencySid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sid-prefix")
    {
        if(sid_prefix == nullptr)
        {
            sid_prefix = std::make_shared<PceTopology::TopologyNodes::TopologyNode::Ipv4Link::AdjacencySid::SidPrefix>();
        }
        return sid_prefix;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PceTopology::TopologyNodes::TopologyNode::Ipv4Link::AdjacencySid::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(sid_prefix != nullptr)
    {
        children["sid-prefix"] = sid_prefix;
    }

    return children;
}

void PceTopology::TopologyNodes::TopologyNode::Ipv4Link::AdjacencySid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sid-type")
    {
        sid_type = value;
        sid_type.value_namespace = name_space;
        sid_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-label")
    {
        mpls_label = value;
        mpls_label.value_namespace = name_space;
        mpls_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "domain-identifier")
    {
        domain_identifier = value;
        domain_identifier.value_namespace = name_space;
        domain_identifier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rflag")
    {
        rflag = value;
        rflag.value_namespace = name_space;
        rflag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nflag")
    {
        nflag = value;
        nflag.value_namespace = name_space;
        nflag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pflag")
    {
        pflag = value;
        pflag.value_namespace = name_space;
        pflag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eflag")
    {
        eflag = value;
        eflag.value_namespace = name_space;
        eflag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vflag")
    {
        vflag = value;
        vflag.value_namespace = name_space;
        vflag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lflag")
    {
        lflag = value;
        lflag.value_namespace = name_space;
        lflag.value_namespace_prefix = name_space_prefix;
    }
}

void PceTopology::TopologyNodes::TopologyNode::Ipv4Link::AdjacencySid::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sid-type")
    {
        sid_type.yfilter = yfilter;
    }
    if(value_path == "mpls-label")
    {
        mpls_label.yfilter = yfilter;
    }
    if(value_path == "domain-identifier")
    {
        domain_identifier.yfilter = yfilter;
    }
    if(value_path == "rflag")
    {
        rflag.yfilter = yfilter;
    }
    if(value_path == "nflag")
    {
        nflag.yfilter = yfilter;
    }
    if(value_path == "pflag")
    {
        pflag.yfilter = yfilter;
    }
    if(value_path == "eflag")
    {
        eflag.yfilter = yfilter;
    }
    if(value_path == "vflag")
    {
        vflag.yfilter = yfilter;
    }
    if(value_path == "lflag")
    {
        lflag.yfilter = yfilter;
    }
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv4Link::AdjacencySid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sid-prefix" || name == "sid-type" || name == "mpls-label" || name == "domain-identifier" || name == "rflag" || name == "nflag" || name == "pflag" || name == "eflag" || name == "vflag" || name == "lflag")
        return true;
    return false;
}

PceTopology::TopologyNodes::TopologyNode::Ipv4Link::AdjacencySid::SidPrefix::SidPrefix()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "sid-prefix"; yang_parent_name = "adjacency-sid"; is_top_level_class = false; has_list_ancestor = true;
}

PceTopology::TopologyNodes::TopologyNode::Ipv4Link::AdjacencySid::SidPrefix::~SidPrefix()
{
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv4Link::AdjacencySid::SidPrefix::has_data() const
{
    return af_name.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv4Link::AdjacencySid::SidPrefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string PceTopology::TopologyNodes::TopologyNode::Ipv4Link::AdjacencySid::SidPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sid-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::TopologyNodes::TopologyNode::Ipv4Link::AdjacencySid::SidPrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PceTopology::TopologyNodes::TopologyNode::Ipv4Link::AdjacencySid::SidPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PceTopology::TopologyNodes::TopologyNode::Ipv4Link::AdjacencySid::SidPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PceTopology::TopologyNodes::TopologyNode::Ipv4Link::AdjacencySid::SidPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void PceTopology::TopologyNodes::TopologyNode::Ipv4Link::AdjacencySid::SidPrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv4Link::AdjacencySid::SidPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

PceTopology::TopologyNodes::TopologyNode::Ipv6Link::Ipv6Link()
    :
    local_ipv6_address{YType::str, "local-ipv6-address"},
    remote_ipv6_address{YType::str, "remote-ipv6-address"},
    igp_metric{YType::uint32, "igp-metric"},
    te_metric{YType::uint32, "te-metric"},
    maximum_link_bandwidth{YType::uint64, "maximum-link-bandwidth"},
    max_reservable_bandwidth{YType::uint64, "max-reservable-bandwidth"}
    	,
    local_igp_information(std::make_shared<PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation>())
	,remote_node_protocol_identifier(std::make_shared<PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier>())
{
    local_igp_information->parent = this;
    remote_node_protocol_identifier->parent = this;

    yang_name = "ipv6-link"; yang_parent_name = "topology-node"; is_top_level_class = false; has_list_ancestor = true;
}

PceTopology::TopologyNodes::TopologyNode::Ipv6Link::~Ipv6Link()
{
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv6Link::has_data() const
{
    for (std::size_t index=0; index<adjacency_sid.size(); index++)
    {
        if(adjacency_sid[index]->has_data())
            return true;
    }
    return local_ipv6_address.is_set
	|| remote_ipv6_address.is_set
	|| igp_metric.is_set
	|| te_metric.is_set
	|| maximum_link_bandwidth.is_set
	|| max_reservable_bandwidth.is_set
	|| (local_igp_information !=  nullptr && local_igp_information->has_data())
	|| (remote_node_protocol_identifier !=  nullptr && remote_node_protocol_identifier->has_data());
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv6Link::has_operation() const
{
    for (std::size_t index=0; index<adjacency_sid.size(); index++)
    {
        if(adjacency_sid[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(local_ipv6_address.yfilter)
	|| ydk::is_set(remote_ipv6_address.yfilter)
	|| ydk::is_set(igp_metric.yfilter)
	|| ydk::is_set(te_metric.yfilter)
	|| ydk::is_set(maximum_link_bandwidth.yfilter)
	|| ydk::is_set(max_reservable_bandwidth.yfilter)
	|| (local_igp_information !=  nullptr && local_igp_information->has_operation())
	|| (remote_node_protocol_identifier !=  nullptr && remote_node_protocol_identifier->has_operation());
}

std::string PceTopology::TopologyNodes::TopologyNode::Ipv6Link::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-link";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::TopologyNodes::TopologyNode::Ipv6Link::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_ipv6_address.is_set || is_set(local_ipv6_address.yfilter)) leaf_name_data.push_back(local_ipv6_address.get_name_leafdata());
    if (remote_ipv6_address.is_set || is_set(remote_ipv6_address.yfilter)) leaf_name_data.push_back(remote_ipv6_address.get_name_leafdata());
    if (igp_metric.is_set || is_set(igp_metric.yfilter)) leaf_name_data.push_back(igp_metric.get_name_leafdata());
    if (te_metric.is_set || is_set(te_metric.yfilter)) leaf_name_data.push_back(te_metric.get_name_leafdata());
    if (maximum_link_bandwidth.is_set || is_set(maximum_link_bandwidth.yfilter)) leaf_name_data.push_back(maximum_link_bandwidth.get_name_leafdata());
    if (max_reservable_bandwidth.is_set || is_set(max_reservable_bandwidth.yfilter)) leaf_name_data.push_back(max_reservable_bandwidth.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PceTopology::TopologyNodes::TopologyNode::Ipv6Link::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "local-igp-information")
    {
        if(local_igp_information == nullptr)
        {
            local_igp_information = std::make_shared<PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation>();
        }
        return local_igp_information;
    }

    if(child_yang_name == "remote-node-protocol-identifier")
    {
        if(remote_node_protocol_identifier == nullptr)
        {
            remote_node_protocol_identifier = std::make_shared<PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier>();
        }
        return remote_node_protocol_identifier;
    }

    if(child_yang_name == "adjacency-sid")
    {
        auto c = std::make_shared<PceTopology::TopologyNodes::TopologyNode::Ipv6Link::AdjacencySid>();
        c->parent = this;
        adjacency_sid.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PceTopology::TopologyNodes::TopologyNode::Ipv6Link::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(local_igp_information != nullptr)
    {
        children["local-igp-information"] = local_igp_information;
    }

    if(remote_node_protocol_identifier != nullptr)
    {
        children["remote-node-protocol-identifier"] = remote_node_protocol_identifier;
    }

    count = 0;
    for (auto const & c : adjacency_sid)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PceTopology::TopologyNodes::TopologyNode::Ipv6Link::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "local-ipv6-address")
    {
        local_ipv6_address = value;
        local_ipv6_address.value_namespace = name_space;
        local_ipv6_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-ipv6-address")
    {
        remote_ipv6_address = value;
        remote_ipv6_address.value_namespace = name_space;
        remote_ipv6_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igp-metric")
    {
        igp_metric = value;
        igp_metric.value_namespace = name_space;
        igp_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "te-metric")
    {
        te_metric = value;
        te_metric.value_namespace = name_space;
        te_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-link-bandwidth")
    {
        maximum_link_bandwidth = value;
        maximum_link_bandwidth.value_namespace = name_space;
        maximum_link_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-reservable-bandwidth")
    {
        max_reservable_bandwidth = value;
        max_reservable_bandwidth.value_namespace = name_space;
        max_reservable_bandwidth.value_namespace_prefix = name_space_prefix;
    }
}

void PceTopology::TopologyNodes::TopologyNode::Ipv6Link::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "local-ipv6-address")
    {
        local_ipv6_address.yfilter = yfilter;
    }
    if(value_path == "remote-ipv6-address")
    {
        remote_ipv6_address.yfilter = yfilter;
    }
    if(value_path == "igp-metric")
    {
        igp_metric.yfilter = yfilter;
    }
    if(value_path == "te-metric")
    {
        te_metric.yfilter = yfilter;
    }
    if(value_path == "maximum-link-bandwidth")
    {
        maximum_link_bandwidth.yfilter = yfilter;
    }
    if(value_path == "max-reservable-bandwidth")
    {
        max_reservable_bandwidth.yfilter = yfilter;
    }
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv6Link::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local-igp-information" || name == "remote-node-protocol-identifier" || name == "adjacency-sid" || name == "local-ipv6-address" || name == "remote-ipv6-address" || name == "igp-metric" || name == "te-metric" || name == "maximum-link-bandwidth" || name == "max-reservable-bandwidth")
        return true;
    return false;
}

PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::LocalIgpInformation()
    :
    domain_identifier{YType::uint64, "domain-identifier"},
    autonomous_system_number{YType::uint32, "autonomous-system-number"}
    	,
    igp(std::make_shared<PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp>())
{
    igp->parent = this;

    yang_name = "local-igp-information"; yang_parent_name = "ipv6-link"; is_top_level_class = false; has_list_ancestor = true;
}

PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::~LocalIgpInformation()
{
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::has_data() const
{
    return domain_identifier.is_set
	|| autonomous_system_number.is_set
	|| (igp !=  nullptr && igp->has_data());
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(domain_identifier.yfilter)
	|| ydk::is_set(autonomous_system_number.yfilter)
	|| (igp !=  nullptr && igp->has_operation());
}

std::string PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-igp-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (domain_identifier.is_set || is_set(domain_identifier.yfilter)) leaf_name_data.push_back(domain_identifier.get_name_leafdata());
    if (autonomous_system_number.is_set || is_set(autonomous_system_number.yfilter)) leaf_name_data.push_back(autonomous_system_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "igp")
    {
        if(igp == nullptr)
        {
            igp = std::make_shared<PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp>();
        }
        return igp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(igp != nullptr)
    {
        children["igp"] = igp;
    }

    return children;
}

void PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "domain-identifier")
    {
        domain_identifier = value;
        domain_identifier.value_namespace = name_space;
        domain_identifier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "autonomous-system-number")
    {
        autonomous_system_number = value;
        autonomous_system_number.value_namespace = name_space;
        autonomous_system_number.value_namespace_prefix = name_space_prefix;
    }
}

void PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "domain-identifier")
    {
        domain_identifier.yfilter = yfilter;
    }
    if(value_path == "autonomous-system-number")
    {
        autonomous_system_number.yfilter = yfilter;
    }
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "igp" || name == "domain-identifier" || name == "autonomous-system-number")
        return true;
    return false;
}

PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::Igp()
    :
    igp_id{YType::enumeration, "igp-id"}
    	,
    isis(std::make_shared<PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::Isis>())
	,ospf(std::make_shared<PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::Ospf>())
	,bgp(std::make_shared<PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::Bgp>())
{
    isis->parent = this;
    ospf->parent = this;
    bgp->parent = this;

    yang_name = "igp"; yang_parent_name = "local-igp-information"; is_top_level_class = false; has_list_ancestor = true;
}

PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::~Igp()
{
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::has_data() const
{
    return igp_id.is_set
	|| (isis !=  nullptr && isis->has_data())
	|| (ospf !=  nullptr && ospf->has_data())
	|| (bgp !=  nullptr && bgp->has_data());
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(igp_id.yfilter)
	|| (isis !=  nullptr && isis->has_operation())
	|| (ospf !=  nullptr && ospf->has_operation())
	|| (bgp !=  nullptr && bgp->has_operation());
}

std::string PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "igp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (igp_id.is_set || is_set(igp_id.yfilter)) leaf_name_data.push_back(igp_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "isis")
    {
        if(isis == nullptr)
        {
            isis = std::make_shared<PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::Isis>();
        }
        return isis;
    }

    if(child_yang_name == "ospf")
    {
        if(ospf == nullptr)
        {
            ospf = std::make_shared<PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::Ospf>();
        }
        return ospf;
    }

    if(child_yang_name == "bgp")
    {
        if(bgp == nullptr)
        {
            bgp = std::make_shared<PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::Bgp>();
        }
        return bgp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(isis != nullptr)
    {
        children["isis"] = isis;
    }

    if(ospf != nullptr)
    {
        children["ospf"] = ospf;
    }

    if(bgp != nullptr)
    {
        children["bgp"] = bgp;
    }

    return children;
}

void PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "igp-id")
    {
        igp_id = value;
        igp_id.value_namespace = name_space;
        igp_id.value_namespace_prefix = name_space_prefix;
    }
}

void PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "igp-id")
    {
        igp_id.yfilter = yfilter;
    }
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "isis" || name == "ospf" || name == "bgp" || name == "igp-id")
        return true;
    return false;
}

PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::Isis::Isis()
    :
    system_id{YType::str, "system-id"},
    level{YType::uint32, "level"}
{

    yang_name = "isis"; yang_parent_name = "igp"; is_top_level_class = false; has_list_ancestor = true;
}

PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::Isis::~Isis()
{
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::Isis::has_data() const
{
    return system_id.is_set
	|| level.is_set;
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::Isis::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(system_id.yfilter)
	|| ydk::is_set(level.yfilter);
}

std::string PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::Isis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::Isis::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (system_id.is_set || is_set(system_id.yfilter)) leaf_name_data.push_back(system_id.get_name_leafdata());
    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::Isis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::Isis::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::Isis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "system-id")
    {
        system_id = value;
        system_id.value_namespace = name_space;
        system_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
}

void PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::Isis::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "system-id")
    {
        system_id.yfilter = yfilter;
    }
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::Isis::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "system-id" || name == "level")
        return true;
    return false;
}

PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::Ospf::Ospf()
    :
    router_id{YType::str, "router-id"},
    area{YType::uint32, "area"}
{

    yang_name = "ospf"; yang_parent_name = "igp"; is_top_level_class = false; has_list_ancestor = true;
}

PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::Ospf::~Ospf()
{
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::Ospf::has_data() const
{
    return router_id.is_set
	|| area.is_set;
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::Ospf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(router_id.yfilter)
	|| ydk::is_set(area.yfilter);
}

std::string PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::Ospf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::Ospf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());
    if (area.is_set || is_set(area.yfilter)) leaf_name_data.push_back(area.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::Ospf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::Ospf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::Ospf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area")
    {
        area = value;
        area.value_namespace = name_space;
        area.value_namespace_prefix = name_space_prefix;
    }
}

void PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::Ospf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
    if(value_path == "area")
    {
        area.yfilter = yfilter;
    }
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::Ospf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "router-id" || name == "area")
        return true;
    return false;
}

PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::Bgp::Bgp()
    :
    router_id{YType::str, "router-id"},
    confed_asn{YType::uint32, "confed-asn"}
{

    yang_name = "bgp"; yang_parent_name = "igp"; is_top_level_class = false; has_list_ancestor = true;
}

PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::Bgp::~Bgp()
{
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::Bgp::has_data() const
{
    return router_id.is_set
	|| confed_asn.is_set;
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::Bgp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(router_id.yfilter)
	|| ydk::is_set(confed_asn.yfilter);
}

std::string PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::Bgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::Bgp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());
    if (confed_asn.is_set || is_set(confed_asn.yfilter)) leaf_name_data.push_back(confed_asn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::Bgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::Bgp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::Bgp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "confed-asn")
    {
        confed_asn = value;
        confed_asn.value_namespace = name_space;
        confed_asn.value_namespace_prefix = name_space_prefix;
    }
}

void PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::Bgp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
    if(value_path == "confed-asn")
    {
        confed_asn.yfilter = yfilter;
    }
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::Bgp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "router-id" || name == "confed-asn")
        return true;
    return false;
}

PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::RemoteNodeProtocolIdentifier()
    :
    node_name{YType::str, "node-name"},
    ipv4_bgp_router_id_set{YType::boolean, "ipv4-bgp-router-id-set"},
    ipv4_bgp_router_id{YType::str, "ipv4-bgp-router-id"},
    ipv4te_router_id_set{YType::boolean, "ipv4te-router-id-set"},
    ipv4te_router_id{YType::str, "ipv4te-router-id"}
{

    yang_name = "remote-node-protocol-identifier"; yang_parent_name = "ipv6-link"; is_top_level_class = false; has_list_ancestor = true;
}

PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::~RemoteNodeProtocolIdentifier()
{
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::has_data() const
{
    for (std::size_t index=0; index<igp_information.size(); index++)
    {
        if(igp_information[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<srgb_information.size(); index++)
    {
        if(srgb_information[index]->has_data())
            return true;
    }
    return node_name.is_set
	|| ipv4_bgp_router_id_set.is_set
	|| ipv4_bgp_router_id.is_set
	|| ipv4te_router_id_set.is_set
	|| ipv4te_router_id.is_set;
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::has_operation() const
{
    for (std::size_t index=0; index<igp_information.size(); index++)
    {
        if(igp_information[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<srgb_information.size(); index++)
    {
        if(srgb_information[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(node_name.yfilter)
	|| ydk::is_set(ipv4_bgp_router_id_set.yfilter)
	|| ydk::is_set(ipv4_bgp_router_id.yfilter)
	|| ydk::is_set(ipv4te_router_id_set.yfilter)
	|| ydk::is_set(ipv4te_router_id.yfilter);
}

std::string PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-node-protocol-identifier";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());
    if (ipv4_bgp_router_id_set.is_set || is_set(ipv4_bgp_router_id_set.yfilter)) leaf_name_data.push_back(ipv4_bgp_router_id_set.get_name_leafdata());
    if (ipv4_bgp_router_id.is_set || is_set(ipv4_bgp_router_id.yfilter)) leaf_name_data.push_back(ipv4_bgp_router_id.get_name_leafdata());
    if (ipv4te_router_id_set.is_set || is_set(ipv4te_router_id_set.yfilter)) leaf_name_data.push_back(ipv4te_router_id_set.get_name_leafdata());
    if (ipv4te_router_id.is_set || is_set(ipv4te_router_id.yfilter)) leaf_name_data.push_back(ipv4te_router_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "igp-information")
    {
        auto c = std::make_shared<PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation>();
        c->parent = this;
        igp_information.push_back(c);
        return c;
    }

    if(child_yang_name == "srgb-information")
    {
        auto c = std::make_shared<PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation>();
        c->parent = this;
        srgb_information.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : igp_information)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : srgb_information)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-name")
    {
        node_name = value;
        node_name.value_namespace = name_space;
        node_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-bgp-router-id-set")
    {
        ipv4_bgp_router_id_set = value;
        ipv4_bgp_router_id_set.value_namespace = name_space;
        ipv4_bgp_router_id_set.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-bgp-router-id")
    {
        ipv4_bgp_router_id = value;
        ipv4_bgp_router_id.value_namespace = name_space;
        ipv4_bgp_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4te-router-id-set")
    {
        ipv4te_router_id_set = value;
        ipv4te_router_id_set.value_namespace = name_space;
        ipv4te_router_id_set.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4te-router-id")
    {
        ipv4te_router_id = value;
        ipv4te_router_id.value_namespace = name_space;
        ipv4te_router_id.value_namespace_prefix = name_space_prefix;
    }
}

void PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-name")
    {
        node_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-bgp-router-id-set")
    {
        ipv4_bgp_router_id_set.yfilter = yfilter;
    }
    if(value_path == "ipv4-bgp-router-id")
    {
        ipv4_bgp_router_id.yfilter = yfilter;
    }
    if(value_path == "ipv4te-router-id-set")
    {
        ipv4te_router_id_set.yfilter = yfilter;
    }
    if(value_path == "ipv4te-router-id")
    {
        ipv4te_router_id.yfilter = yfilter;
    }
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "igp-information" || name == "srgb-information" || name == "node-name" || name == "ipv4-bgp-router-id-set" || name == "ipv4-bgp-router-id" || name == "ipv4te-router-id-set" || name == "ipv4te-router-id")
        return true;
    return false;
}

PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::IgpInformation()
    :
    domain_identifier{YType::uint64, "domain-identifier"},
    autonomous_system_number{YType::uint32, "autonomous-system-number"}
    	,
    igp(std::make_shared<PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp>())
{
    igp->parent = this;

    yang_name = "igp-information"; yang_parent_name = "remote-node-protocol-identifier"; is_top_level_class = false; has_list_ancestor = true;
}

PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::~IgpInformation()
{
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::has_data() const
{
    return domain_identifier.is_set
	|| autonomous_system_number.is_set
	|| (igp !=  nullptr && igp->has_data());
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(domain_identifier.yfilter)
	|| ydk::is_set(autonomous_system_number.yfilter)
	|| (igp !=  nullptr && igp->has_operation());
}

std::string PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "igp-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (domain_identifier.is_set || is_set(domain_identifier.yfilter)) leaf_name_data.push_back(domain_identifier.get_name_leafdata());
    if (autonomous_system_number.is_set || is_set(autonomous_system_number.yfilter)) leaf_name_data.push_back(autonomous_system_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "igp")
    {
        if(igp == nullptr)
        {
            igp = std::make_shared<PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp>();
        }
        return igp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(igp != nullptr)
    {
        children["igp"] = igp;
    }

    return children;
}

void PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "domain-identifier")
    {
        domain_identifier = value;
        domain_identifier.value_namespace = name_space;
        domain_identifier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "autonomous-system-number")
    {
        autonomous_system_number = value;
        autonomous_system_number.value_namespace = name_space;
        autonomous_system_number.value_namespace_prefix = name_space_prefix;
    }
}

void PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "domain-identifier")
    {
        domain_identifier.yfilter = yfilter;
    }
    if(value_path == "autonomous-system-number")
    {
        autonomous_system_number.yfilter = yfilter;
    }
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "igp" || name == "domain-identifier" || name == "autonomous-system-number")
        return true;
    return false;
}

PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Igp()
    :
    igp_id{YType::enumeration, "igp-id"}
    	,
    isis(std::make_shared<PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Isis>())
	,ospf(std::make_shared<PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Ospf>())
	,bgp(std::make_shared<PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Bgp>())
{
    isis->parent = this;
    ospf->parent = this;
    bgp->parent = this;

    yang_name = "igp"; yang_parent_name = "igp-information"; is_top_level_class = false; has_list_ancestor = true;
}

PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::~Igp()
{
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::has_data() const
{
    return igp_id.is_set
	|| (isis !=  nullptr && isis->has_data())
	|| (ospf !=  nullptr && ospf->has_data())
	|| (bgp !=  nullptr && bgp->has_data());
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(igp_id.yfilter)
	|| (isis !=  nullptr && isis->has_operation())
	|| (ospf !=  nullptr && ospf->has_operation())
	|| (bgp !=  nullptr && bgp->has_operation());
}

std::string PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "igp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (igp_id.is_set || is_set(igp_id.yfilter)) leaf_name_data.push_back(igp_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "isis")
    {
        if(isis == nullptr)
        {
            isis = std::make_shared<PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Isis>();
        }
        return isis;
    }

    if(child_yang_name == "ospf")
    {
        if(ospf == nullptr)
        {
            ospf = std::make_shared<PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Ospf>();
        }
        return ospf;
    }

    if(child_yang_name == "bgp")
    {
        if(bgp == nullptr)
        {
            bgp = std::make_shared<PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Bgp>();
        }
        return bgp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(isis != nullptr)
    {
        children["isis"] = isis;
    }

    if(ospf != nullptr)
    {
        children["ospf"] = ospf;
    }

    if(bgp != nullptr)
    {
        children["bgp"] = bgp;
    }

    return children;
}

void PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "igp-id")
    {
        igp_id = value;
        igp_id.value_namespace = name_space;
        igp_id.value_namespace_prefix = name_space_prefix;
    }
}

void PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "igp-id")
    {
        igp_id.yfilter = yfilter;
    }
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "isis" || name == "ospf" || name == "bgp" || name == "igp-id")
        return true;
    return false;
}

PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Isis::Isis()
    :
    system_id{YType::str, "system-id"},
    level{YType::uint32, "level"}
{

    yang_name = "isis"; yang_parent_name = "igp"; is_top_level_class = false; has_list_ancestor = true;
}

PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Isis::~Isis()
{
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Isis::has_data() const
{
    return system_id.is_set
	|| level.is_set;
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Isis::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(system_id.yfilter)
	|| ydk::is_set(level.yfilter);
}

std::string PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Isis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Isis::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (system_id.is_set || is_set(system_id.yfilter)) leaf_name_data.push_back(system_id.get_name_leafdata());
    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Isis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Isis::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Isis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "system-id")
    {
        system_id = value;
        system_id.value_namespace = name_space;
        system_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
}

void PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Isis::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "system-id")
    {
        system_id.yfilter = yfilter;
    }
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Isis::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "system-id" || name == "level")
        return true;
    return false;
}

PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Ospf::Ospf()
    :
    router_id{YType::str, "router-id"},
    area{YType::uint32, "area"}
{

    yang_name = "ospf"; yang_parent_name = "igp"; is_top_level_class = false; has_list_ancestor = true;
}

PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Ospf::~Ospf()
{
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Ospf::has_data() const
{
    return router_id.is_set
	|| area.is_set;
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Ospf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(router_id.yfilter)
	|| ydk::is_set(area.yfilter);
}

std::string PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Ospf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Ospf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());
    if (area.is_set || is_set(area.yfilter)) leaf_name_data.push_back(area.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Ospf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Ospf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Ospf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area")
    {
        area = value;
        area.value_namespace = name_space;
        area.value_namespace_prefix = name_space_prefix;
    }
}

void PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Ospf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
    if(value_path == "area")
    {
        area.yfilter = yfilter;
    }
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Ospf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "router-id" || name == "area")
        return true;
    return false;
}

PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Bgp::Bgp()
    :
    router_id{YType::str, "router-id"},
    confed_asn{YType::uint32, "confed-asn"}
{

    yang_name = "bgp"; yang_parent_name = "igp"; is_top_level_class = false; has_list_ancestor = true;
}

PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Bgp::~Bgp()
{
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Bgp::has_data() const
{
    return router_id.is_set
	|| confed_asn.is_set;
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Bgp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(router_id.yfilter)
	|| ydk::is_set(confed_asn.yfilter);
}

std::string PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Bgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Bgp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());
    if (confed_asn.is_set || is_set(confed_asn.yfilter)) leaf_name_data.push_back(confed_asn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Bgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Bgp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Bgp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "confed-asn")
    {
        confed_asn = value;
        confed_asn.value_namespace = name_space;
        confed_asn.value_namespace_prefix = name_space_prefix;
    }
}

void PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Bgp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
    if(value_path == "confed-asn")
    {
        confed_asn.yfilter = yfilter;
    }
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Bgp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "router-id" || name == "confed-asn")
        return true;
    return false;
}

PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::SrgbInformation()
    :
    start{YType::uint32, "start"},
    size{YType::uint32, "size"}
    	,
    igp_srgb(std::make_shared<PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb>())
{
    igp_srgb->parent = this;

    yang_name = "srgb-information"; yang_parent_name = "remote-node-protocol-identifier"; is_top_level_class = false; has_list_ancestor = true;
}

PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::~SrgbInformation()
{
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::has_data() const
{
    return start.is_set
	|| size.is_set
	|| (igp_srgb !=  nullptr && igp_srgb->has_data());
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(start.yfilter)
	|| ydk::is_set(size.yfilter)
	|| (igp_srgb !=  nullptr && igp_srgb->has_operation());
}

std::string PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srgb-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (start.is_set || is_set(start.yfilter)) leaf_name_data.push_back(start.get_name_leafdata());
    if (size.is_set || is_set(size.yfilter)) leaf_name_data.push_back(size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "igp-srgb")
    {
        if(igp_srgb == nullptr)
        {
            igp_srgb = std::make_shared<PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb>();
        }
        return igp_srgb;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(igp_srgb != nullptr)
    {
        children["igp-srgb"] = igp_srgb;
    }

    return children;
}

void PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "start")
    {
        start = value;
        start.value_namespace = name_space;
        start.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "size")
    {
        size = value;
        size.value_namespace = name_space;
        size.value_namespace_prefix = name_space_prefix;
    }
}

void PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "start")
    {
        start.yfilter = yfilter;
    }
    if(value_path == "size")
    {
        size.yfilter = yfilter;
    }
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "igp-srgb" || name == "start" || name == "size")
        return true;
    return false;
}

PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::IgpSrgb()
    :
    igp_id{YType::enumeration, "igp-id"}
    	,
    isis(std::make_shared<PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Isis>())
	,ospf(std::make_shared<PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Ospf>())
	,bgp(std::make_shared<PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Bgp>())
{
    isis->parent = this;
    ospf->parent = this;
    bgp->parent = this;

    yang_name = "igp-srgb"; yang_parent_name = "srgb-information"; is_top_level_class = false; has_list_ancestor = true;
}

PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::~IgpSrgb()
{
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::has_data() const
{
    return igp_id.is_set
	|| (isis !=  nullptr && isis->has_data())
	|| (ospf !=  nullptr && ospf->has_data())
	|| (bgp !=  nullptr && bgp->has_data());
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(igp_id.yfilter)
	|| (isis !=  nullptr && isis->has_operation())
	|| (ospf !=  nullptr && ospf->has_operation())
	|| (bgp !=  nullptr && bgp->has_operation());
}

std::string PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "igp-srgb";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (igp_id.is_set || is_set(igp_id.yfilter)) leaf_name_data.push_back(igp_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "isis")
    {
        if(isis == nullptr)
        {
            isis = std::make_shared<PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Isis>();
        }
        return isis;
    }

    if(child_yang_name == "ospf")
    {
        if(ospf == nullptr)
        {
            ospf = std::make_shared<PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Ospf>();
        }
        return ospf;
    }

    if(child_yang_name == "bgp")
    {
        if(bgp == nullptr)
        {
            bgp = std::make_shared<PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Bgp>();
        }
        return bgp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(isis != nullptr)
    {
        children["isis"] = isis;
    }

    if(ospf != nullptr)
    {
        children["ospf"] = ospf;
    }

    if(bgp != nullptr)
    {
        children["bgp"] = bgp;
    }

    return children;
}

void PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "igp-id")
    {
        igp_id = value;
        igp_id.value_namespace = name_space;
        igp_id.value_namespace_prefix = name_space_prefix;
    }
}

void PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "igp-id")
    {
        igp_id.yfilter = yfilter;
    }
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "isis" || name == "ospf" || name == "bgp" || name == "igp-id")
        return true;
    return false;
}

PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Isis::Isis()
    :
    system_id{YType::str, "system-id"},
    level{YType::uint32, "level"}
{

    yang_name = "isis"; yang_parent_name = "igp-srgb"; is_top_level_class = false; has_list_ancestor = true;
}

PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Isis::~Isis()
{
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Isis::has_data() const
{
    return system_id.is_set
	|| level.is_set;
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Isis::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(system_id.yfilter)
	|| ydk::is_set(level.yfilter);
}

std::string PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Isis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Isis::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (system_id.is_set || is_set(system_id.yfilter)) leaf_name_data.push_back(system_id.get_name_leafdata());
    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Isis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Isis::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Isis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "system-id")
    {
        system_id = value;
        system_id.value_namespace = name_space;
        system_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
}

void PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Isis::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "system-id")
    {
        system_id.yfilter = yfilter;
    }
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Isis::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "system-id" || name == "level")
        return true;
    return false;
}

PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Ospf::Ospf()
    :
    router_id{YType::str, "router-id"},
    area{YType::uint32, "area"}
{

    yang_name = "ospf"; yang_parent_name = "igp-srgb"; is_top_level_class = false; has_list_ancestor = true;
}

PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Ospf::~Ospf()
{
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Ospf::has_data() const
{
    return router_id.is_set
	|| area.is_set;
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Ospf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(router_id.yfilter)
	|| ydk::is_set(area.yfilter);
}

std::string PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Ospf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Ospf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());
    if (area.is_set || is_set(area.yfilter)) leaf_name_data.push_back(area.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Ospf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Ospf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Ospf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area")
    {
        area = value;
        area.value_namespace = name_space;
        area.value_namespace_prefix = name_space_prefix;
    }
}

void PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Ospf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
    if(value_path == "area")
    {
        area.yfilter = yfilter;
    }
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Ospf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "router-id" || name == "area")
        return true;
    return false;
}

PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Bgp::Bgp()
    :
    router_id{YType::str, "router-id"},
    confed_asn{YType::uint32, "confed-asn"}
{

    yang_name = "bgp"; yang_parent_name = "igp-srgb"; is_top_level_class = false; has_list_ancestor = true;
}

PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Bgp::~Bgp()
{
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Bgp::has_data() const
{
    return router_id.is_set
	|| confed_asn.is_set;
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Bgp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(router_id.yfilter)
	|| ydk::is_set(confed_asn.yfilter);
}

std::string PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Bgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Bgp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());
    if (confed_asn.is_set || is_set(confed_asn.yfilter)) leaf_name_data.push_back(confed_asn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Bgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Bgp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Bgp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "confed-asn")
    {
        confed_asn = value;
        confed_asn.value_namespace = name_space;
        confed_asn.value_namespace_prefix = name_space_prefix;
    }
}

void PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Bgp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
    if(value_path == "confed-asn")
    {
        confed_asn.yfilter = yfilter;
    }
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Bgp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "router-id" || name == "confed-asn")
        return true;
    return false;
}

PceTopology::TopologyNodes::TopologyNode::Ipv6Link::AdjacencySid::AdjacencySid()
    :
    sid_type{YType::enumeration, "sid-type"},
    mpls_label{YType::uint32, "mpls-label"},
    domain_identifier{YType::uint64, "domain-identifier"},
    rflag{YType::boolean, "rflag"},
    nflag{YType::boolean, "nflag"},
    pflag{YType::boolean, "pflag"},
    eflag{YType::boolean, "eflag"},
    vflag{YType::boolean, "vflag"},
    lflag{YType::boolean, "lflag"}
    	,
    sid_prefix(std::make_shared<PceTopology::TopologyNodes::TopologyNode::Ipv6Link::AdjacencySid::SidPrefix>())
{
    sid_prefix->parent = this;

    yang_name = "adjacency-sid"; yang_parent_name = "ipv6-link"; is_top_level_class = false; has_list_ancestor = true;
}

PceTopology::TopologyNodes::TopologyNode::Ipv6Link::AdjacencySid::~AdjacencySid()
{
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv6Link::AdjacencySid::has_data() const
{
    return sid_type.is_set
	|| mpls_label.is_set
	|| domain_identifier.is_set
	|| rflag.is_set
	|| nflag.is_set
	|| pflag.is_set
	|| eflag.is_set
	|| vflag.is_set
	|| lflag.is_set
	|| (sid_prefix !=  nullptr && sid_prefix->has_data());
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv6Link::AdjacencySid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sid_type.yfilter)
	|| ydk::is_set(mpls_label.yfilter)
	|| ydk::is_set(domain_identifier.yfilter)
	|| ydk::is_set(rflag.yfilter)
	|| ydk::is_set(nflag.yfilter)
	|| ydk::is_set(pflag.yfilter)
	|| ydk::is_set(eflag.yfilter)
	|| ydk::is_set(vflag.yfilter)
	|| ydk::is_set(lflag.yfilter)
	|| (sid_prefix !=  nullptr && sid_prefix->has_operation());
}

std::string PceTopology::TopologyNodes::TopologyNode::Ipv6Link::AdjacencySid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adjacency-sid";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::TopologyNodes::TopologyNode::Ipv6Link::AdjacencySid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sid_type.is_set || is_set(sid_type.yfilter)) leaf_name_data.push_back(sid_type.get_name_leafdata());
    if (mpls_label.is_set || is_set(mpls_label.yfilter)) leaf_name_data.push_back(mpls_label.get_name_leafdata());
    if (domain_identifier.is_set || is_set(domain_identifier.yfilter)) leaf_name_data.push_back(domain_identifier.get_name_leafdata());
    if (rflag.is_set || is_set(rflag.yfilter)) leaf_name_data.push_back(rflag.get_name_leafdata());
    if (nflag.is_set || is_set(nflag.yfilter)) leaf_name_data.push_back(nflag.get_name_leafdata());
    if (pflag.is_set || is_set(pflag.yfilter)) leaf_name_data.push_back(pflag.get_name_leafdata());
    if (eflag.is_set || is_set(eflag.yfilter)) leaf_name_data.push_back(eflag.get_name_leafdata());
    if (vflag.is_set || is_set(vflag.yfilter)) leaf_name_data.push_back(vflag.get_name_leafdata());
    if (lflag.is_set || is_set(lflag.yfilter)) leaf_name_data.push_back(lflag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PceTopology::TopologyNodes::TopologyNode::Ipv6Link::AdjacencySid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sid-prefix")
    {
        if(sid_prefix == nullptr)
        {
            sid_prefix = std::make_shared<PceTopology::TopologyNodes::TopologyNode::Ipv6Link::AdjacencySid::SidPrefix>();
        }
        return sid_prefix;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PceTopology::TopologyNodes::TopologyNode::Ipv6Link::AdjacencySid::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(sid_prefix != nullptr)
    {
        children["sid-prefix"] = sid_prefix;
    }

    return children;
}

void PceTopology::TopologyNodes::TopologyNode::Ipv6Link::AdjacencySid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sid-type")
    {
        sid_type = value;
        sid_type.value_namespace = name_space;
        sid_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-label")
    {
        mpls_label = value;
        mpls_label.value_namespace = name_space;
        mpls_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "domain-identifier")
    {
        domain_identifier = value;
        domain_identifier.value_namespace = name_space;
        domain_identifier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rflag")
    {
        rflag = value;
        rflag.value_namespace = name_space;
        rflag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nflag")
    {
        nflag = value;
        nflag.value_namespace = name_space;
        nflag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pflag")
    {
        pflag = value;
        pflag.value_namespace = name_space;
        pflag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eflag")
    {
        eflag = value;
        eflag.value_namespace = name_space;
        eflag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vflag")
    {
        vflag = value;
        vflag.value_namespace = name_space;
        vflag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lflag")
    {
        lflag = value;
        lflag.value_namespace = name_space;
        lflag.value_namespace_prefix = name_space_prefix;
    }
}

void PceTopology::TopologyNodes::TopologyNode::Ipv6Link::AdjacencySid::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sid-type")
    {
        sid_type.yfilter = yfilter;
    }
    if(value_path == "mpls-label")
    {
        mpls_label.yfilter = yfilter;
    }
    if(value_path == "domain-identifier")
    {
        domain_identifier.yfilter = yfilter;
    }
    if(value_path == "rflag")
    {
        rflag.yfilter = yfilter;
    }
    if(value_path == "nflag")
    {
        nflag.yfilter = yfilter;
    }
    if(value_path == "pflag")
    {
        pflag.yfilter = yfilter;
    }
    if(value_path == "eflag")
    {
        eflag.yfilter = yfilter;
    }
    if(value_path == "vflag")
    {
        vflag.yfilter = yfilter;
    }
    if(value_path == "lflag")
    {
        lflag.yfilter = yfilter;
    }
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv6Link::AdjacencySid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sid-prefix" || name == "sid-type" || name == "mpls-label" || name == "domain-identifier" || name == "rflag" || name == "nflag" || name == "pflag" || name == "eflag" || name == "vflag" || name == "lflag")
        return true;
    return false;
}

PceTopology::TopologyNodes::TopologyNode::Ipv6Link::AdjacencySid::SidPrefix::SidPrefix()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "sid-prefix"; yang_parent_name = "adjacency-sid"; is_top_level_class = false; has_list_ancestor = true;
}

PceTopology::TopologyNodes::TopologyNode::Ipv6Link::AdjacencySid::SidPrefix::~SidPrefix()
{
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv6Link::AdjacencySid::SidPrefix::has_data() const
{
    return af_name.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv6Link::AdjacencySid::SidPrefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string PceTopology::TopologyNodes::TopologyNode::Ipv6Link::AdjacencySid::SidPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sid-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::TopologyNodes::TopologyNode::Ipv6Link::AdjacencySid::SidPrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PceTopology::TopologyNodes::TopologyNode::Ipv6Link::AdjacencySid::SidPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PceTopology::TopologyNodes::TopologyNode::Ipv6Link::AdjacencySid::SidPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PceTopology::TopologyNodes::TopologyNode::Ipv6Link::AdjacencySid::SidPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void PceTopology::TopologyNodes::TopologyNode::Ipv6Link::AdjacencySid::SidPrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
}

bool PceTopology::TopologyNodes::TopologyNode::Ipv6Link::AdjacencySid::SidPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

PceTopology::PrefixInfos::PrefixInfos()
{

    yang_name = "prefix-infos"; yang_parent_name = "pce-topology"; is_top_level_class = false; has_list_ancestor = false;
}

PceTopology::PrefixInfos::~PrefixInfos()
{
}

bool PceTopology::PrefixInfos::has_data() const
{
    for (std::size_t index=0; index<prefix_info.size(); index++)
    {
        if(prefix_info[index]->has_data())
            return true;
    }
    return false;
}

bool PceTopology::PrefixInfos::has_operation() const
{
    for (std::size_t index=0; index<prefix_info.size(); index++)
    {
        if(prefix_info[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PceTopology::PrefixInfos::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-xtc-oper:pce-topology/" << get_segment_path();
    return path_buffer.str();
}

std::string PceTopology::PrefixInfos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-infos";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::PrefixInfos::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PceTopology::PrefixInfos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix-info")
    {
        auto c = std::make_shared<PceTopology::PrefixInfos::PrefixInfo>();
        c->parent = this;
        prefix_info.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PceTopology::PrefixInfos::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : prefix_info)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PceTopology::PrefixInfos::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PceTopology::PrefixInfos::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PceTopology::PrefixInfos::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-info")
        return true;
    return false;
}

PceTopology::PrefixInfos::PrefixInfo::PrefixInfo()
    :
    node_identifier{YType::int32, "node-identifier"},
    node_identifier_xr{YType::uint32, "node-identifier-xr"}
    	,
    node_protocol_identifier(std::make_shared<PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier>())
{
    node_protocol_identifier->parent = this;

    yang_name = "prefix-info"; yang_parent_name = "prefix-infos"; is_top_level_class = false; has_list_ancestor = false;
}

PceTopology::PrefixInfos::PrefixInfo::~PrefixInfo()
{
}

bool PceTopology::PrefixInfos::PrefixInfo::has_data() const
{
    for (std::size_t index=0; index<address.size(); index++)
    {
        if(address[index]->has_data())
            return true;
    }
    return node_identifier.is_set
	|| node_identifier_xr.is_set
	|| (node_protocol_identifier !=  nullptr && node_protocol_identifier->has_data());
}

bool PceTopology::PrefixInfos::PrefixInfo::has_operation() const
{
    for (std::size_t index=0; index<address.size(); index++)
    {
        if(address[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(node_identifier.yfilter)
	|| ydk::is_set(node_identifier_xr.yfilter)
	|| (node_protocol_identifier !=  nullptr && node_protocol_identifier->has_operation());
}

std::string PceTopology::PrefixInfos::PrefixInfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-xtc-oper:pce-topology/prefix-infos/" << get_segment_path();
    return path_buffer.str();
}

std::string PceTopology::PrefixInfos::PrefixInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-info" <<"[node-identifier='" <<node_identifier <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::PrefixInfos::PrefixInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_identifier.is_set || is_set(node_identifier.yfilter)) leaf_name_data.push_back(node_identifier.get_name_leafdata());
    if (node_identifier_xr.is_set || is_set(node_identifier_xr.yfilter)) leaf_name_data.push_back(node_identifier_xr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PceTopology::PrefixInfos::PrefixInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node-protocol-identifier")
    {
        if(node_protocol_identifier == nullptr)
        {
            node_protocol_identifier = std::make_shared<PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier>();
        }
        return node_protocol_identifier;
    }

    if(child_yang_name == "address")
    {
        auto c = std::make_shared<PceTopology::PrefixInfos::PrefixInfo::Address>();
        c->parent = this;
        address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PceTopology::PrefixInfos::PrefixInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(node_protocol_identifier != nullptr)
    {
        children["node-protocol-identifier"] = node_protocol_identifier;
    }

    count = 0;
    for (auto const & c : address)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PceTopology::PrefixInfos::PrefixInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-identifier")
    {
        node_identifier = value;
        node_identifier.value_namespace = name_space;
        node_identifier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-identifier-xr")
    {
        node_identifier_xr = value;
        node_identifier_xr.value_namespace = name_space;
        node_identifier_xr.value_namespace_prefix = name_space_prefix;
    }
}

void PceTopology::PrefixInfos::PrefixInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-identifier")
    {
        node_identifier.yfilter = yfilter;
    }
    if(value_path == "node-identifier-xr")
    {
        node_identifier_xr.yfilter = yfilter;
    }
}

bool PceTopology::PrefixInfos::PrefixInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node-protocol-identifier" || name == "address" || name == "node-identifier" || name == "node-identifier-xr")
        return true;
    return false;
}

PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::NodeProtocolIdentifier()
    :
    node_name{YType::str, "node-name"},
    ipv4_bgp_router_id_set{YType::boolean, "ipv4-bgp-router-id-set"},
    ipv4_bgp_router_id{YType::str, "ipv4-bgp-router-id"},
    ipv4te_router_id_set{YType::boolean, "ipv4te-router-id-set"},
    ipv4te_router_id{YType::str, "ipv4te-router-id"}
{

    yang_name = "node-protocol-identifier"; yang_parent_name = "prefix-info"; is_top_level_class = false; has_list_ancestor = true;
}

PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::~NodeProtocolIdentifier()
{
}

bool PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::has_data() const
{
    for (std::size_t index=0; index<igp_information.size(); index++)
    {
        if(igp_information[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<srgb_information.size(); index++)
    {
        if(srgb_information[index]->has_data())
            return true;
    }
    return node_name.is_set
	|| ipv4_bgp_router_id_set.is_set
	|| ipv4_bgp_router_id.is_set
	|| ipv4te_router_id_set.is_set
	|| ipv4te_router_id.is_set;
}

bool PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::has_operation() const
{
    for (std::size_t index=0; index<igp_information.size(); index++)
    {
        if(igp_information[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<srgb_information.size(); index++)
    {
        if(srgb_information[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(node_name.yfilter)
	|| ydk::is_set(ipv4_bgp_router_id_set.yfilter)
	|| ydk::is_set(ipv4_bgp_router_id.yfilter)
	|| ydk::is_set(ipv4te_router_id_set.yfilter)
	|| ydk::is_set(ipv4te_router_id.yfilter);
}

std::string PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node-protocol-identifier";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());
    if (ipv4_bgp_router_id_set.is_set || is_set(ipv4_bgp_router_id_set.yfilter)) leaf_name_data.push_back(ipv4_bgp_router_id_set.get_name_leafdata());
    if (ipv4_bgp_router_id.is_set || is_set(ipv4_bgp_router_id.yfilter)) leaf_name_data.push_back(ipv4_bgp_router_id.get_name_leafdata());
    if (ipv4te_router_id_set.is_set || is_set(ipv4te_router_id_set.yfilter)) leaf_name_data.push_back(ipv4te_router_id_set.get_name_leafdata());
    if (ipv4te_router_id.is_set || is_set(ipv4te_router_id.yfilter)) leaf_name_data.push_back(ipv4te_router_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "igp-information")
    {
        auto c = std::make_shared<PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation>();
        c->parent = this;
        igp_information.push_back(c);
        return c;
    }

    if(child_yang_name == "srgb-information")
    {
        auto c = std::make_shared<PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation>();
        c->parent = this;
        srgb_information.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : igp_information)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : srgb_information)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-name")
    {
        node_name = value;
        node_name.value_namespace = name_space;
        node_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-bgp-router-id-set")
    {
        ipv4_bgp_router_id_set = value;
        ipv4_bgp_router_id_set.value_namespace = name_space;
        ipv4_bgp_router_id_set.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-bgp-router-id")
    {
        ipv4_bgp_router_id = value;
        ipv4_bgp_router_id.value_namespace = name_space;
        ipv4_bgp_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4te-router-id-set")
    {
        ipv4te_router_id_set = value;
        ipv4te_router_id_set.value_namespace = name_space;
        ipv4te_router_id_set.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4te-router-id")
    {
        ipv4te_router_id = value;
        ipv4te_router_id.value_namespace = name_space;
        ipv4te_router_id.value_namespace_prefix = name_space_prefix;
    }
}

void PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-name")
    {
        node_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-bgp-router-id-set")
    {
        ipv4_bgp_router_id_set.yfilter = yfilter;
    }
    if(value_path == "ipv4-bgp-router-id")
    {
        ipv4_bgp_router_id.yfilter = yfilter;
    }
    if(value_path == "ipv4te-router-id-set")
    {
        ipv4te_router_id_set.yfilter = yfilter;
    }
    if(value_path == "ipv4te-router-id")
    {
        ipv4te_router_id.yfilter = yfilter;
    }
}

bool PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "igp-information" || name == "srgb-information" || name == "node-name" || name == "ipv4-bgp-router-id-set" || name == "ipv4-bgp-router-id" || name == "ipv4te-router-id-set" || name == "ipv4te-router-id")
        return true;
    return false;
}

PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::IgpInformation()
    :
    domain_identifier{YType::uint64, "domain-identifier"},
    autonomous_system_number{YType::uint32, "autonomous-system-number"}
    	,
    igp(std::make_shared<PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp>())
{
    igp->parent = this;

    yang_name = "igp-information"; yang_parent_name = "node-protocol-identifier"; is_top_level_class = false; has_list_ancestor = true;
}

PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::~IgpInformation()
{
}

bool PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::has_data() const
{
    return domain_identifier.is_set
	|| autonomous_system_number.is_set
	|| (igp !=  nullptr && igp->has_data());
}

bool PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(domain_identifier.yfilter)
	|| ydk::is_set(autonomous_system_number.yfilter)
	|| (igp !=  nullptr && igp->has_operation());
}

std::string PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "igp-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (domain_identifier.is_set || is_set(domain_identifier.yfilter)) leaf_name_data.push_back(domain_identifier.get_name_leafdata());
    if (autonomous_system_number.is_set || is_set(autonomous_system_number.yfilter)) leaf_name_data.push_back(autonomous_system_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "igp")
    {
        if(igp == nullptr)
        {
            igp = std::make_shared<PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp>();
        }
        return igp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(igp != nullptr)
    {
        children["igp"] = igp;
    }

    return children;
}

void PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "domain-identifier")
    {
        domain_identifier = value;
        domain_identifier.value_namespace = name_space;
        domain_identifier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "autonomous-system-number")
    {
        autonomous_system_number = value;
        autonomous_system_number.value_namespace = name_space;
        autonomous_system_number.value_namespace_prefix = name_space_prefix;
    }
}

void PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "domain-identifier")
    {
        domain_identifier.yfilter = yfilter;
    }
    if(value_path == "autonomous-system-number")
    {
        autonomous_system_number.yfilter = yfilter;
    }
}

bool PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "igp" || name == "domain-identifier" || name == "autonomous-system-number")
        return true;
    return false;
}

PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::Igp()
    :
    igp_id{YType::enumeration, "igp-id"}
    	,
    isis(std::make_shared<PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::Isis>())
	,ospf(std::make_shared<PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::Ospf>())
	,bgp(std::make_shared<PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::Bgp>())
{
    isis->parent = this;
    ospf->parent = this;
    bgp->parent = this;

    yang_name = "igp"; yang_parent_name = "igp-information"; is_top_level_class = false; has_list_ancestor = true;
}

PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::~Igp()
{
}

bool PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::has_data() const
{
    return igp_id.is_set
	|| (isis !=  nullptr && isis->has_data())
	|| (ospf !=  nullptr && ospf->has_data())
	|| (bgp !=  nullptr && bgp->has_data());
}

bool PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(igp_id.yfilter)
	|| (isis !=  nullptr && isis->has_operation())
	|| (ospf !=  nullptr && ospf->has_operation())
	|| (bgp !=  nullptr && bgp->has_operation());
}

std::string PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "igp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (igp_id.is_set || is_set(igp_id.yfilter)) leaf_name_data.push_back(igp_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "isis")
    {
        if(isis == nullptr)
        {
            isis = std::make_shared<PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::Isis>();
        }
        return isis;
    }

    if(child_yang_name == "ospf")
    {
        if(ospf == nullptr)
        {
            ospf = std::make_shared<PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::Ospf>();
        }
        return ospf;
    }

    if(child_yang_name == "bgp")
    {
        if(bgp == nullptr)
        {
            bgp = std::make_shared<PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::Bgp>();
        }
        return bgp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(isis != nullptr)
    {
        children["isis"] = isis;
    }

    if(ospf != nullptr)
    {
        children["ospf"] = ospf;
    }

    if(bgp != nullptr)
    {
        children["bgp"] = bgp;
    }

    return children;
}

void PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "igp-id")
    {
        igp_id = value;
        igp_id.value_namespace = name_space;
        igp_id.value_namespace_prefix = name_space_prefix;
    }
}

void PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "igp-id")
    {
        igp_id.yfilter = yfilter;
    }
}

bool PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "isis" || name == "ospf" || name == "bgp" || name == "igp-id")
        return true;
    return false;
}

PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::Isis::Isis()
    :
    system_id{YType::str, "system-id"},
    level{YType::uint32, "level"}
{

    yang_name = "isis"; yang_parent_name = "igp"; is_top_level_class = false; has_list_ancestor = true;
}

PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::Isis::~Isis()
{
}

bool PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::Isis::has_data() const
{
    return system_id.is_set
	|| level.is_set;
}

bool PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::Isis::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(system_id.yfilter)
	|| ydk::is_set(level.yfilter);
}

std::string PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::Isis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::Isis::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (system_id.is_set || is_set(system_id.yfilter)) leaf_name_data.push_back(system_id.get_name_leafdata());
    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::Isis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::Isis::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::Isis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "system-id")
    {
        system_id = value;
        system_id.value_namespace = name_space;
        system_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
}

void PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::Isis::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "system-id")
    {
        system_id.yfilter = yfilter;
    }
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
}

bool PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::Isis::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "system-id" || name == "level")
        return true;
    return false;
}

PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::Ospf::Ospf()
    :
    router_id{YType::str, "router-id"},
    area{YType::uint32, "area"}
{

    yang_name = "ospf"; yang_parent_name = "igp"; is_top_level_class = false; has_list_ancestor = true;
}

PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::Ospf::~Ospf()
{
}

bool PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::Ospf::has_data() const
{
    return router_id.is_set
	|| area.is_set;
}

bool PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::Ospf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(router_id.yfilter)
	|| ydk::is_set(area.yfilter);
}

std::string PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::Ospf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::Ospf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());
    if (area.is_set || is_set(area.yfilter)) leaf_name_data.push_back(area.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::Ospf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::Ospf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::Ospf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area")
    {
        area = value;
        area.value_namespace = name_space;
        area.value_namespace_prefix = name_space_prefix;
    }
}

void PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::Ospf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
    if(value_path == "area")
    {
        area.yfilter = yfilter;
    }
}

bool PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::Ospf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "router-id" || name == "area")
        return true;
    return false;
}

PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::Bgp::Bgp()
    :
    router_id{YType::str, "router-id"},
    confed_asn{YType::uint32, "confed-asn"}
{

    yang_name = "bgp"; yang_parent_name = "igp"; is_top_level_class = false; has_list_ancestor = true;
}

PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::Bgp::~Bgp()
{
}

bool PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::Bgp::has_data() const
{
    return router_id.is_set
	|| confed_asn.is_set;
}

bool PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::Bgp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(router_id.yfilter)
	|| ydk::is_set(confed_asn.yfilter);
}

std::string PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::Bgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::Bgp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());
    if (confed_asn.is_set || is_set(confed_asn.yfilter)) leaf_name_data.push_back(confed_asn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::Bgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::Bgp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::Bgp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "confed-asn")
    {
        confed_asn = value;
        confed_asn.value_namespace = name_space;
        confed_asn.value_namespace_prefix = name_space_prefix;
    }
}

void PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::Bgp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
    if(value_path == "confed-asn")
    {
        confed_asn.yfilter = yfilter;
    }
}

bool PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::Bgp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "router-id" || name == "confed-asn")
        return true;
    return false;
}

PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::SrgbInformation()
    :
    start{YType::uint32, "start"},
    size{YType::uint32, "size"}
    	,
    igp_srgb(std::make_shared<PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::IgpSrgb>())
{
    igp_srgb->parent = this;

    yang_name = "srgb-information"; yang_parent_name = "node-protocol-identifier"; is_top_level_class = false; has_list_ancestor = true;
}

PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::~SrgbInformation()
{
}

bool PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::has_data() const
{
    return start.is_set
	|| size.is_set
	|| (igp_srgb !=  nullptr && igp_srgb->has_data());
}

bool PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(start.yfilter)
	|| ydk::is_set(size.yfilter)
	|| (igp_srgb !=  nullptr && igp_srgb->has_operation());
}

std::string PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srgb-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (start.is_set || is_set(start.yfilter)) leaf_name_data.push_back(start.get_name_leafdata());
    if (size.is_set || is_set(size.yfilter)) leaf_name_data.push_back(size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "igp-srgb")
    {
        if(igp_srgb == nullptr)
        {
            igp_srgb = std::make_shared<PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::IgpSrgb>();
        }
        return igp_srgb;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(igp_srgb != nullptr)
    {
        children["igp-srgb"] = igp_srgb;
    }

    return children;
}

void PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "start")
    {
        start = value;
        start.value_namespace = name_space;
        start.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "size")
    {
        size = value;
        size.value_namespace = name_space;
        size.value_namespace_prefix = name_space_prefix;
    }
}

void PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "start")
    {
        start.yfilter = yfilter;
    }
    if(value_path == "size")
    {
        size.yfilter = yfilter;
    }
}

bool PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "igp-srgb" || name == "start" || name == "size")
        return true;
    return false;
}

PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::IgpSrgb()
    :
    igp_id{YType::enumeration, "igp-id"}
    	,
    isis(std::make_shared<PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Isis>())
	,ospf(std::make_shared<PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Ospf>())
	,bgp(std::make_shared<PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Bgp>())
{
    isis->parent = this;
    ospf->parent = this;
    bgp->parent = this;

    yang_name = "igp-srgb"; yang_parent_name = "srgb-information"; is_top_level_class = false; has_list_ancestor = true;
}

PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::~IgpSrgb()
{
}

bool PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::has_data() const
{
    return igp_id.is_set
	|| (isis !=  nullptr && isis->has_data())
	|| (ospf !=  nullptr && ospf->has_data())
	|| (bgp !=  nullptr && bgp->has_data());
}

bool PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(igp_id.yfilter)
	|| (isis !=  nullptr && isis->has_operation())
	|| (ospf !=  nullptr && ospf->has_operation())
	|| (bgp !=  nullptr && bgp->has_operation());
}

std::string PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "igp-srgb";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (igp_id.is_set || is_set(igp_id.yfilter)) leaf_name_data.push_back(igp_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "isis")
    {
        if(isis == nullptr)
        {
            isis = std::make_shared<PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Isis>();
        }
        return isis;
    }

    if(child_yang_name == "ospf")
    {
        if(ospf == nullptr)
        {
            ospf = std::make_shared<PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Ospf>();
        }
        return ospf;
    }

    if(child_yang_name == "bgp")
    {
        if(bgp == nullptr)
        {
            bgp = std::make_shared<PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Bgp>();
        }
        return bgp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(isis != nullptr)
    {
        children["isis"] = isis;
    }

    if(ospf != nullptr)
    {
        children["ospf"] = ospf;
    }

    if(bgp != nullptr)
    {
        children["bgp"] = bgp;
    }

    return children;
}

void PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "igp-id")
    {
        igp_id = value;
        igp_id.value_namespace = name_space;
        igp_id.value_namespace_prefix = name_space_prefix;
    }
}

void PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "igp-id")
    {
        igp_id.yfilter = yfilter;
    }
}

bool PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "isis" || name == "ospf" || name == "bgp" || name == "igp-id")
        return true;
    return false;
}

PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Isis::Isis()
    :
    system_id{YType::str, "system-id"},
    level{YType::uint32, "level"}
{

    yang_name = "isis"; yang_parent_name = "igp-srgb"; is_top_level_class = false; has_list_ancestor = true;
}

PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Isis::~Isis()
{
}

bool PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Isis::has_data() const
{
    return system_id.is_set
	|| level.is_set;
}

bool PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Isis::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(system_id.yfilter)
	|| ydk::is_set(level.yfilter);
}

std::string PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Isis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Isis::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (system_id.is_set || is_set(system_id.yfilter)) leaf_name_data.push_back(system_id.get_name_leafdata());
    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Isis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Isis::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Isis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "system-id")
    {
        system_id = value;
        system_id.value_namespace = name_space;
        system_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
}

void PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Isis::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "system-id")
    {
        system_id.yfilter = yfilter;
    }
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
}

bool PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Isis::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "system-id" || name == "level")
        return true;
    return false;
}

PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Ospf::Ospf()
    :
    router_id{YType::str, "router-id"},
    area{YType::uint32, "area"}
{

    yang_name = "ospf"; yang_parent_name = "igp-srgb"; is_top_level_class = false; has_list_ancestor = true;
}

PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Ospf::~Ospf()
{
}

bool PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Ospf::has_data() const
{
    return router_id.is_set
	|| area.is_set;
}

bool PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Ospf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(router_id.yfilter)
	|| ydk::is_set(area.yfilter);
}

std::string PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Ospf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Ospf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());
    if (area.is_set || is_set(area.yfilter)) leaf_name_data.push_back(area.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Ospf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Ospf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Ospf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area")
    {
        area = value;
        area.value_namespace = name_space;
        area.value_namespace_prefix = name_space_prefix;
    }
}

void PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Ospf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
    if(value_path == "area")
    {
        area.yfilter = yfilter;
    }
}

bool PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Ospf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "router-id" || name == "area")
        return true;
    return false;
}

PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Bgp::Bgp()
    :
    router_id{YType::str, "router-id"},
    confed_asn{YType::uint32, "confed-asn"}
{

    yang_name = "bgp"; yang_parent_name = "igp-srgb"; is_top_level_class = false; has_list_ancestor = true;
}

PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Bgp::~Bgp()
{
}

bool PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Bgp::has_data() const
{
    return router_id.is_set
	|| confed_asn.is_set;
}

bool PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Bgp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(router_id.yfilter)
	|| ydk::is_set(confed_asn.yfilter);
}

std::string PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Bgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Bgp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());
    if (confed_asn.is_set || is_set(confed_asn.yfilter)) leaf_name_data.push_back(confed_asn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Bgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Bgp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Bgp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "confed-asn")
    {
        confed_asn = value;
        confed_asn.value_namespace = name_space;
        confed_asn.value_namespace_prefix = name_space_prefix;
    }
}

void PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Bgp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
    if(value_path == "confed-asn")
    {
        confed_asn.yfilter = yfilter;
    }
}

bool PceTopology::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Bgp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "router-id" || name == "confed-asn")
        return true;
    return false;
}

PceTopology::PrefixInfos::PrefixInfo::Address::Address()
    :
    ip(std::make_shared<PceTopology::PrefixInfos::PrefixInfo::Address::Ip>())
{
    ip->parent = this;

    yang_name = "address"; yang_parent_name = "prefix-info"; is_top_level_class = false; has_list_ancestor = true;
}

PceTopology::PrefixInfos::PrefixInfo::Address::~Address()
{
}

bool PceTopology::PrefixInfos::PrefixInfo::Address::has_data() const
{
    return (ip !=  nullptr && ip->has_data());
}

bool PceTopology::PrefixInfos::PrefixInfo::Address::has_operation() const
{
    return is_set(yfilter)
	|| (ip !=  nullptr && ip->has_operation());
}

std::string PceTopology::PrefixInfos::PrefixInfo::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::PrefixInfos::PrefixInfo::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PceTopology::PrefixInfos::PrefixInfo::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<PceTopology::PrefixInfos::PrefixInfo::Address::Ip>();
        }
        return ip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PceTopology::PrefixInfos::PrefixInfo::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    return children;
}

void PceTopology::PrefixInfos::PrefixInfo::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PceTopology::PrefixInfos::PrefixInfo::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PceTopology::PrefixInfos::PrefixInfo::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip")
        return true;
    return false;
}

PceTopology::PrefixInfos::PrefixInfo::Address::Ip::Ip()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "ip"; yang_parent_name = "address"; is_top_level_class = false; has_list_ancestor = true;
}

PceTopology::PrefixInfos::PrefixInfo::Address::Ip::~Ip()
{
}

bool PceTopology::PrefixInfos::PrefixInfo::Address::Ip::has_data() const
{
    return af_name.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool PceTopology::PrefixInfos::PrefixInfo::Address::Ip::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string PceTopology::PrefixInfos::PrefixInfo::Address::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PceTopology::PrefixInfos::PrefixInfo::Address::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PceTopology::PrefixInfos::PrefixInfo::Address::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PceTopology::PrefixInfos::PrefixInfo::Address::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PceTopology::PrefixInfos::PrefixInfo::Address::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void PceTopology::PrefixInfos::PrefixInfo::Address::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
}

bool PceTopology::PrefixInfos::PrefixInfo::Address::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Pce::Pce()
    :
    association_infos(std::make_shared<Pce::AssociationInfos>())
	,cspf(std::make_shared<Pce::Cspf>())
	,topology_summary(std::make_shared<Pce::TopologySummary>())
	,tunnel_infos(std::make_shared<Pce::TunnelInfos>())
	,peer_detail_infos(std::make_shared<Pce::PeerDetailInfos>())
	,topology_nodes(std::make_shared<Pce::TopologyNodes>())
	,prefix_infos(std::make_shared<Pce::PrefixInfos>())
	,lsp_summary(std::make_shared<Pce::LspSummary>())
	,peer_infos(std::make_shared<Pce::PeerInfos>())
	,tunnel_detail_infos(std::make_shared<Pce::TunnelDetailInfos>())
{
    association_infos->parent = this;
    cspf->parent = this;
    topology_summary->parent = this;
    tunnel_infos->parent = this;
    peer_detail_infos->parent = this;
    topology_nodes->parent = this;
    prefix_infos->parent = this;
    lsp_summary->parent = this;
    peer_infos->parent = this;
    tunnel_detail_infos->parent = this;

    yang_name = "pce"; yang_parent_name = "Cisco-IOS-XR-infra-xtc-oper"; is_top_level_class = true; has_list_ancestor = false;
}

Pce::~Pce()
{
}

bool Pce::has_data() const
{
    return (association_infos !=  nullptr && association_infos->has_data())
	|| (cspf !=  nullptr && cspf->has_data())
	|| (topology_summary !=  nullptr && topology_summary->has_data())
	|| (tunnel_infos !=  nullptr && tunnel_infos->has_data())
	|| (peer_detail_infos !=  nullptr && peer_detail_infos->has_data())
	|| (topology_nodes !=  nullptr && topology_nodes->has_data())
	|| (prefix_infos !=  nullptr && prefix_infos->has_data())
	|| (lsp_summary !=  nullptr && lsp_summary->has_data())
	|| (peer_infos !=  nullptr && peer_infos->has_data())
	|| (tunnel_detail_infos !=  nullptr && tunnel_detail_infos->has_data());
}

bool Pce::has_operation() const
{
    return is_set(yfilter)
	|| (association_infos !=  nullptr && association_infos->has_operation())
	|| (cspf !=  nullptr && cspf->has_operation())
	|| (topology_summary !=  nullptr && topology_summary->has_operation())
	|| (tunnel_infos !=  nullptr && tunnel_infos->has_operation())
	|| (peer_detail_infos !=  nullptr && peer_detail_infos->has_operation())
	|| (topology_nodes !=  nullptr && topology_nodes->has_operation())
	|| (prefix_infos !=  nullptr && prefix_infos->has_operation())
	|| (lsp_summary !=  nullptr && lsp_summary->has_operation())
	|| (peer_infos !=  nullptr && peer_infos->has_operation())
	|| (tunnel_detail_infos !=  nullptr && tunnel_detail_infos->has_operation());
}

std::string Pce::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-xtc-oper:pce";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Pce::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "association-infos")
    {
        if(association_infos == nullptr)
        {
            association_infos = std::make_shared<Pce::AssociationInfos>();
        }
        return association_infos;
    }

    if(child_yang_name == "cspf")
    {
        if(cspf == nullptr)
        {
            cspf = std::make_shared<Pce::Cspf>();
        }
        return cspf;
    }

    if(child_yang_name == "topology-summary")
    {
        if(topology_summary == nullptr)
        {
            topology_summary = std::make_shared<Pce::TopologySummary>();
        }
        return topology_summary;
    }

    if(child_yang_name == "tunnel-infos")
    {
        if(tunnel_infos == nullptr)
        {
            tunnel_infos = std::make_shared<Pce::TunnelInfos>();
        }
        return tunnel_infos;
    }

    if(child_yang_name == "peer-detail-infos")
    {
        if(peer_detail_infos == nullptr)
        {
            peer_detail_infos = std::make_shared<Pce::PeerDetailInfos>();
        }
        return peer_detail_infos;
    }

    if(child_yang_name == "topology-nodes")
    {
        if(topology_nodes == nullptr)
        {
            topology_nodes = std::make_shared<Pce::TopologyNodes>();
        }
        return topology_nodes;
    }

    if(child_yang_name == "prefix-infos")
    {
        if(prefix_infos == nullptr)
        {
            prefix_infos = std::make_shared<Pce::PrefixInfos>();
        }
        return prefix_infos;
    }

    if(child_yang_name == "lsp-summary")
    {
        if(lsp_summary == nullptr)
        {
            lsp_summary = std::make_shared<Pce::LspSummary>();
        }
        return lsp_summary;
    }

    if(child_yang_name == "peer-infos")
    {
        if(peer_infos == nullptr)
        {
            peer_infos = std::make_shared<Pce::PeerInfos>();
        }
        return peer_infos;
    }

    if(child_yang_name == "tunnel-detail-infos")
    {
        if(tunnel_detail_infos == nullptr)
        {
            tunnel_detail_infos = std::make_shared<Pce::TunnelDetailInfos>();
        }
        return tunnel_detail_infos;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pce::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(association_infos != nullptr)
    {
        children["association-infos"] = association_infos;
    }

    if(cspf != nullptr)
    {
        children["cspf"] = cspf;
    }

    if(topology_summary != nullptr)
    {
        children["topology-summary"] = topology_summary;
    }

    if(tunnel_infos != nullptr)
    {
        children["tunnel-infos"] = tunnel_infos;
    }

    if(peer_detail_infos != nullptr)
    {
        children["peer-detail-infos"] = peer_detail_infos;
    }

    if(topology_nodes != nullptr)
    {
        children["topology-nodes"] = topology_nodes;
    }

    if(prefix_infos != nullptr)
    {
        children["prefix-infos"] = prefix_infos;
    }

    if(lsp_summary != nullptr)
    {
        children["lsp-summary"] = lsp_summary;
    }

    if(peer_infos != nullptr)
    {
        children["peer-infos"] = peer_infos;
    }

    if(tunnel_detail_infos != nullptr)
    {
        children["tunnel-detail-infos"] = tunnel_detail_infos;
    }

    return children;
}

void Pce::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pce::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> Pce::clone_ptr() const
{
    return std::make_shared<Pce>();
}

std::string Pce::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Pce::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Pce::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Pce::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Pce::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "association-infos" || name == "cspf" || name == "topology-summary" || name == "tunnel-infos" || name == "peer-detail-infos" || name == "topology-nodes" || name == "prefix-infos" || name == "lsp-summary" || name == "peer-infos" || name == "tunnel-detail-infos")
        return true;
    return false;
}

Pce::AssociationInfos::AssociationInfos()
{

    yang_name = "association-infos"; yang_parent_name = "pce"; is_top_level_class = false; has_list_ancestor = false;
}

Pce::AssociationInfos::~AssociationInfos()
{
}

bool Pce::AssociationInfos::has_data() const
{
    for (std::size_t index=0; index<association_info.size(); index++)
    {
        if(association_info[index]->has_data())
            return true;
    }
    return false;
}

bool Pce::AssociationInfos::has_operation() const
{
    for (std::size_t index=0; index<association_info.size(); index++)
    {
        if(association_info[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Pce::AssociationInfos::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-xtc-oper:pce/" << get_segment_path();
    return path_buffer.str();
}

std::string Pce::AssociationInfos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "association-infos";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::AssociationInfos::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Pce::AssociationInfos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "association-info")
    {
        auto c = std::make_shared<Pce::AssociationInfos::AssociationInfo>();
        c->parent = this;
        association_info.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pce::AssociationInfos::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : association_info)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Pce::AssociationInfos::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pce::AssociationInfos::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pce::AssociationInfos::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "association-info")
        return true;
    return false;
}

Pce::AssociationInfos::AssociationInfo::AssociationInfo()
    :
    group_id{YType::int32, "group-id"},
    type{YType::enumeration, "type"},
    sub_id{YType::int32, "sub-id"},
    association_type{YType::uint32, "association-type"},
    association_id{YType::uint32, "association-id"},
    association_source{YType::str, "association-source"},
    strict{YType::boolean, "strict"},
    status{YType::uint32, "status"},
    headends_swapped{YType::uint32, "headends-swapped"}
{

    yang_name = "association-info"; yang_parent_name = "association-infos"; is_top_level_class = false; has_list_ancestor = false;
}

Pce::AssociationInfos::AssociationInfo::~AssociationInfo()
{
}

bool Pce::AssociationInfos::AssociationInfo::has_data() const
{
    for (std::size_t index=0; index<association_lsp.size(); index++)
    {
        if(association_lsp[index]->has_data())
            return true;
    }
    return group_id.is_set
	|| type.is_set
	|| sub_id.is_set
	|| association_type.is_set
	|| association_id.is_set
	|| association_source.is_set
	|| strict.is_set
	|| status.is_set
	|| headends_swapped.is_set;
}

bool Pce::AssociationInfos::AssociationInfo::has_operation() const
{
    for (std::size_t index=0; index<association_lsp.size(); index++)
    {
        if(association_lsp[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(group_id.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(sub_id.yfilter)
	|| ydk::is_set(association_type.yfilter)
	|| ydk::is_set(association_id.yfilter)
	|| ydk::is_set(association_source.yfilter)
	|| ydk::is_set(strict.yfilter)
	|| ydk::is_set(status.yfilter)
	|| ydk::is_set(headends_swapped.yfilter);
}

std::string Pce::AssociationInfos::AssociationInfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-xtc-oper:pce/association-infos/" << get_segment_path();
    return path_buffer.str();
}

std::string Pce::AssociationInfos::AssociationInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "association-info" <<"[group-id='" <<group_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::AssociationInfos::AssociationInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_id.is_set || is_set(group_id.yfilter)) leaf_name_data.push_back(group_id.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (sub_id.is_set || is_set(sub_id.yfilter)) leaf_name_data.push_back(sub_id.get_name_leafdata());
    if (association_type.is_set || is_set(association_type.yfilter)) leaf_name_data.push_back(association_type.get_name_leafdata());
    if (association_id.is_set || is_set(association_id.yfilter)) leaf_name_data.push_back(association_id.get_name_leafdata());
    if (association_source.is_set || is_set(association_source.yfilter)) leaf_name_data.push_back(association_source.get_name_leafdata());
    if (strict.is_set || is_set(strict.yfilter)) leaf_name_data.push_back(strict.get_name_leafdata());
    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());
    if (headends_swapped.is_set || is_set(headends_swapped.yfilter)) leaf_name_data.push_back(headends_swapped.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pce::AssociationInfos::AssociationInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "association-lsp")
    {
        auto c = std::make_shared<Pce::AssociationInfos::AssociationInfo::AssociationLsp>();
        c->parent = this;
        association_lsp.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pce::AssociationInfos::AssociationInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : association_lsp)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Pce::AssociationInfos::AssociationInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group-id")
    {
        group_id = value;
        group_id.value_namespace = name_space;
        group_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-id")
    {
        sub_id = value;
        sub_id.value_namespace = name_space;
        sub_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "association-type")
    {
        association_type = value;
        association_type.value_namespace = name_space;
        association_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "association-id")
    {
        association_id = value;
        association_id.value_namespace = name_space;
        association_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "association-source")
    {
        association_source = value;
        association_source.value_namespace = name_space;
        association_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "strict")
    {
        strict = value;
        strict.value_namespace = name_space;
        strict.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "headends-swapped")
    {
        headends_swapped = value;
        headends_swapped.value_namespace = name_space;
        headends_swapped.value_namespace_prefix = name_space_prefix;
    }
}

void Pce::AssociationInfos::AssociationInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group-id")
    {
        group_id.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "sub-id")
    {
        sub_id.yfilter = yfilter;
    }
    if(value_path == "association-type")
    {
        association_type.yfilter = yfilter;
    }
    if(value_path == "association-id")
    {
        association_id.yfilter = yfilter;
    }
    if(value_path == "association-source")
    {
        association_source.yfilter = yfilter;
    }
    if(value_path == "strict")
    {
        strict.yfilter = yfilter;
    }
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
    if(value_path == "headends-swapped")
    {
        headends_swapped.yfilter = yfilter;
    }
}

bool Pce::AssociationInfos::AssociationInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "association-lsp" || name == "group-id" || name == "type" || name == "sub-id" || name == "association-type" || name == "association-id" || name == "association-source" || name == "strict" || name == "status" || name == "headends-swapped")
        return true;
    return false;
}

Pce::AssociationInfos::AssociationInfo::AssociationLsp::AssociationLsp()
    :
    pcc_address{YType::str, "pcc-address"},
    tunnel_id{YType::uint32, "tunnel-id"},
    lspid{YType::uint32, "lspid"},
    tunnel_name{YType::str, "tunnel-name"},
    pce_based{YType::boolean, "pce-based"},
    plsp_id{YType::uint32, "plsp-id"}
{

    yang_name = "association-lsp"; yang_parent_name = "association-info"; is_top_level_class = false; has_list_ancestor = true;
}

Pce::AssociationInfos::AssociationInfo::AssociationLsp::~AssociationLsp()
{
}

bool Pce::AssociationInfos::AssociationInfo::AssociationLsp::has_data() const
{
    return pcc_address.is_set
	|| tunnel_id.is_set
	|| lspid.is_set
	|| tunnel_name.is_set
	|| pce_based.is_set
	|| plsp_id.is_set;
}

bool Pce::AssociationInfos::AssociationInfo::AssociationLsp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pcc_address.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(lspid.yfilter)
	|| ydk::is_set(tunnel_name.yfilter)
	|| ydk::is_set(pce_based.yfilter)
	|| ydk::is_set(plsp_id.yfilter);
}

std::string Pce::AssociationInfos::AssociationInfo::AssociationLsp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "association-lsp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::AssociationInfos::AssociationInfo::AssociationLsp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pcc_address.is_set || is_set(pcc_address.yfilter)) leaf_name_data.push_back(pcc_address.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (lspid.is_set || is_set(lspid.yfilter)) leaf_name_data.push_back(lspid.get_name_leafdata());
    if (tunnel_name.is_set || is_set(tunnel_name.yfilter)) leaf_name_data.push_back(tunnel_name.get_name_leafdata());
    if (pce_based.is_set || is_set(pce_based.yfilter)) leaf_name_data.push_back(pce_based.get_name_leafdata());
    if (plsp_id.is_set || is_set(plsp_id.yfilter)) leaf_name_data.push_back(plsp_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pce::AssociationInfos::AssociationInfo::AssociationLsp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pce::AssociationInfos::AssociationInfo::AssociationLsp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Pce::AssociationInfos::AssociationInfo::AssociationLsp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pcc-address")
    {
        pcc_address = value;
        pcc_address.value_namespace = name_space;
        pcc_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lspid")
    {
        lspid = value;
        lspid.value_namespace = name_space;
        lspid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-name")
    {
        tunnel_name = value;
        tunnel_name.value_namespace = name_space;
        tunnel_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-based")
    {
        pce_based = value;
        pce_based.value_namespace = name_space;
        pce_based.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "plsp-id")
    {
        plsp_id = value;
        plsp_id.value_namespace = name_space;
        plsp_id.value_namespace_prefix = name_space_prefix;
    }
}

void Pce::AssociationInfos::AssociationInfo::AssociationLsp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pcc-address")
    {
        pcc_address.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "lspid")
    {
        lspid.yfilter = yfilter;
    }
    if(value_path == "tunnel-name")
    {
        tunnel_name.yfilter = yfilter;
    }
    if(value_path == "pce-based")
    {
        pce_based.yfilter = yfilter;
    }
    if(value_path == "plsp-id")
    {
        plsp_id.yfilter = yfilter;
    }
}

bool Pce::AssociationInfos::AssociationInfo::AssociationLsp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pcc-address" || name == "tunnel-id" || name == "lspid" || name == "tunnel-name" || name == "pce-based" || name == "plsp-id")
        return true;
    return false;
}

Pce::Cspf::Cspf()
    :
    cspf_paths(std::make_shared<Pce::Cspf::CspfPaths>())
{
    cspf_paths->parent = this;

    yang_name = "cspf"; yang_parent_name = "pce"; is_top_level_class = false; has_list_ancestor = false;
}

Pce::Cspf::~Cspf()
{
}

bool Pce::Cspf::has_data() const
{
    return (cspf_paths !=  nullptr && cspf_paths->has_data());
}

bool Pce::Cspf::has_operation() const
{
    return is_set(yfilter)
	|| (cspf_paths !=  nullptr && cspf_paths->has_operation());
}

std::string Pce::Cspf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-xtc-oper:pce/" << get_segment_path();
    return path_buffer.str();
}

std::string Pce::Cspf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cspf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::Cspf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Pce::Cspf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cspf-paths")
    {
        if(cspf_paths == nullptr)
        {
            cspf_paths = std::make_shared<Pce::Cspf::CspfPaths>();
        }
        return cspf_paths;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pce::Cspf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(cspf_paths != nullptr)
    {
        children["cspf-paths"] = cspf_paths;
    }

    return children;
}

void Pce::Cspf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pce::Cspf::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pce::Cspf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cspf-paths")
        return true;
    return false;
}

Pce::Cspf::CspfPaths::CspfPaths()
{

    yang_name = "cspf-paths"; yang_parent_name = "cspf"; is_top_level_class = false; has_list_ancestor = false;
}

Pce::Cspf::CspfPaths::~CspfPaths()
{
}

bool Pce::Cspf::CspfPaths::has_data() const
{
    for (std::size_t index=0; index<cspf_path.size(); index++)
    {
        if(cspf_path[index]->has_data())
            return true;
    }
    return false;
}

bool Pce::Cspf::CspfPaths::has_operation() const
{
    for (std::size_t index=0; index<cspf_path.size(); index++)
    {
        if(cspf_path[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Pce::Cspf::CspfPaths::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-xtc-oper:pce/cspf/" << get_segment_path();
    return path_buffer.str();
}

std::string Pce::Cspf::CspfPaths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cspf-paths";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::Cspf::CspfPaths::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Pce::Cspf::CspfPaths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cspf-path")
    {
        auto c = std::make_shared<Pce::Cspf::CspfPaths::CspfPath>();
        c->parent = this;
        cspf_path.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pce::Cspf::CspfPaths::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : cspf_path)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Pce::Cspf::CspfPaths::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pce::Cspf::CspfPaths::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pce::Cspf::CspfPaths::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cspf-path")
        return true;
    return false;
}

Pce::Cspf::CspfPaths::CspfPath::CspfPath()
    :
    af{YType::int32, "af"},
    source1{YType::str, "source1"},
    destination1{YType::str, "destination1"},
    metric_type{YType::int32, "metric-type"},
    source2{YType::str, "source2"},
    destination2{YType::str, "destination2"},
    disjoint_level{YType::int32, "disjoint-level"},
    disjoint_strict{YType::int32, "disjoint-strict"},
    shortest_path{YType::int32, "shortest-path"},
    headends_swapped{YType::enumeration, "headends-swapped"},
    cspf_result{YType::enumeration, "cspf-result"}
{

    yang_name = "cspf-path"; yang_parent_name = "cspf-paths"; is_top_level_class = false; has_list_ancestor = false;
}

Pce::Cspf::CspfPaths::CspfPath::~CspfPath()
{
}

bool Pce::Cspf::CspfPaths::CspfPath::has_data() const
{
    for (std::size_t index=0; index<output_path.size(); index++)
    {
        if(output_path[index]->has_data())
            return true;
    }
    return af.is_set
	|| source1.is_set
	|| destination1.is_set
	|| metric_type.is_set
	|| source2.is_set
	|| destination2.is_set
	|| disjoint_level.is_set
	|| disjoint_strict.is_set
	|| shortest_path.is_set
	|| headends_swapped.is_set
	|| cspf_result.is_set;
}

bool Pce::Cspf::CspfPaths::CspfPath::has_operation() const
{
    for (std::size_t index=0; index<output_path.size(); index++)
    {
        if(output_path[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(af.yfilter)
	|| ydk::is_set(source1.yfilter)
	|| ydk::is_set(destination1.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(source2.yfilter)
	|| ydk::is_set(destination2.yfilter)
	|| ydk::is_set(disjoint_level.yfilter)
	|| ydk::is_set(disjoint_strict.yfilter)
	|| ydk::is_set(shortest_path.yfilter)
	|| ydk::is_set(headends_swapped.yfilter)
	|| ydk::is_set(cspf_result.yfilter);
}

std::string Pce::Cspf::CspfPaths::CspfPath::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-xtc-oper:pce/cspf/cspf-paths/" << get_segment_path();
    return path_buffer.str();
}

std::string Pce::Cspf::CspfPaths::CspfPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cspf-path" <<"[af='" <<af <<"']" <<"[source1='" <<source1 <<"']" <<"[destination1='" <<destination1 <<"']" <<"[metric-type='" <<metric_type <<"']" <<"[source2='" <<source2 <<"']" <<"[destination2='" <<destination2 <<"']" <<"[disjoint-level='" <<disjoint_level <<"']" <<"[disjoint-strict='" <<disjoint_strict <<"']" <<"[shortest-path='" <<shortest_path <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::Cspf::CspfPaths::CspfPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af.is_set || is_set(af.yfilter)) leaf_name_data.push_back(af.get_name_leafdata());
    if (source1.is_set || is_set(source1.yfilter)) leaf_name_data.push_back(source1.get_name_leafdata());
    if (destination1.is_set || is_set(destination1.yfilter)) leaf_name_data.push_back(destination1.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (source2.is_set || is_set(source2.yfilter)) leaf_name_data.push_back(source2.get_name_leafdata());
    if (destination2.is_set || is_set(destination2.yfilter)) leaf_name_data.push_back(destination2.get_name_leafdata());
    if (disjoint_level.is_set || is_set(disjoint_level.yfilter)) leaf_name_data.push_back(disjoint_level.get_name_leafdata());
    if (disjoint_strict.is_set || is_set(disjoint_strict.yfilter)) leaf_name_data.push_back(disjoint_strict.get_name_leafdata());
    if (shortest_path.is_set || is_set(shortest_path.yfilter)) leaf_name_data.push_back(shortest_path.get_name_leafdata());
    if (headends_swapped.is_set || is_set(headends_swapped.yfilter)) leaf_name_data.push_back(headends_swapped.get_name_leafdata());
    if (cspf_result.is_set || is_set(cspf_result.yfilter)) leaf_name_data.push_back(cspf_result.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pce::Cspf::CspfPaths::CspfPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "output-path")
    {
        auto c = std::make_shared<Pce::Cspf::CspfPaths::CspfPath::OutputPath>();
        c->parent = this;
        output_path.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pce::Cspf::CspfPaths::CspfPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : output_path)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Pce::Cspf::CspfPaths::CspfPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af")
    {
        af = value;
        af.value_namespace = name_space;
        af.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source1")
    {
        source1 = value;
        source1.value_namespace = name_space;
        source1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination1")
    {
        destination1 = value;
        destination1.value_namespace = name_space;
        destination1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source2")
    {
        source2 = value;
        source2.value_namespace = name_space;
        source2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination2")
    {
        destination2 = value;
        destination2.value_namespace = name_space;
        destination2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disjoint-level")
    {
        disjoint_level = value;
        disjoint_level.value_namespace = name_space;
        disjoint_level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disjoint-strict")
    {
        disjoint_strict = value;
        disjoint_strict.value_namespace = name_space;
        disjoint_strict.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shortest-path")
    {
        shortest_path = value;
        shortest_path.value_namespace = name_space;
        shortest_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "headends-swapped")
    {
        headends_swapped = value;
        headends_swapped.value_namespace = name_space;
        headends_swapped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cspf-result")
    {
        cspf_result = value;
        cspf_result.value_namespace = name_space;
        cspf_result.value_namespace_prefix = name_space_prefix;
    }
}

void Pce::Cspf::CspfPaths::CspfPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af")
    {
        af.yfilter = yfilter;
    }
    if(value_path == "source1")
    {
        source1.yfilter = yfilter;
    }
    if(value_path == "destination1")
    {
        destination1.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "source2")
    {
        source2.yfilter = yfilter;
    }
    if(value_path == "destination2")
    {
        destination2.yfilter = yfilter;
    }
    if(value_path == "disjoint-level")
    {
        disjoint_level.yfilter = yfilter;
    }
    if(value_path == "disjoint-strict")
    {
        disjoint_strict.yfilter = yfilter;
    }
    if(value_path == "shortest-path")
    {
        shortest_path.yfilter = yfilter;
    }
    if(value_path == "headends-swapped")
    {
        headends_swapped.yfilter = yfilter;
    }
    if(value_path == "cspf-result")
    {
        cspf_result.yfilter = yfilter;
    }
}

bool Pce::Cspf::CspfPaths::CspfPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "output-path" || name == "af" || name == "source1" || name == "destination1" || name == "metric-type" || name == "source2" || name == "destination2" || name == "disjoint-level" || name == "disjoint-strict" || name == "shortest-path" || name == "headends-swapped" || name == "cspf-result")
        return true;
    return false;
}

Pce::Cspf::CspfPaths::CspfPath::OutputPath::OutputPath()
    :
    cost{YType::uint64, "cost"}
    	,
    source(std::make_shared<Pce::Cspf::CspfPaths::CspfPath::OutputPath::Source>())
	,destination(std::make_shared<Pce::Cspf::CspfPaths::CspfPath::OutputPath::Destination>())
{
    source->parent = this;
    destination->parent = this;

    yang_name = "output-path"; yang_parent_name = "cspf-path"; is_top_level_class = false; has_list_ancestor = true;
}

Pce::Cspf::CspfPaths::CspfPath::OutputPath::~OutputPath()
{
}

bool Pce::Cspf::CspfPaths::CspfPath::OutputPath::has_data() const
{
    for (std::size_t index=0; index<hops.size(); index++)
    {
        if(hops[index]->has_data())
            return true;
    }
    return cost.is_set
	|| (source !=  nullptr && source->has_data())
	|| (destination !=  nullptr && destination->has_data());
}

bool Pce::Cspf::CspfPaths::CspfPath::OutputPath::has_operation() const
{
    for (std::size_t index=0; index<hops.size(); index++)
    {
        if(hops[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(cost.yfilter)
	|| (source !=  nullptr && source->has_operation())
	|| (destination !=  nullptr && destination->has_operation());
}

std::string Pce::Cspf::CspfPaths::CspfPath::OutputPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::Cspf::CspfPaths::CspfPath::OutputPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cost.is_set || is_set(cost.yfilter)) leaf_name_data.push_back(cost.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pce::Cspf::CspfPaths::CspfPath::OutputPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "source")
    {
        if(source == nullptr)
        {
            source = std::make_shared<Pce::Cspf::CspfPaths::CspfPath::OutputPath::Source>();
        }
        return source;
    }

    if(child_yang_name == "destination")
    {
        if(destination == nullptr)
        {
            destination = std::make_shared<Pce::Cspf::CspfPaths::CspfPath::OutputPath::Destination>();
        }
        return destination;
    }

    if(child_yang_name == "hops")
    {
        auto c = std::make_shared<Pce::Cspf::CspfPaths::CspfPath::OutputPath::Hops>();
        c->parent = this;
        hops.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pce::Cspf::CspfPaths::CspfPath::OutputPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(source != nullptr)
    {
        children["source"] = source;
    }

    if(destination != nullptr)
    {
        children["destination"] = destination;
    }

    count = 0;
    for (auto const & c : hops)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Pce::Cspf::CspfPaths::CspfPath::OutputPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cost")
    {
        cost = value;
        cost.value_namespace = name_space;
        cost.value_namespace_prefix = name_space_prefix;
    }
}

void Pce::Cspf::CspfPaths::CspfPath::OutputPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cost")
    {
        cost.yfilter = yfilter;
    }
}

bool Pce::Cspf::CspfPaths::CspfPath::OutputPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source" || name == "destination" || name == "hops" || name == "cost")
        return true;
    return false;
}

Pce::Cspf::CspfPaths::CspfPath::OutputPath::Source::Source()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "source"; yang_parent_name = "output-path"; is_top_level_class = false; has_list_ancestor = true;
}

Pce::Cspf::CspfPaths::CspfPath::OutputPath::Source::~Source()
{
}

bool Pce::Cspf::CspfPaths::CspfPath::OutputPath::Source::has_data() const
{
    return af_name.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool Pce::Cspf::CspfPaths::CspfPath::OutputPath::Source::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string Pce::Cspf::CspfPaths::CspfPath::OutputPath::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::Cspf::CspfPaths::CspfPath::OutputPath::Source::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pce::Cspf::CspfPaths::CspfPath::OutputPath::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pce::Cspf::CspfPaths::CspfPath::OutputPath::Source::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Pce::Cspf::CspfPaths::CspfPath::OutputPath::Source::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void Pce::Cspf::CspfPaths::CspfPath::OutputPath::Source::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
}

bool Pce::Cspf::CspfPaths::CspfPath::OutputPath::Source::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Pce::Cspf::CspfPaths::CspfPath::OutputPath::Destination::Destination()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "destination"; yang_parent_name = "output-path"; is_top_level_class = false; has_list_ancestor = true;
}

Pce::Cspf::CspfPaths::CspfPath::OutputPath::Destination::~Destination()
{
}

bool Pce::Cspf::CspfPaths::CspfPath::OutputPath::Destination::has_data() const
{
    return af_name.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool Pce::Cspf::CspfPaths::CspfPath::OutputPath::Destination::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string Pce::Cspf::CspfPaths::CspfPath::OutputPath::Destination::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::Cspf::CspfPaths::CspfPath::OutputPath::Destination::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pce::Cspf::CspfPaths::CspfPath::OutputPath::Destination::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pce::Cspf::CspfPaths::CspfPath::OutputPath::Destination::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Pce::Cspf::CspfPaths::CspfPath::OutputPath::Destination::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void Pce::Cspf::CspfPaths::CspfPath::OutputPath::Destination::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
}

bool Pce::Cspf::CspfPaths::CspfPath::OutputPath::Destination::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Pce::Cspf::CspfPaths::CspfPath::OutputPath::Hops::Hops()
    :
    address_family{YType::uint8, "address-family"},
    ipv4_prefix{YType::str, "ipv4-prefix"},
    ipv6_prefix{YType::str, "ipv6-prefix"}
{

    yang_name = "hops"; yang_parent_name = "output-path"; is_top_level_class = false; has_list_ancestor = true;
}

Pce::Cspf::CspfPaths::CspfPath::OutputPath::Hops::~Hops()
{
}

bool Pce::Cspf::CspfPaths::CspfPath::OutputPath::Hops::has_data() const
{
    return address_family.is_set
	|| ipv4_prefix.is_set
	|| ipv6_prefix.is_set;
}

bool Pce::Cspf::CspfPaths::CspfPath::OutputPath::Hops::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address_family.yfilter)
	|| ydk::is_set(ipv4_prefix.yfilter)
	|| ydk::is_set(ipv6_prefix.yfilter);
}

std::string Pce::Cspf::CspfPaths::CspfPath::OutputPath::Hops::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hops";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::Cspf::CspfPaths::CspfPath::OutputPath::Hops::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_family.is_set || is_set(address_family.yfilter)) leaf_name_data.push_back(address_family.get_name_leafdata());
    if (ipv4_prefix.is_set || is_set(ipv4_prefix.yfilter)) leaf_name_data.push_back(ipv4_prefix.get_name_leafdata());
    if (ipv6_prefix.is_set || is_set(ipv6_prefix.yfilter)) leaf_name_data.push_back(ipv6_prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pce::Cspf::CspfPaths::CspfPath::OutputPath::Hops::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pce::Cspf::CspfPaths::CspfPath::OutputPath::Hops::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Pce::Cspf::CspfPaths::CspfPath::OutputPath::Hops::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address-family")
    {
        address_family = value;
        address_family.value_namespace = name_space;
        address_family.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-prefix")
    {
        ipv4_prefix = value;
        ipv4_prefix.value_namespace = name_space;
        ipv4_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-prefix")
    {
        ipv6_prefix = value;
        ipv6_prefix.value_namespace = name_space;
        ipv6_prefix.value_namespace_prefix = name_space_prefix;
    }
}

void Pce::Cspf::CspfPaths::CspfPath::OutputPath::Hops::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address-family")
    {
        address_family.yfilter = yfilter;
    }
    if(value_path == "ipv4-prefix")
    {
        ipv4_prefix.yfilter = yfilter;
    }
    if(value_path == "ipv6-prefix")
    {
        ipv6_prefix.yfilter = yfilter;
    }
}

bool Pce::Cspf::CspfPaths::CspfPath::OutputPath::Hops::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address-family" || name == "ipv4-prefix" || name == "ipv6-prefix")
        return true;
    return false;
}

Pce::TopologySummary::TopologySummary()
    :
    nodes{YType::uint32, "nodes"},
    lookup_nodes{YType::uint32, "lookup-nodes"},
    prefixes{YType::uint32, "prefixes"},
    prefix_sids{YType::uint32, "prefix-sids"},
    regular_prefix_sids{YType::uint32, "regular-prefix-sids"},
    strict_prefix_sids{YType::uint32, "strict-prefix-sids"},
    links{YType::uint32, "links"},
    epe_links{YType::uint32, "epe-links"},
    adjacency_sids{YType::uint32, "adjacency-sids"},
    epesids{YType::uint32, "epesids"},
    protected_adjacency_sids{YType::uint32, "protected-adjacency-sids"},
    un_protected_adjacency_sids{YType::uint32, "un-protected-adjacency-sids"},
    topology_consistent{YType::boolean, "topology-consistent"}
    	,
    stats_topology_update(std::make_shared<Pce::TopologySummary::StatsTopologyUpdate>())
{
    stats_topology_update->parent = this;

    yang_name = "topology-summary"; yang_parent_name = "pce"; is_top_level_class = false; has_list_ancestor = false;
}

Pce::TopologySummary::~TopologySummary()
{
}

bool Pce::TopologySummary::has_data() const
{
    return nodes.is_set
	|| lookup_nodes.is_set
	|| prefixes.is_set
	|| prefix_sids.is_set
	|| regular_prefix_sids.is_set
	|| strict_prefix_sids.is_set
	|| links.is_set
	|| epe_links.is_set
	|| adjacency_sids.is_set
	|| epesids.is_set
	|| protected_adjacency_sids.is_set
	|| un_protected_adjacency_sids.is_set
	|| topology_consistent.is_set
	|| (stats_topology_update !=  nullptr && stats_topology_update->has_data());
}

bool Pce::TopologySummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nodes.yfilter)
	|| ydk::is_set(lookup_nodes.yfilter)
	|| ydk::is_set(prefixes.yfilter)
	|| ydk::is_set(prefix_sids.yfilter)
	|| ydk::is_set(regular_prefix_sids.yfilter)
	|| ydk::is_set(strict_prefix_sids.yfilter)
	|| ydk::is_set(links.yfilter)
	|| ydk::is_set(epe_links.yfilter)
	|| ydk::is_set(adjacency_sids.yfilter)
	|| ydk::is_set(epesids.yfilter)
	|| ydk::is_set(protected_adjacency_sids.yfilter)
	|| ydk::is_set(un_protected_adjacency_sids.yfilter)
	|| ydk::is_set(topology_consistent.yfilter)
	|| (stats_topology_update !=  nullptr && stats_topology_update->has_operation());
}

std::string Pce::TopologySummary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-xtc-oper:pce/" << get_segment_path();
    return path_buffer.str();
}

std::string Pce::TopologySummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::TopologySummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nodes.is_set || is_set(nodes.yfilter)) leaf_name_data.push_back(nodes.get_name_leafdata());
    if (lookup_nodes.is_set || is_set(lookup_nodes.yfilter)) leaf_name_data.push_back(lookup_nodes.get_name_leafdata());
    if (prefixes.is_set || is_set(prefixes.yfilter)) leaf_name_data.push_back(prefixes.get_name_leafdata());
    if (prefix_sids.is_set || is_set(prefix_sids.yfilter)) leaf_name_data.push_back(prefix_sids.get_name_leafdata());
    if (regular_prefix_sids.is_set || is_set(regular_prefix_sids.yfilter)) leaf_name_data.push_back(regular_prefix_sids.get_name_leafdata());
    if (strict_prefix_sids.is_set || is_set(strict_prefix_sids.yfilter)) leaf_name_data.push_back(strict_prefix_sids.get_name_leafdata());
    if (links.is_set || is_set(links.yfilter)) leaf_name_data.push_back(links.get_name_leafdata());
    if (epe_links.is_set || is_set(epe_links.yfilter)) leaf_name_data.push_back(epe_links.get_name_leafdata());
    if (adjacency_sids.is_set || is_set(adjacency_sids.yfilter)) leaf_name_data.push_back(adjacency_sids.get_name_leafdata());
    if (epesids.is_set || is_set(epesids.yfilter)) leaf_name_data.push_back(epesids.get_name_leafdata());
    if (protected_adjacency_sids.is_set || is_set(protected_adjacency_sids.yfilter)) leaf_name_data.push_back(protected_adjacency_sids.get_name_leafdata());
    if (un_protected_adjacency_sids.is_set || is_set(un_protected_adjacency_sids.yfilter)) leaf_name_data.push_back(un_protected_adjacency_sids.get_name_leafdata());
    if (topology_consistent.is_set || is_set(topology_consistent.yfilter)) leaf_name_data.push_back(topology_consistent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pce::TopologySummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stats-topology-update")
    {
        if(stats_topology_update == nullptr)
        {
            stats_topology_update = std::make_shared<Pce::TopologySummary::StatsTopologyUpdate>();
        }
        return stats_topology_update;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pce::TopologySummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(stats_topology_update != nullptr)
    {
        children["stats-topology-update"] = stats_topology_update;
    }

    return children;
}

void Pce::TopologySummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nodes")
    {
        nodes = value;
        nodes.value_namespace = name_space;
        nodes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lookup-nodes")
    {
        lookup_nodes = value;
        lookup_nodes.value_namespace = name_space;
        lookup_nodes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefixes")
    {
        prefixes = value;
        prefixes.value_namespace = name_space;
        prefixes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-sids")
    {
        prefix_sids = value;
        prefix_sids.value_namespace = name_space;
        prefix_sids.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "regular-prefix-sids")
    {
        regular_prefix_sids = value;
        regular_prefix_sids.value_namespace = name_space;
        regular_prefix_sids.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "strict-prefix-sids")
    {
        strict_prefix_sids = value;
        strict_prefix_sids.value_namespace = name_space;
        strict_prefix_sids.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "links")
    {
        links = value;
        links.value_namespace = name_space;
        links.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "epe-links")
    {
        epe_links = value;
        epe_links.value_namespace = name_space;
        epe_links.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adjacency-sids")
    {
        adjacency_sids = value;
        adjacency_sids.value_namespace = name_space;
        adjacency_sids.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "epesids")
    {
        epesids = value;
        epesids.value_namespace = name_space;
        epesids.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protected-adjacency-sids")
    {
        protected_adjacency_sids = value;
        protected_adjacency_sids.value_namespace = name_space;
        protected_adjacency_sids.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "un-protected-adjacency-sids")
    {
        un_protected_adjacency_sids = value;
        un_protected_adjacency_sids.value_namespace = name_space;
        un_protected_adjacency_sids.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "topology-consistent")
    {
        topology_consistent = value;
        topology_consistent.value_namespace = name_space;
        topology_consistent.value_namespace_prefix = name_space_prefix;
    }
}

void Pce::TopologySummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nodes")
    {
        nodes.yfilter = yfilter;
    }
    if(value_path == "lookup-nodes")
    {
        lookup_nodes.yfilter = yfilter;
    }
    if(value_path == "prefixes")
    {
        prefixes.yfilter = yfilter;
    }
    if(value_path == "prefix-sids")
    {
        prefix_sids.yfilter = yfilter;
    }
    if(value_path == "regular-prefix-sids")
    {
        regular_prefix_sids.yfilter = yfilter;
    }
    if(value_path == "strict-prefix-sids")
    {
        strict_prefix_sids.yfilter = yfilter;
    }
    if(value_path == "links")
    {
        links.yfilter = yfilter;
    }
    if(value_path == "epe-links")
    {
        epe_links.yfilter = yfilter;
    }
    if(value_path == "adjacency-sids")
    {
        adjacency_sids.yfilter = yfilter;
    }
    if(value_path == "epesids")
    {
        epesids.yfilter = yfilter;
    }
    if(value_path == "protected-adjacency-sids")
    {
        protected_adjacency_sids.yfilter = yfilter;
    }
    if(value_path == "un-protected-adjacency-sids")
    {
        un_protected_adjacency_sids.yfilter = yfilter;
    }
    if(value_path == "topology-consistent")
    {
        topology_consistent.yfilter = yfilter;
    }
}

bool Pce::TopologySummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stats-topology-update" || name == "nodes" || name == "lookup-nodes" || name == "prefixes" || name == "prefix-sids" || name == "regular-prefix-sids" || name == "strict-prefix-sids" || name == "links" || name == "epe-links" || name == "adjacency-sids" || name == "epesids" || name == "protected-adjacency-sids" || name == "un-protected-adjacency-sids" || name == "topology-consistent")
        return true;
    return false;
}

Pce::TopologySummary::StatsTopologyUpdate::StatsTopologyUpdate()
    :
    num_nodes_added{YType::uint32, "num-nodes-added"},
    num_nodes_deleted{YType::uint32, "num-nodes-deleted"},
    num_links_added{YType::uint32, "num-links-added"},
    num_links_deleted{YType::uint32, "num-links-deleted"},
    num_prefixes_added{YType::uint32, "num-prefixes-added"},
    num_prefixes_deleted{YType::uint32, "num-prefixes-deleted"}
{

    yang_name = "stats-topology-update"; yang_parent_name = "topology-summary"; is_top_level_class = false; has_list_ancestor = false;
}

Pce::TopologySummary::StatsTopologyUpdate::~StatsTopologyUpdate()
{
}

bool Pce::TopologySummary::StatsTopologyUpdate::has_data() const
{
    return num_nodes_added.is_set
	|| num_nodes_deleted.is_set
	|| num_links_added.is_set
	|| num_links_deleted.is_set
	|| num_prefixes_added.is_set
	|| num_prefixes_deleted.is_set;
}

bool Pce::TopologySummary::StatsTopologyUpdate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(num_nodes_added.yfilter)
	|| ydk::is_set(num_nodes_deleted.yfilter)
	|| ydk::is_set(num_links_added.yfilter)
	|| ydk::is_set(num_links_deleted.yfilter)
	|| ydk::is_set(num_prefixes_added.yfilter)
	|| ydk::is_set(num_prefixes_deleted.yfilter);
}

std::string Pce::TopologySummary::StatsTopologyUpdate::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-xtc-oper:pce/topology-summary/" << get_segment_path();
    return path_buffer.str();
}

std::string Pce::TopologySummary::StatsTopologyUpdate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stats-topology-update";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::TopologySummary::StatsTopologyUpdate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (num_nodes_added.is_set || is_set(num_nodes_added.yfilter)) leaf_name_data.push_back(num_nodes_added.get_name_leafdata());
    if (num_nodes_deleted.is_set || is_set(num_nodes_deleted.yfilter)) leaf_name_data.push_back(num_nodes_deleted.get_name_leafdata());
    if (num_links_added.is_set || is_set(num_links_added.yfilter)) leaf_name_data.push_back(num_links_added.get_name_leafdata());
    if (num_links_deleted.is_set || is_set(num_links_deleted.yfilter)) leaf_name_data.push_back(num_links_deleted.get_name_leafdata());
    if (num_prefixes_added.is_set || is_set(num_prefixes_added.yfilter)) leaf_name_data.push_back(num_prefixes_added.get_name_leafdata());
    if (num_prefixes_deleted.is_set || is_set(num_prefixes_deleted.yfilter)) leaf_name_data.push_back(num_prefixes_deleted.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pce::TopologySummary::StatsTopologyUpdate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pce::TopologySummary::StatsTopologyUpdate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Pce::TopologySummary::StatsTopologyUpdate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "num-nodes-added")
    {
        num_nodes_added = value;
        num_nodes_added.value_namespace = name_space;
        num_nodes_added.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-nodes-deleted")
    {
        num_nodes_deleted = value;
        num_nodes_deleted.value_namespace = name_space;
        num_nodes_deleted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-links-added")
    {
        num_links_added = value;
        num_links_added.value_namespace = name_space;
        num_links_added.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-links-deleted")
    {
        num_links_deleted = value;
        num_links_deleted.value_namespace = name_space;
        num_links_deleted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-prefixes-added")
    {
        num_prefixes_added = value;
        num_prefixes_added.value_namespace = name_space;
        num_prefixes_added.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-prefixes-deleted")
    {
        num_prefixes_deleted = value;
        num_prefixes_deleted.value_namespace = name_space;
        num_prefixes_deleted.value_namespace_prefix = name_space_prefix;
    }
}

void Pce::TopologySummary::StatsTopologyUpdate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "num-nodes-added")
    {
        num_nodes_added.yfilter = yfilter;
    }
    if(value_path == "num-nodes-deleted")
    {
        num_nodes_deleted.yfilter = yfilter;
    }
    if(value_path == "num-links-added")
    {
        num_links_added.yfilter = yfilter;
    }
    if(value_path == "num-links-deleted")
    {
        num_links_deleted.yfilter = yfilter;
    }
    if(value_path == "num-prefixes-added")
    {
        num_prefixes_added.yfilter = yfilter;
    }
    if(value_path == "num-prefixes-deleted")
    {
        num_prefixes_deleted.yfilter = yfilter;
    }
}

bool Pce::TopologySummary::StatsTopologyUpdate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "num-nodes-added" || name == "num-nodes-deleted" || name == "num-links-added" || name == "num-links-deleted" || name == "num-prefixes-added" || name == "num-prefixes-deleted")
        return true;
    return false;
}

Pce::TunnelInfos::TunnelInfos()
{

    yang_name = "tunnel-infos"; yang_parent_name = "pce"; is_top_level_class = false; has_list_ancestor = false;
}

Pce::TunnelInfos::~TunnelInfos()
{
}

bool Pce::TunnelInfos::has_data() const
{
    for (std::size_t index=0; index<tunnel_info.size(); index++)
    {
        if(tunnel_info[index]->has_data())
            return true;
    }
    return false;
}

bool Pce::TunnelInfos::has_operation() const
{
    for (std::size_t index=0; index<tunnel_info.size(); index++)
    {
        if(tunnel_info[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Pce::TunnelInfos::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-xtc-oper:pce/" << get_segment_path();
    return path_buffer.str();
}

std::string Pce::TunnelInfos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-infos";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::TunnelInfos::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Pce::TunnelInfos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tunnel-info")
    {
        auto c = std::make_shared<Pce::TunnelInfos::TunnelInfo>();
        c->parent = this;
        tunnel_info.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pce::TunnelInfos::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : tunnel_info)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Pce::TunnelInfos::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pce::TunnelInfos::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pce::TunnelInfos::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tunnel-info")
        return true;
    return false;
}

Pce::TunnelInfos::TunnelInfo::TunnelInfo()
    :
    peer_address{YType::str, "peer-address"},
    plsp_id{YType::int32, "plsp-id"},
    tunnel_name{YType::str, "tunnel-name"},
    pcc_address{YType::str, "pcc-address"},
    tunnel_name_xr{YType::str, "tunnel-name-xr"}
{

    yang_name = "tunnel-info"; yang_parent_name = "tunnel-infos"; is_top_level_class = false; has_list_ancestor = false;
}

Pce::TunnelInfos::TunnelInfo::~TunnelInfo()
{
}

bool Pce::TunnelInfos::TunnelInfo::has_data() const
{
    for (std::size_t index=0; index<brief_lsp_information.size(); index++)
    {
        if(brief_lsp_information[index]->has_data())
            return true;
    }
    return peer_address.is_set
	|| plsp_id.is_set
	|| tunnel_name.is_set
	|| pcc_address.is_set
	|| tunnel_name_xr.is_set;
}

bool Pce::TunnelInfos::TunnelInfo::has_operation() const
{
    for (std::size_t index=0; index<brief_lsp_information.size(); index++)
    {
        if(brief_lsp_information[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(peer_address.yfilter)
	|| ydk::is_set(plsp_id.yfilter)
	|| ydk::is_set(tunnel_name.yfilter)
	|| ydk::is_set(pcc_address.yfilter)
	|| ydk::is_set(tunnel_name_xr.yfilter);
}

std::string Pce::TunnelInfos::TunnelInfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-xtc-oper:pce/tunnel-infos/" << get_segment_path();
    return path_buffer.str();
}

std::string Pce::TunnelInfos::TunnelInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-info" <<"[peer-address='" <<peer_address <<"']" <<"[plsp-id='" <<plsp_id <<"']" <<"[tunnel-name='" <<tunnel_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::TunnelInfos::TunnelInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer_address.is_set || is_set(peer_address.yfilter)) leaf_name_data.push_back(peer_address.get_name_leafdata());
    if (plsp_id.is_set || is_set(plsp_id.yfilter)) leaf_name_data.push_back(plsp_id.get_name_leafdata());
    if (tunnel_name.is_set || is_set(tunnel_name.yfilter)) leaf_name_data.push_back(tunnel_name.get_name_leafdata());
    if (pcc_address.is_set || is_set(pcc_address.yfilter)) leaf_name_data.push_back(pcc_address.get_name_leafdata());
    if (tunnel_name_xr.is_set || is_set(tunnel_name_xr.yfilter)) leaf_name_data.push_back(tunnel_name_xr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pce::TunnelInfos::TunnelInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "brief-lsp-information")
    {
        auto c = std::make_shared<Pce::TunnelInfos::TunnelInfo::BriefLspInformation>();
        c->parent = this;
        brief_lsp_information.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pce::TunnelInfos::TunnelInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : brief_lsp_information)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Pce::TunnelInfos::TunnelInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "peer-address")
    {
        peer_address = value;
        peer_address.value_namespace = name_space;
        peer_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "plsp-id")
    {
        plsp_id = value;
        plsp_id.value_namespace = name_space;
        plsp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-name")
    {
        tunnel_name = value;
        tunnel_name.value_namespace = name_space;
        tunnel_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcc-address")
    {
        pcc_address = value;
        pcc_address.value_namespace = name_space;
        pcc_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-name-xr")
    {
        tunnel_name_xr = value;
        tunnel_name_xr.value_namespace = name_space;
        tunnel_name_xr.value_namespace_prefix = name_space_prefix;
    }
}

void Pce::TunnelInfos::TunnelInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "peer-address")
    {
        peer_address.yfilter = yfilter;
    }
    if(value_path == "plsp-id")
    {
        plsp_id.yfilter = yfilter;
    }
    if(value_path == "tunnel-name")
    {
        tunnel_name.yfilter = yfilter;
    }
    if(value_path == "pcc-address")
    {
        pcc_address.yfilter = yfilter;
    }
    if(value_path == "tunnel-name-xr")
    {
        tunnel_name_xr.yfilter = yfilter;
    }
}

bool Pce::TunnelInfos::TunnelInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "brief-lsp-information" || name == "peer-address" || name == "plsp-id" || name == "tunnel-name" || name == "pcc-address" || name == "tunnel-name-xr")
        return true;
    return false;
}

Pce::TunnelInfos::TunnelInfo::BriefLspInformation::BriefLspInformation()
    :
    source_address{YType::str, "source-address"},
    destination_address{YType::str, "destination-address"},
    tunnel_id{YType::uint32, "tunnel-id"},
    lspid{YType::uint32, "lspid"},
    binding_sid{YType::uint32, "binding-sid"},
    lsp_setup_type{YType::enumeration, "lsp-setup-type"},
    operational_state{YType::enumeration, "operational-state"},
    administrative_state{YType::enumeration, "administrative-state"}
{

    yang_name = "brief-lsp-information"; yang_parent_name = "tunnel-info"; is_top_level_class = false; has_list_ancestor = true;
}

Pce::TunnelInfos::TunnelInfo::BriefLspInformation::~BriefLspInformation()
{
}

bool Pce::TunnelInfos::TunnelInfo::BriefLspInformation::has_data() const
{
    return source_address.is_set
	|| destination_address.is_set
	|| tunnel_id.is_set
	|| lspid.is_set
	|| binding_sid.is_set
	|| lsp_setup_type.is_set
	|| operational_state.is_set
	|| administrative_state.is_set;
}

bool Pce::TunnelInfos::TunnelInfo::BriefLspInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(lspid.yfilter)
	|| ydk::is_set(binding_sid.yfilter)
	|| ydk::is_set(lsp_setup_type.yfilter)
	|| ydk::is_set(operational_state.yfilter)
	|| ydk::is_set(administrative_state.yfilter);
}

std::string Pce::TunnelInfos::TunnelInfo::BriefLspInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "brief-lsp-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::TunnelInfos::TunnelInfo::BriefLspInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (lspid.is_set || is_set(lspid.yfilter)) leaf_name_data.push_back(lspid.get_name_leafdata());
    if (binding_sid.is_set || is_set(binding_sid.yfilter)) leaf_name_data.push_back(binding_sid.get_name_leafdata());
    if (lsp_setup_type.is_set || is_set(lsp_setup_type.yfilter)) leaf_name_data.push_back(lsp_setup_type.get_name_leafdata());
    if (operational_state.is_set || is_set(operational_state.yfilter)) leaf_name_data.push_back(operational_state.get_name_leafdata());
    if (administrative_state.is_set || is_set(administrative_state.yfilter)) leaf_name_data.push_back(administrative_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pce::TunnelInfos::TunnelInfo::BriefLspInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pce::TunnelInfos::TunnelInfo::BriefLspInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Pce::TunnelInfos::TunnelInfo::BriefLspInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lspid")
    {
        lspid = value;
        lspid.value_namespace = name_space;
        lspid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "binding-sid")
    {
        binding_sid = value;
        binding_sid.value_namespace = name_space;
        binding_sid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-setup-type")
    {
        lsp_setup_type = value;
        lsp_setup_type.value_namespace = name_space;
        lsp_setup_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operational-state")
    {
        operational_state = value;
        operational_state.value_namespace = name_space;
        operational_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "administrative-state")
    {
        administrative_state = value;
        administrative_state.value_namespace = name_space;
        administrative_state.value_namespace_prefix = name_space_prefix;
    }
}

void Pce::TunnelInfos::TunnelInfo::BriefLspInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "lspid")
    {
        lspid.yfilter = yfilter;
    }
    if(value_path == "binding-sid")
    {
        binding_sid.yfilter = yfilter;
    }
    if(value_path == "lsp-setup-type")
    {
        lsp_setup_type.yfilter = yfilter;
    }
    if(value_path == "operational-state")
    {
        operational_state.yfilter = yfilter;
    }
    if(value_path == "administrative-state")
    {
        administrative_state.yfilter = yfilter;
    }
}

bool Pce::TunnelInfos::TunnelInfo::BriefLspInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source-address" || name == "destination-address" || name == "tunnel-id" || name == "lspid" || name == "binding-sid" || name == "lsp-setup-type" || name == "operational-state" || name == "administrative-state")
        return true;
    return false;
}

Pce::PeerDetailInfos::PeerDetailInfos()
{

    yang_name = "peer-detail-infos"; yang_parent_name = "pce"; is_top_level_class = false; has_list_ancestor = false;
}

Pce::PeerDetailInfos::~PeerDetailInfos()
{
}

bool Pce::PeerDetailInfos::has_data() const
{
    for (std::size_t index=0; index<peer_detail_info.size(); index++)
    {
        if(peer_detail_info[index]->has_data())
            return true;
    }
    return false;
}

bool Pce::PeerDetailInfos::has_operation() const
{
    for (std::size_t index=0; index<peer_detail_info.size(); index++)
    {
        if(peer_detail_info[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Pce::PeerDetailInfos::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-xtc-oper:pce/" << get_segment_path();
    return path_buffer.str();
}

std::string Pce::PeerDetailInfos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-detail-infos";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::PeerDetailInfos::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Pce::PeerDetailInfos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer-detail-info")
    {
        auto c = std::make_shared<Pce::PeerDetailInfos::PeerDetailInfo>();
        c->parent = this;
        peer_detail_info.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pce::PeerDetailInfos::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : peer_detail_info)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Pce::PeerDetailInfos::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pce::PeerDetailInfos::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pce::PeerDetailInfos::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-detail-info")
        return true;
    return false;
}

Pce::PeerDetailInfos::PeerDetailInfo::PeerDetailInfo()
    :
    peer_address{YType::str, "peer-address"},
    peer_address_xr{YType::str, "peer-address-xr"},
    peer_protocol{YType::enumeration, "peer-protocol"}
    	,
    detail_pcep_information(std::make_shared<Pce::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation>())
{
    detail_pcep_information->parent = this;

    yang_name = "peer-detail-info"; yang_parent_name = "peer-detail-infos"; is_top_level_class = false; has_list_ancestor = false;
}

Pce::PeerDetailInfos::PeerDetailInfo::~PeerDetailInfo()
{
}

bool Pce::PeerDetailInfos::PeerDetailInfo::has_data() const
{
    return peer_address.is_set
	|| peer_address_xr.is_set
	|| peer_protocol.is_set
	|| (detail_pcep_information !=  nullptr && detail_pcep_information->has_data());
}

bool Pce::PeerDetailInfos::PeerDetailInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(peer_address.yfilter)
	|| ydk::is_set(peer_address_xr.yfilter)
	|| ydk::is_set(peer_protocol.yfilter)
	|| (detail_pcep_information !=  nullptr && detail_pcep_information->has_operation());
}

std::string Pce::PeerDetailInfos::PeerDetailInfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-xtc-oper:pce/peer-detail-infos/" << get_segment_path();
    return path_buffer.str();
}

std::string Pce::PeerDetailInfos::PeerDetailInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-detail-info" <<"[peer-address='" <<peer_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::PeerDetailInfos::PeerDetailInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer_address.is_set || is_set(peer_address.yfilter)) leaf_name_data.push_back(peer_address.get_name_leafdata());
    if (peer_address_xr.is_set || is_set(peer_address_xr.yfilter)) leaf_name_data.push_back(peer_address_xr.get_name_leafdata());
    if (peer_protocol.is_set || is_set(peer_protocol.yfilter)) leaf_name_data.push_back(peer_protocol.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pce::PeerDetailInfos::PeerDetailInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "detail-pcep-information")
    {
        if(detail_pcep_information == nullptr)
        {
            detail_pcep_information = std::make_shared<Pce::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation>();
        }
        return detail_pcep_information;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pce::PeerDetailInfos::PeerDetailInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(detail_pcep_information != nullptr)
    {
        children["detail-pcep-information"] = detail_pcep_information;
    }

    return children;
}

void Pce::PeerDetailInfos::PeerDetailInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "peer-address")
    {
        peer_address = value;
        peer_address.value_namespace = name_space;
        peer_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-address-xr")
    {
        peer_address_xr = value;
        peer_address_xr.value_namespace = name_space;
        peer_address_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-protocol")
    {
        peer_protocol = value;
        peer_protocol.value_namespace = name_space;
        peer_protocol.value_namespace_prefix = name_space_prefix;
    }
}

void Pce::PeerDetailInfos::PeerDetailInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "peer-address")
    {
        peer_address.yfilter = yfilter;
    }
    if(value_path == "peer-address-xr")
    {
        peer_address_xr.yfilter = yfilter;
    }
    if(value_path == "peer-protocol")
    {
        peer_protocol.yfilter = yfilter;
    }
}

bool Pce::PeerDetailInfos::PeerDetailInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "detail-pcep-information" || name == "peer-address" || name == "peer-address-xr" || name == "peer-protocol")
        return true;
    return false;
}

Pce::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::DetailPcepInformation()
    :
    error{YType::str, "error"},
    speaker_id{YType::str, "speaker-id"},
    pcep_up_time{YType::uint32, "pcep-up-time"},
    keepalives{YType::uint32, "keepalives"},
    md5_enabled{YType::boolean, "md5-enabled"},
    keychain_enabled{YType::boolean, "keychain-enabled"},
    negotiated_local_keepalive{YType::uint32, "negotiated-local-keepalive"},
    negotiated_remote_keepalive{YType::uint32, "negotiated-remote-keepalive"},
    negotiated_dead_time{YType::uint32, "negotiated-dead-time"},
    pce_request_rx{YType::uint32, "pce-request-rx"},
    pce_request_tx{YType::uint32, "pce-request-tx"},
    pce_reply_rx{YType::uint32, "pce-reply-rx"},
    pce_reply_tx{YType::uint32, "pce-reply-tx"},
    pce_error_rx{YType::uint32, "pce-error-rx"},
    pce_error_tx{YType::uint32, "pce-error-tx"},
    pce_open_tx{YType::uint32, "pce-open-tx"},
    pce_open_rx{YType::uint32, "pce-open-rx"},
    pce_report_rx{YType::uint32, "pce-report-rx"},
    pce_report_tx{YType::uint32, "pce-report-tx"},
    pce_update_rx{YType::uint32, "pce-update-rx"},
    pce_update_tx{YType::uint32, "pce-update-tx"},
    pce_initiate_rx{YType::uint32, "pce-initiate-rx"},
    pce_initiate_tx{YType::uint32, "pce-initiate-tx"},
    pce_keepalive_tx{YType::uint64, "pce-keepalive-tx"},
    pce_keepalive_rx{YType::uint64, "pce-keepalive-rx"},
    local_session_id{YType::uint8, "local-session-id"},
    remote_session_id{YType::uint8, "remote-session-id"},
    minimum_keepalive_interval{YType::uint8, "minimum-keepalive-interval"},
    maximum_dead_interval{YType::uint8, "maximum-dead-interval"}
    	,
    brief_pcep_information(std::make_shared<Pce::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::BriefPcepInformation>())
	,last_error_rx(std::make_shared<Pce::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::LastErrorRx>())
	,last_error_tx(std::make_shared<Pce::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::LastErrorTx>())
{
    brief_pcep_information->parent = this;
    last_error_rx->parent = this;
    last_error_tx->parent = this;

    yang_name = "detail-pcep-information"; yang_parent_name = "peer-detail-info"; is_top_level_class = false; has_list_ancestor = true;
}

Pce::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::~DetailPcepInformation()
{
}

bool Pce::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::has_data() const
{
    return error.is_set
	|| speaker_id.is_set
	|| pcep_up_time.is_set
	|| keepalives.is_set
	|| md5_enabled.is_set
	|| keychain_enabled.is_set
	|| negotiated_local_keepalive.is_set
	|| negotiated_remote_keepalive.is_set
	|| negotiated_dead_time.is_set
	|| pce_request_rx.is_set
	|| pce_request_tx.is_set
	|| pce_reply_rx.is_set
	|| pce_reply_tx.is_set
	|| pce_error_rx.is_set
	|| pce_error_tx.is_set
	|| pce_open_tx.is_set
	|| pce_open_rx.is_set
	|| pce_report_rx.is_set
	|| pce_report_tx.is_set
	|| pce_update_rx.is_set
	|| pce_update_tx.is_set
	|| pce_initiate_rx.is_set
	|| pce_initiate_tx.is_set
	|| pce_keepalive_tx.is_set
	|| pce_keepalive_rx.is_set
	|| local_session_id.is_set
	|| remote_session_id.is_set
	|| minimum_keepalive_interval.is_set
	|| maximum_dead_interval.is_set
	|| (brief_pcep_information !=  nullptr && brief_pcep_information->has_data())
	|| (last_error_rx !=  nullptr && last_error_rx->has_data())
	|| (last_error_tx !=  nullptr && last_error_tx->has_data());
}

bool Pce::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(error.yfilter)
	|| ydk::is_set(speaker_id.yfilter)
	|| ydk::is_set(pcep_up_time.yfilter)
	|| ydk::is_set(keepalives.yfilter)
	|| ydk::is_set(md5_enabled.yfilter)
	|| ydk::is_set(keychain_enabled.yfilter)
	|| ydk::is_set(negotiated_local_keepalive.yfilter)
	|| ydk::is_set(negotiated_remote_keepalive.yfilter)
	|| ydk::is_set(negotiated_dead_time.yfilter)
	|| ydk::is_set(pce_request_rx.yfilter)
	|| ydk::is_set(pce_request_tx.yfilter)
	|| ydk::is_set(pce_reply_rx.yfilter)
	|| ydk::is_set(pce_reply_tx.yfilter)
	|| ydk::is_set(pce_error_rx.yfilter)
	|| ydk::is_set(pce_error_tx.yfilter)
	|| ydk::is_set(pce_open_tx.yfilter)
	|| ydk::is_set(pce_open_rx.yfilter)
	|| ydk::is_set(pce_report_rx.yfilter)
	|| ydk::is_set(pce_report_tx.yfilter)
	|| ydk::is_set(pce_update_rx.yfilter)
	|| ydk::is_set(pce_update_tx.yfilter)
	|| ydk::is_set(pce_initiate_rx.yfilter)
	|| ydk::is_set(pce_initiate_tx.yfilter)
	|| ydk::is_set(pce_keepalive_tx.yfilter)
	|| ydk::is_set(pce_keepalive_rx.yfilter)
	|| ydk::is_set(local_session_id.yfilter)
	|| ydk::is_set(remote_session_id.yfilter)
	|| ydk::is_set(minimum_keepalive_interval.yfilter)
	|| ydk::is_set(maximum_dead_interval.yfilter)
	|| (brief_pcep_information !=  nullptr && brief_pcep_information->has_operation())
	|| (last_error_rx !=  nullptr && last_error_rx->has_operation())
	|| (last_error_tx !=  nullptr && last_error_tx->has_operation());
}

std::string Pce::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detail-pcep-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());
    if (speaker_id.is_set || is_set(speaker_id.yfilter)) leaf_name_data.push_back(speaker_id.get_name_leafdata());
    if (pcep_up_time.is_set || is_set(pcep_up_time.yfilter)) leaf_name_data.push_back(pcep_up_time.get_name_leafdata());
    if (keepalives.is_set || is_set(keepalives.yfilter)) leaf_name_data.push_back(keepalives.get_name_leafdata());
    if (md5_enabled.is_set || is_set(md5_enabled.yfilter)) leaf_name_data.push_back(md5_enabled.get_name_leafdata());
    if (keychain_enabled.is_set || is_set(keychain_enabled.yfilter)) leaf_name_data.push_back(keychain_enabled.get_name_leafdata());
    if (negotiated_local_keepalive.is_set || is_set(negotiated_local_keepalive.yfilter)) leaf_name_data.push_back(negotiated_local_keepalive.get_name_leafdata());
    if (negotiated_remote_keepalive.is_set || is_set(negotiated_remote_keepalive.yfilter)) leaf_name_data.push_back(negotiated_remote_keepalive.get_name_leafdata());
    if (negotiated_dead_time.is_set || is_set(negotiated_dead_time.yfilter)) leaf_name_data.push_back(negotiated_dead_time.get_name_leafdata());
    if (pce_request_rx.is_set || is_set(pce_request_rx.yfilter)) leaf_name_data.push_back(pce_request_rx.get_name_leafdata());
    if (pce_request_tx.is_set || is_set(pce_request_tx.yfilter)) leaf_name_data.push_back(pce_request_tx.get_name_leafdata());
    if (pce_reply_rx.is_set || is_set(pce_reply_rx.yfilter)) leaf_name_data.push_back(pce_reply_rx.get_name_leafdata());
    if (pce_reply_tx.is_set || is_set(pce_reply_tx.yfilter)) leaf_name_data.push_back(pce_reply_tx.get_name_leafdata());
    if (pce_error_rx.is_set || is_set(pce_error_rx.yfilter)) leaf_name_data.push_back(pce_error_rx.get_name_leafdata());
    if (pce_error_tx.is_set || is_set(pce_error_tx.yfilter)) leaf_name_data.push_back(pce_error_tx.get_name_leafdata());
    if (pce_open_tx.is_set || is_set(pce_open_tx.yfilter)) leaf_name_data.push_back(pce_open_tx.get_name_leafdata());
    if (pce_open_rx.is_set || is_set(pce_open_rx.yfilter)) leaf_name_data.push_back(pce_open_rx.get_name_leafdata());
    if (pce_report_rx.is_set || is_set(pce_report_rx.yfilter)) leaf_name_data.push_back(pce_report_rx.get_name_leafdata());
    if (pce_report_tx.is_set || is_set(pce_report_tx.yfilter)) leaf_name_data.push_back(pce_report_tx.get_name_leafdata());
    if (pce_update_rx.is_set || is_set(pce_update_rx.yfilter)) leaf_name_data.push_back(pce_update_rx.get_name_leafdata());
    if (pce_update_tx.is_set || is_set(pce_update_tx.yfilter)) leaf_name_data.push_back(pce_update_tx.get_name_leafdata());
    if (pce_initiate_rx.is_set || is_set(pce_initiate_rx.yfilter)) leaf_name_data.push_back(pce_initiate_rx.get_name_leafdata());
    if (pce_initiate_tx.is_set || is_set(pce_initiate_tx.yfilter)) leaf_name_data.push_back(pce_initiate_tx.get_name_leafdata());
    if (pce_keepalive_tx.is_set || is_set(pce_keepalive_tx.yfilter)) leaf_name_data.push_back(pce_keepalive_tx.get_name_leafdata());
    if (pce_keepalive_rx.is_set || is_set(pce_keepalive_rx.yfilter)) leaf_name_data.push_back(pce_keepalive_rx.get_name_leafdata());
    if (local_session_id.is_set || is_set(local_session_id.yfilter)) leaf_name_data.push_back(local_session_id.get_name_leafdata());
    if (remote_session_id.is_set || is_set(remote_session_id.yfilter)) leaf_name_data.push_back(remote_session_id.get_name_leafdata());
    if (minimum_keepalive_interval.is_set || is_set(minimum_keepalive_interval.yfilter)) leaf_name_data.push_back(minimum_keepalive_interval.get_name_leafdata());
    if (maximum_dead_interval.is_set || is_set(maximum_dead_interval.yfilter)) leaf_name_data.push_back(maximum_dead_interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pce::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "brief-pcep-information")
    {
        if(brief_pcep_information == nullptr)
        {
            brief_pcep_information = std::make_shared<Pce::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::BriefPcepInformation>();
        }
        return brief_pcep_information;
    }

    if(child_yang_name == "last-error-rx")
    {
        if(last_error_rx == nullptr)
        {
            last_error_rx = std::make_shared<Pce::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::LastErrorRx>();
        }
        return last_error_rx;
    }

    if(child_yang_name == "last-error-tx")
    {
        if(last_error_tx == nullptr)
        {
            last_error_tx = std::make_shared<Pce::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::LastErrorTx>();
        }
        return last_error_tx;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pce::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(brief_pcep_information != nullptr)
    {
        children["brief-pcep-information"] = brief_pcep_information;
    }

    if(last_error_rx != nullptr)
    {
        children["last-error-rx"] = last_error_rx;
    }

    if(last_error_tx != nullptr)
    {
        children["last-error-tx"] = last_error_tx;
    }

    return children;
}

void Pce::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "error")
    {
        error = value;
        error.value_namespace = name_space;
        error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "speaker-id")
    {
        speaker_id = value;
        speaker_id.value_namespace = name_space;
        speaker_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcep-up-time")
    {
        pcep_up_time = value;
        pcep_up_time.value_namespace = name_space;
        pcep_up_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keepalives")
    {
        keepalives = value;
        keepalives.value_namespace = name_space;
        keepalives.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "md5-enabled")
    {
        md5_enabled = value;
        md5_enabled.value_namespace = name_space;
        md5_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keychain-enabled")
    {
        keychain_enabled = value;
        keychain_enabled.value_namespace = name_space;
        keychain_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "negotiated-local-keepalive")
    {
        negotiated_local_keepalive = value;
        negotiated_local_keepalive.value_namespace = name_space;
        negotiated_local_keepalive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "negotiated-remote-keepalive")
    {
        negotiated_remote_keepalive = value;
        negotiated_remote_keepalive.value_namespace = name_space;
        negotiated_remote_keepalive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "negotiated-dead-time")
    {
        negotiated_dead_time = value;
        negotiated_dead_time.value_namespace = name_space;
        negotiated_dead_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-request-rx")
    {
        pce_request_rx = value;
        pce_request_rx.value_namespace = name_space;
        pce_request_rx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-request-tx")
    {
        pce_request_tx = value;
        pce_request_tx.value_namespace = name_space;
        pce_request_tx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-reply-rx")
    {
        pce_reply_rx = value;
        pce_reply_rx.value_namespace = name_space;
        pce_reply_rx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-reply-tx")
    {
        pce_reply_tx = value;
        pce_reply_tx.value_namespace = name_space;
        pce_reply_tx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-error-rx")
    {
        pce_error_rx = value;
        pce_error_rx.value_namespace = name_space;
        pce_error_rx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-error-tx")
    {
        pce_error_tx = value;
        pce_error_tx.value_namespace = name_space;
        pce_error_tx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-open-tx")
    {
        pce_open_tx = value;
        pce_open_tx.value_namespace = name_space;
        pce_open_tx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-open-rx")
    {
        pce_open_rx = value;
        pce_open_rx.value_namespace = name_space;
        pce_open_rx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-report-rx")
    {
        pce_report_rx = value;
        pce_report_rx.value_namespace = name_space;
        pce_report_rx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-report-tx")
    {
        pce_report_tx = value;
        pce_report_tx.value_namespace = name_space;
        pce_report_tx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-update-rx")
    {
        pce_update_rx = value;
        pce_update_rx.value_namespace = name_space;
        pce_update_rx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-update-tx")
    {
        pce_update_tx = value;
        pce_update_tx.value_namespace = name_space;
        pce_update_tx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-initiate-rx")
    {
        pce_initiate_rx = value;
        pce_initiate_rx.value_namespace = name_space;
        pce_initiate_rx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-initiate-tx")
    {
        pce_initiate_tx = value;
        pce_initiate_tx.value_namespace = name_space;
        pce_initiate_tx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-keepalive-tx")
    {
        pce_keepalive_tx = value;
        pce_keepalive_tx.value_namespace = name_space;
        pce_keepalive_tx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-keepalive-rx")
    {
        pce_keepalive_rx = value;
        pce_keepalive_rx.value_namespace = name_space;
        pce_keepalive_rx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-session-id")
    {
        local_session_id = value;
        local_session_id.value_namespace = name_space;
        local_session_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-session-id")
    {
        remote_session_id = value;
        remote_session_id.value_namespace = name_space;
        remote_session_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-keepalive-interval")
    {
        minimum_keepalive_interval = value;
        minimum_keepalive_interval.value_namespace = name_space;
        minimum_keepalive_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-dead-interval")
    {
        maximum_dead_interval = value;
        maximum_dead_interval.value_namespace = name_space;
        maximum_dead_interval.value_namespace_prefix = name_space_prefix;
    }
}

void Pce::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "error")
    {
        error.yfilter = yfilter;
    }
    if(value_path == "speaker-id")
    {
        speaker_id.yfilter = yfilter;
    }
    if(value_path == "pcep-up-time")
    {
        pcep_up_time.yfilter = yfilter;
    }
    if(value_path == "keepalives")
    {
        keepalives.yfilter = yfilter;
    }
    if(value_path == "md5-enabled")
    {
        md5_enabled.yfilter = yfilter;
    }
    if(value_path == "keychain-enabled")
    {
        keychain_enabled.yfilter = yfilter;
    }
    if(value_path == "negotiated-local-keepalive")
    {
        negotiated_local_keepalive.yfilter = yfilter;
    }
    if(value_path == "negotiated-remote-keepalive")
    {
        negotiated_remote_keepalive.yfilter = yfilter;
    }
    if(value_path == "negotiated-dead-time")
    {
        negotiated_dead_time.yfilter = yfilter;
    }
    if(value_path == "pce-request-rx")
    {
        pce_request_rx.yfilter = yfilter;
    }
    if(value_path == "pce-request-tx")
    {
        pce_request_tx.yfilter = yfilter;
    }
    if(value_path == "pce-reply-rx")
    {
        pce_reply_rx.yfilter = yfilter;
    }
    if(value_path == "pce-reply-tx")
    {
        pce_reply_tx.yfilter = yfilter;
    }
    if(value_path == "pce-error-rx")
    {
        pce_error_rx.yfilter = yfilter;
    }
    if(value_path == "pce-error-tx")
    {
        pce_error_tx.yfilter = yfilter;
    }
    if(value_path == "pce-open-tx")
    {
        pce_open_tx.yfilter = yfilter;
    }
    if(value_path == "pce-open-rx")
    {
        pce_open_rx.yfilter = yfilter;
    }
    if(value_path == "pce-report-rx")
    {
        pce_report_rx.yfilter = yfilter;
    }
    if(value_path == "pce-report-tx")
    {
        pce_report_tx.yfilter = yfilter;
    }
    if(value_path == "pce-update-rx")
    {
        pce_update_rx.yfilter = yfilter;
    }
    if(value_path == "pce-update-tx")
    {
        pce_update_tx.yfilter = yfilter;
    }
    if(value_path == "pce-initiate-rx")
    {
        pce_initiate_rx.yfilter = yfilter;
    }
    if(value_path == "pce-initiate-tx")
    {
        pce_initiate_tx.yfilter = yfilter;
    }
    if(value_path == "pce-keepalive-tx")
    {
        pce_keepalive_tx.yfilter = yfilter;
    }
    if(value_path == "pce-keepalive-rx")
    {
        pce_keepalive_rx.yfilter = yfilter;
    }
    if(value_path == "local-session-id")
    {
        local_session_id.yfilter = yfilter;
    }
    if(value_path == "remote-session-id")
    {
        remote_session_id.yfilter = yfilter;
    }
    if(value_path == "minimum-keepalive-interval")
    {
        minimum_keepalive_interval.yfilter = yfilter;
    }
    if(value_path == "maximum-dead-interval")
    {
        maximum_dead_interval.yfilter = yfilter;
    }
}

bool Pce::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "brief-pcep-information" || name == "last-error-rx" || name == "last-error-tx" || name == "error" || name == "speaker-id" || name == "pcep-up-time" || name == "keepalives" || name == "md5-enabled" || name == "keychain-enabled" || name == "negotiated-local-keepalive" || name == "negotiated-remote-keepalive" || name == "negotiated-dead-time" || name == "pce-request-rx" || name == "pce-request-tx" || name == "pce-reply-rx" || name == "pce-reply-tx" || name == "pce-error-rx" || name == "pce-error-tx" || name == "pce-open-tx" || name == "pce-open-rx" || name == "pce-report-rx" || name == "pce-report-tx" || name == "pce-update-rx" || name == "pce-update-tx" || name == "pce-initiate-rx" || name == "pce-initiate-tx" || name == "pce-keepalive-tx" || name == "pce-keepalive-rx" || name == "local-session-id" || name == "remote-session-id" || name == "minimum-keepalive-interval" || name == "maximum-dead-interval")
        return true;
    return false;
}

Pce::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::BriefPcepInformation::BriefPcepInformation()
    :
    pcep_state{YType::enumeration, "pcep-state"},
    stateful{YType::boolean, "stateful"},
    capability_update{YType::boolean, "capability-update"},
    capability_instantiate{YType::boolean, "capability-instantiate"},
    capability_segment_routing{YType::boolean, "capability-segment-routing"},
    capability_triggered_sync{YType::boolean, "capability-triggered-sync"},
    capability_db_version{YType::boolean, "capability-db-version"},
    capability_delta_sync{YType::boolean, "capability-delta-sync"}
{

    yang_name = "brief-pcep-information"; yang_parent_name = "detail-pcep-information"; is_top_level_class = false; has_list_ancestor = true;
}

Pce::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::BriefPcepInformation::~BriefPcepInformation()
{
}

bool Pce::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::BriefPcepInformation::has_data() const
{
    return pcep_state.is_set
	|| stateful.is_set
	|| capability_update.is_set
	|| capability_instantiate.is_set
	|| capability_segment_routing.is_set
	|| capability_triggered_sync.is_set
	|| capability_db_version.is_set
	|| capability_delta_sync.is_set;
}

bool Pce::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::BriefPcepInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pcep_state.yfilter)
	|| ydk::is_set(stateful.yfilter)
	|| ydk::is_set(capability_update.yfilter)
	|| ydk::is_set(capability_instantiate.yfilter)
	|| ydk::is_set(capability_segment_routing.yfilter)
	|| ydk::is_set(capability_triggered_sync.yfilter)
	|| ydk::is_set(capability_db_version.yfilter)
	|| ydk::is_set(capability_delta_sync.yfilter);
}

std::string Pce::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::BriefPcepInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "brief-pcep-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::BriefPcepInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pcep_state.is_set || is_set(pcep_state.yfilter)) leaf_name_data.push_back(pcep_state.get_name_leafdata());
    if (stateful.is_set || is_set(stateful.yfilter)) leaf_name_data.push_back(stateful.get_name_leafdata());
    if (capability_update.is_set || is_set(capability_update.yfilter)) leaf_name_data.push_back(capability_update.get_name_leafdata());
    if (capability_instantiate.is_set || is_set(capability_instantiate.yfilter)) leaf_name_data.push_back(capability_instantiate.get_name_leafdata());
    if (capability_segment_routing.is_set || is_set(capability_segment_routing.yfilter)) leaf_name_data.push_back(capability_segment_routing.get_name_leafdata());
    if (capability_triggered_sync.is_set || is_set(capability_triggered_sync.yfilter)) leaf_name_data.push_back(capability_triggered_sync.get_name_leafdata());
    if (capability_db_version.is_set || is_set(capability_db_version.yfilter)) leaf_name_data.push_back(capability_db_version.get_name_leafdata());
    if (capability_delta_sync.is_set || is_set(capability_delta_sync.yfilter)) leaf_name_data.push_back(capability_delta_sync.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pce::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::BriefPcepInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pce::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::BriefPcepInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Pce::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::BriefPcepInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pcep-state")
    {
        pcep_state = value;
        pcep_state.value_namespace = name_space;
        pcep_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stateful")
    {
        stateful = value;
        stateful.value_namespace = name_space;
        stateful.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "capability-update")
    {
        capability_update = value;
        capability_update.value_namespace = name_space;
        capability_update.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "capability-instantiate")
    {
        capability_instantiate = value;
        capability_instantiate.value_namespace = name_space;
        capability_instantiate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "capability-segment-routing")
    {
        capability_segment_routing = value;
        capability_segment_routing.value_namespace = name_space;
        capability_segment_routing.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "capability-triggered-sync")
    {
        capability_triggered_sync = value;
        capability_triggered_sync.value_namespace = name_space;
        capability_triggered_sync.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "capability-db-version")
    {
        capability_db_version = value;
        capability_db_version.value_namespace = name_space;
        capability_db_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "capability-delta-sync")
    {
        capability_delta_sync = value;
        capability_delta_sync.value_namespace = name_space;
        capability_delta_sync.value_namespace_prefix = name_space_prefix;
    }
}

void Pce::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::BriefPcepInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pcep-state")
    {
        pcep_state.yfilter = yfilter;
    }
    if(value_path == "stateful")
    {
        stateful.yfilter = yfilter;
    }
    if(value_path == "capability-update")
    {
        capability_update.yfilter = yfilter;
    }
    if(value_path == "capability-instantiate")
    {
        capability_instantiate.yfilter = yfilter;
    }
    if(value_path == "capability-segment-routing")
    {
        capability_segment_routing.yfilter = yfilter;
    }
    if(value_path == "capability-triggered-sync")
    {
        capability_triggered_sync.yfilter = yfilter;
    }
    if(value_path == "capability-db-version")
    {
        capability_db_version.yfilter = yfilter;
    }
    if(value_path == "capability-delta-sync")
    {
        capability_delta_sync.yfilter = yfilter;
    }
}

bool Pce::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::BriefPcepInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pcep-state" || name == "stateful" || name == "capability-update" || name == "capability-instantiate" || name == "capability-segment-routing" || name == "capability-triggered-sync" || name == "capability-db-version" || name == "capability-delta-sync")
        return true;
    return false;
}

Pce::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::LastErrorRx::LastErrorRx()
    :
    pc_error_type{YType::uint8, "pc-error-type"},
    pc_error_value{YType::uint8, "pc-error-value"}
{

    yang_name = "last-error-rx"; yang_parent_name = "detail-pcep-information"; is_top_level_class = false; has_list_ancestor = true;
}

Pce::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::LastErrorRx::~LastErrorRx()
{
}

bool Pce::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::LastErrorRx::has_data() const
{
    return pc_error_type.is_set
	|| pc_error_value.is_set;
}

bool Pce::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::LastErrorRx::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pc_error_type.yfilter)
	|| ydk::is_set(pc_error_value.yfilter);
}

std::string Pce::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::LastErrorRx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-error-rx";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::LastErrorRx::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pc_error_type.is_set || is_set(pc_error_type.yfilter)) leaf_name_data.push_back(pc_error_type.get_name_leafdata());
    if (pc_error_value.is_set || is_set(pc_error_value.yfilter)) leaf_name_data.push_back(pc_error_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pce::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::LastErrorRx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pce::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::LastErrorRx::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Pce::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::LastErrorRx::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pc-error-type")
    {
        pc_error_type = value;
        pc_error_type.value_namespace = name_space;
        pc_error_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pc-error-value")
    {
        pc_error_value = value;
        pc_error_value.value_namespace = name_space;
        pc_error_value.value_namespace_prefix = name_space_prefix;
    }
}

void Pce::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::LastErrorRx::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pc-error-type")
    {
        pc_error_type.yfilter = yfilter;
    }
    if(value_path == "pc-error-value")
    {
        pc_error_value.yfilter = yfilter;
    }
}

bool Pce::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::LastErrorRx::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pc-error-type" || name == "pc-error-value")
        return true;
    return false;
}

Pce::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::LastErrorTx::LastErrorTx()
    :
    pc_error_type{YType::uint8, "pc-error-type"},
    pc_error_value{YType::uint8, "pc-error-value"}
{

    yang_name = "last-error-tx"; yang_parent_name = "detail-pcep-information"; is_top_level_class = false; has_list_ancestor = true;
}

Pce::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::LastErrorTx::~LastErrorTx()
{
}

bool Pce::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::LastErrorTx::has_data() const
{
    return pc_error_type.is_set
	|| pc_error_value.is_set;
}

bool Pce::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::LastErrorTx::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pc_error_type.yfilter)
	|| ydk::is_set(pc_error_value.yfilter);
}

std::string Pce::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::LastErrorTx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-error-tx";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::LastErrorTx::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pc_error_type.is_set || is_set(pc_error_type.yfilter)) leaf_name_data.push_back(pc_error_type.get_name_leafdata());
    if (pc_error_value.is_set || is_set(pc_error_value.yfilter)) leaf_name_data.push_back(pc_error_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pce::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::LastErrorTx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pce::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::LastErrorTx::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Pce::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::LastErrorTx::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pc-error-type")
    {
        pc_error_type = value;
        pc_error_type.value_namespace = name_space;
        pc_error_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pc-error-value")
    {
        pc_error_value = value;
        pc_error_value.value_namespace = name_space;
        pc_error_value.value_namespace_prefix = name_space_prefix;
    }
}

void Pce::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::LastErrorTx::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pc-error-type")
    {
        pc_error_type.yfilter = yfilter;
    }
    if(value_path == "pc-error-value")
    {
        pc_error_value.yfilter = yfilter;
    }
}

bool Pce::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::LastErrorTx::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pc-error-type" || name == "pc-error-value")
        return true;
    return false;
}

Pce::TopologyNodes::TopologyNodes()
{

    yang_name = "topology-nodes"; yang_parent_name = "pce"; is_top_level_class = false; has_list_ancestor = false;
}

Pce::TopologyNodes::~TopologyNodes()
{
}

bool Pce::TopologyNodes::has_data() const
{
    for (std::size_t index=0; index<topology_node.size(); index++)
    {
        if(topology_node[index]->has_data())
            return true;
    }
    return false;
}

bool Pce::TopologyNodes::has_operation() const
{
    for (std::size_t index=0; index<topology_node.size(); index++)
    {
        if(topology_node[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Pce::TopologyNodes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-xtc-oper:pce/" << get_segment_path();
    return path_buffer.str();
}

std::string Pce::TopologyNodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology-nodes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::TopologyNodes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Pce::TopologyNodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "topology-node")
    {
        auto c = std::make_shared<Pce::TopologyNodes::TopologyNode>();
        c->parent = this;
        topology_node.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pce::TopologyNodes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : topology_node)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Pce::TopologyNodes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pce::TopologyNodes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pce::TopologyNodes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "topology-node")
        return true;
    return false;
}

Pce::TopologyNodes::TopologyNode::TopologyNode()
    :
    node_identifier{YType::int32, "node-identifier"},
    node_identifier_xr{YType::uint32, "node-identifier-xr"},
    overload{YType::boolean, "overload"}
    	,
    node_protocol_identifier(std::make_shared<Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier>())
{
    node_protocol_identifier->parent = this;

    yang_name = "topology-node"; yang_parent_name = "topology-nodes"; is_top_level_class = false; has_list_ancestor = false;
}

Pce::TopologyNodes::TopologyNode::~TopologyNode()
{
}

bool Pce::TopologyNodes::TopologyNode::has_data() const
{
    for (std::size_t index=0; index<prefix_sid.size(); index++)
    {
        if(prefix_sid[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ipv4_link.size(); index++)
    {
        if(ipv4_link[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ipv6_link.size(); index++)
    {
        if(ipv6_link[index]->has_data())
            return true;
    }
    return node_identifier.is_set
	|| node_identifier_xr.is_set
	|| overload.is_set
	|| (node_protocol_identifier !=  nullptr && node_protocol_identifier->has_data());
}

bool Pce::TopologyNodes::TopologyNode::has_operation() const
{
    for (std::size_t index=0; index<prefix_sid.size(); index++)
    {
        if(prefix_sid[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ipv4_link.size(); index++)
    {
        if(ipv4_link[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ipv6_link.size(); index++)
    {
        if(ipv6_link[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(node_identifier.yfilter)
	|| ydk::is_set(node_identifier_xr.yfilter)
	|| ydk::is_set(overload.yfilter)
	|| (node_protocol_identifier !=  nullptr && node_protocol_identifier->has_operation());
}

std::string Pce::TopologyNodes::TopologyNode::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-xtc-oper:pce/topology-nodes/" << get_segment_path();
    return path_buffer.str();
}

std::string Pce::TopologyNodes::TopologyNode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology-node" <<"[node-identifier='" <<node_identifier <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::TopologyNodes::TopologyNode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_identifier.is_set || is_set(node_identifier.yfilter)) leaf_name_data.push_back(node_identifier.get_name_leafdata());
    if (node_identifier_xr.is_set || is_set(node_identifier_xr.yfilter)) leaf_name_data.push_back(node_identifier_xr.get_name_leafdata());
    if (overload.is_set || is_set(overload.yfilter)) leaf_name_data.push_back(overload.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pce::TopologyNodes::TopologyNode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node-protocol-identifier")
    {
        if(node_protocol_identifier == nullptr)
        {
            node_protocol_identifier = std::make_shared<Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier>();
        }
        return node_protocol_identifier;
    }

    if(child_yang_name == "prefix-sid")
    {
        auto c = std::make_shared<Pce::TopologyNodes::TopologyNode::PrefixSid>();
        c->parent = this;
        prefix_sid.push_back(c);
        return c;
    }

    if(child_yang_name == "ipv4-link")
    {
        auto c = std::make_shared<Pce::TopologyNodes::TopologyNode::Ipv4Link>();
        c->parent = this;
        ipv4_link.push_back(c);
        return c;
    }

    if(child_yang_name == "ipv6-link")
    {
        auto c = std::make_shared<Pce::TopologyNodes::TopologyNode::Ipv6Link>();
        c->parent = this;
        ipv6_link.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pce::TopologyNodes::TopologyNode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(node_protocol_identifier != nullptr)
    {
        children["node-protocol-identifier"] = node_protocol_identifier;
    }

    count = 0;
    for (auto const & c : prefix_sid)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : ipv4_link)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : ipv6_link)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Pce::TopologyNodes::TopologyNode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-identifier")
    {
        node_identifier = value;
        node_identifier.value_namespace = name_space;
        node_identifier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-identifier-xr")
    {
        node_identifier_xr = value;
        node_identifier_xr.value_namespace = name_space;
        node_identifier_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "overload")
    {
        overload = value;
        overload.value_namespace = name_space;
        overload.value_namespace_prefix = name_space_prefix;
    }
}

void Pce::TopologyNodes::TopologyNode::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-identifier")
    {
        node_identifier.yfilter = yfilter;
    }
    if(value_path == "node-identifier-xr")
    {
        node_identifier_xr.yfilter = yfilter;
    }
    if(value_path == "overload")
    {
        overload.yfilter = yfilter;
    }
}

bool Pce::TopologyNodes::TopologyNode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node-protocol-identifier" || name == "prefix-sid" || name == "ipv4-link" || name == "ipv6-link" || name == "node-identifier" || name == "node-identifier-xr" || name == "overload")
        return true;
    return false;
}

Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::NodeProtocolIdentifier()
    :
    node_name{YType::str, "node-name"},
    ipv4_bgp_router_id_set{YType::boolean, "ipv4-bgp-router-id-set"},
    ipv4_bgp_router_id{YType::str, "ipv4-bgp-router-id"},
    ipv4te_router_id_set{YType::boolean, "ipv4te-router-id-set"},
    ipv4te_router_id{YType::str, "ipv4te-router-id"}
{

    yang_name = "node-protocol-identifier"; yang_parent_name = "topology-node"; is_top_level_class = false; has_list_ancestor = true;
}

Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::~NodeProtocolIdentifier()
{
}

bool Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::has_data() const
{
    for (std::size_t index=0; index<igp_information.size(); index++)
    {
        if(igp_information[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<srgb_information.size(); index++)
    {
        if(srgb_information[index]->has_data())
            return true;
    }
    return node_name.is_set
	|| ipv4_bgp_router_id_set.is_set
	|| ipv4_bgp_router_id.is_set
	|| ipv4te_router_id_set.is_set
	|| ipv4te_router_id.is_set;
}

bool Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::has_operation() const
{
    for (std::size_t index=0; index<igp_information.size(); index++)
    {
        if(igp_information[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<srgb_information.size(); index++)
    {
        if(srgb_information[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(node_name.yfilter)
	|| ydk::is_set(ipv4_bgp_router_id_set.yfilter)
	|| ydk::is_set(ipv4_bgp_router_id.yfilter)
	|| ydk::is_set(ipv4te_router_id_set.yfilter)
	|| ydk::is_set(ipv4te_router_id.yfilter);
}

std::string Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node-protocol-identifier";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());
    if (ipv4_bgp_router_id_set.is_set || is_set(ipv4_bgp_router_id_set.yfilter)) leaf_name_data.push_back(ipv4_bgp_router_id_set.get_name_leafdata());
    if (ipv4_bgp_router_id.is_set || is_set(ipv4_bgp_router_id.yfilter)) leaf_name_data.push_back(ipv4_bgp_router_id.get_name_leafdata());
    if (ipv4te_router_id_set.is_set || is_set(ipv4te_router_id_set.yfilter)) leaf_name_data.push_back(ipv4te_router_id_set.get_name_leafdata());
    if (ipv4te_router_id.is_set || is_set(ipv4te_router_id.yfilter)) leaf_name_data.push_back(ipv4te_router_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "igp-information")
    {
        auto c = std::make_shared<Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation>();
        c->parent = this;
        igp_information.push_back(c);
        return c;
    }

    if(child_yang_name == "srgb-information")
    {
        auto c = std::make_shared<Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation>();
        c->parent = this;
        srgb_information.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : igp_information)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : srgb_information)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-name")
    {
        node_name = value;
        node_name.value_namespace = name_space;
        node_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-bgp-router-id-set")
    {
        ipv4_bgp_router_id_set = value;
        ipv4_bgp_router_id_set.value_namespace = name_space;
        ipv4_bgp_router_id_set.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-bgp-router-id")
    {
        ipv4_bgp_router_id = value;
        ipv4_bgp_router_id.value_namespace = name_space;
        ipv4_bgp_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4te-router-id-set")
    {
        ipv4te_router_id_set = value;
        ipv4te_router_id_set.value_namespace = name_space;
        ipv4te_router_id_set.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4te-router-id")
    {
        ipv4te_router_id = value;
        ipv4te_router_id.value_namespace = name_space;
        ipv4te_router_id.value_namespace_prefix = name_space_prefix;
    }
}

void Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-name")
    {
        node_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-bgp-router-id-set")
    {
        ipv4_bgp_router_id_set.yfilter = yfilter;
    }
    if(value_path == "ipv4-bgp-router-id")
    {
        ipv4_bgp_router_id.yfilter = yfilter;
    }
    if(value_path == "ipv4te-router-id-set")
    {
        ipv4te_router_id_set.yfilter = yfilter;
    }
    if(value_path == "ipv4te-router-id")
    {
        ipv4te_router_id.yfilter = yfilter;
    }
}

bool Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "igp-information" || name == "srgb-information" || name == "node-name" || name == "ipv4-bgp-router-id-set" || name == "ipv4-bgp-router-id" || name == "ipv4te-router-id-set" || name == "ipv4te-router-id")
        return true;
    return false;
}

Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::IgpInformation()
    :
    domain_identifier{YType::uint64, "domain-identifier"},
    autonomous_system_number{YType::uint32, "autonomous-system-number"}
    	,
    igp(std::make_shared<Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp>())
{
    igp->parent = this;

    yang_name = "igp-information"; yang_parent_name = "node-protocol-identifier"; is_top_level_class = false; has_list_ancestor = true;
}

Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::~IgpInformation()
{
}

bool Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::has_data() const
{
    return domain_identifier.is_set
	|| autonomous_system_number.is_set
	|| (igp !=  nullptr && igp->has_data());
}

bool Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(domain_identifier.yfilter)
	|| ydk::is_set(autonomous_system_number.yfilter)
	|| (igp !=  nullptr && igp->has_operation());
}

std::string Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "igp-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (domain_identifier.is_set || is_set(domain_identifier.yfilter)) leaf_name_data.push_back(domain_identifier.get_name_leafdata());
    if (autonomous_system_number.is_set || is_set(autonomous_system_number.yfilter)) leaf_name_data.push_back(autonomous_system_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "igp")
    {
        if(igp == nullptr)
        {
            igp = std::make_shared<Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp>();
        }
        return igp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(igp != nullptr)
    {
        children["igp"] = igp;
    }

    return children;
}

void Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "domain-identifier")
    {
        domain_identifier = value;
        domain_identifier.value_namespace = name_space;
        domain_identifier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "autonomous-system-number")
    {
        autonomous_system_number = value;
        autonomous_system_number.value_namespace = name_space;
        autonomous_system_number.value_namespace_prefix = name_space_prefix;
    }
}

void Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "domain-identifier")
    {
        domain_identifier.yfilter = yfilter;
    }
    if(value_path == "autonomous-system-number")
    {
        autonomous_system_number.yfilter = yfilter;
    }
}

bool Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "igp" || name == "domain-identifier" || name == "autonomous-system-number")
        return true;
    return false;
}

Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::Igp()
    :
    igp_id{YType::enumeration, "igp-id"}
    	,
    isis(std::make_shared<Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::Isis>())
	,ospf(std::make_shared<Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::Ospf>())
	,bgp(std::make_shared<Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::Bgp>())
{
    isis->parent = this;
    ospf->parent = this;
    bgp->parent = this;

    yang_name = "igp"; yang_parent_name = "igp-information"; is_top_level_class = false; has_list_ancestor = true;
}

Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::~Igp()
{
}

bool Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::has_data() const
{
    return igp_id.is_set
	|| (isis !=  nullptr && isis->has_data())
	|| (ospf !=  nullptr && ospf->has_data())
	|| (bgp !=  nullptr && bgp->has_data());
}

bool Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(igp_id.yfilter)
	|| (isis !=  nullptr && isis->has_operation())
	|| (ospf !=  nullptr && ospf->has_operation())
	|| (bgp !=  nullptr && bgp->has_operation());
}

std::string Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "igp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (igp_id.is_set || is_set(igp_id.yfilter)) leaf_name_data.push_back(igp_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "isis")
    {
        if(isis == nullptr)
        {
            isis = std::make_shared<Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::Isis>();
        }
        return isis;
    }

    if(child_yang_name == "ospf")
    {
        if(ospf == nullptr)
        {
            ospf = std::make_shared<Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::Ospf>();
        }
        return ospf;
    }

    if(child_yang_name == "bgp")
    {
        if(bgp == nullptr)
        {
            bgp = std::make_shared<Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::Bgp>();
        }
        return bgp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(isis != nullptr)
    {
        children["isis"] = isis;
    }

    if(ospf != nullptr)
    {
        children["ospf"] = ospf;
    }

    if(bgp != nullptr)
    {
        children["bgp"] = bgp;
    }

    return children;
}

void Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "igp-id")
    {
        igp_id = value;
        igp_id.value_namespace = name_space;
        igp_id.value_namespace_prefix = name_space_prefix;
    }
}

void Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "igp-id")
    {
        igp_id.yfilter = yfilter;
    }
}

bool Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "isis" || name == "ospf" || name == "bgp" || name == "igp-id")
        return true;
    return false;
}

Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::Isis::Isis()
    :
    system_id{YType::str, "system-id"},
    level{YType::uint32, "level"}
{

    yang_name = "isis"; yang_parent_name = "igp"; is_top_level_class = false; has_list_ancestor = true;
}

Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::Isis::~Isis()
{
}

bool Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::Isis::has_data() const
{
    return system_id.is_set
	|| level.is_set;
}

bool Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::Isis::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(system_id.yfilter)
	|| ydk::is_set(level.yfilter);
}

std::string Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::Isis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::Isis::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (system_id.is_set || is_set(system_id.yfilter)) leaf_name_data.push_back(system_id.get_name_leafdata());
    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::Isis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::Isis::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::Isis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "system-id")
    {
        system_id = value;
        system_id.value_namespace = name_space;
        system_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
}

void Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::Isis::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "system-id")
    {
        system_id.yfilter = yfilter;
    }
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
}

bool Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::Isis::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "system-id" || name == "level")
        return true;
    return false;
}

Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::Ospf::Ospf()
    :
    router_id{YType::str, "router-id"},
    area{YType::uint32, "area"}
{

    yang_name = "ospf"; yang_parent_name = "igp"; is_top_level_class = false; has_list_ancestor = true;
}

Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::Ospf::~Ospf()
{
}

bool Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::Ospf::has_data() const
{
    return router_id.is_set
	|| area.is_set;
}

bool Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::Ospf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(router_id.yfilter)
	|| ydk::is_set(area.yfilter);
}

std::string Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::Ospf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::Ospf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());
    if (area.is_set || is_set(area.yfilter)) leaf_name_data.push_back(area.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::Ospf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::Ospf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::Ospf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area")
    {
        area = value;
        area.value_namespace = name_space;
        area.value_namespace_prefix = name_space_prefix;
    }
}

void Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::Ospf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
    if(value_path == "area")
    {
        area.yfilter = yfilter;
    }
}

bool Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::Ospf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "router-id" || name == "area")
        return true;
    return false;
}

Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::Bgp::Bgp()
    :
    router_id{YType::str, "router-id"},
    confed_asn{YType::uint32, "confed-asn"}
{

    yang_name = "bgp"; yang_parent_name = "igp"; is_top_level_class = false; has_list_ancestor = true;
}

Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::Bgp::~Bgp()
{
}

bool Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::Bgp::has_data() const
{
    return router_id.is_set
	|| confed_asn.is_set;
}

bool Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::Bgp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(router_id.yfilter)
	|| ydk::is_set(confed_asn.yfilter);
}

std::string Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::Bgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::Bgp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());
    if (confed_asn.is_set || is_set(confed_asn.yfilter)) leaf_name_data.push_back(confed_asn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::Bgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::Bgp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::Bgp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "confed-asn")
    {
        confed_asn = value;
        confed_asn.value_namespace = name_space;
        confed_asn.value_namespace_prefix = name_space_prefix;
    }
}

void Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::Bgp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
    if(value_path == "confed-asn")
    {
        confed_asn.yfilter = yfilter;
    }
}

bool Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::Igp::Bgp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "router-id" || name == "confed-asn")
        return true;
    return false;
}

Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::SrgbInformation()
    :
    start{YType::uint32, "start"},
    size{YType::uint32, "size"}
    	,
    igp_srgb(std::make_shared<Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::IgpSrgb>())
{
    igp_srgb->parent = this;

    yang_name = "srgb-information"; yang_parent_name = "node-protocol-identifier"; is_top_level_class = false; has_list_ancestor = true;
}

Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::~SrgbInformation()
{
}

bool Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::has_data() const
{
    return start.is_set
	|| size.is_set
	|| (igp_srgb !=  nullptr && igp_srgb->has_data());
}

bool Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(start.yfilter)
	|| ydk::is_set(size.yfilter)
	|| (igp_srgb !=  nullptr && igp_srgb->has_operation());
}

std::string Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srgb-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (start.is_set || is_set(start.yfilter)) leaf_name_data.push_back(start.get_name_leafdata());
    if (size.is_set || is_set(size.yfilter)) leaf_name_data.push_back(size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "igp-srgb")
    {
        if(igp_srgb == nullptr)
        {
            igp_srgb = std::make_shared<Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::IgpSrgb>();
        }
        return igp_srgb;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(igp_srgb != nullptr)
    {
        children["igp-srgb"] = igp_srgb;
    }

    return children;
}

void Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "start")
    {
        start = value;
        start.value_namespace = name_space;
        start.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "size")
    {
        size = value;
        size.value_namespace = name_space;
        size.value_namespace_prefix = name_space_prefix;
    }
}

void Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "start")
    {
        start.yfilter = yfilter;
    }
    if(value_path == "size")
    {
        size.yfilter = yfilter;
    }
}

bool Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "igp-srgb" || name == "start" || name == "size")
        return true;
    return false;
}

Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::IgpSrgb()
    :
    igp_id{YType::enumeration, "igp-id"}
    	,
    isis(std::make_shared<Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Isis>())
	,ospf(std::make_shared<Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Ospf>())
	,bgp(std::make_shared<Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Bgp>())
{
    isis->parent = this;
    ospf->parent = this;
    bgp->parent = this;

    yang_name = "igp-srgb"; yang_parent_name = "srgb-information"; is_top_level_class = false; has_list_ancestor = true;
}

Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::~IgpSrgb()
{
}

bool Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::has_data() const
{
    return igp_id.is_set
	|| (isis !=  nullptr && isis->has_data())
	|| (ospf !=  nullptr && ospf->has_data())
	|| (bgp !=  nullptr && bgp->has_data());
}

bool Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(igp_id.yfilter)
	|| (isis !=  nullptr && isis->has_operation())
	|| (ospf !=  nullptr && ospf->has_operation())
	|| (bgp !=  nullptr && bgp->has_operation());
}

std::string Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "igp-srgb";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (igp_id.is_set || is_set(igp_id.yfilter)) leaf_name_data.push_back(igp_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "isis")
    {
        if(isis == nullptr)
        {
            isis = std::make_shared<Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Isis>();
        }
        return isis;
    }

    if(child_yang_name == "ospf")
    {
        if(ospf == nullptr)
        {
            ospf = std::make_shared<Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Ospf>();
        }
        return ospf;
    }

    if(child_yang_name == "bgp")
    {
        if(bgp == nullptr)
        {
            bgp = std::make_shared<Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Bgp>();
        }
        return bgp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(isis != nullptr)
    {
        children["isis"] = isis;
    }

    if(ospf != nullptr)
    {
        children["ospf"] = ospf;
    }

    if(bgp != nullptr)
    {
        children["bgp"] = bgp;
    }

    return children;
}

void Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "igp-id")
    {
        igp_id = value;
        igp_id.value_namespace = name_space;
        igp_id.value_namespace_prefix = name_space_prefix;
    }
}

void Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "igp-id")
    {
        igp_id.yfilter = yfilter;
    }
}

bool Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "isis" || name == "ospf" || name == "bgp" || name == "igp-id")
        return true;
    return false;
}

Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Isis::Isis()
    :
    system_id{YType::str, "system-id"},
    level{YType::uint32, "level"}
{

    yang_name = "isis"; yang_parent_name = "igp-srgb"; is_top_level_class = false; has_list_ancestor = true;
}

Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Isis::~Isis()
{
}

bool Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Isis::has_data() const
{
    return system_id.is_set
	|| level.is_set;
}

bool Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Isis::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(system_id.yfilter)
	|| ydk::is_set(level.yfilter);
}

std::string Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Isis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Isis::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (system_id.is_set || is_set(system_id.yfilter)) leaf_name_data.push_back(system_id.get_name_leafdata());
    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Isis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Isis::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Isis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "system-id")
    {
        system_id = value;
        system_id.value_namespace = name_space;
        system_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
}

void Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Isis::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "system-id")
    {
        system_id.yfilter = yfilter;
    }
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
}

bool Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Isis::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "system-id" || name == "level")
        return true;
    return false;
}

Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Ospf::Ospf()
    :
    router_id{YType::str, "router-id"},
    area{YType::uint32, "area"}
{

    yang_name = "ospf"; yang_parent_name = "igp-srgb"; is_top_level_class = false; has_list_ancestor = true;
}

Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Ospf::~Ospf()
{
}

bool Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Ospf::has_data() const
{
    return router_id.is_set
	|| area.is_set;
}

bool Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Ospf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(router_id.yfilter)
	|| ydk::is_set(area.yfilter);
}

std::string Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Ospf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Ospf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());
    if (area.is_set || is_set(area.yfilter)) leaf_name_data.push_back(area.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Ospf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Ospf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Ospf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area")
    {
        area = value;
        area.value_namespace = name_space;
        area.value_namespace_prefix = name_space_prefix;
    }
}

void Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Ospf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
    if(value_path == "area")
    {
        area.yfilter = yfilter;
    }
}

bool Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Ospf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "router-id" || name == "area")
        return true;
    return false;
}

Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Bgp::Bgp()
    :
    router_id{YType::str, "router-id"},
    confed_asn{YType::uint32, "confed-asn"}
{

    yang_name = "bgp"; yang_parent_name = "igp-srgb"; is_top_level_class = false; has_list_ancestor = true;
}

Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Bgp::~Bgp()
{
}

bool Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Bgp::has_data() const
{
    return router_id.is_set
	|| confed_asn.is_set;
}

bool Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Bgp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(router_id.yfilter)
	|| ydk::is_set(confed_asn.yfilter);
}

std::string Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Bgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Bgp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());
    if (confed_asn.is_set || is_set(confed_asn.yfilter)) leaf_name_data.push_back(confed_asn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Bgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Bgp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Bgp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "confed-asn")
    {
        confed_asn = value;
        confed_asn.value_namespace = name_space;
        confed_asn.value_namespace_prefix = name_space_prefix;
    }
}

void Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Bgp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
    if(value_path == "confed-asn")
    {
        confed_asn.yfilter = yfilter;
    }
}

bool Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Bgp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "router-id" || name == "confed-asn")
        return true;
    return false;
}

Pce::TopologyNodes::TopologyNode::PrefixSid::PrefixSid()
    :
    sid_type{YType::enumeration, "sid-type"},
    mpls_label{YType::uint32, "mpls-label"},
    domain_identifier{YType::uint64, "domain-identifier"},
    rflag{YType::boolean, "rflag"},
    nflag{YType::boolean, "nflag"},
    pflag{YType::boolean, "pflag"},
    eflag{YType::boolean, "eflag"},
    vflag{YType::boolean, "vflag"},
    lflag{YType::boolean, "lflag"}
    	,
    sid_prefix(std::make_shared<Pce::TopologyNodes::TopologyNode::PrefixSid::SidPrefix>())
{
    sid_prefix->parent = this;

    yang_name = "prefix-sid"; yang_parent_name = "topology-node"; is_top_level_class = false; has_list_ancestor = true;
}

Pce::TopologyNodes::TopologyNode::PrefixSid::~PrefixSid()
{
}

bool Pce::TopologyNodes::TopologyNode::PrefixSid::has_data() const
{
    return sid_type.is_set
	|| mpls_label.is_set
	|| domain_identifier.is_set
	|| rflag.is_set
	|| nflag.is_set
	|| pflag.is_set
	|| eflag.is_set
	|| vflag.is_set
	|| lflag.is_set
	|| (sid_prefix !=  nullptr && sid_prefix->has_data());
}

bool Pce::TopologyNodes::TopologyNode::PrefixSid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sid_type.yfilter)
	|| ydk::is_set(mpls_label.yfilter)
	|| ydk::is_set(domain_identifier.yfilter)
	|| ydk::is_set(rflag.yfilter)
	|| ydk::is_set(nflag.yfilter)
	|| ydk::is_set(pflag.yfilter)
	|| ydk::is_set(eflag.yfilter)
	|| ydk::is_set(vflag.yfilter)
	|| ydk::is_set(lflag.yfilter)
	|| (sid_prefix !=  nullptr && sid_prefix->has_operation());
}

std::string Pce::TopologyNodes::TopologyNode::PrefixSid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-sid";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::TopologyNodes::TopologyNode::PrefixSid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sid_type.is_set || is_set(sid_type.yfilter)) leaf_name_data.push_back(sid_type.get_name_leafdata());
    if (mpls_label.is_set || is_set(mpls_label.yfilter)) leaf_name_data.push_back(mpls_label.get_name_leafdata());
    if (domain_identifier.is_set || is_set(domain_identifier.yfilter)) leaf_name_data.push_back(domain_identifier.get_name_leafdata());
    if (rflag.is_set || is_set(rflag.yfilter)) leaf_name_data.push_back(rflag.get_name_leafdata());
    if (nflag.is_set || is_set(nflag.yfilter)) leaf_name_data.push_back(nflag.get_name_leafdata());
    if (pflag.is_set || is_set(pflag.yfilter)) leaf_name_data.push_back(pflag.get_name_leafdata());
    if (eflag.is_set || is_set(eflag.yfilter)) leaf_name_data.push_back(eflag.get_name_leafdata());
    if (vflag.is_set || is_set(vflag.yfilter)) leaf_name_data.push_back(vflag.get_name_leafdata());
    if (lflag.is_set || is_set(lflag.yfilter)) leaf_name_data.push_back(lflag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pce::TopologyNodes::TopologyNode::PrefixSid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sid-prefix")
    {
        if(sid_prefix == nullptr)
        {
            sid_prefix = std::make_shared<Pce::TopologyNodes::TopologyNode::PrefixSid::SidPrefix>();
        }
        return sid_prefix;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pce::TopologyNodes::TopologyNode::PrefixSid::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(sid_prefix != nullptr)
    {
        children["sid-prefix"] = sid_prefix;
    }

    return children;
}

void Pce::TopologyNodes::TopologyNode::PrefixSid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sid-type")
    {
        sid_type = value;
        sid_type.value_namespace = name_space;
        sid_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-label")
    {
        mpls_label = value;
        mpls_label.value_namespace = name_space;
        mpls_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "domain-identifier")
    {
        domain_identifier = value;
        domain_identifier.value_namespace = name_space;
        domain_identifier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rflag")
    {
        rflag = value;
        rflag.value_namespace = name_space;
        rflag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nflag")
    {
        nflag = value;
        nflag.value_namespace = name_space;
        nflag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pflag")
    {
        pflag = value;
        pflag.value_namespace = name_space;
        pflag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eflag")
    {
        eflag = value;
        eflag.value_namespace = name_space;
        eflag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vflag")
    {
        vflag = value;
        vflag.value_namespace = name_space;
        vflag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lflag")
    {
        lflag = value;
        lflag.value_namespace = name_space;
        lflag.value_namespace_prefix = name_space_prefix;
    }
}

void Pce::TopologyNodes::TopologyNode::PrefixSid::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sid-type")
    {
        sid_type.yfilter = yfilter;
    }
    if(value_path == "mpls-label")
    {
        mpls_label.yfilter = yfilter;
    }
    if(value_path == "domain-identifier")
    {
        domain_identifier.yfilter = yfilter;
    }
    if(value_path == "rflag")
    {
        rflag.yfilter = yfilter;
    }
    if(value_path == "nflag")
    {
        nflag.yfilter = yfilter;
    }
    if(value_path == "pflag")
    {
        pflag.yfilter = yfilter;
    }
    if(value_path == "eflag")
    {
        eflag.yfilter = yfilter;
    }
    if(value_path == "vflag")
    {
        vflag.yfilter = yfilter;
    }
    if(value_path == "lflag")
    {
        lflag.yfilter = yfilter;
    }
}

bool Pce::TopologyNodes::TopologyNode::PrefixSid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sid-prefix" || name == "sid-type" || name == "mpls-label" || name == "domain-identifier" || name == "rflag" || name == "nflag" || name == "pflag" || name == "eflag" || name == "vflag" || name == "lflag")
        return true;
    return false;
}

Pce::TopologyNodes::TopologyNode::PrefixSid::SidPrefix::SidPrefix()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "sid-prefix"; yang_parent_name = "prefix-sid"; is_top_level_class = false; has_list_ancestor = true;
}

Pce::TopologyNodes::TopologyNode::PrefixSid::SidPrefix::~SidPrefix()
{
}

bool Pce::TopologyNodes::TopologyNode::PrefixSid::SidPrefix::has_data() const
{
    return af_name.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool Pce::TopologyNodes::TopologyNode::PrefixSid::SidPrefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string Pce::TopologyNodes::TopologyNode::PrefixSid::SidPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sid-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::TopologyNodes::TopologyNode::PrefixSid::SidPrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pce::TopologyNodes::TopologyNode::PrefixSid::SidPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pce::TopologyNodes::TopologyNode::PrefixSid::SidPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Pce::TopologyNodes::TopologyNode::PrefixSid::SidPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void Pce::TopologyNodes::TopologyNode::PrefixSid::SidPrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
}

bool Pce::TopologyNodes::TopologyNode::PrefixSid::SidPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Pce::TopologyNodes::TopologyNode::Ipv4Link::Ipv4Link()
    :
    local_ipv4_address{YType::str, "local-ipv4-address"},
    remote_ipv4_address{YType::str, "remote-ipv4-address"},
    igp_metric{YType::uint32, "igp-metric"},
    te_metric{YType::uint32, "te-metric"},
    maximum_link_bandwidth{YType::uint64, "maximum-link-bandwidth"},
    max_reservable_bandwidth{YType::uint64, "max-reservable-bandwidth"},
    srlgs{YType::uint32, "srlgs"}
    	,
    local_igp_information(std::make_shared<Pce::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation>())
	,remote_node_protocol_identifier(std::make_shared<Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier>())
{
    local_igp_information->parent = this;
    remote_node_protocol_identifier->parent = this;

    yang_name = "ipv4-link"; yang_parent_name = "topology-node"; is_top_level_class = false; has_list_ancestor = true;
}

Pce::TopologyNodes::TopologyNode::Ipv4Link::~Ipv4Link()
{
}

bool Pce::TopologyNodes::TopologyNode::Ipv4Link::has_data() const
{
    for (std::size_t index=0; index<adjacency_sid.size(); index++)
    {
        if(adjacency_sid[index]->has_data())
            return true;
    }
    for (auto const & leaf : srlgs.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return local_ipv4_address.is_set
	|| remote_ipv4_address.is_set
	|| igp_metric.is_set
	|| te_metric.is_set
	|| maximum_link_bandwidth.is_set
	|| max_reservable_bandwidth.is_set
	|| (local_igp_information !=  nullptr && local_igp_information->has_data())
	|| (remote_node_protocol_identifier !=  nullptr && remote_node_protocol_identifier->has_data());
}

bool Pce::TopologyNodes::TopologyNode::Ipv4Link::has_operation() const
{
    for (std::size_t index=0; index<adjacency_sid.size(); index++)
    {
        if(adjacency_sid[index]->has_operation())
            return true;
    }
    for (auto const & leaf : srlgs.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(local_ipv4_address.yfilter)
	|| ydk::is_set(remote_ipv4_address.yfilter)
	|| ydk::is_set(igp_metric.yfilter)
	|| ydk::is_set(te_metric.yfilter)
	|| ydk::is_set(maximum_link_bandwidth.yfilter)
	|| ydk::is_set(max_reservable_bandwidth.yfilter)
	|| ydk::is_set(srlgs.yfilter)
	|| (local_igp_information !=  nullptr && local_igp_information->has_operation())
	|| (remote_node_protocol_identifier !=  nullptr && remote_node_protocol_identifier->has_operation());
}

std::string Pce::TopologyNodes::TopologyNode::Ipv4Link::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-link";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::TopologyNodes::TopologyNode::Ipv4Link::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_ipv4_address.is_set || is_set(local_ipv4_address.yfilter)) leaf_name_data.push_back(local_ipv4_address.get_name_leafdata());
    if (remote_ipv4_address.is_set || is_set(remote_ipv4_address.yfilter)) leaf_name_data.push_back(remote_ipv4_address.get_name_leafdata());
    if (igp_metric.is_set || is_set(igp_metric.yfilter)) leaf_name_data.push_back(igp_metric.get_name_leafdata());
    if (te_metric.is_set || is_set(te_metric.yfilter)) leaf_name_data.push_back(te_metric.get_name_leafdata());
    if (maximum_link_bandwidth.is_set || is_set(maximum_link_bandwidth.yfilter)) leaf_name_data.push_back(maximum_link_bandwidth.get_name_leafdata());
    if (max_reservable_bandwidth.is_set || is_set(max_reservable_bandwidth.yfilter)) leaf_name_data.push_back(max_reservable_bandwidth.get_name_leafdata());

    auto srlgs_name_datas = srlgs.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), srlgs_name_datas.begin(), srlgs_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Pce::TopologyNodes::TopologyNode::Ipv4Link::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "local-igp-information")
    {
        if(local_igp_information == nullptr)
        {
            local_igp_information = std::make_shared<Pce::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation>();
        }
        return local_igp_information;
    }

    if(child_yang_name == "remote-node-protocol-identifier")
    {
        if(remote_node_protocol_identifier == nullptr)
        {
            remote_node_protocol_identifier = std::make_shared<Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier>();
        }
        return remote_node_protocol_identifier;
    }

    if(child_yang_name == "adjacency-sid")
    {
        auto c = std::make_shared<Pce::TopologyNodes::TopologyNode::Ipv4Link::AdjacencySid>();
        c->parent = this;
        adjacency_sid.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pce::TopologyNodes::TopologyNode::Ipv4Link::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(local_igp_information != nullptr)
    {
        children["local-igp-information"] = local_igp_information;
    }

    if(remote_node_protocol_identifier != nullptr)
    {
        children["remote-node-protocol-identifier"] = remote_node_protocol_identifier;
    }

    count = 0;
    for (auto const & c : adjacency_sid)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Pce::TopologyNodes::TopologyNode::Ipv4Link::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "local-ipv4-address")
    {
        local_ipv4_address = value;
        local_ipv4_address.value_namespace = name_space;
        local_ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-ipv4-address")
    {
        remote_ipv4_address = value;
        remote_ipv4_address.value_namespace = name_space;
        remote_ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igp-metric")
    {
        igp_metric = value;
        igp_metric.value_namespace = name_space;
        igp_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "te-metric")
    {
        te_metric = value;
        te_metric.value_namespace = name_space;
        te_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-link-bandwidth")
    {
        maximum_link_bandwidth = value;
        maximum_link_bandwidth.value_namespace = name_space;
        maximum_link_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-reservable-bandwidth")
    {
        max_reservable_bandwidth = value;
        max_reservable_bandwidth.value_namespace = name_space;
        max_reservable_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srlgs")
    {
        srlgs.append(value);
    }
}

void Pce::TopologyNodes::TopologyNode::Ipv4Link::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "local-ipv4-address")
    {
        local_ipv4_address.yfilter = yfilter;
    }
    if(value_path == "remote-ipv4-address")
    {
        remote_ipv4_address.yfilter = yfilter;
    }
    if(value_path == "igp-metric")
    {
        igp_metric.yfilter = yfilter;
    }
    if(value_path == "te-metric")
    {
        te_metric.yfilter = yfilter;
    }
    if(value_path == "maximum-link-bandwidth")
    {
        maximum_link_bandwidth.yfilter = yfilter;
    }
    if(value_path == "max-reservable-bandwidth")
    {
        max_reservable_bandwidth.yfilter = yfilter;
    }
    if(value_path == "srlgs")
    {
        srlgs.yfilter = yfilter;
    }
}

bool Pce::TopologyNodes::TopologyNode::Ipv4Link::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local-igp-information" || name == "remote-node-protocol-identifier" || name == "adjacency-sid" || name == "local-ipv4-address" || name == "remote-ipv4-address" || name == "igp-metric" || name == "te-metric" || name == "maximum-link-bandwidth" || name == "max-reservable-bandwidth" || name == "srlgs")
        return true;
    return false;
}

Pce::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::LocalIgpInformation()
    :
    domain_identifier{YType::uint64, "domain-identifier"},
    autonomous_system_number{YType::uint32, "autonomous-system-number"}
    	,
    igp(std::make_shared<Pce::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp>())
{
    igp->parent = this;

    yang_name = "local-igp-information"; yang_parent_name = "ipv4-link"; is_top_level_class = false; has_list_ancestor = true;
}

Pce::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::~LocalIgpInformation()
{
}

bool Pce::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::has_data() const
{
    return domain_identifier.is_set
	|| autonomous_system_number.is_set
	|| (igp !=  nullptr && igp->has_data());
}

bool Pce::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(domain_identifier.yfilter)
	|| ydk::is_set(autonomous_system_number.yfilter)
	|| (igp !=  nullptr && igp->has_operation());
}

std::string Pce::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-igp-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (domain_identifier.is_set || is_set(domain_identifier.yfilter)) leaf_name_data.push_back(domain_identifier.get_name_leafdata());
    if (autonomous_system_number.is_set || is_set(autonomous_system_number.yfilter)) leaf_name_data.push_back(autonomous_system_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pce::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "igp")
    {
        if(igp == nullptr)
        {
            igp = std::make_shared<Pce::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp>();
        }
        return igp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pce::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(igp != nullptr)
    {
        children["igp"] = igp;
    }

    return children;
}

void Pce::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "domain-identifier")
    {
        domain_identifier = value;
        domain_identifier.value_namespace = name_space;
        domain_identifier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "autonomous-system-number")
    {
        autonomous_system_number = value;
        autonomous_system_number.value_namespace = name_space;
        autonomous_system_number.value_namespace_prefix = name_space_prefix;
    }
}

void Pce::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "domain-identifier")
    {
        domain_identifier.yfilter = yfilter;
    }
    if(value_path == "autonomous-system-number")
    {
        autonomous_system_number.yfilter = yfilter;
    }
}

bool Pce::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "igp" || name == "domain-identifier" || name == "autonomous-system-number")
        return true;
    return false;
}

Pce::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::Igp()
    :
    igp_id{YType::enumeration, "igp-id"}
    	,
    isis(std::make_shared<Pce::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::Isis>())
	,ospf(std::make_shared<Pce::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::Ospf>())
	,bgp(std::make_shared<Pce::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::Bgp>())
{
    isis->parent = this;
    ospf->parent = this;
    bgp->parent = this;

    yang_name = "igp"; yang_parent_name = "local-igp-information"; is_top_level_class = false; has_list_ancestor = true;
}

Pce::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::~Igp()
{
}

bool Pce::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::has_data() const
{
    return igp_id.is_set
	|| (isis !=  nullptr && isis->has_data())
	|| (ospf !=  nullptr && ospf->has_data())
	|| (bgp !=  nullptr && bgp->has_data());
}

bool Pce::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(igp_id.yfilter)
	|| (isis !=  nullptr && isis->has_operation())
	|| (ospf !=  nullptr && ospf->has_operation())
	|| (bgp !=  nullptr && bgp->has_operation());
}

std::string Pce::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "igp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (igp_id.is_set || is_set(igp_id.yfilter)) leaf_name_data.push_back(igp_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pce::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "isis")
    {
        if(isis == nullptr)
        {
            isis = std::make_shared<Pce::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::Isis>();
        }
        return isis;
    }

    if(child_yang_name == "ospf")
    {
        if(ospf == nullptr)
        {
            ospf = std::make_shared<Pce::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::Ospf>();
        }
        return ospf;
    }

    if(child_yang_name == "bgp")
    {
        if(bgp == nullptr)
        {
            bgp = std::make_shared<Pce::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::Bgp>();
        }
        return bgp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pce::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(isis != nullptr)
    {
        children["isis"] = isis;
    }

    if(ospf != nullptr)
    {
        children["ospf"] = ospf;
    }

    if(bgp != nullptr)
    {
        children["bgp"] = bgp;
    }

    return children;
}

void Pce::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "igp-id")
    {
        igp_id = value;
        igp_id.value_namespace = name_space;
        igp_id.value_namespace_prefix = name_space_prefix;
    }
}

void Pce::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "igp-id")
    {
        igp_id.yfilter = yfilter;
    }
}

bool Pce::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "isis" || name == "ospf" || name == "bgp" || name == "igp-id")
        return true;
    return false;
}

Pce::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::Isis::Isis()
    :
    system_id{YType::str, "system-id"},
    level{YType::uint32, "level"}
{

    yang_name = "isis"; yang_parent_name = "igp"; is_top_level_class = false; has_list_ancestor = true;
}

Pce::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::Isis::~Isis()
{
}

bool Pce::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::Isis::has_data() const
{
    return system_id.is_set
	|| level.is_set;
}

bool Pce::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::Isis::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(system_id.yfilter)
	|| ydk::is_set(level.yfilter);
}

std::string Pce::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::Isis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::Isis::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (system_id.is_set || is_set(system_id.yfilter)) leaf_name_data.push_back(system_id.get_name_leafdata());
    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pce::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::Isis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pce::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::Isis::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Pce::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::Isis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "system-id")
    {
        system_id = value;
        system_id.value_namespace = name_space;
        system_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
}

void Pce::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::Isis::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "system-id")
    {
        system_id.yfilter = yfilter;
    }
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
}

bool Pce::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::Isis::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "system-id" || name == "level")
        return true;
    return false;
}

Pce::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::Ospf::Ospf()
    :
    router_id{YType::str, "router-id"},
    area{YType::uint32, "area"}
{

    yang_name = "ospf"; yang_parent_name = "igp"; is_top_level_class = false; has_list_ancestor = true;
}

Pce::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::Ospf::~Ospf()
{
}

bool Pce::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::Ospf::has_data() const
{
    return router_id.is_set
	|| area.is_set;
}

bool Pce::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::Ospf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(router_id.yfilter)
	|| ydk::is_set(area.yfilter);
}

std::string Pce::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::Ospf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::Ospf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());
    if (area.is_set || is_set(area.yfilter)) leaf_name_data.push_back(area.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pce::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::Ospf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pce::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::Ospf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Pce::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::Ospf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area")
    {
        area = value;
        area.value_namespace = name_space;
        area.value_namespace_prefix = name_space_prefix;
    }
}

void Pce::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::Ospf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
    if(value_path == "area")
    {
        area.yfilter = yfilter;
    }
}

bool Pce::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::Ospf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "router-id" || name == "area")
        return true;
    return false;
}

Pce::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::Bgp::Bgp()
    :
    router_id{YType::str, "router-id"},
    confed_asn{YType::uint32, "confed-asn"}
{

    yang_name = "bgp"; yang_parent_name = "igp"; is_top_level_class = false; has_list_ancestor = true;
}

Pce::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::Bgp::~Bgp()
{
}

bool Pce::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::Bgp::has_data() const
{
    return router_id.is_set
	|| confed_asn.is_set;
}

bool Pce::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::Bgp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(router_id.yfilter)
	|| ydk::is_set(confed_asn.yfilter);
}

std::string Pce::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::Bgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::Bgp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());
    if (confed_asn.is_set || is_set(confed_asn.yfilter)) leaf_name_data.push_back(confed_asn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pce::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::Bgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pce::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::Bgp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Pce::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::Bgp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "confed-asn")
    {
        confed_asn = value;
        confed_asn.value_namespace = name_space;
        confed_asn.value_namespace_prefix = name_space_prefix;
    }
}

void Pce::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::Bgp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
    if(value_path == "confed-asn")
    {
        confed_asn.yfilter = yfilter;
    }
}

bool Pce::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::Igp::Bgp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "router-id" || name == "confed-asn")
        return true;
    return false;
}

Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::RemoteNodeProtocolIdentifier()
    :
    node_name{YType::str, "node-name"},
    ipv4_bgp_router_id_set{YType::boolean, "ipv4-bgp-router-id-set"},
    ipv4_bgp_router_id{YType::str, "ipv4-bgp-router-id"},
    ipv4te_router_id_set{YType::boolean, "ipv4te-router-id-set"},
    ipv4te_router_id{YType::str, "ipv4te-router-id"}
{

    yang_name = "remote-node-protocol-identifier"; yang_parent_name = "ipv4-link"; is_top_level_class = false; has_list_ancestor = true;
}

Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::~RemoteNodeProtocolIdentifier()
{
}

bool Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::has_data() const
{
    for (std::size_t index=0; index<igp_information.size(); index++)
    {
        if(igp_information[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<srgb_information.size(); index++)
    {
        if(srgb_information[index]->has_data())
            return true;
    }
    return node_name.is_set
	|| ipv4_bgp_router_id_set.is_set
	|| ipv4_bgp_router_id.is_set
	|| ipv4te_router_id_set.is_set
	|| ipv4te_router_id.is_set;
}

bool Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::has_operation() const
{
    for (std::size_t index=0; index<igp_information.size(); index++)
    {
        if(igp_information[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<srgb_information.size(); index++)
    {
        if(srgb_information[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(node_name.yfilter)
	|| ydk::is_set(ipv4_bgp_router_id_set.yfilter)
	|| ydk::is_set(ipv4_bgp_router_id.yfilter)
	|| ydk::is_set(ipv4te_router_id_set.yfilter)
	|| ydk::is_set(ipv4te_router_id.yfilter);
}

std::string Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-node-protocol-identifier";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());
    if (ipv4_bgp_router_id_set.is_set || is_set(ipv4_bgp_router_id_set.yfilter)) leaf_name_data.push_back(ipv4_bgp_router_id_set.get_name_leafdata());
    if (ipv4_bgp_router_id.is_set || is_set(ipv4_bgp_router_id.yfilter)) leaf_name_data.push_back(ipv4_bgp_router_id.get_name_leafdata());
    if (ipv4te_router_id_set.is_set || is_set(ipv4te_router_id_set.yfilter)) leaf_name_data.push_back(ipv4te_router_id_set.get_name_leafdata());
    if (ipv4te_router_id.is_set || is_set(ipv4te_router_id.yfilter)) leaf_name_data.push_back(ipv4te_router_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "igp-information")
    {
        auto c = std::make_shared<Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation>();
        c->parent = this;
        igp_information.push_back(c);
        return c;
    }

    if(child_yang_name == "srgb-information")
    {
        auto c = std::make_shared<Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation>();
        c->parent = this;
        srgb_information.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : igp_information)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : srgb_information)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-name")
    {
        node_name = value;
        node_name.value_namespace = name_space;
        node_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-bgp-router-id-set")
    {
        ipv4_bgp_router_id_set = value;
        ipv4_bgp_router_id_set.value_namespace = name_space;
        ipv4_bgp_router_id_set.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-bgp-router-id")
    {
        ipv4_bgp_router_id = value;
        ipv4_bgp_router_id.value_namespace = name_space;
        ipv4_bgp_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4te-router-id-set")
    {
        ipv4te_router_id_set = value;
        ipv4te_router_id_set.value_namespace = name_space;
        ipv4te_router_id_set.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4te-router-id")
    {
        ipv4te_router_id = value;
        ipv4te_router_id.value_namespace = name_space;
        ipv4te_router_id.value_namespace_prefix = name_space_prefix;
    }
}

void Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-name")
    {
        node_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-bgp-router-id-set")
    {
        ipv4_bgp_router_id_set.yfilter = yfilter;
    }
    if(value_path == "ipv4-bgp-router-id")
    {
        ipv4_bgp_router_id.yfilter = yfilter;
    }
    if(value_path == "ipv4te-router-id-set")
    {
        ipv4te_router_id_set.yfilter = yfilter;
    }
    if(value_path == "ipv4te-router-id")
    {
        ipv4te_router_id.yfilter = yfilter;
    }
}

bool Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "igp-information" || name == "srgb-information" || name == "node-name" || name == "ipv4-bgp-router-id-set" || name == "ipv4-bgp-router-id" || name == "ipv4te-router-id-set" || name == "ipv4te-router-id")
        return true;
    return false;
}

const Enum::YLeaf PceAsso::unknown {0, "unknown"};
const Enum::YLeaf PceAsso::link {1, "link"};
const Enum::YLeaf PceAsso::node {2, "node"};
const Enum::YLeaf PceAsso::srlg {3, "srlg"};

const Enum::YLeaf PceCspfRc::pce_cspf_not_set {0, "pce-cspf-not-set"};
const Enum::YLeaf PceCspfRc::pce_cspf_src_not_found {1, "pce-cspf-src-not-found"};
const Enum::YLeaf PceCspfRc::pce_cspf_dst_not_found {2, "pce-cspf-dst-not-found"};
const Enum::YLeaf PceCspfRc::pce_cspf_second_src_not_found {3, "pce-cspf-second-src-not-found"};
const Enum::YLeaf PceCspfRc::pce_cspf_second_dst_not_found {4, "pce-cspf-second-dst-not-found"};
const Enum::YLeaf PceCspfRc::pce_cspf_no_mem {5, "pce-cspf-no-mem"};
const Enum::YLeaf PceCspfRc::pce_cspf_ex_path_not_resolved {6, "pce-cspf-ex-path-not-resolved"};
const Enum::YLeaf PceCspfRc::pce_cspf_no_path {7, "pce-cspf-no-path"};
const Enum::YLeaf PceCspfRc::pce_cspf_sp_success {8, "pce-cspf-sp-success"};
const Enum::YLeaf PceCspfRc::pce_cspf_error {9, "pce-cspf-error"};
const Enum::YLeaf PceCspfRc::pce_cspf_fallback_srlg_node_node {10, "pce-cspf-fallback-srlg-node-node"};
const Enum::YLeaf PceCspfRc::pce_cspf_fallback_srlg_node_link {11, "pce-cspf-fallback-srlg-node-link"};
const Enum::YLeaf PceCspfRc::pce_cspf_fallback_srlg_node_sp {12, "pce-cspf-fallback-srlg-node-sp"};
const Enum::YLeaf PceCspfRc::pce_cspf_fallback_node_link {13, "pce-cspf-fallback-node-link"};
const Enum::YLeaf PceCspfRc::pce_cspf_fallback_link_sp {14, "pce-cspf-fallback-link-sp"};
const Enum::YLeaf PceCspfRc::pce_cspf_fallback_node_sp {15, "pce-cspf-fallback-node-sp"};
const Enum::YLeaf PceCspfRc::pce_cspf_fallback_srlg_link {16, "pce-cspf-fallback-srlg-link"};
const Enum::YLeaf PceCspfRc::pce_cspf_fallback_srlg_sp {17, "pce-cspf-fallback-srlg-sp"};
const Enum::YLeaf PceCspfRc::pce_cspf_dp_success {18, "pce-cspf-dp-success"};

const Enum::YLeaf PceHeadendSwap::pcehs_none {0, "pcehs-none"};
const Enum::YLeaf PceHeadendSwap::pcehs_plain {1, "pcehs-plain"};
const Enum::YLeaf PceHeadendSwap::pcehs_rwi {2, "pcehs-rwi"};

const Enum::YLeaf PceAfId::none {0, "none"};
const Enum::YLeaf PceAfId::ipv4 {1, "ipv4"};
const Enum::YLeaf PceAfId::ipv6 {2, "ipv6"};

const Enum::YLeaf Sid::sr_protected_adj_sid {1, "sr-protected-adj-sid"};
const Enum::YLeaf Sid::sr_unprotected_adj_sid {2, "sr-unprotected-adj-sid"};
const Enum::YLeaf Sid::sr_bgp_egress_peer_engineering_sid {3, "sr-bgp-egress-peer-engineering-sid"};
const Enum::YLeaf Sid::sr_reqular_prefix_sid {4, "sr-reqular-prefix-sid"};
const Enum::YLeaf Sid::sr_strict_prefix_sid {5, "sr-strict-prefix-sid"};

const Enum::YLeaf PceIgpInfoId::isis {1, "isis"};
const Enum::YLeaf PceIgpInfoId::ospf {2, "ospf"};
const Enum::YLeaf PceIgpInfoId::bgp {3, "bgp"};

const Enum::YLeaf PcepState::tcp_close {0, "tcp-close"};
const Enum::YLeaf PcepState::tcp_listen {1, "tcp-listen"};
const Enum::YLeaf PcepState::tcp_connect {2, "tcp-connect"};
const Enum::YLeaf PcepState::pcep_closed {3, "pcep-closed"};
const Enum::YLeaf PcepState::pcep_opening {4, "pcep-opening"};
const Enum::YLeaf PcepState::pcep_open {5, "pcep-open"};

const Enum::YLeaf PceProto::pcep {0, "pcep"};
const Enum::YLeaf PceProto::netconf {1, "netconf"};

const Enum::YLeaf PceRro::rro_type_ipv4_address {0, "rro-type-ipv4-address"};
const Enum::YLeaf PceRro::rro_type_mpls_label {1, "rro-type-mpls-label"};
const Enum::YLeaf PceRro::rro_type_sripv4_node_sid {2, "rro-type-sripv4-node-sid"};
const Enum::YLeaf PceRro::rro_type_sripv4_adjacency_sid {3, "rro-type-sripv4-adjacency-sid"};
const Enum::YLeaf PceRro::rro_type_sr_nai_null {4, "rro-type-sr-nai-null"};

const Enum::YLeaf PceSrSid::ipv4_node_sid {0, "ipv4-node-sid"};
const Enum::YLeaf PceSrSid::ipv4_adjacency_sid {1, "ipv4-adjacency-sid"};
const Enum::YLeaf PceSrSid::unknown_sid {2, "unknown-sid"};

const Enum::YLeaf LspState::lsp_down {0, "lsp-down"};
const Enum::YLeaf LspState::lsp_up {1, "lsp-up"};

const Enum::YLeaf PcepLspState::lsp_down {0, "lsp-down"};
const Enum::YLeaf PcepLspState::lsp_up {1, "lsp-up"};
const Enum::YLeaf PcepLspState::lsp_active {2, "lsp-active"};
const Enum::YLeaf PcepLspState::lsp_going_down {3, "lsp-going-down"};
const Enum::YLeaf PcepLspState::lsp_being_signaled {4, "lsp-being-signaled"};

const Enum::YLeaf LspSetup::setup_rsvp {0, "setup-rsvp"};
const Enum::YLeaf LspSetup::setup_sr {1, "setup-sr"};
const Enum::YLeaf LspSetup::setup_unknown {2, "setup-unknown"};


}
}

