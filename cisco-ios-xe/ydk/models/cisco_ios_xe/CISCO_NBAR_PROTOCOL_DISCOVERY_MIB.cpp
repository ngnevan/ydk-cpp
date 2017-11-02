
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_NBAR_PROTOCOL_DISCOVERY_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace CISCO_NBAR_PROTOCOL_DISCOVERY_MIB {

CISCONBARPROTOCOLDISCOVERYMIB::CISCONBARPROTOCOLDISCOVERYMIB()
    :
    cnpdnotificationsconfig(std::make_shared<CISCONBARPROTOCOLDISCOVERYMIB::Cnpdnotificationsconfig>())
	,cnpdstatustable(std::make_shared<CISCONBARPROTOCOLDISCOVERYMIB::Cnpdstatustable>())
	,cnpdallstatstable(std::make_shared<CISCONBARPROTOCOLDISCOVERYMIB::Cnpdallstatstable>())
	,cnpdtopnconfigtable(std::make_shared<CISCONBARPROTOCOLDISCOVERYMIB::Cnpdtopnconfigtable>())
	,cnpdtopnstatstable(std::make_shared<CISCONBARPROTOCOLDISCOVERYMIB::Cnpdtopnstatstable>())
	,cnpdthresholdconfigtable(std::make_shared<CISCONBARPROTOCOLDISCOVERYMIB::Cnpdthresholdconfigtable>())
	,cnpdthresholdhistorytable(std::make_shared<CISCONBARPROTOCOLDISCOVERYMIB::Cnpdthresholdhistorytable>())
	,cnpdsupportedprotocolstable(std::make_shared<CISCONBARPROTOCOLDISCOVERYMIB::Cnpdsupportedprotocolstable>())
{
    cnpdnotificationsconfig->parent = this;
    cnpdstatustable->parent = this;
    cnpdallstatstable->parent = this;
    cnpdtopnconfigtable->parent = this;
    cnpdtopnstatstable->parent = this;
    cnpdthresholdconfigtable->parent = this;
    cnpdthresholdhistorytable->parent = this;
    cnpdsupportedprotocolstable->parent = this;

    yang_name = "CISCO-NBAR-PROTOCOL-DISCOVERY-MIB"; yang_parent_name = "CISCO-NBAR-PROTOCOL-DISCOVERY-MIB"; is_top_level_class = true; has_list_ancestor = false;
}

CISCONBARPROTOCOLDISCOVERYMIB::~CISCONBARPROTOCOLDISCOVERYMIB()
{
}

bool CISCONBARPROTOCOLDISCOVERYMIB::has_data() const
{
    return (cnpdnotificationsconfig !=  nullptr && cnpdnotificationsconfig->has_data())
	|| (cnpdstatustable !=  nullptr && cnpdstatustable->has_data())
	|| (cnpdallstatstable !=  nullptr && cnpdallstatstable->has_data())
	|| (cnpdtopnconfigtable !=  nullptr && cnpdtopnconfigtable->has_data())
	|| (cnpdtopnstatstable !=  nullptr && cnpdtopnstatstable->has_data())
	|| (cnpdthresholdconfigtable !=  nullptr && cnpdthresholdconfigtable->has_data())
	|| (cnpdthresholdhistorytable !=  nullptr && cnpdthresholdhistorytable->has_data())
	|| (cnpdsupportedprotocolstable !=  nullptr && cnpdsupportedprotocolstable->has_data());
}

bool CISCONBARPROTOCOLDISCOVERYMIB::has_operation() const
{
    return is_set(yfilter)
	|| (cnpdnotificationsconfig !=  nullptr && cnpdnotificationsconfig->has_operation())
	|| (cnpdstatustable !=  nullptr && cnpdstatustable->has_operation())
	|| (cnpdallstatstable !=  nullptr && cnpdallstatstable->has_operation())
	|| (cnpdtopnconfigtable !=  nullptr && cnpdtopnconfigtable->has_operation())
	|| (cnpdtopnstatstable !=  nullptr && cnpdtopnstatstable->has_operation())
	|| (cnpdthresholdconfigtable !=  nullptr && cnpdthresholdconfigtable->has_operation())
	|| (cnpdthresholdhistorytable !=  nullptr && cnpdthresholdhistorytable->has_operation())
	|| (cnpdsupportedprotocolstable !=  nullptr && cnpdsupportedprotocolstable->has_operation());
}

std::string CISCONBARPROTOCOLDISCOVERYMIB::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-NBAR-PROTOCOL-DISCOVERY-MIB:CISCO-NBAR-PROTOCOL-DISCOVERY-MIB";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCONBARPROTOCOLDISCOVERYMIB::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCONBARPROTOCOLDISCOVERYMIB::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cnpdNotificationsConfig")
    {
        if(cnpdnotificationsconfig == nullptr)
        {
            cnpdnotificationsconfig = std::make_shared<CISCONBARPROTOCOLDISCOVERYMIB::Cnpdnotificationsconfig>();
        }
        return cnpdnotificationsconfig;
    }

    if(child_yang_name == "cnpdStatusTable")
    {
        if(cnpdstatustable == nullptr)
        {
            cnpdstatustable = std::make_shared<CISCONBARPROTOCOLDISCOVERYMIB::Cnpdstatustable>();
        }
        return cnpdstatustable;
    }

    if(child_yang_name == "cnpdAllStatsTable")
    {
        if(cnpdallstatstable == nullptr)
        {
            cnpdallstatstable = std::make_shared<CISCONBARPROTOCOLDISCOVERYMIB::Cnpdallstatstable>();
        }
        return cnpdallstatstable;
    }

    if(child_yang_name == "cnpdTopNConfigTable")
    {
        if(cnpdtopnconfigtable == nullptr)
        {
            cnpdtopnconfigtable = std::make_shared<CISCONBARPROTOCOLDISCOVERYMIB::Cnpdtopnconfigtable>();
        }
        return cnpdtopnconfigtable;
    }

    if(child_yang_name == "cnpdTopNStatsTable")
    {
        if(cnpdtopnstatstable == nullptr)
        {
            cnpdtopnstatstable = std::make_shared<CISCONBARPROTOCOLDISCOVERYMIB::Cnpdtopnstatstable>();
        }
        return cnpdtopnstatstable;
    }

    if(child_yang_name == "cnpdThresholdConfigTable")
    {
        if(cnpdthresholdconfigtable == nullptr)
        {
            cnpdthresholdconfigtable = std::make_shared<CISCONBARPROTOCOLDISCOVERYMIB::Cnpdthresholdconfigtable>();
        }
        return cnpdthresholdconfigtable;
    }

    if(child_yang_name == "cnpdThresholdHistoryTable")
    {
        if(cnpdthresholdhistorytable == nullptr)
        {
            cnpdthresholdhistorytable = std::make_shared<CISCONBARPROTOCOLDISCOVERYMIB::Cnpdthresholdhistorytable>();
        }
        return cnpdthresholdhistorytable;
    }

    if(child_yang_name == "cnpdSupportedProtocolsTable")
    {
        if(cnpdsupportedprotocolstable == nullptr)
        {
            cnpdsupportedprotocolstable = std::make_shared<CISCONBARPROTOCOLDISCOVERYMIB::Cnpdsupportedprotocolstable>();
        }
        return cnpdsupportedprotocolstable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCONBARPROTOCOLDISCOVERYMIB::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cnpdnotificationsconfig != nullptr)
    {
        children["cnpdNotificationsConfig"] = cnpdnotificationsconfig;
    }

    if(cnpdstatustable != nullptr)
    {
        children["cnpdStatusTable"] = cnpdstatustable;
    }

    if(cnpdallstatstable != nullptr)
    {
        children["cnpdAllStatsTable"] = cnpdallstatstable;
    }

    if(cnpdtopnconfigtable != nullptr)
    {
        children["cnpdTopNConfigTable"] = cnpdtopnconfigtable;
    }

    if(cnpdtopnstatstable != nullptr)
    {
        children["cnpdTopNStatsTable"] = cnpdtopnstatstable;
    }

    if(cnpdthresholdconfigtable != nullptr)
    {
        children["cnpdThresholdConfigTable"] = cnpdthresholdconfigtable;
    }

    if(cnpdthresholdhistorytable != nullptr)
    {
        children["cnpdThresholdHistoryTable"] = cnpdthresholdhistorytable;
    }

    if(cnpdsupportedprotocolstable != nullptr)
    {
        children["cnpdSupportedProtocolsTable"] = cnpdsupportedprotocolstable;
    }

    return children;
}

void CISCONBARPROTOCOLDISCOVERYMIB::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCONBARPROTOCOLDISCOVERYMIB::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> CISCONBARPROTOCOLDISCOVERYMIB::clone_ptr() const
{
    return std::make_shared<CISCONBARPROTOCOLDISCOVERYMIB>();
}

std::string CISCONBARPROTOCOLDISCOVERYMIB::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string CISCONBARPROTOCOLDISCOVERYMIB::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function CISCONBARPROTOCOLDISCOVERYMIB::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> CISCONBARPROTOCOLDISCOVERYMIB::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool CISCONBARPROTOCOLDISCOVERYMIB::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cnpdNotificationsConfig" || name == "cnpdStatusTable" || name == "cnpdAllStatsTable" || name == "cnpdTopNConfigTable" || name == "cnpdTopNStatsTable" || name == "cnpdThresholdConfigTable" || name == "cnpdThresholdHistoryTable" || name == "cnpdSupportedProtocolsTable")
        return true;
    return false;
}

CISCONBARPROTOCOLDISCOVERYMIB::Cnpdnotificationsconfig::Cnpdnotificationsconfig()
    :
    cnpdnotificationsenable{YType::boolean, "cnpdNotificationsEnable"}
{

    yang_name = "cnpdNotificationsConfig"; yang_parent_name = "CISCO-NBAR-PROTOCOL-DISCOVERY-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCONBARPROTOCOLDISCOVERYMIB::Cnpdnotificationsconfig::~Cnpdnotificationsconfig()
{
}

bool CISCONBARPROTOCOLDISCOVERYMIB::Cnpdnotificationsconfig::has_data() const
{
    return cnpdnotificationsenable.is_set;
}

bool CISCONBARPROTOCOLDISCOVERYMIB::Cnpdnotificationsconfig::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cnpdnotificationsenable.yfilter);
}

std::string CISCONBARPROTOCOLDISCOVERYMIB::Cnpdnotificationsconfig::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-NBAR-PROTOCOL-DISCOVERY-MIB:CISCO-NBAR-PROTOCOL-DISCOVERY-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCONBARPROTOCOLDISCOVERYMIB::Cnpdnotificationsconfig::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cnpdNotificationsConfig";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCONBARPROTOCOLDISCOVERYMIB::Cnpdnotificationsconfig::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cnpdnotificationsenable.is_set || is_set(cnpdnotificationsenable.yfilter)) leaf_name_data.push_back(cnpdnotificationsenable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCONBARPROTOCOLDISCOVERYMIB::Cnpdnotificationsconfig::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCONBARPROTOCOLDISCOVERYMIB::Cnpdnotificationsconfig::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CISCONBARPROTOCOLDISCOVERYMIB::Cnpdnotificationsconfig::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cnpdNotificationsEnable")
    {
        cnpdnotificationsenable = value;
        cnpdnotificationsenable.value_namespace = name_space;
        cnpdnotificationsenable.value_namespace_prefix = name_space_prefix;
    }
}

void CISCONBARPROTOCOLDISCOVERYMIB::Cnpdnotificationsconfig::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cnpdNotificationsEnable")
    {
        cnpdnotificationsenable.yfilter = yfilter;
    }
}

bool CISCONBARPROTOCOLDISCOVERYMIB::Cnpdnotificationsconfig::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cnpdNotificationsEnable")
        return true;
    return false;
}

CISCONBARPROTOCOLDISCOVERYMIB::Cnpdstatustable::Cnpdstatustable()
{

    yang_name = "cnpdStatusTable"; yang_parent_name = "CISCO-NBAR-PROTOCOL-DISCOVERY-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCONBARPROTOCOLDISCOVERYMIB::Cnpdstatustable::~Cnpdstatustable()
{
}

bool CISCONBARPROTOCOLDISCOVERYMIB::Cnpdstatustable::has_data() const
{
    for (std::size_t index=0; index<cnpdstatusentry.size(); index++)
    {
        if(cnpdstatusentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCONBARPROTOCOLDISCOVERYMIB::Cnpdstatustable::has_operation() const
{
    for (std::size_t index=0; index<cnpdstatusentry.size(); index++)
    {
        if(cnpdstatusentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCONBARPROTOCOLDISCOVERYMIB::Cnpdstatustable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-NBAR-PROTOCOL-DISCOVERY-MIB:CISCO-NBAR-PROTOCOL-DISCOVERY-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCONBARPROTOCOLDISCOVERYMIB::Cnpdstatustable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cnpdStatusTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCONBARPROTOCOLDISCOVERYMIB::Cnpdstatustable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCONBARPROTOCOLDISCOVERYMIB::Cnpdstatustable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cnpdStatusEntry")
    {
        for(auto const & c : cnpdstatusentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CISCONBARPROTOCOLDISCOVERYMIB::Cnpdstatustable::Cnpdstatusentry>();
        c->parent = this;
        cnpdstatusentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCONBARPROTOCOLDISCOVERYMIB::Cnpdstatustable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cnpdstatusentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CISCONBARPROTOCOLDISCOVERYMIB::Cnpdstatustable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCONBARPROTOCOLDISCOVERYMIB::Cnpdstatustable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCONBARPROTOCOLDISCOVERYMIB::Cnpdstatustable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cnpdStatusEntry")
        return true;
    return false;
}

CISCONBARPROTOCOLDISCOVERYMIB::Cnpdstatustable::Cnpdstatusentry::Cnpdstatusentry()
    :
    ifindex{YType::str, "ifIndex"},
    cnpdstatuspdenable{YType::boolean, "cnpdStatusPdEnable"},
    cnpdstatuslastupdatetime{YType::uint32, "cnpdStatusLastUpdateTime"}
{

    yang_name = "cnpdStatusEntry"; yang_parent_name = "cnpdStatusTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCONBARPROTOCOLDISCOVERYMIB::Cnpdstatustable::Cnpdstatusentry::~Cnpdstatusentry()
{
}

bool CISCONBARPROTOCOLDISCOVERYMIB::Cnpdstatustable::Cnpdstatusentry::has_data() const
{
    return ifindex.is_set
	|| cnpdstatuspdenable.is_set
	|| cnpdstatuslastupdatetime.is_set;
}

bool CISCONBARPROTOCOLDISCOVERYMIB::Cnpdstatustable::Cnpdstatusentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(cnpdstatuspdenable.yfilter)
	|| ydk::is_set(cnpdstatuslastupdatetime.yfilter);
}

std::string CISCONBARPROTOCOLDISCOVERYMIB::Cnpdstatustable::Cnpdstatusentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-NBAR-PROTOCOL-DISCOVERY-MIB:CISCO-NBAR-PROTOCOL-DISCOVERY-MIB/cnpdStatusTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCONBARPROTOCOLDISCOVERYMIB::Cnpdstatustable::Cnpdstatusentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cnpdStatusEntry" <<"[ifIndex='" <<ifindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCONBARPROTOCOLDISCOVERYMIB::Cnpdstatustable::Cnpdstatusentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (cnpdstatuspdenable.is_set || is_set(cnpdstatuspdenable.yfilter)) leaf_name_data.push_back(cnpdstatuspdenable.get_name_leafdata());
    if (cnpdstatuslastupdatetime.is_set || is_set(cnpdstatuslastupdatetime.yfilter)) leaf_name_data.push_back(cnpdstatuslastupdatetime.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCONBARPROTOCOLDISCOVERYMIB::Cnpdstatustable::Cnpdstatusentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCONBARPROTOCOLDISCOVERYMIB::Cnpdstatustable::Cnpdstatusentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CISCONBARPROTOCOLDISCOVERYMIB::Cnpdstatustable::Cnpdstatusentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cnpdStatusPdEnable")
    {
        cnpdstatuspdenable = value;
        cnpdstatuspdenable.value_namespace = name_space;
        cnpdstatuspdenable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cnpdStatusLastUpdateTime")
    {
        cnpdstatuslastupdatetime = value;
        cnpdstatuslastupdatetime.value_namespace = name_space;
        cnpdstatuslastupdatetime.value_namespace_prefix = name_space_prefix;
    }
}

void CISCONBARPROTOCOLDISCOVERYMIB::Cnpdstatustable::Cnpdstatusentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "cnpdStatusPdEnable")
    {
        cnpdstatuspdenable.yfilter = yfilter;
    }
    if(value_path == "cnpdStatusLastUpdateTime")
    {
        cnpdstatuslastupdatetime.yfilter = yfilter;
    }
}

bool CISCONBARPROTOCOLDISCOVERYMIB::Cnpdstatustable::Cnpdstatusentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "cnpdStatusPdEnable" || name == "cnpdStatusLastUpdateTime")
        return true;
    return false;
}

CISCONBARPROTOCOLDISCOVERYMIB::Cnpdallstatstable::Cnpdallstatstable()
{

    yang_name = "cnpdAllStatsTable"; yang_parent_name = "CISCO-NBAR-PROTOCOL-DISCOVERY-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCONBARPROTOCOLDISCOVERYMIB::Cnpdallstatstable::~Cnpdallstatstable()
{
}

bool CISCONBARPROTOCOLDISCOVERYMIB::Cnpdallstatstable::has_data() const
{
    for (std::size_t index=0; index<cnpdallstatsentry.size(); index++)
    {
        if(cnpdallstatsentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCONBARPROTOCOLDISCOVERYMIB::Cnpdallstatstable::has_operation() const
{
    for (std::size_t index=0; index<cnpdallstatsentry.size(); index++)
    {
        if(cnpdallstatsentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCONBARPROTOCOLDISCOVERYMIB::Cnpdallstatstable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-NBAR-PROTOCOL-DISCOVERY-MIB:CISCO-NBAR-PROTOCOL-DISCOVERY-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCONBARPROTOCOLDISCOVERYMIB::Cnpdallstatstable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cnpdAllStatsTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCONBARPROTOCOLDISCOVERYMIB::Cnpdallstatstable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCONBARPROTOCOLDISCOVERYMIB::Cnpdallstatstable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cnpdAllStatsEntry")
    {
        for(auto const & c : cnpdallstatsentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CISCONBARPROTOCOLDISCOVERYMIB::Cnpdallstatstable::Cnpdallstatsentry>();
        c->parent = this;
        cnpdallstatsentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCONBARPROTOCOLDISCOVERYMIB::Cnpdallstatstable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cnpdallstatsentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CISCONBARPROTOCOLDISCOVERYMIB::Cnpdallstatstable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCONBARPROTOCOLDISCOVERYMIB::Cnpdallstatstable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCONBARPROTOCOLDISCOVERYMIB::Cnpdallstatstable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cnpdAllStatsEntry")
        return true;
    return false;
}

CISCONBARPROTOCOLDISCOVERYMIB::Cnpdallstatstable::Cnpdallstatsentry::Cnpdallstatsentry()
    :
    ifindex{YType::str, "ifIndex"},
    cnpdallstatsprotocolsindex{YType::uint32, "cnpdAllStatsProtocolsIndex"},
    cnpdallstatsprotocolname{YType::str, "cnpdAllStatsProtocolName"},
    cnpdallstatsinpkts{YType::uint32, "cnpdAllStatsInPkts"},
    cnpdallstatsoutpkts{YType::uint32, "cnpdAllStatsOutPkts"},
    cnpdallstatsinbytes{YType::uint32, "cnpdAllStatsInBytes"},
    cnpdallstatsoutbytes{YType::uint32, "cnpdAllStatsOutBytes"},
    cnpdallstatshcinpkts{YType::uint64, "cnpdAllStatsHCInPkts"},
    cnpdallstatshcoutpkts{YType::uint64, "cnpdAllStatsHCOutPkts"},
    cnpdallstatshcinbytes{YType::uint64, "cnpdAllStatsHCInBytes"},
    cnpdallstatshcoutbytes{YType::uint64, "cnpdAllStatsHCOutBytes"},
    cnpdallstatsinbitrate{YType::uint32, "cnpdAllStatsInBitRate"},
    cnpdallstatsoutbitrate{YType::uint32, "cnpdAllStatsOutBitRate"}
{

    yang_name = "cnpdAllStatsEntry"; yang_parent_name = "cnpdAllStatsTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCONBARPROTOCOLDISCOVERYMIB::Cnpdallstatstable::Cnpdallstatsentry::~Cnpdallstatsentry()
{
}

bool CISCONBARPROTOCOLDISCOVERYMIB::Cnpdallstatstable::Cnpdallstatsentry::has_data() const
{
    return ifindex.is_set
	|| cnpdallstatsprotocolsindex.is_set
	|| cnpdallstatsprotocolname.is_set
	|| cnpdallstatsinpkts.is_set
	|| cnpdallstatsoutpkts.is_set
	|| cnpdallstatsinbytes.is_set
	|| cnpdallstatsoutbytes.is_set
	|| cnpdallstatshcinpkts.is_set
	|| cnpdallstatshcoutpkts.is_set
	|| cnpdallstatshcinbytes.is_set
	|| cnpdallstatshcoutbytes.is_set
	|| cnpdallstatsinbitrate.is_set
	|| cnpdallstatsoutbitrate.is_set;
}

bool CISCONBARPROTOCOLDISCOVERYMIB::Cnpdallstatstable::Cnpdallstatsentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(cnpdallstatsprotocolsindex.yfilter)
	|| ydk::is_set(cnpdallstatsprotocolname.yfilter)
	|| ydk::is_set(cnpdallstatsinpkts.yfilter)
	|| ydk::is_set(cnpdallstatsoutpkts.yfilter)
	|| ydk::is_set(cnpdallstatsinbytes.yfilter)
	|| ydk::is_set(cnpdallstatsoutbytes.yfilter)
	|| ydk::is_set(cnpdallstatshcinpkts.yfilter)
	|| ydk::is_set(cnpdallstatshcoutpkts.yfilter)
	|| ydk::is_set(cnpdallstatshcinbytes.yfilter)
	|| ydk::is_set(cnpdallstatshcoutbytes.yfilter)
	|| ydk::is_set(cnpdallstatsinbitrate.yfilter)
	|| ydk::is_set(cnpdallstatsoutbitrate.yfilter);
}

std::string CISCONBARPROTOCOLDISCOVERYMIB::Cnpdallstatstable::Cnpdallstatsentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-NBAR-PROTOCOL-DISCOVERY-MIB:CISCO-NBAR-PROTOCOL-DISCOVERY-MIB/cnpdAllStatsTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCONBARPROTOCOLDISCOVERYMIB::Cnpdallstatstable::Cnpdallstatsentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cnpdAllStatsEntry" <<"[ifIndex='" <<ifindex <<"']" <<"[cnpdAllStatsProtocolsIndex='" <<cnpdallstatsprotocolsindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCONBARPROTOCOLDISCOVERYMIB::Cnpdallstatstable::Cnpdallstatsentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (cnpdallstatsprotocolsindex.is_set || is_set(cnpdallstatsprotocolsindex.yfilter)) leaf_name_data.push_back(cnpdallstatsprotocolsindex.get_name_leafdata());
    if (cnpdallstatsprotocolname.is_set || is_set(cnpdallstatsprotocolname.yfilter)) leaf_name_data.push_back(cnpdallstatsprotocolname.get_name_leafdata());
    if (cnpdallstatsinpkts.is_set || is_set(cnpdallstatsinpkts.yfilter)) leaf_name_data.push_back(cnpdallstatsinpkts.get_name_leafdata());
    if (cnpdallstatsoutpkts.is_set || is_set(cnpdallstatsoutpkts.yfilter)) leaf_name_data.push_back(cnpdallstatsoutpkts.get_name_leafdata());
    if (cnpdallstatsinbytes.is_set || is_set(cnpdallstatsinbytes.yfilter)) leaf_name_data.push_back(cnpdallstatsinbytes.get_name_leafdata());
    if (cnpdallstatsoutbytes.is_set || is_set(cnpdallstatsoutbytes.yfilter)) leaf_name_data.push_back(cnpdallstatsoutbytes.get_name_leafdata());
    if (cnpdallstatshcinpkts.is_set || is_set(cnpdallstatshcinpkts.yfilter)) leaf_name_data.push_back(cnpdallstatshcinpkts.get_name_leafdata());
    if (cnpdallstatshcoutpkts.is_set || is_set(cnpdallstatshcoutpkts.yfilter)) leaf_name_data.push_back(cnpdallstatshcoutpkts.get_name_leafdata());
    if (cnpdallstatshcinbytes.is_set || is_set(cnpdallstatshcinbytes.yfilter)) leaf_name_data.push_back(cnpdallstatshcinbytes.get_name_leafdata());
    if (cnpdallstatshcoutbytes.is_set || is_set(cnpdallstatshcoutbytes.yfilter)) leaf_name_data.push_back(cnpdallstatshcoutbytes.get_name_leafdata());
    if (cnpdallstatsinbitrate.is_set || is_set(cnpdallstatsinbitrate.yfilter)) leaf_name_data.push_back(cnpdallstatsinbitrate.get_name_leafdata());
    if (cnpdallstatsoutbitrate.is_set || is_set(cnpdallstatsoutbitrate.yfilter)) leaf_name_data.push_back(cnpdallstatsoutbitrate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCONBARPROTOCOLDISCOVERYMIB::Cnpdallstatstable::Cnpdallstatsentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCONBARPROTOCOLDISCOVERYMIB::Cnpdallstatstable::Cnpdallstatsentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CISCONBARPROTOCOLDISCOVERYMIB::Cnpdallstatstable::Cnpdallstatsentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cnpdAllStatsProtocolsIndex")
    {
        cnpdallstatsprotocolsindex = value;
        cnpdallstatsprotocolsindex.value_namespace = name_space;
        cnpdallstatsprotocolsindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cnpdAllStatsProtocolName")
    {
        cnpdallstatsprotocolname = value;
        cnpdallstatsprotocolname.value_namespace = name_space;
        cnpdallstatsprotocolname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cnpdAllStatsInPkts")
    {
        cnpdallstatsinpkts = value;
        cnpdallstatsinpkts.value_namespace = name_space;
        cnpdallstatsinpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cnpdAllStatsOutPkts")
    {
        cnpdallstatsoutpkts = value;
        cnpdallstatsoutpkts.value_namespace = name_space;
        cnpdallstatsoutpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cnpdAllStatsInBytes")
    {
        cnpdallstatsinbytes = value;
        cnpdallstatsinbytes.value_namespace = name_space;
        cnpdallstatsinbytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cnpdAllStatsOutBytes")
    {
        cnpdallstatsoutbytes = value;
        cnpdallstatsoutbytes.value_namespace = name_space;
        cnpdallstatsoutbytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cnpdAllStatsHCInPkts")
    {
        cnpdallstatshcinpkts = value;
        cnpdallstatshcinpkts.value_namespace = name_space;
        cnpdallstatshcinpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cnpdAllStatsHCOutPkts")
    {
        cnpdallstatshcoutpkts = value;
        cnpdallstatshcoutpkts.value_namespace = name_space;
        cnpdallstatshcoutpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cnpdAllStatsHCInBytes")
    {
        cnpdallstatshcinbytes = value;
        cnpdallstatshcinbytes.value_namespace = name_space;
        cnpdallstatshcinbytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cnpdAllStatsHCOutBytes")
    {
        cnpdallstatshcoutbytes = value;
        cnpdallstatshcoutbytes.value_namespace = name_space;
        cnpdallstatshcoutbytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cnpdAllStatsInBitRate")
    {
        cnpdallstatsinbitrate = value;
        cnpdallstatsinbitrate.value_namespace = name_space;
        cnpdallstatsinbitrate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cnpdAllStatsOutBitRate")
    {
        cnpdallstatsoutbitrate = value;
        cnpdallstatsoutbitrate.value_namespace = name_space;
        cnpdallstatsoutbitrate.value_namespace_prefix = name_space_prefix;
    }
}

void CISCONBARPROTOCOLDISCOVERYMIB::Cnpdallstatstable::Cnpdallstatsentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "cnpdAllStatsProtocolsIndex")
    {
        cnpdallstatsprotocolsindex.yfilter = yfilter;
    }
    if(value_path == "cnpdAllStatsProtocolName")
    {
        cnpdallstatsprotocolname.yfilter = yfilter;
    }
    if(value_path == "cnpdAllStatsInPkts")
    {
        cnpdallstatsinpkts.yfilter = yfilter;
    }
    if(value_path == "cnpdAllStatsOutPkts")
    {
        cnpdallstatsoutpkts.yfilter = yfilter;
    }
    if(value_path == "cnpdAllStatsInBytes")
    {
        cnpdallstatsinbytes.yfilter = yfilter;
    }
    if(value_path == "cnpdAllStatsOutBytes")
    {
        cnpdallstatsoutbytes.yfilter = yfilter;
    }
    if(value_path == "cnpdAllStatsHCInPkts")
    {
        cnpdallstatshcinpkts.yfilter = yfilter;
    }
    if(value_path == "cnpdAllStatsHCOutPkts")
    {
        cnpdallstatshcoutpkts.yfilter = yfilter;
    }
    if(value_path == "cnpdAllStatsHCInBytes")
    {
        cnpdallstatshcinbytes.yfilter = yfilter;
    }
    if(value_path == "cnpdAllStatsHCOutBytes")
    {
        cnpdallstatshcoutbytes.yfilter = yfilter;
    }
    if(value_path == "cnpdAllStatsInBitRate")
    {
        cnpdallstatsinbitrate.yfilter = yfilter;
    }
    if(value_path == "cnpdAllStatsOutBitRate")
    {
        cnpdallstatsoutbitrate.yfilter = yfilter;
    }
}

bool CISCONBARPROTOCOLDISCOVERYMIB::Cnpdallstatstable::Cnpdallstatsentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "cnpdAllStatsProtocolsIndex" || name == "cnpdAllStatsProtocolName" || name == "cnpdAllStatsInPkts" || name == "cnpdAllStatsOutPkts" || name == "cnpdAllStatsInBytes" || name == "cnpdAllStatsOutBytes" || name == "cnpdAllStatsHCInPkts" || name == "cnpdAllStatsHCOutPkts" || name == "cnpdAllStatsHCInBytes" || name == "cnpdAllStatsHCOutBytes" || name == "cnpdAllStatsInBitRate" || name == "cnpdAllStatsOutBitRate")
        return true;
    return false;
}

CISCONBARPROTOCOLDISCOVERYMIB::Cnpdtopnconfigtable::Cnpdtopnconfigtable()
{

    yang_name = "cnpdTopNConfigTable"; yang_parent_name = "CISCO-NBAR-PROTOCOL-DISCOVERY-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCONBARPROTOCOLDISCOVERYMIB::Cnpdtopnconfigtable::~Cnpdtopnconfigtable()
{
}

bool CISCONBARPROTOCOLDISCOVERYMIB::Cnpdtopnconfigtable::has_data() const
{
    for (std::size_t index=0; index<cnpdtopnconfigentry.size(); index++)
    {
        if(cnpdtopnconfigentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCONBARPROTOCOLDISCOVERYMIB::Cnpdtopnconfigtable::has_operation() const
{
    for (std::size_t index=0; index<cnpdtopnconfigentry.size(); index++)
    {
        if(cnpdtopnconfigentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCONBARPROTOCOLDISCOVERYMIB::Cnpdtopnconfigtable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-NBAR-PROTOCOL-DISCOVERY-MIB:CISCO-NBAR-PROTOCOL-DISCOVERY-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCONBARPROTOCOLDISCOVERYMIB::Cnpdtopnconfigtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cnpdTopNConfigTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCONBARPROTOCOLDISCOVERYMIB::Cnpdtopnconfigtable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCONBARPROTOCOLDISCOVERYMIB::Cnpdtopnconfigtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cnpdTopNConfigEntry")
    {
        for(auto const & c : cnpdtopnconfigentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CISCONBARPROTOCOLDISCOVERYMIB::Cnpdtopnconfigtable::Cnpdtopnconfigentry>();
        c->parent = this;
        cnpdtopnconfigentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCONBARPROTOCOLDISCOVERYMIB::Cnpdtopnconfigtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cnpdtopnconfigentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CISCONBARPROTOCOLDISCOVERYMIB::Cnpdtopnconfigtable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCONBARPROTOCOLDISCOVERYMIB::Cnpdtopnconfigtable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCONBARPROTOCOLDISCOVERYMIB::Cnpdtopnconfigtable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cnpdTopNConfigEntry")
        return true;
    return false;
}

CISCONBARPROTOCOLDISCOVERYMIB::Cnpdtopnconfigtable::Cnpdtopnconfigentry::Cnpdtopnconfigentry()
    :
    cnpdtopnconfigindex{YType::uint32, "cnpdTopNConfigIndex"},
    cnpdtopnconfigifindex{YType::int32, "cnpdTopNConfigIfIndex"},
    cnpdtopnconfigstatsselect{YType::enumeration, "cnpdTopNConfigStatsSelect"},
    cnpdtopnconfigsampletime{YType::uint32, "cnpdTopNConfigSampleTime"},
    cnpdtopnconfigrequestedsize{YType::uint32, "cnpdTopNConfigRequestedSize"},
    cnpdtopnconfiggrantedsize{YType::uint32, "cnpdTopNConfigGrantedSize"},
    cnpdtopnconfigtime{YType::uint32, "cnpdTopNConfigTime"},
    cnpdtopnconfigstatus{YType::enumeration, "cnpdTopNConfigStatus"}
{

    yang_name = "cnpdTopNConfigEntry"; yang_parent_name = "cnpdTopNConfigTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCONBARPROTOCOLDISCOVERYMIB::Cnpdtopnconfigtable::Cnpdtopnconfigentry::~Cnpdtopnconfigentry()
{
}

bool CISCONBARPROTOCOLDISCOVERYMIB::Cnpdtopnconfigtable::Cnpdtopnconfigentry::has_data() const
{
    return cnpdtopnconfigindex.is_set
	|| cnpdtopnconfigifindex.is_set
	|| cnpdtopnconfigstatsselect.is_set
	|| cnpdtopnconfigsampletime.is_set
	|| cnpdtopnconfigrequestedsize.is_set
	|| cnpdtopnconfiggrantedsize.is_set
	|| cnpdtopnconfigtime.is_set
	|| cnpdtopnconfigstatus.is_set;
}

bool CISCONBARPROTOCOLDISCOVERYMIB::Cnpdtopnconfigtable::Cnpdtopnconfigentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cnpdtopnconfigindex.yfilter)
	|| ydk::is_set(cnpdtopnconfigifindex.yfilter)
	|| ydk::is_set(cnpdtopnconfigstatsselect.yfilter)
	|| ydk::is_set(cnpdtopnconfigsampletime.yfilter)
	|| ydk::is_set(cnpdtopnconfigrequestedsize.yfilter)
	|| ydk::is_set(cnpdtopnconfiggrantedsize.yfilter)
	|| ydk::is_set(cnpdtopnconfigtime.yfilter)
	|| ydk::is_set(cnpdtopnconfigstatus.yfilter);
}

std::string CISCONBARPROTOCOLDISCOVERYMIB::Cnpdtopnconfigtable::Cnpdtopnconfigentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-NBAR-PROTOCOL-DISCOVERY-MIB:CISCO-NBAR-PROTOCOL-DISCOVERY-MIB/cnpdTopNConfigTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCONBARPROTOCOLDISCOVERYMIB::Cnpdtopnconfigtable::Cnpdtopnconfigentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cnpdTopNConfigEntry" <<"[cnpdTopNConfigIndex='" <<cnpdtopnconfigindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCONBARPROTOCOLDISCOVERYMIB::Cnpdtopnconfigtable::Cnpdtopnconfigentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cnpdtopnconfigindex.is_set || is_set(cnpdtopnconfigindex.yfilter)) leaf_name_data.push_back(cnpdtopnconfigindex.get_name_leafdata());
    if (cnpdtopnconfigifindex.is_set || is_set(cnpdtopnconfigifindex.yfilter)) leaf_name_data.push_back(cnpdtopnconfigifindex.get_name_leafdata());
    if (cnpdtopnconfigstatsselect.is_set || is_set(cnpdtopnconfigstatsselect.yfilter)) leaf_name_data.push_back(cnpdtopnconfigstatsselect.get_name_leafdata());
    if (cnpdtopnconfigsampletime.is_set || is_set(cnpdtopnconfigsampletime.yfilter)) leaf_name_data.push_back(cnpdtopnconfigsampletime.get_name_leafdata());
    if (cnpdtopnconfigrequestedsize.is_set || is_set(cnpdtopnconfigrequestedsize.yfilter)) leaf_name_data.push_back(cnpdtopnconfigrequestedsize.get_name_leafdata());
    if (cnpdtopnconfiggrantedsize.is_set || is_set(cnpdtopnconfiggrantedsize.yfilter)) leaf_name_data.push_back(cnpdtopnconfiggrantedsize.get_name_leafdata());
    if (cnpdtopnconfigtime.is_set || is_set(cnpdtopnconfigtime.yfilter)) leaf_name_data.push_back(cnpdtopnconfigtime.get_name_leafdata());
    if (cnpdtopnconfigstatus.is_set || is_set(cnpdtopnconfigstatus.yfilter)) leaf_name_data.push_back(cnpdtopnconfigstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCONBARPROTOCOLDISCOVERYMIB::Cnpdtopnconfigtable::Cnpdtopnconfigentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCONBARPROTOCOLDISCOVERYMIB::Cnpdtopnconfigtable::Cnpdtopnconfigentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CISCONBARPROTOCOLDISCOVERYMIB::Cnpdtopnconfigtable::Cnpdtopnconfigentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cnpdTopNConfigIndex")
    {
        cnpdtopnconfigindex = value;
        cnpdtopnconfigindex.value_namespace = name_space;
        cnpdtopnconfigindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cnpdTopNConfigIfIndex")
    {
        cnpdtopnconfigifindex = value;
        cnpdtopnconfigifindex.value_namespace = name_space;
        cnpdtopnconfigifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cnpdTopNConfigStatsSelect")
    {
        cnpdtopnconfigstatsselect = value;
        cnpdtopnconfigstatsselect.value_namespace = name_space;
        cnpdtopnconfigstatsselect.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cnpdTopNConfigSampleTime")
    {
        cnpdtopnconfigsampletime = value;
        cnpdtopnconfigsampletime.value_namespace = name_space;
        cnpdtopnconfigsampletime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cnpdTopNConfigRequestedSize")
    {
        cnpdtopnconfigrequestedsize = value;
        cnpdtopnconfigrequestedsize.value_namespace = name_space;
        cnpdtopnconfigrequestedsize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cnpdTopNConfigGrantedSize")
    {
        cnpdtopnconfiggrantedsize = value;
        cnpdtopnconfiggrantedsize.value_namespace = name_space;
        cnpdtopnconfiggrantedsize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cnpdTopNConfigTime")
    {
        cnpdtopnconfigtime = value;
        cnpdtopnconfigtime.value_namespace = name_space;
        cnpdtopnconfigtime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cnpdTopNConfigStatus")
    {
        cnpdtopnconfigstatus = value;
        cnpdtopnconfigstatus.value_namespace = name_space;
        cnpdtopnconfigstatus.value_namespace_prefix = name_space_prefix;
    }
}

void CISCONBARPROTOCOLDISCOVERYMIB::Cnpdtopnconfigtable::Cnpdtopnconfigentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cnpdTopNConfigIndex")
    {
        cnpdtopnconfigindex.yfilter = yfilter;
    }
    if(value_path == "cnpdTopNConfigIfIndex")
    {
        cnpdtopnconfigifindex.yfilter = yfilter;
    }
    if(value_path == "cnpdTopNConfigStatsSelect")
    {
        cnpdtopnconfigstatsselect.yfilter = yfilter;
    }
    if(value_path == "cnpdTopNConfigSampleTime")
    {
        cnpdtopnconfigsampletime.yfilter = yfilter;
    }
    if(value_path == "cnpdTopNConfigRequestedSize")
    {
        cnpdtopnconfigrequestedsize.yfilter = yfilter;
    }
    if(value_path == "cnpdTopNConfigGrantedSize")
    {
        cnpdtopnconfiggrantedsize.yfilter = yfilter;
    }
    if(value_path == "cnpdTopNConfigTime")
    {
        cnpdtopnconfigtime.yfilter = yfilter;
    }
    if(value_path == "cnpdTopNConfigStatus")
    {
        cnpdtopnconfigstatus.yfilter = yfilter;
    }
}

bool CISCONBARPROTOCOLDISCOVERYMIB::Cnpdtopnconfigtable::Cnpdtopnconfigentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cnpdTopNConfigIndex" || name == "cnpdTopNConfigIfIndex" || name == "cnpdTopNConfigStatsSelect" || name == "cnpdTopNConfigSampleTime" || name == "cnpdTopNConfigRequestedSize" || name == "cnpdTopNConfigGrantedSize" || name == "cnpdTopNConfigTime" || name == "cnpdTopNConfigStatus")
        return true;
    return false;
}

CISCONBARPROTOCOLDISCOVERYMIB::Cnpdtopnstatstable::Cnpdtopnstatstable()
{

    yang_name = "cnpdTopNStatsTable"; yang_parent_name = "CISCO-NBAR-PROTOCOL-DISCOVERY-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCONBARPROTOCOLDISCOVERYMIB::Cnpdtopnstatstable::~Cnpdtopnstatstable()
{
}

bool CISCONBARPROTOCOLDISCOVERYMIB::Cnpdtopnstatstable::has_data() const
{
    for (std::size_t index=0; index<cnpdtopnstatsentry.size(); index++)
    {
        if(cnpdtopnstatsentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCONBARPROTOCOLDISCOVERYMIB::Cnpdtopnstatstable::has_operation() const
{
    for (std::size_t index=0; index<cnpdtopnstatsentry.size(); index++)
    {
        if(cnpdtopnstatsentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCONBARPROTOCOLDISCOVERYMIB::Cnpdtopnstatstable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-NBAR-PROTOCOL-DISCOVERY-MIB:CISCO-NBAR-PROTOCOL-DISCOVERY-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCONBARPROTOCOLDISCOVERYMIB::Cnpdtopnstatstable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cnpdTopNStatsTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCONBARPROTOCOLDISCOVERYMIB::Cnpdtopnstatstable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCONBARPROTOCOLDISCOVERYMIB::Cnpdtopnstatstable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cnpdTopNStatsEntry")
    {
        for(auto const & c : cnpdtopnstatsentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CISCONBARPROTOCOLDISCOVERYMIB::Cnpdtopnstatstable::Cnpdtopnstatsentry>();
        c->parent = this;
        cnpdtopnstatsentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCONBARPROTOCOLDISCOVERYMIB::Cnpdtopnstatstable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cnpdtopnstatsentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CISCONBARPROTOCOLDISCOVERYMIB::Cnpdtopnstatstable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCONBARPROTOCOLDISCOVERYMIB::Cnpdtopnstatstable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCONBARPROTOCOLDISCOVERYMIB::Cnpdtopnstatstable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cnpdTopNStatsEntry")
        return true;
    return false;
}

CISCONBARPROTOCOLDISCOVERYMIB::Cnpdtopnstatstable::Cnpdtopnstatsentry::Cnpdtopnstatsentry()
    :
    cnpdtopnconfigindex{YType::str, "cnpdTopNConfigIndex"},
    cnpdtopnstatsindex{YType::uint32, "cnpdTopNStatsIndex"},
    cnpdtopnstatsprotocolname{YType::str, "cnpdTopNStatsProtocolName"},
    cnpdtopnstatsrate{YType::uint32, "cnpdTopNStatsRate"},
    cnpdtopnstatshcrate{YType::uint64, "cnpdTopNStatsHCRate"}
{

    yang_name = "cnpdTopNStatsEntry"; yang_parent_name = "cnpdTopNStatsTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCONBARPROTOCOLDISCOVERYMIB::Cnpdtopnstatstable::Cnpdtopnstatsentry::~Cnpdtopnstatsentry()
{
}

bool CISCONBARPROTOCOLDISCOVERYMIB::Cnpdtopnstatstable::Cnpdtopnstatsentry::has_data() const
{
    return cnpdtopnconfigindex.is_set
	|| cnpdtopnstatsindex.is_set
	|| cnpdtopnstatsprotocolname.is_set
	|| cnpdtopnstatsrate.is_set
	|| cnpdtopnstatshcrate.is_set;
}

bool CISCONBARPROTOCOLDISCOVERYMIB::Cnpdtopnstatstable::Cnpdtopnstatsentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cnpdtopnconfigindex.yfilter)
	|| ydk::is_set(cnpdtopnstatsindex.yfilter)
	|| ydk::is_set(cnpdtopnstatsprotocolname.yfilter)
	|| ydk::is_set(cnpdtopnstatsrate.yfilter)
	|| ydk::is_set(cnpdtopnstatshcrate.yfilter);
}

std::string CISCONBARPROTOCOLDISCOVERYMIB::Cnpdtopnstatstable::Cnpdtopnstatsentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-NBAR-PROTOCOL-DISCOVERY-MIB:CISCO-NBAR-PROTOCOL-DISCOVERY-MIB/cnpdTopNStatsTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCONBARPROTOCOLDISCOVERYMIB::Cnpdtopnstatstable::Cnpdtopnstatsentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cnpdTopNStatsEntry" <<"[cnpdTopNConfigIndex='" <<cnpdtopnconfigindex <<"']" <<"[cnpdTopNStatsIndex='" <<cnpdtopnstatsindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCONBARPROTOCOLDISCOVERYMIB::Cnpdtopnstatstable::Cnpdtopnstatsentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cnpdtopnconfigindex.is_set || is_set(cnpdtopnconfigindex.yfilter)) leaf_name_data.push_back(cnpdtopnconfigindex.get_name_leafdata());
    if (cnpdtopnstatsindex.is_set || is_set(cnpdtopnstatsindex.yfilter)) leaf_name_data.push_back(cnpdtopnstatsindex.get_name_leafdata());
    if (cnpdtopnstatsprotocolname.is_set || is_set(cnpdtopnstatsprotocolname.yfilter)) leaf_name_data.push_back(cnpdtopnstatsprotocolname.get_name_leafdata());
    if (cnpdtopnstatsrate.is_set || is_set(cnpdtopnstatsrate.yfilter)) leaf_name_data.push_back(cnpdtopnstatsrate.get_name_leafdata());
    if (cnpdtopnstatshcrate.is_set || is_set(cnpdtopnstatshcrate.yfilter)) leaf_name_data.push_back(cnpdtopnstatshcrate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCONBARPROTOCOLDISCOVERYMIB::Cnpdtopnstatstable::Cnpdtopnstatsentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCONBARPROTOCOLDISCOVERYMIB::Cnpdtopnstatstable::Cnpdtopnstatsentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CISCONBARPROTOCOLDISCOVERYMIB::Cnpdtopnstatstable::Cnpdtopnstatsentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cnpdTopNConfigIndex")
    {
        cnpdtopnconfigindex = value;
        cnpdtopnconfigindex.value_namespace = name_space;
        cnpdtopnconfigindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cnpdTopNStatsIndex")
    {
        cnpdtopnstatsindex = value;
        cnpdtopnstatsindex.value_namespace = name_space;
        cnpdtopnstatsindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cnpdTopNStatsProtocolName")
    {
        cnpdtopnstatsprotocolname = value;
        cnpdtopnstatsprotocolname.value_namespace = name_space;
        cnpdtopnstatsprotocolname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cnpdTopNStatsRate")
    {
        cnpdtopnstatsrate = value;
        cnpdtopnstatsrate.value_namespace = name_space;
        cnpdtopnstatsrate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cnpdTopNStatsHCRate")
    {
        cnpdtopnstatshcrate = value;
        cnpdtopnstatshcrate.value_namespace = name_space;
        cnpdtopnstatshcrate.value_namespace_prefix = name_space_prefix;
    }
}

void CISCONBARPROTOCOLDISCOVERYMIB::Cnpdtopnstatstable::Cnpdtopnstatsentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cnpdTopNConfigIndex")
    {
        cnpdtopnconfigindex.yfilter = yfilter;
    }
    if(value_path == "cnpdTopNStatsIndex")
    {
        cnpdtopnstatsindex.yfilter = yfilter;
    }
    if(value_path == "cnpdTopNStatsProtocolName")
    {
        cnpdtopnstatsprotocolname.yfilter = yfilter;
    }
    if(value_path == "cnpdTopNStatsRate")
    {
        cnpdtopnstatsrate.yfilter = yfilter;
    }
    if(value_path == "cnpdTopNStatsHCRate")
    {
        cnpdtopnstatshcrate.yfilter = yfilter;
    }
}

bool CISCONBARPROTOCOLDISCOVERYMIB::Cnpdtopnstatstable::Cnpdtopnstatsentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cnpdTopNConfigIndex" || name == "cnpdTopNStatsIndex" || name == "cnpdTopNStatsProtocolName" || name == "cnpdTopNStatsRate" || name == "cnpdTopNStatsHCRate")
        return true;
    return false;
}

CISCONBARPROTOCOLDISCOVERYMIB::Cnpdthresholdconfigtable::Cnpdthresholdconfigtable()
{

    yang_name = "cnpdThresholdConfigTable"; yang_parent_name = "CISCO-NBAR-PROTOCOL-DISCOVERY-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCONBARPROTOCOLDISCOVERYMIB::Cnpdthresholdconfigtable::~Cnpdthresholdconfigtable()
{
}

bool CISCONBARPROTOCOLDISCOVERYMIB::Cnpdthresholdconfigtable::has_data() const
{
    for (std::size_t index=0; index<cnpdthresholdconfigentry.size(); index++)
    {
        if(cnpdthresholdconfigentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCONBARPROTOCOLDISCOVERYMIB::Cnpdthresholdconfigtable::has_operation() const
{
    for (std::size_t index=0; index<cnpdthresholdconfigentry.size(); index++)
    {
        if(cnpdthresholdconfigentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCONBARPROTOCOLDISCOVERYMIB::Cnpdthresholdconfigtable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-NBAR-PROTOCOL-DISCOVERY-MIB:CISCO-NBAR-PROTOCOL-DISCOVERY-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCONBARPROTOCOLDISCOVERYMIB::Cnpdthresholdconfigtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cnpdThresholdConfigTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCONBARPROTOCOLDISCOVERYMIB::Cnpdthresholdconfigtable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCONBARPROTOCOLDISCOVERYMIB::Cnpdthresholdconfigtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cnpdThresholdConfigEntry")
    {
        for(auto const & c : cnpdthresholdconfigentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CISCONBARPROTOCOLDISCOVERYMIB::Cnpdthresholdconfigtable::Cnpdthresholdconfigentry>();
        c->parent = this;
        cnpdthresholdconfigentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCONBARPROTOCOLDISCOVERYMIB::Cnpdthresholdconfigtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cnpdthresholdconfigentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CISCONBARPROTOCOLDISCOVERYMIB::Cnpdthresholdconfigtable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCONBARPROTOCOLDISCOVERYMIB::Cnpdthresholdconfigtable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCONBARPROTOCOLDISCOVERYMIB::Cnpdthresholdconfigtable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cnpdThresholdConfigEntry")
        return true;
    return false;
}

CISCONBARPROTOCOLDISCOVERYMIB::Cnpdthresholdconfigtable::Cnpdthresholdconfigentry::Cnpdthresholdconfigentry()
    :
    cnpdthresholdconfigindex{YType::uint32, "cnpdThresholdConfigIndex"},
    cnpdthresholdconfigifindex{YType::int32, "cnpdThresholdConfigIfIndex"},
    cnpdthresholdconfiginterval{YType::uint32, "cnpdThresholdConfigInterval"},
    cnpdthresholdconfigsampletype{YType::enumeration, "cnpdThresholdConfigSampleType"},
    cnpdthresholdconfigprotocol{YType::uint32, "cnpdThresholdConfigProtocol"},
    cnpdthresholdconfigprotocolany{YType::boolean, "cnpdThresholdConfigProtocolAny"},
    cnpdthresholdconfigstatsselect{YType::enumeration, "cnpdThresholdConfigStatsSelect"},
    cnpdthresholdconfigstartup{YType::enumeration, "cnpdThresholdConfigStartup"},
    cnpdthresholdconfigrising{YType::uint32, "cnpdThresholdConfigRising"},
    cnpdthresholdconfigfalling{YType::uint32, "cnpdThresholdConfigFalling"},
    cnpdthresholdconfigstatus{YType::enumeration, "cnpdThresholdConfigStatus"}
{

    yang_name = "cnpdThresholdConfigEntry"; yang_parent_name = "cnpdThresholdConfigTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCONBARPROTOCOLDISCOVERYMIB::Cnpdthresholdconfigtable::Cnpdthresholdconfigentry::~Cnpdthresholdconfigentry()
{
}

bool CISCONBARPROTOCOLDISCOVERYMIB::Cnpdthresholdconfigtable::Cnpdthresholdconfigentry::has_data() const
{
    return cnpdthresholdconfigindex.is_set
	|| cnpdthresholdconfigifindex.is_set
	|| cnpdthresholdconfiginterval.is_set
	|| cnpdthresholdconfigsampletype.is_set
	|| cnpdthresholdconfigprotocol.is_set
	|| cnpdthresholdconfigprotocolany.is_set
	|| cnpdthresholdconfigstatsselect.is_set
	|| cnpdthresholdconfigstartup.is_set
	|| cnpdthresholdconfigrising.is_set
	|| cnpdthresholdconfigfalling.is_set
	|| cnpdthresholdconfigstatus.is_set;
}

bool CISCONBARPROTOCOLDISCOVERYMIB::Cnpdthresholdconfigtable::Cnpdthresholdconfigentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cnpdthresholdconfigindex.yfilter)
	|| ydk::is_set(cnpdthresholdconfigifindex.yfilter)
	|| ydk::is_set(cnpdthresholdconfiginterval.yfilter)
	|| ydk::is_set(cnpdthresholdconfigsampletype.yfilter)
	|| ydk::is_set(cnpdthresholdconfigprotocol.yfilter)
	|| ydk::is_set(cnpdthresholdconfigprotocolany.yfilter)
	|| ydk::is_set(cnpdthresholdconfigstatsselect.yfilter)
	|| ydk::is_set(cnpdthresholdconfigstartup.yfilter)
	|| ydk::is_set(cnpdthresholdconfigrising.yfilter)
	|| ydk::is_set(cnpdthresholdconfigfalling.yfilter)
	|| ydk::is_set(cnpdthresholdconfigstatus.yfilter);
}

std::string CISCONBARPROTOCOLDISCOVERYMIB::Cnpdthresholdconfigtable::Cnpdthresholdconfigentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-NBAR-PROTOCOL-DISCOVERY-MIB:CISCO-NBAR-PROTOCOL-DISCOVERY-MIB/cnpdThresholdConfigTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCONBARPROTOCOLDISCOVERYMIB::Cnpdthresholdconfigtable::Cnpdthresholdconfigentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cnpdThresholdConfigEntry" <<"[cnpdThresholdConfigIndex='" <<cnpdthresholdconfigindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCONBARPROTOCOLDISCOVERYMIB::Cnpdthresholdconfigtable::Cnpdthresholdconfigentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cnpdthresholdconfigindex.is_set || is_set(cnpdthresholdconfigindex.yfilter)) leaf_name_data.push_back(cnpdthresholdconfigindex.get_name_leafdata());
    if (cnpdthresholdconfigifindex.is_set || is_set(cnpdthresholdconfigifindex.yfilter)) leaf_name_data.push_back(cnpdthresholdconfigifindex.get_name_leafdata());
    if (cnpdthresholdconfiginterval.is_set || is_set(cnpdthresholdconfiginterval.yfilter)) leaf_name_data.push_back(cnpdthresholdconfiginterval.get_name_leafdata());
    if (cnpdthresholdconfigsampletype.is_set || is_set(cnpdthresholdconfigsampletype.yfilter)) leaf_name_data.push_back(cnpdthresholdconfigsampletype.get_name_leafdata());
    if (cnpdthresholdconfigprotocol.is_set || is_set(cnpdthresholdconfigprotocol.yfilter)) leaf_name_data.push_back(cnpdthresholdconfigprotocol.get_name_leafdata());
    if (cnpdthresholdconfigprotocolany.is_set || is_set(cnpdthresholdconfigprotocolany.yfilter)) leaf_name_data.push_back(cnpdthresholdconfigprotocolany.get_name_leafdata());
    if (cnpdthresholdconfigstatsselect.is_set || is_set(cnpdthresholdconfigstatsselect.yfilter)) leaf_name_data.push_back(cnpdthresholdconfigstatsselect.get_name_leafdata());
    if (cnpdthresholdconfigstartup.is_set || is_set(cnpdthresholdconfigstartup.yfilter)) leaf_name_data.push_back(cnpdthresholdconfigstartup.get_name_leafdata());
    if (cnpdthresholdconfigrising.is_set || is_set(cnpdthresholdconfigrising.yfilter)) leaf_name_data.push_back(cnpdthresholdconfigrising.get_name_leafdata());
    if (cnpdthresholdconfigfalling.is_set || is_set(cnpdthresholdconfigfalling.yfilter)) leaf_name_data.push_back(cnpdthresholdconfigfalling.get_name_leafdata());
    if (cnpdthresholdconfigstatus.is_set || is_set(cnpdthresholdconfigstatus.yfilter)) leaf_name_data.push_back(cnpdthresholdconfigstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCONBARPROTOCOLDISCOVERYMIB::Cnpdthresholdconfigtable::Cnpdthresholdconfigentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCONBARPROTOCOLDISCOVERYMIB::Cnpdthresholdconfigtable::Cnpdthresholdconfigentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CISCONBARPROTOCOLDISCOVERYMIB::Cnpdthresholdconfigtable::Cnpdthresholdconfigentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cnpdThresholdConfigIndex")
    {
        cnpdthresholdconfigindex = value;
        cnpdthresholdconfigindex.value_namespace = name_space;
        cnpdthresholdconfigindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cnpdThresholdConfigIfIndex")
    {
        cnpdthresholdconfigifindex = value;
        cnpdthresholdconfigifindex.value_namespace = name_space;
        cnpdthresholdconfigifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cnpdThresholdConfigInterval")
    {
        cnpdthresholdconfiginterval = value;
        cnpdthresholdconfiginterval.value_namespace = name_space;
        cnpdthresholdconfiginterval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cnpdThresholdConfigSampleType")
    {
        cnpdthresholdconfigsampletype = value;
        cnpdthresholdconfigsampletype.value_namespace = name_space;
        cnpdthresholdconfigsampletype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cnpdThresholdConfigProtocol")
    {
        cnpdthresholdconfigprotocol = value;
        cnpdthresholdconfigprotocol.value_namespace = name_space;
        cnpdthresholdconfigprotocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cnpdThresholdConfigProtocolAny")
    {
        cnpdthresholdconfigprotocolany = value;
        cnpdthresholdconfigprotocolany.value_namespace = name_space;
        cnpdthresholdconfigprotocolany.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cnpdThresholdConfigStatsSelect")
    {
        cnpdthresholdconfigstatsselect = value;
        cnpdthresholdconfigstatsselect.value_namespace = name_space;
        cnpdthresholdconfigstatsselect.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cnpdThresholdConfigStartup")
    {
        cnpdthresholdconfigstartup = value;
        cnpdthresholdconfigstartup.value_namespace = name_space;
        cnpdthresholdconfigstartup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cnpdThresholdConfigRising")
    {
        cnpdthresholdconfigrising = value;
        cnpdthresholdconfigrising.value_namespace = name_space;
        cnpdthresholdconfigrising.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cnpdThresholdConfigFalling")
    {
        cnpdthresholdconfigfalling = value;
        cnpdthresholdconfigfalling.value_namespace = name_space;
        cnpdthresholdconfigfalling.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cnpdThresholdConfigStatus")
    {
        cnpdthresholdconfigstatus = value;
        cnpdthresholdconfigstatus.value_namespace = name_space;
        cnpdthresholdconfigstatus.value_namespace_prefix = name_space_prefix;
    }
}

void CISCONBARPROTOCOLDISCOVERYMIB::Cnpdthresholdconfigtable::Cnpdthresholdconfigentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cnpdThresholdConfigIndex")
    {
        cnpdthresholdconfigindex.yfilter = yfilter;
    }
    if(value_path == "cnpdThresholdConfigIfIndex")
    {
        cnpdthresholdconfigifindex.yfilter = yfilter;
    }
    if(value_path == "cnpdThresholdConfigInterval")
    {
        cnpdthresholdconfiginterval.yfilter = yfilter;
    }
    if(value_path == "cnpdThresholdConfigSampleType")
    {
        cnpdthresholdconfigsampletype.yfilter = yfilter;
    }
    if(value_path == "cnpdThresholdConfigProtocol")
    {
        cnpdthresholdconfigprotocol.yfilter = yfilter;
    }
    if(value_path == "cnpdThresholdConfigProtocolAny")
    {
        cnpdthresholdconfigprotocolany.yfilter = yfilter;
    }
    if(value_path == "cnpdThresholdConfigStatsSelect")
    {
        cnpdthresholdconfigstatsselect.yfilter = yfilter;
    }
    if(value_path == "cnpdThresholdConfigStartup")
    {
        cnpdthresholdconfigstartup.yfilter = yfilter;
    }
    if(value_path == "cnpdThresholdConfigRising")
    {
        cnpdthresholdconfigrising.yfilter = yfilter;
    }
    if(value_path == "cnpdThresholdConfigFalling")
    {
        cnpdthresholdconfigfalling.yfilter = yfilter;
    }
    if(value_path == "cnpdThresholdConfigStatus")
    {
        cnpdthresholdconfigstatus.yfilter = yfilter;
    }
}

bool CISCONBARPROTOCOLDISCOVERYMIB::Cnpdthresholdconfigtable::Cnpdthresholdconfigentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cnpdThresholdConfigIndex" || name == "cnpdThresholdConfigIfIndex" || name == "cnpdThresholdConfigInterval" || name == "cnpdThresholdConfigSampleType" || name == "cnpdThresholdConfigProtocol" || name == "cnpdThresholdConfigProtocolAny" || name == "cnpdThresholdConfigStatsSelect" || name == "cnpdThresholdConfigStartup" || name == "cnpdThresholdConfigRising" || name == "cnpdThresholdConfigFalling" || name == "cnpdThresholdConfigStatus")
        return true;
    return false;
}

CISCONBARPROTOCOLDISCOVERYMIB::Cnpdthresholdhistorytable::Cnpdthresholdhistorytable()
{

    yang_name = "cnpdThresholdHistoryTable"; yang_parent_name = "CISCO-NBAR-PROTOCOL-DISCOVERY-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCONBARPROTOCOLDISCOVERYMIB::Cnpdthresholdhistorytable::~Cnpdthresholdhistorytable()
{
}

bool CISCONBARPROTOCOLDISCOVERYMIB::Cnpdthresholdhistorytable::has_data() const
{
    for (std::size_t index=0; index<cnpdthresholdhistoryentry.size(); index++)
    {
        if(cnpdthresholdhistoryentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCONBARPROTOCOLDISCOVERYMIB::Cnpdthresholdhistorytable::has_operation() const
{
    for (std::size_t index=0; index<cnpdthresholdhistoryentry.size(); index++)
    {
        if(cnpdthresholdhistoryentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCONBARPROTOCOLDISCOVERYMIB::Cnpdthresholdhistorytable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-NBAR-PROTOCOL-DISCOVERY-MIB:CISCO-NBAR-PROTOCOL-DISCOVERY-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCONBARPROTOCOLDISCOVERYMIB::Cnpdthresholdhistorytable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cnpdThresholdHistoryTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCONBARPROTOCOLDISCOVERYMIB::Cnpdthresholdhistorytable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCONBARPROTOCOLDISCOVERYMIB::Cnpdthresholdhistorytable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cnpdThresholdHistoryEntry")
    {
        for(auto const & c : cnpdthresholdhistoryentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CISCONBARPROTOCOLDISCOVERYMIB::Cnpdthresholdhistorytable::Cnpdthresholdhistoryentry>();
        c->parent = this;
        cnpdthresholdhistoryentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCONBARPROTOCOLDISCOVERYMIB::Cnpdthresholdhistorytable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cnpdthresholdhistoryentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CISCONBARPROTOCOLDISCOVERYMIB::Cnpdthresholdhistorytable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCONBARPROTOCOLDISCOVERYMIB::Cnpdthresholdhistorytable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCONBARPROTOCOLDISCOVERYMIB::Cnpdthresholdhistorytable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cnpdThresholdHistoryEntry")
        return true;
    return false;
}

CISCONBARPROTOCOLDISCOVERYMIB::Cnpdthresholdhistorytable::Cnpdthresholdhistoryentry::Cnpdthresholdhistoryentry()
    :
    cnpdthresholdhistoryindex{YType::uint32, "cnpdThresholdHistoryIndex"},
    cnpdthresholdhistoryconfigindex{YType::uint32, "cnpdThresholdHistoryConfigIndex"},
    cnpdthresholdhistoryvalue{YType::uint32, "cnpdThresholdHistoryValue"},
    cnpdthresholdhistorytype{YType::enumeration, "cnpdThresholdHistoryType"},
    cnpdthresholdhistorytime{YType::uint32, "cnpdThresholdHistoryTime"},
    cnpdthresholdhistoryprotocol{YType::uint32, "cnpdThresholdHistoryProtocol"},
    cnpdthresholdhistorystatsselect{YType::enumeration, "cnpdThresholdHistoryStatsSelect"}
{

    yang_name = "cnpdThresholdHistoryEntry"; yang_parent_name = "cnpdThresholdHistoryTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCONBARPROTOCOLDISCOVERYMIB::Cnpdthresholdhistorytable::Cnpdthresholdhistoryentry::~Cnpdthresholdhistoryentry()
{
}

bool CISCONBARPROTOCOLDISCOVERYMIB::Cnpdthresholdhistorytable::Cnpdthresholdhistoryentry::has_data() const
{
    return cnpdthresholdhistoryindex.is_set
	|| cnpdthresholdhistoryconfigindex.is_set
	|| cnpdthresholdhistoryvalue.is_set
	|| cnpdthresholdhistorytype.is_set
	|| cnpdthresholdhistorytime.is_set
	|| cnpdthresholdhistoryprotocol.is_set
	|| cnpdthresholdhistorystatsselect.is_set;
}

bool CISCONBARPROTOCOLDISCOVERYMIB::Cnpdthresholdhistorytable::Cnpdthresholdhistoryentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cnpdthresholdhistoryindex.yfilter)
	|| ydk::is_set(cnpdthresholdhistoryconfigindex.yfilter)
	|| ydk::is_set(cnpdthresholdhistoryvalue.yfilter)
	|| ydk::is_set(cnpdthresholdhistorytype.yfilter)
	|| ydk::is_set(cnpdthresholdhistorytime.yfilter)
	|| ydk::is_set(cnpdthresholdhistoryprotocol.yfilter)
	|| ydk::is_set(cnpdthresholdhistorystatsselect.yfilter);
}

std::string CISCONBARPROTOCOLDISCOVERYMIB::Cnpdthresholdhistorytable::Cnpdthresholdhistoryentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-NBAR-PROTOCOL-DISCOVERY-MIB:CISCO-NBAR-PROTOCOL-DISCOVERY-MIB/cnpdThresholdHistoryTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCONBARPROTOCOLDISCOVERYMIB::Cnpdthresholdhistorytable::Cnpdthresholdhistoryentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cnpdThresholdHistoryEntry" <<"[cnpdThresholdHistoryIndex='" <<cnpdthresholdhistoryindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCONBARPROTOCOLDISCOVERYMIB::Cnpdthresholdhistorytable::Cnpdthresholdhistoryentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cnpdthresholdhistoryindex.is_set || is_set(cnpdthresholdhistoryindex.yfilter)) leaf_name_data.push_back(cnpdthresholdhistoryindex.get_name_leafdata());
    if (cnpdthresholdhistoryconfigindex.is_set || is_set(cnpdthresholdhistoryconfigindex.yfilter)) leaf_name_data.push_back(cnpdthresholdhistoryconfigindex.get_name_leafdata());
    if (cnpdthresholdhistoryvalue.is_set || is_set(cnpdthresholdhistoryvalue.yfilter)) leaf_name_data.push_back(cnpdthresholdhistoryvalue.get_name_leafdata());
    if (cnpdthresholdhistorytype.is_set || is_set(cnpdthresholdhistorytype.yfilter)) leaf_name_data.push_back(cnpdthresholdhistorytype.get_name_leafdata());
    if (cnpdthresholdhistorytime.is_set || is_set(cnpdthresholdhistorytime.yfilter)) leaf_name_data.push_back(cnpdthresholdhistorytime.get_name_leafdata());
    if (cnpdthresholdhistoryprotocol.is_set || is_set(cnpdthresholdhistoryprotocol.yfilter)) leaf_name_data.push_back(cnpdthresholdhistoryprotocol.get_name_leafdata());
    if (cnpdthresholdhistorystatsselect.is_set || is_set(cnpdthresholdhistorystatsselect.yfilter)) leaf_name_data.push_back(cnpdthresholdhistorystatsselect.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCONBARPROTOCOLDISCOVERYMIB::Cnpdthresholdhistorytable::Cnpdthresholdhistoryentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCONBARPROTOCOLDISCOVERYMIB::Cnpdthresholdhistorytable::Cnpdthresholdhistoryentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CISCONBARPROTOCOLDISCOVERYMIB::Cnpdthresholdhistorytable::Cnpdthresholdhistoryentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cnpdThresholdHistoryIndex")
    {
        cnpdthresholdhistoryindex = value;
        cnpdthresholdhistoryindex.value_namespace = name_space;
        cnpdthresholdhistoryindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cnpdThresholdHistoryConfigIndex")
    {
        cnpdthresholdhistoryconfigindex = value;
        cnpdthresholdhistoryconfigindex.value_namespace = name_space;
        cnpdthresholdhistoryconfigindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cnpdThresholdHistoryValue")
    {
        cnpdthresholdhistoryvalue = value;
        cnpdthresholdhistoryvalue.value_namespace = name_space;
        cnpdthresholdhistoryvalue.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cnpdThresholdHistoryType")
    {
        cnpdthresholdhistorytype = value;
        cnpdthresholdhistorytype.value_namespace = name_space;
        cnpdthresholdhistorytype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cnpdThresholdHistoryTime")
    {
        cnpdthresholdhistorytime = value;
        cnpdthresholdhistorytime.value_namespace = name_space;
        cnpdthresholdhistorytime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cnpdThresholdHistoryProtocol")
    {
        cnpdthresholdhistoryprotocol = value;
        cnpdthresholdhistoryprotocol.value_namespace = name_space;
        cnpdthresholdhistoryprotocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cnpdThresholdHistoryStatsSelect")
    {
        cnpdthresholdhistorystatsselect = value;
        cnpdthresholdhistorystatsselect.value_namespace = name_space;
        cnpdthresholdhistorystatsselect.value_namespace_prefix = name_space_prefix;
    }
}

void CISCONBARPROTOCOLDISCOVERYMIB::Cnpdthresholdhistorytable::Cnpdthresholdhistoryentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cnpdThresholdHistoryIndex")
    {
        cnpdthresholdhistoryindex.yfilter = yfilter;
    }
    if(value_path == "cnpdThresholdHistoryConfigIndex")
    {
        cnpdthresholdhistoryconfigindex.yfilter = yfilter;
    }
    if(value_path == "cnpdThresholdHistoryValue")
    {
        cnpdthresholdhistoryvalue.yfilter = yfilter;
    }
    if(value_path == "cnpdThresholdHistoryType")
    {
        cnpdthresholdhistorytype.yfilter = yfilter;
    }
    if(value_path == "cnpdThresholdHistoryTime")
    {
        cnpdthresholdhistorytime.yfilter = yfilter;
    }
    if(value_path == "cnpdThresholdHistoryProtocol")
    {
        cnpdthresholdhistoryprotocol.yfilter = yfilter;
    }
    if(value_path == "cnpdThresholdHistoryStatsSelect")
    {
        cnpdthresholdhistorystatsselect.yfilter = yfilter;
    }
}

bool CISCONBARPROTOCOLDISCOVERYMIB::Cnpdthresholdhistorytable::Cnpdthresholdhistoryentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cnpdThresholdHistoryIndex" || name == "cnpdThresholdHistoryConfigIndex" || name == "cnpdThresholdHistoryValue" || name == "cnpdThresholdHistoryType" || name == "cnpdThresholdHistoryTime" || name == "cnpdThresholdHistoryProtocol" || name == "cnpdThresholdHistoryStatsSelect")
        return true;
    return false;
}

CISCONBARPROTOCOLDISCOVERYMIB::Cnpdsupportedprotocolstable::Cnpdsupportedprotocolstable()
{

    yang_name = "cnpdSupportedProtocolsTable"; yang_parent_name = "CISCO-NBAR-PROTOCOL-DISCOVERY-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCONBARPROTOCOLDISCOVERYMIB::Cnpdsupportedprotocolstable::~Cnpdsupportedprotocolstable()
{
}

bool CISCONBARPROTOCOLDISCOVERYMIB::Cnpdsupportedprotocolstable::has_data() const
{
    for (std::size_t index=0; index<cnpdsupportedprotocolsentry.size(); index++)
    {
        if(cnpdsupportedprotocolsentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCONBARPROTOCOLDISCOVERYMIB::Cnpdsupportedprotocolstable::has_operation() const
{
    for (std::size_t index=0; index<cnpdsupportedprotocolsentry.size(); index++)
    {
        if(cnpdsupportedprotocolsentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCONBARPROTOCOLDISCOVERYMIB::Cnpdsupportedprotocolstable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-NBAR-PROTOCOL-DISCOVERY-MIB:CISCO-NBAR-PROTOCOL-DISCOVERY-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCONBARPROTOCOLDISCOVERYMIB::Cnpdsupportedprotocolstable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cnpdSupportedProtocolsTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCONBARPROTOCOLDISCOVERYMIB::Cnpdsupportedprotocolstable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCONBARPROTOCOLDISCOVERYMIB::Cnpdsupportedprotocolstable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cnpdSupportedProtocolsEntry")
    {
        for(auto const & c : cnpdsupportedprotocolsentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CISCONBARPROTOCOLDISCOVERYMIB::Cnpdsupportedprotocolstable::Cnpdsupportedprotocolsentry>();
        c->parent = this;
        cnpdsupportedprotocolsentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCONBARPROTOCOLDISCOVERYMIB::Cnpdsupportedprotocolstable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cnpdsupportedprotocolsentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CISCONBARPROTOCOLDISCOVERYMIB::Cnpdsupportedprotocolstable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCONBARPROTOCOLDISCOVERYMIB::Cnpdsupportedprotocolstable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCONBARPROTOCOLDISCOVERYMIB::Cnpdsupportedprotocolstable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cnpdSupportedProtocolsEntry")
        return true;
    return false;
}

CISCONBARPROTOCOLDISCOVERYMIB::Cnpdsupportedprotocolstable::Cnpdsupportedprotocolsentry::Cnpdsupportedprotocolsentry()
    :
    cnpdsupportedprotocolsindex{YType::uint32, "cnpdSupportedProtocolsIndex"},
    cnpdsupportedprotocolsname{YType::str, "cnpdSupportedProtocolsName"}
{

    yang_name = "cnpdSupportedProtocolsEntry"; yang_parent_name = "cnpdSupportedProtocolsTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCONBARPROTOCOLDISCOVERYMIB::Cnpdsupportedprotocolstable::Cnpdsupportedprotocolsentry::~Cnpdsupportedprotocolsentry()
{
}

bool CISCONBARPROTOCOLDISCOVERYMIB::Cnpdsupportedprotocolstable::Cnpdsupportedprotocolsentry::has_data() const
{
    return cnpdsupportedprotocolsindex.is_set
	|| cnpdsupportedprotocolsname.is_set;
}

bool CISCONBARPROTOCOLDISCOVERYMIB::Cnpdsupportedprotocolstable::Cnpdsupportedprotocolsentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cnpdsupportedprotocolsindex.yfilter)
	|| ydk::is_set(cnpdsupportedprotocolsname.yfilter);
}

std::string CISCONBARPROTOCOLDISCOVERYMIB::Cnpdsupportedprotocolstable::Cnpdsupportedprotocolsentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-NBAR-PROTOCOL-DISCOVERY-MIB:CISCO-NBAR-PROTOCOL-DISCOVERY-MIB/cnpdSupportedProtocolsTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCONBARPROTOCOLDISCOVERYMIB::Cnpdsupportedprotocolstable::Cnpdsupportedprotocolsentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cnpdSupportedProtocolsEntry" <<"[cnpdSupportedProtocolsIndex='" <<cnpdsupportedprotocolsindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCONBARPROTOCOLDISCOVERYMIB::Cnpdsupportedprotocolstable::Cnpdsupportedprotocolsentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cnpdsupportedprotocolsindex.is_set || is_set(cnpdsupportedprotocolsindex.yfilter)) leaf_name_data.push_back(cnpdsupportedprotocolsindex.get_name_leafdata());
    if (cnpdsupportedprotocolsname.is_set || is_set(cnpdsupportedprotocolsname.yfilter)) leaf_name_data.push_back(cnpdsupportedprotocolsname.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCONBARPROTOCOLDISCOVERYMIB::Cnpdsupportedprotocolstable::Cnpdsupportedprotocolsentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCONBARPROTOCOLDISCOVERYMIB::Cnpdsupportedprotocolstable::Cnpdsupportedprotocolsentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CISCONBARPROTOCOLDISCOVERYMIB::Cnpdsupportedprotocolstable::Cnpdsupportedprotocolsentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cnpdSupportedProtocolsIndex")
    {
        cnpdsupportedprotocolsindex = value;
        cnpdsupportedprotocolsindex.value_namespace = name_space;
        cnpdsupportedprotocolsindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cnpdSupportedProtocolsName")
    {
        cnpdsupportedprotocolsname = value;
        cnpdsupportedprotocolsname.value_namespace = name_space;
        cnpdsupportedprotocolsname.value_namespace_prefix = name_space_prefix;
    }
}

void CISCONBARPROTOCOLDISCOVERYMIB::Cnpdsupportedprotocolstable::Cnpdsupportedprotocolsentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cnpdSupportedProtocolsIndex")
    {
        cnpdsupportedprotocolsindex.yfilter = yfilter;
    }
    if(value_path == "cnpdSupportedProtocolsName")
    {
        cnpdsupportedprotocolsname.yfilter = yfilter;
    }
}

bool CISCONBARPROTOCOLDISCOVERYMIB::Cnpdsupportedprotocolstable::Cnpdsupportedprotocolsentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cnpdSupportedProtocolsIndex" || name == "cnpdSupportedProtocolsName")
        return true;
    return false;
}

const Enum::YLeaf CiscoPdDataType::bitRateIn {1, "bitRateIn"};
const Enum::YLeaf CiscoPdDataType::bitRateOut {2, "bitRateOut"};
const Enum::YLeaf CiscoPdDataType::bitRateSum {3, "bitRateSum"};
const Enum::YLeaf CiscoPdDataType::byteCountIn {4, "byteCountIn"};
const Enum::YLeaf CiscoPdDataType::byteCountOut {5, "byteCountOut"};
const Enum::YLeaf CiscoPdDataType::byteCountSum {6, "byteCountSum"};
const Enum::YLeaf CiscoPdDataType::packetCountIn {7, "packetCountIn"};
const Enum::YLeaf CiscoPdDataType::packetCountOut {8, "packetCountOut"};
const Enum::YLeaf CiscoPdDataType::packetCountSum {9, "packetCountSum"};

const Enum::YLeaf CISCONBARPROTOCOLDISCOVERYMIB::Cnpdthresholdconfigtable::Cnpdthresholdconfigentry::Cnpdthresholdconfigsampletype::absoluteValue {1, "absoluteValue"};
const Enum::YLeaf CISCONBARPROTOCOLDISCOVERYMIB::Cnpdthresholdconfigtable::Cnpdthresholdconfigentry::Cnpdthresholdconfigsampletype::deltaValue {2, "deltaValue"};

const Enum::YLeaf CISCONBARPROTOCOLDISCOVERYMIB::Cnpdthresholdconfigtable::Cnpdthresholdconfigentry::Cnpdthresholdconfigstartup::rising {1, "rising"};
const Enum::YLeaf CISCONBARPROTOCOLDISCOVERYMIB::Cnpdthresholdconfigtable::Cnpdthresholdconfigentry::Cnpdthresholdconfigstartup::falling {2, "falling"};
const Enum::YLeaf CISCONBARPROTOCOLDISCOVERYMIB::Cnpdthresholdconfigtable::Cnpdthresholdconfigentry::Cnpdthresholdconfigstartup::risingOrFalling {3, "risingOrFalling"};

const Enum::YLeaf CISCONBARPROTOCOLDISCOVERYMIB::Cnpdthresholdhistorytable::Cnpdthresholdhistoryentry::Cnpdthresholdhistorytype::risingBreach {1, "risingBreach"};
const Enum::YLeaf CISCONBARPROTOCOLDISCOVERYMIB::Cnpdthresholdhistorytable::Cnpdthresholdhistoryentry::Cnpdthresholdhistorytype::fallingBreach {2, "fallingBreach"};


}
}

