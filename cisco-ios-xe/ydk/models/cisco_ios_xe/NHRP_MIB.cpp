
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "NHRP_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace NHRP_MIB {

NHRPMIB::NHRPMIB()
    :
    nhrpgeneralobjects(std::make_shared<NHRPMIB::Nhrpgeneralobjects>())
	,nhrpcachetable(std::make_shared<NHRPMIB::Nhrpcachetable>())
	,nhrppurgereqtable(std::make_shared<NHRPMIB::Nhrppurgereqtable>())
	,nhrpclienttable(std::make_shared<NHRPMIB::Nhrpclienttable>())
	,nhrpclientregistrationtable(std::make_shared<NHRPMIB::Nhrpclientregistrationtable>())
	,nhrpclientnhstable(std::make_shared<NHRPMIB::Nhrpclientnhstable>())
	,nhrpclientstattable(std::make_shared<NHRPMIB::Nhrpclientstattable>())
	,nhrpservertable(std::make_shared<NHRPMIB::Nhrpservertable>())
	,nhrpservercachetable(std::make_shared<NHRPMIB::Nhrpservercachetable>())
	,nhrpservernhctable(std::make_shared<NHRPMIB::Nhrpservernhctable>())
	,nhrpserverstattable(std::make_shared<NHRPMIB::Nhrpserverstattable>())
{
    nhrpgeneralobjects->parent = this;
    nhrpcachetable->parent = this;
    nhrppurgereqtable->parent = this;
    nhrpclienttable->parent = this;
    nhrpclientregistrationtable->parent = this;
    nhrpclientnhstable->parent = this;
    nhrpclientstattable->parent = this;
    nhrpservertable->parent = this;
    nhrpservercachetable->parent = this;
    nhrpservernhctable->parent = this;
    nhrpserverstattable->parent = this;

    yang_name = "NHRP-MIB"; yang_parent_name = "NHRP-MIB"; is_top_level_class = true; has_list_ancestor = false;
}

NHRPMIB::~NHRPMIB()
{
}

bool NHRPMIB::has_data() const
{
    return (nhrpgeneralobjects !=  nullptr && nhrpgeneralobjects->has_data())
	|| (nhrpcachetable !=  nullptr && nhrpcachetable->has_data())
	|| (nhrppurgereqtable !=  nullptr && nhrppurgereqtable->has_data())
	|| (nhrpclienttable !=  nullptr && nhrpclienttable->has_data())
	|| (nhrpclientregistrationtable !=  nullptr && nhrpclientregistrationtable->has_data())
	|| (nhrpclientnhstable !=  nullptr && nhrpclientnhstable->has_data())
	|| (nhrpclientstattable !=  nullptr && nhrpclientstattable->has_data())
	|| (nhrpservertable !=  nullptr && nhrpservertable->has_data())
	|| (nhrpservercachetable !=  nullptr && nhrpservercachetable->has_data())
	|| (nhrpservernhctable !=  nullptr && nhrpservernhctable->has_data())
	|| (nhrpserverstattable !=  nullptr && nhrpserverstattable->has_data());
}

bool NHRPMIB::has_operation() const
{
    return is_set(yfilter)
	|| (nhrpgeneralobjects !=  nullptr && nhrpgeneralobjects->has_operation())
	|| (nhrpcachetable !=  nullptr && nhrpcachetable->has_operation())
	|| (nhrppurgereqtable !=  nullptr && nhrppurgereqtable->has_operation())
	|| (nhrpclienttable !=  nullptr && nhrpclienttable->has_operation())
	|| (nhrpclientregistrationtable !=  nullptr && nhrpclientregistrationtable->has_operation())
	|| (nhrpclientnhstable !=  nullptr && nhrpclientnhstable->has_operation())
	|| (nhrpclientstattable !=  nullptr && nhrpclientstattable->has_operation())
	|| (nhrpservertable !=  nullptr && nhrpservertable->has_operation())
	|| (nhrpservercachetable !=  nullptr && nhrpservercachetable->has_operation())
	|| (nhrpservernhctable !=  nullptr && nhrpservernhctable->has_operation())
	|| (nhrpserverstattable !=  nullptr && nhrpserverstattable->has_operation());
}

std::string NHRPMIB::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "NHRP-MIB:NHRP-MIB";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NHRPMIB::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> NHRPMIB::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nhrpGeneralObjects")
    {
        if(nhrpgeneralobjects == nullptr)
        {
            nhrpgeneralobjects = std::make_shared<NHRPMIB::Nhrpgeneralobjects>();
        }
        return nhrpgeneralobjects;
    }

    if(child_yang_name == "nhrpCacheTable")
    {
        if(nhrpcachetable == nullptr)
        {
            nhrpcachetable = std::make_shared<NHRPMIB::Nhrpcachetable>();
        }
        return nhrpcachetable;
    }

    if(child_yang_name == "nhrpPurgeReqTable")
    {
        if(nhrppurgereqtable == nullptr)
        {
            nhrppurgereqtable = std::make_shared<NHRPMIB::Nhrppurgereqtable>();
        }
        return nhrppurgereqtable;
    }

    if(child_yang_name == "nhrpClientTable")
    {
        if(nhrpclienttable == nullptr)
        {
            nhrpclienttable = std::make_shared<NHRPMIB::Nhrpclienttable>();
        }
        return nhrpclienttable;
    }

    if(child_yang_name == "nhrpClientRegistrationTable")
    {
        if(nhrpclientregistrationtable == nullptr)
        {
            nhrpclientregistrationtable = std::make_shared<NHRPMIB::Nhrpclientregistrationtable>();
        }
        return nhrpclientregistrationtable;
    }

    if(child_yang_name == "nhrpClientNhsTable")
    {
        if(nhrpclientnhstable == nullptr)
        {
            nhrpclientnhstable = std::make_shared<NHRPMIB::Nhrpclientnhstable>();
        }
        return nhrpclientnhstable;
    }

    if(child_yang_name == "nhrpClientStatTable")
    {
        if(nhrpclientstattable == nullptr)
        {
            nhrpclientstattable = std::make_shared<NHRPMIB::Nhrpclientstattable>();
        }
        return nhrpclientstattable;
    }

    if(child_yang_name == "nhrpServerTable")
    {
        if(nhrpservertable == nullptr)
        {
            nhrpservertable = std::make_shared<NHRPMIB::Nhrpservertable>();
        }
        return nhrpservertable;
    }

    if(child_yang_name == "nhrpServerCacheTable")
    {
        if(nhrpservercachetable == nullptr)
        {
            nhrpservercachetable = std::make_shared<NHRPMIB::Nhrpservercachetable>();
        }
        return nhrpservercachetable;
    }

    if(child_yang_name == "nhrpServerNhcTable")
    {
        if(nhrpservernhctable == nullptr)
        {
            nhrpservernhctable = std::make_shared<NHRPMIB::Nhrpservernhctable>();
        }
        return nhrpservernhctable;
    }

    if(child_yang_name == "nhrpServerStatTable")
    {
        if(nhrpserverstattable == nullptr)
        {
            nhrpserverstattable = std::make_shared<NHRPMIB::Nhrpserverstattable>();
        }
        return nhrpserverstattable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NHRPMIB::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(nhrpgeneralobjects != nullptr)
    {
        children["nhrpGeneralObjects"] = nhrpgeneralobjects;
    }

    if(nhrpcachetable != nullptr)
    {
        children["nhrpCacheTable"] = nhrpcachetable;
    }

    if(nhrppurgereqtable != nullptr)
    {
        children["nhrpPurgeReqTable"] = nhrppurgereqtable;
    }

    if(nhrpclienttable != nullptr)
    {
        children["nhrpClientTable"] = nhrpclienttable;
    }

    if(nhrpclientregistrationtable != nullptr)
    {
        children["nhrpClientRegistrationTable"] = nhrpclientregistrationtable;
    }

    if(nhrpclientnhstable != nullptr)
    {
        children["nhrpClientNhsTable"] = nhrpclientnhstable;
    }

    if(nhrpclientstattable != nullptr)
    {
        children["nhrpClientStatTable"] = nhrpclientstattable;
    }

    if(nhrpservertable != nullptr)
    {
        children["nhrpServerTable"] = nhrpservertable;
    }

    if(nhrpservercachetable != nullptr)
    {
        children["nhrpServerCacheTable"] = nhrpservercachetable;
    }

    if(nhrpservernhctable != nullptr)
    {
        children["nhrpServerNhcTable"] = nhrpservernhctable;
    }

    if(nhrpserverstattable != nullptr)
    {
        children["nhrpServerStatTable"] = nhrpserverstattable;
    }

    return children;
}

void NHRPMIB::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NHRPMIB::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> NHRPMIB::clone_ptr() const
{
    return std::make_shared<NHRPMIB>();
}

std::string NHRPMIB::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string NHRPMIB::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function NHRPMIB::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> NHRPMIB::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool NHRPMIB::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nhrpGeneralObjects" || name == "nhrpCacheTable" || name == "nhrpPurgeReqTable" || name == "nhrpClientTable" || name == "nhrpClientRegistrationTable" || name == "nhrpClientNhsTable" || name == "nhrpClientStatTable" || name == "nhrpServerTable" || name == "nhrpServerCacheTable" || name == "nhrpServerNhcTable" || name == "nhrpServerStatTable")
        return true;
    return false;
}

NHRPMIB::Nhrpgeneralobjects::Nhrpgeneralobjects()
    :
    nhrpnextindex{YType::uint32, "nhrpNextIndex"}
{

    yang_name = "nhrpGeneralObjects"; yang_parent_name = "NHRP-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

NHRPMIB::Nhrpgeneralobjects::~Nhrpgeneralobjects()
{
}

bool NHRPMIB::Nhrpgeneralobjects::has_data() const
{
    return nhrpnextindex.is_set;
}

bool NHRPMIB::Nhrpgeneralobjects::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nhrpnextindex.yfilter);
}

std::string NHRPMIB::Nhrpgeneralobjects::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "NHRP-MIB:NHRP-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string NHRPMIB::Nhrpgeneralobjects::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nhrpGeneralObjects";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NHRPMIB::Nhrpgeneralobjects::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nhrpnextindex.is_set || is_set(nhrpnextindex.yfilter)) leaf_name_data.push_back(nhrpnextindex.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NHRPMIB::Nhrpgeneralobjects::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NHRPMIB::Nhrpgeneralobjects::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void NHRPMIB::Nhrpgeneralobjects::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nhrpNextIndex")
    {
        nhrpnextindex = value;
        nhrpnextindex.value_namespace = name_space;
        nhrpnextindex.value_namespace_prefix = name_space_prefix;
    }
}

void NHRPMIB::Nhrpgeneralobjects::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nhrpNextIndex")
    {
        nhrpnextindex.yfilter = yfilter;
    }
}

bool NHRPMIB::Nhrpgeneralobjects::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nhrpNextIndex")
        return true;
    return false;
}

NHRPMIB::Nhrpcachetable::Nhrpcachetable()
{

    yang_name = "nhrpCacheTable"; yang_parent_name = "NHRP-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

NHRPMIB::Nhrpcachetable::~Nhrpcachetable()
{
}

bool NHRPMIB::Nhrpcachetable::has_data() const
{
    for (std::size_t index=0; index<nhrpcacheentry.size(); index++)
    {
        if(nhrpcacheentry[index]->has_data())
            return true;
    }
    return false;
}

bool NHRPMIB::Nhrpcachetable::has_operation() const
{
    for (std::size_t index=0; index<nhrpcacheentry.size(); index++)
    {
        if(nhrpcacheentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string NHRPMIB::Nhrpcachetable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "NHRP-MIB:NHRP-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string NHRPMIB::Nhrpcachetable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nhrpCacheTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NHRPMIB::Nhrpcachetable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> NHRPMIB::Nhrpcachetable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nhrpCacheEntry")
    {
        auto c = std::make_shared<NHRPMIB::Nhrpcachetable::Nhrpcacheentry>();
        c->parent = this;
        nhrpcacheentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NHRPMIB::Nhrpcachetable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : nhrpcacheentry)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void NHRPMIB::Nhrpcachetable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NHRPMIB::Nhrpcachetable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NHRPMIB::Nhrpcachetable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nhrpCacheEntry")
        return true;
    return false;
}

NHRPMIB::Nhrpcachetable::Nhrpcacheentry::Nhrpcacheentry()
    :
    nhrpcacheinternetworkaddrtype{YType::enumeration, "nhrpCacheInternetworkAddrType"},
    nhrpcacheinternetworkaddr{YType::str, "nhrpCacheInternetworkAddr"},
    ifindex{YType::str, "ifIndex"},
    nhrpcacheindex{YType::uint32, "nhrpCacheIndex"},
    nhrpcacheprefixlength{YType::int32, "nhrpCachePrefixLength"},
    nhrpcachenexthopinternetworkaddr{YType::str, "nhrpCacheNextHopInternetworkAddr"},
    nhrpcachenbmaaddrtype{YType::enumeration, "nhrpCacheNbmaAddrType"},
    nhrpcachenbmaaddr{YType::str, "nhrpCacheNbmaAddr"},
    nhrpcachenbmasubaddr{YType::str, "nhrpCacheNbmaSubaddr"},
    nhrpcachetype{YType::enumeration, "nhrpCacheType"},
    nhrpcachestate{YType::enumeration, "nhrpCacheState"},
    nhrpcacheholdingtimevalid{YType::boolean, "nhrpCacheHoldingTimeValid"},
    nhrpcacheholdingtime{YType::uint32, "nhrpCacheHoldingTime"},
    nhrpcachenegotiatedmtu{YType::int32, "nhrpCacheNegotiatedMtu"},
    nhrpcachepreference{YType::int32, "nhrpCachePreference"},
    nhrpcachestoragetype{YType::enumeration, "nhrpCacheStorageType"},
    nhrpcacherowstatus{YType::enumeration, "nhrpCacheRowStatus"}
{

    yang_name = "nhrpCacheEntry"; yang_parent_name = "nhrpCacheTable"; is_top_level_class = false; has_list_ancestor = false;
}

NHRPMIB::Nhrpcachetable::Nhrpcacheentry::~Nhrpcacheentry()
{
}

bool NHRPMIB::Nhrpcachetable::Nhrpcacheentry::has_data() const
{
    return nhrpcacheinternetworkaddrtype.is_set
	|| nhrpcacheinternetworkaddr.is_set
	|| ifindex.is_set
	|| nhrpcacheindex.is_set
	|| nhrpcacheprefixlength.is_set
	|| nhrpcachenexthopinternetworkaddr.is_set
	|| nhrpcachenbmaaddrtype.is_set
	|| nhrpcachenbmaaddr.is_set
	|| nhrpcachenbmasubaddr.is_set
	|| nhrpcachetype.is_set
	|| nhrpcachestate.is_set
	|| nhrpcacheholdingtimevalid.is_set
	|| nhrpcacheholdingtime.is_set
	|| nhrpcachenegotiatedmtu.is_set
	|| nhrpcachepreference.is_set
	|| nhrpcachestoragetype.is_set
	|| nhrpcacherowstatus.is_set;
}

bool NHRPMIB::Nhrpcachetable::Nhrpcacheentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nhrpcacheinternetworkaddrtype.yfilter)
	|| ydk::is_set(nhrpcacheinternetworkaddr.yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(nhrpcacheindex.yfilter)
	|| ydk::is_set(nhrpcacheprefixlength.yfilter)
	|| ydk::is_set(nhrpcachenexthopinternetworkaddr.yfilter)
	|| ydk::is_set(nhrpcachenbmaaddrtype.yfilter)
	|| ydk::is_set(nhrpcachenbmaaddr.yfilter)
	|| ydk::is_set(nhrpcachenbmasubaddr.yfilter)
	|| ydk::is_set(nhrpcachetype.yfilter)
	|| ydk::is_set(nhrpcachestate.yfilter)
	|| ydk::is_set(nhrpcacheholdingtimevalid.yfilter)
	|| ydk::is_set(nhrpcacheholdingtime.yfilter)
	|| ydk::is_set(nhrpcachenegotiatedmtu.yfilter)
	|| ydk::is_set(nhrpcachepreference.yfilter)
	|| ydk::is_set(nhrpcachestoragetype.yfilter)
	|| ydk::is_set(nhrpcacherowstatus.yfilter);
}

std::string NHRPMIB::Nhrpcachetable::Nhrpcacheentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "NHRP-MIB:NHRP-MIB/nhrpCacheTable/" << get_segment_path();
    return path_buffer.str();
}

std::string NHRPMIB::Nhrpcachetable::Nhrpcacheentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nhrpCacheEntry" <<"[nhrpCacheInternetworkAddrType='" <<nhrpcacheinternetworkaddrtype <<"']" <<"[nhrpCacheInternetworkAddr='" <<nhrpcacheinternetworkaddr <<"']" <<"[ifIndex='" <<ifindex <<"']" <<"[nhrpCacheIndex='" <<nhrpcacheindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NHRPMIB::Nhrpcachetable::Nhrpcacheentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nhrpcacheinternetworkaddrtype.is_set || is_set(nhrpcacheinternetworkaddrtype.yfilter)) leaf_name_data.push_back(nhrpcacheinternetworkaddrtype.get_name_leafdata());
    if (nhrpcacheinternetworkaddr.is_set || is_set(nhrpcacheinternetworkaddr.yfilter)) leaf_name_data.push_back(nhrpcacheinternetworkaddr.get_name_leafdata());
    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (nhrpcacheindex.is_set || is_set(nhrpcacheindex.yfilter)) leaf_name_data.push_back(nhrpcacheindex.get_name_leafdata());
    if (nhrpcacheprefixlength.is_set || is_set(nhrpcacheprefixlength.yfilter)) leaf_name_data.push_back(nhrpcacheprefixlength.get_name_leafdata());
    if (nhrpcachenexthopinternetworkaddr.is_set || is_set(nhrpcachenexthopinternetworkaddr.yfilter)) leaf_name_data.push_back(nhrpcachenexthopinternetworkaddr.get_name_leafdata());
    if (nhrpcachenbmaaddrtype.is_set || is_set(nhrpcachenbmaaddrtype.yfilter)) leaf_name_data.push_back(nhrpcachenbmaaddrtype.get_name_leafdata());
    if (nhrpcachenbmaaddr.is_set || is_set(nhrpcachenbmaaddr.yfilter)) leaf_name_data.push_back(nhrpcachenbmaaddr.get_name_leafdata());
    if (nhrpcachenbmasubaddr.is_set || is_set(nhrpcachenbmasubaddr.yfilter)) leaf_name_data.push_back(nhrpcachenbmasubaddr.get_name_leafdata());
    if (nhrpcachetype.is_set || is_set(nhrpcachetype.yfilter)) leaf_name_data.push_back(nhrpcachetype.get_name_leafdata());
    if (nhrpcachestate.is_set || is_set(nhrpcachestate.yfilter)) leaf_name_data.push_back(nhrpcachestate.get_name_leafdata());
    if (nhrpcacheholdingtimevalid.is_set || is_set(nhrpcacheholdingtimevalid.yfilter)) leaf_name_data.push_back(nhrpcacheholdingtimevalid.get_name_leafdata());
    if (nhrpcacheholdingtime.is_set || is_set(nhrpcacheholdingtime.yfilter)) leaf_name_data.push_back(nhrpcacheholdingtime.get_name_leafdata());
    if (nhrpcachenegotiatedmtu.is_set || is_set(nhrpcachenegotiatedmtu.yfilter)) leaf_name_data.push_back(nhrpcachenegotiatedmtu.get_name_leafdata());
    if (nhrpcachepreference.is_set || is_set(nhrpcachepreference.yfilter)) leaf_name_data.push_back(nhrpcachepreference.get_name_leafdata());
    if (nhrpcachestoragetype.is_set || is_set(nhrpcachestoragetype.yfilter)) leaf_name_data.push_back(nhrpcachestoragetype.get_name_leafdata());
    if (nhrpcacherowstatus.is_set || is_set(nhrpcacherowstatus.yfilter)) leaf_name_data.push_back(nhrpcacherowstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NHRPMIB::Nhrpcachetable::Nhrpcacheentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NHRPMIB::Nhrpcachetable::Nhrpcacheentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void NHRPMIB::Nhrpcachetable::Nhrpcacheentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nhrpCacheInternetworkAddrType")
    {
        nhrpcacheinternetworkaddrtype = value;
        nhrpcacheinternetworkaddrtype.value_namespace = name_space;
        nhrpcacheinternetworkaddrtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nhrpCacheInternetworkAddr")
    {
        nhrpcacheinternetworkaddr = value;
        nhrpcacheinternetworkaddr.value_namespace = name_space;
        nhrpcacheinternetworkaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nhrpCacheIndex")
    {
        nhrpcacheindex = value;
        nhrpcacheindex.value_namespace = name_space;
        nhrpcacheindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nhrpCachePrefixLength")
    {
        nhrpcacheprefixlength = value;
        nhrpcacheprefixlength.value_namespace = name_space;
        nhrpcacheprefixlength.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nhrpCacheNextHopInternetworkAddr")
    {
        nhrpcachenexthopinternetworkaddr = value;
        nhrpcachenexthopinternetworkaddr.value_namespace = name_space;
        nhrpcachenexthopinternetworkaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nhrpCacheNbmaAddrType")
    {
        nhrpcachenbmaaddrtype = value;
        nhrpcachenbmaaddrtype.value_namespace = name_space;
        nhrpcachenbmaaddrtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nhrpCacheNbmaAddr")
    {
        nhrpcachenbmaaddr = value;
        nhrpcachenbmaaddr.value_namespace = name_space;
        nhrpcachenbmaaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nhrpCacheNbmaSubaddr")
    {
        nhrpcachenbmasubaddr = value;
        nhrpcachenbmasubaddr.value_namespace = name_space;
        nhrpcachenbmasubaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nhrpCacheType")
    {
        nhrpcachetype = value;
        nhrpcachetype.value_namespace = name_space;
        nhrpcachetype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nhrpCacheState")
    {
        nhrpcachestate = value;
        nhrpcachestate.value_namespace = name_space;
        nhrpcachestate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nhrpCacheHoldingTimeValid")
    {
        nhrpcacheholdingtimevalid = value;
        nhrpcacheholdingtimevalid.value_namespace = name_space;
        nhrpcacheholdingtimevalid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nhrpCacheHoldingTime")
    {
        nhrpcacheholdingtime = value;
        nhrpcacheholdingtime.value_namespace = name_space;
        nhrpcacheholdingtime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nhrpCacheNegotiatedMtu")
    {
        nhrpcachenegotiatedmtu = value;
        nhrpcachenegotiatedmtu.value_namespace = name_space;
        nhrpcachenegotiatedmtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nhrpCachePreference")
    {
        nhrpcachepreference = value;
        nhrpcachepreference.value_namespace = name_space;
        nhrpcachepreference.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nhrpCacheStorageType")
    {
        nhrpcachestoragetype = value;
        nhrpcachestoragetype.value_namespace = name_space;
        nhrpcachestoragetype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nhrpCacheRowStatus")
    {
        nhrpcacherowstatus = value;
        nhrpcacherowstatus.value_namespace = name_space;
        nhrpcacherowstatus.value_namespace_prefix = name_space_prefix;
    }
}

void NHRPMIB::Nhrpcachetable::Nhrpcacheentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nhrpCacheInternetworkAddrType")
    {
        nhrpcacheinternetworkaddrtype.yfilter = yfilter;
    }
    if(value_path == "nhrpCacheInternetworkAddr")
    {
        nhrpcacheinternetworkaddr.yfilter = yfilter;
    }
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "nhrpCacheIndex")
    {
        nhrpcacheindex.yfilter = yfilter;
    }
    if(value_path == "nhrpCachePrefixLength")
    {
        nhrpcacheprefixlength.yfilter = yfilter;
    }
    if(value_path == "nhrpCacheNextHopInternetworkAddr")
    {
        nhrpcachenexthopinternetworkaddr.yfilter = yfilter;
    }
    if(value_path == "nhrpCacheNbmaAddrType")
    {
        nhrpcachenbmaaddrtype.yfilter = yfilter;
    }
    if(value_path == "nhrpCacheNbmaAddr")
    {
        nhrpcachenbmaaddr.yfilter = yfilter;
    }
    if(value_path == "nhrpCacheNbmaSubaddr")
    {
        nhrpcachenbmasubaddr.yfilter = yfilter;
    }
    if(value_path == "nhrpCacheType")
    {
        nhrpcachetype.yfilter = yfilter;
    }
    if(value_path == "nhrpCacheState")
    {
        nhrpcachestate.yfilter = yfilter;
    }
    if(value_path == "nhrpCacheHoldingTimeValid")
    {
        nhrpcacheholdingtimevalid.yfilter = yfilter;
    }
    if(value_path == "nhrpCacheHoldingTime")
    {
        nhrpcacheholdingtime.yfilter = yfilter;
    }
    if(value_path == "nhrpCacheNegotiatedMtu")
    {
        nhrpcachenegotiatedmtu.yfilter = yfilter;
    }
    if(value_path == "nhrpCachePreference")
    {
        nhrpcachepreference.yfilter = yfilter;
    }
    if(value_path == "nhrpCacheStorageType")
    {
        nhrpcachestoragetype.yfilter = yfilter;
    }
    if(value_path == "nhrpCacheRowStatus")
    {
        nhrpcacherowstatus.yfilter = yfilter;
    }
}

bool NHRPMIB::Nhrpcachetable::Nhrpcacheentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nhrpCacheInternetworkAddrType" || name == "nhrpCacheInternetworkAddr" || name == "ifIndex" || name == "nhrpCacheIndex" || name == "nhrpCachePrefixLength" || name == "nhrpCacheNextHopInternetworkAddr" || name == "nhrpCacheNbmaAddrType" || name == "nhrpCacheNbmaAddr" || name == "nhrpCacheNbmaSubaddr" || name == "nhrpCacheType" || name == "nhrpCacheState" || name == "nhrpCacheHoldingTimeValid" || name == "nhrpCacheHoldingTime" || name == "nhrpCacheNegotiatedMtu" || name == "nhrpCachePreference" || name == "nhrpCacheStorageType" || name == "nhrpCacheRowStatus")
        return true;
    return false;
}

NHRPMIB::Nhrppurgereqtable::Nhrppurgereqtable()
{

    yang_name = "nhrpPurgeReqTable"; yang_parent_name = "NHRP-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

NHRPMIB::Nhrppurgereqtable::~Nhrppurgereqtable()
{
}

bool NHRPMIB::Nhrppurgereqtable::has_data() const
{
    for (std::size_t index=0; index<nhrppurgereqentry.size(); index++)
    {
        if(nhrppurgereqentry[index]->has_data())
            return true;
    }
    return false;
}

bool NHRPMIB::Nhrppurgereqtable::has_operation() const
{
    for (std::size_t index=0; index<nhrppurgereqentry.size(); index++)
    {
        if(nhrppurgereqentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string NHRPMIB::Nhrppurgereqtable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "NHRP-MIB:NHRP-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string NHRPMIB::Nhrppurgereqtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nhrpPurgeReqTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NHRPMIB::Nhrppurgereqtable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> NHRPMIB::Nhrppurgereqtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nhrpPurgeReqEntry")
    {
        auto c = std::make_shared<NHRPMIB::Nhrppurgereqtable::Nhrppurgereqentry>();
        c->parent = this;
        nhrppurgereqentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NHRPMIB::Nhrppurgereqtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : nhrppurgereqentry)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void NHRPMIB::Nhrppurgereqtable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NHRPMIB::Nhrppurgereqtable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NHRPMIB::Nhrppurgereqtable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nhrpPurgeReqEntry")
        return true;
    return false;
}

NHRPMIB::Nhrppurgereqtable::Nhrppurgereqentry::Nhrppurgereqentry()
    :
    nhrppurgeindex{YType::uint32, "nhrpPurgeIndex"},
    nhrppurgecacheidentifier{YType::uint32, "nhrpPurgeCacheIdentifier"},
    nhrppurgeprefixlength{YType::int32, "nhrpPurgePrefixLength"},
    nhrppurgerequestid{YType::uint32, "nhrpPurgeRequestID"},
    nhrppurgereplyexpected{YType::boolean, "nhrpPurgeReplyExpected"},
    nhrppurgerowstatus{YType::enumeration, "nhrpPurgeRowStatus"}
{

    yang_name = "nhrpPurgeReqEntry"; yang_parent_name = "nhrpPurgeReqTable"; is_top_level_class = false; has_list_ancestor = false;
}

NHRPMIB::Nhrppurgereqtable::Nhrppurgereqentry::~Nhrppurgereqentry()
{
}

bool NHRPMIB::Nhrppurgereqtable::Nhrppurgereqentry::has_data() const
{
    return nhrppurgeindex.is_set
	|| nhrppurgecacheidentifier.is_set
	|| nhrppurgeprefixlength.is_set
	|| nhrppurgerequestid.is_set
	|| nhrppurgereplyexpected.is_set
	|| nhrppurgerowstatus.is_set;
}

bool NHRPMIB::Nhrppurgereqtable::Nhrppurgereqentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nhrppurgeindex.yfilter)
	|| ydk::is_set(nhrppurgecacheidentifier.yfilter)
	|| ydk::is_set(nhrppurgeprefixlength.yfilter)
	|| ydk::is_set(nhrppurgerequestid.yfilter)
	|| ydk::is_set(nhrppurgereplyexpected.yfilter)
	|| ydk::is_set(nhrppurgerowstatus.yfilter);
}

std::string NHRPMIB::Nhrppurgereqtable::Nhrppurgereqentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "NHRP-MIB:NHRP-MIB/nhrpPurgeReqTable/" << get_segment_path();
    return path_buffer.str();
}

std::string NHRPMIB::Nhrppurgereqtable::Nhrppurgereqentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nhrpPurgeReqEntry" <<"[nhrpPurgeIndex='" <<nhrppurgeindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NHRPMIB::Nhrppurgereqtable::Nhrppurgereqentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nhrppurgeindex.is_set || is_set(nhrppurgeindex.yfilter)) leaf_name_data.push_back(nhrppurgeindex.get_name_leafdata());
    if (nhrppurgecacheidentifier.is_set || is_set(nhrppurgecacheidentifier.yfilter)) leaf_name_data.push_back(nhrppurgecacheidentifier.get_name_leafdata());
    if (nhrppurgeprefixlength.is_set || is_set(nhrppurgeprefixlength.yfilter)) leaf_name_data.push_back(nhrppurgeprefixlength.get_name_leafdata());
    if (nhrppurgerequestid.is_set || is_set(nhrppurgerequestid.yfilter)) leaf_name_data.push_back(nhrppurgerequestid.get_name_leafdata());
    if (nhrppurgereplyexpected.is_set || is_set(nhrppurgereplyexpected.yfilter)) leaf_name_data.push_back(nhrppurgereplyexpected.get_name_leafdata());
    if (nhrppurgerowstatus.is_set || is_set(nhrppurgerowstatus.yfilter)) leaf_name_data.push_back(nhrppurgerowstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NHRPMIB::Nhrppurgereqtable::Nhrppurgereqentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NHRPMIB::Nhrppurgereqtable::Nhrppurgereqentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void NHRPMIB::Nhrppurgereqtable::Nhrppurgereqentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nhrpPurgeIndex")
    {
        nhrppurgeindex = value;
        nhrppurgeindex.value_namespace = name_space;
        nhrppurgeindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nhrpPurgeCacheIdentifier")
    {
        nhrppurgecacheidentifier = value;
        nhrppurgecacheidentifier.value_namespace = name_space;
        nhrppurgecacheidentifier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nhrpPurgePrefixLength")
    {
        nhrppurgeprefixlength = value;
        nhrppurgeprefixlength.value_namespace = name_space;
        nhrppurgeprefixlength.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nhrpPurgeRequestID")
    {
        nhrppurgerequestid = value;
        nhrppurgerequestid.value_namespace = name_space;
        nhrppurgerequestid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nhrpPurgeReplyExpected")
    {
        nhrppurgereplyexpected = value;
        nhrppurgereplyexpected.value_namespace = name_space;
        nhrppurgereplyexpected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nhrpPurgeRowStatus")
    {
        nhrppurgerowstatus = value;
        nhrppurgerowstatus.value_namespace = name_space;
        nhrppurgerowstatus.value_namespace_prefix = name_space_prefix;
    }
}

void NHRPMIB::Nhrppurgereqtable::Nhrppurgereqentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nhrpPurgeIndex")
    {
        nhrppurgeindex.yfilter = yfilter;
    }
    if(value_path == "nhrpPurgeCacheIdentifier")
    {
        nhrppurgecacheidentifier.yfilter = yfilter;
    }
    if(value_path == "nhrpPurgePrefixLength")
    {
        nhrppurgeprefixlength.yfilter = yfilter;
    }
    if(value_path == "nhrpPurgeRequestID")
    {
        nhrppurgerequestid.yfilter = yfilter;
    }
    if(value_path == "nhrpPurgeReplyExpected")
    {
        nhrppurgereplyexpected.yfilter = yfilter;
    }
    if(value_path == "nhrpPurgeRowStatus")
    {
        nhrppurgerowstatus.yfilter = yfilter;
    }
}

bool NHRPMIB::Nhrppurgereqtable::Nhrppurgereqentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nhrpPurgeIndex" || name == "nhrpPurgeCacheIdentifier" || name == "nhrpPurgePrefixLength" || name == "nhrpPurgeRequestID" || name == "nhrpPurgeReplyExpected" || name == "nhrpPurgeRowStatus")
        return true;
    return false;
}

NHRPMIB::Nhrpclienttable::Nhrpclienttable()
{

    yang_name = "nhrpClientTable"; yang_parent_name = "NHRP-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

NHRPMIB::Nhrpclienttable::~Nhrpclienttable()
{
}

bool NHRPMIB::Nhrpclienttable::has_data() const
{
    for (std::size_t index=0; index<nhrpcliententry.size(); index++)
    {
        if(nhrpcliententry[index]->has_data())
            return true;
    }
    return false;
}

bool NHRPMIB::Nhrpclienttable::has_operation() const
{
    for (std::size_t index=0; index<nhrpcliententry.size(); index++)
    {
        if(nhrpcliententry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string NHRPMIB::Nhrpclienttable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "NHRP-MIB:NHRP-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string NHRPMIB::Nhrpclienttable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nhrpClientTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NHRPMIB::Nhrpclienttable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> NHRPMIB::Nhrpclienttable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nhrpClientEntry")
    {
        auto c = std::make_shared<NHRPMIB::Nhrpclienttable::Nhrpcliententry>();
        c->parent = this;
        nhrpcliententry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NHRPMIB::Nhrpclienttable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : nhrpcliententry)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void NHRPMIB::Nhrpclienttable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NHRPMIB::Nhrpclienttable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NHRPMIB::Nhrpclienttable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nhrpClientEntry")
        return true;
    return false;
}

NHRPMIB::Nhrpclienttable::Nhrpcliententry::Nhrpcliententry()
    :
    nhrpclientindex{YType::uint32, "nhrpClientIndex"},
    nhrpclientinternetworkaddrtype{YType::enumeration, "nhrpClientInternetworkAddrType"},
    nhrpclientinternetworkaddr{YType::str, "nhrpClientInternetworkAddr"},
    nhrpclientnbmaaddrtype{YType::enumeration, "nhrpClientNbmaAddrType"},
    nhrpclientnbmaaddr{YType::str, "nhrpClientNbmaAddr"},
    nhrpclientnbmasubaddr{YType::str, "nhrpClientNbmaSubaddr"},
    nhrpclientinitialrequesttimeout{YType::int32, "nhrpClientInitialRequestTimeout"},
    nhrpclientregistrationrequestretries{YType::int32, "nhrpClientRegistrationRequestRetries"},
    nhrpclientresolutionrequestretries{YType::int32, "nhrpClientResolutionRequestRetries"},
    nhrpclientpurgerequestretries{YType::int32, "nhrpClientPurgeRequestRetries"},
    nhrpclientdefaultmtu{YType::uint32, "nhrpClientDefaultMtu"},
    nhrpclientholdtime{YType::uint32, "nhrpClientHoldTime"},
    nhrpclientrequestid{YType::uint32, "nhrpClientRequestID"},
    nhrpclientstoragetype{YType::enumeration, "nhrpClientStorageType"},
    nhrpclientrowstatus{YType::enumeration, "nhrpClientRowStatus"}
{

    yang_name = "nhrpClientEntry"; yang_parent_name = "nhrpClientTable"; is_top_level_class = false; has_list_ancestor = false;
}

NHRPMIB::Nhrpclienttable::Nhrpcliententry::~Nhrpcliententry()
{
}

bool NHRPMIB::Nhrpclienttable::Nhrpcliententry::has_data() const
{
    return nhrpclientindex.is_set
	|| nhrpclientinternetworkaddrtype.is_set
	|| nhrpclientinternetworkaddr.is_set
	|| nhrpclientnbmaaddrtype.is_set
	|| nhrpclientnbmaaddr.is_set
	|| nhrpclientnbmasubaddr.is_set
	|| nhrpclientinitialrequesttimeout.is_set
	|| nhrpclientregistrationrequestretries.is_set
	|| nhrpclientresolutionrequestretries.is_set
	|| nhrpclientpurgerequestretries.is_set
	|| nhrpclientdefaultmtu.is_set
	|| nhrpclientholdtime.is_set
	|| nhrpclientrequestid.is_set
	|| nhrpclientstoragetype.is_set
	|| nhrpclientrowstatus.is_set;
}

bool NHRPMIB::Nhrpclienttable::Nhrpcliententry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nhrpclientindex.yfilter)
	|| ydk::is_set(nhrpclientinternetworkaddrtype.yfilter)
	|| ydk::is_set(nhrpclientinternetworkaddr.yfilter)
	|| ydk::is_set(nhrpclientnbmaaddrtype.yfilter)
	|| ydk::is_set(nhrpclientnbmaaddr.yfilter)
	|| ydk::is_set(nhrpclientnbmasubaddr.yfilter)
	|| ydk::is_set(nhrpclientinitialrequesttimeout.yfilter)
	|| ydk::is_set(nhrpclientregistrationrequestretries.yfilter)
	|| ydk::is_set(nhrpclientresolutionrequestretries.yfilter)
	|| ydk::is_set(nhrpclientpurgerequestretries.yfilter)
	|| ydk::is_set(nhrpclientdefaultmtu.yfilter)
	|| ydk::is_set(nhrpclientholdtime.yfilter)
	|| ydk::is_set(nhrpclientrequestid.yfilter)
	|| ydk::is_set(nhrpclientstoragetype.yfilter)
	|| ydk::is_set(nhrpclientrowstatus.yfilter);
}

std::string NHRPMIB::Nhrpclienttable::Nhrpcliententry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "NHRP-MIB:NHRP-MIB/nhrpClientTable/" << get_segment_path();
    return path_buffer.str();
}

std::string NHRPMIB::Nhrpclienttable::Nhrpcliententry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nhrpClientEntry" <<"[nhrpClientIndex='" <<nhrpclientindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NHRPMIB::Nhrpclienttable::Nhrpcliententry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nhrpclientindex.is_set || is_set(nhrpclientindex.yfilter)) leaf_name_data.push_back(nhrpclientindex.get_name_leafdata());
    if (nhrpclientinternetworkaddrtype.is_set || is_set(nhrpclientinternetworkaddrtype.yfilter)) leaf_name_data.push_back(nhrpclientinternetworkaddrtype.get_name_leafdata());
    if (nhrpclientinternetworkaddr.is_set || is_set(nhrpclientinternetworkaddr.yfilter)) leaf_name_data.push_back(nhrpclientinternetworkaddr.get_name_leafdata());
    if (nhrpclientnbmaaddrtype.is_set || is_set(nhrpclientnbmaaddrtype.yfilter)) leaf_name_data.push_back(nhrpclientnbmaaddrtype.get_name_leafdata());
    if (nhrpclientnbmaaddr.is_set || is_set(nhrpclientnbmaaddr.yfilter)) leaf_name_data.push_back(nhrpclientnbmaaddr.get_name_leafdata());
    if (nhrpclientnbmasubaddr.is_set || is_set(nhrpclientnbmasubaddr.yfilter)) leaf_name_data.push_back(nhrpclientnbmasubaddr.get_name_leafdata());
    if (nhrpclientinitialrequesttimeout.is_set || is_set(nhrpclientinitialrequesttimeout.yfilter)) leaf_name_data.push_back(nhrpclientinitialrequesttimeout.get_name_leafdata());
    if (nhrpclientregistrationrequestretries.is_set || is_set(nhrpclientregistrationrequestretries.yfilter)) leaf_name_data.push_back(nhrpclientregistrationrequestretries.get_name_leafdata());
    if (nhrpclientresolutionrequestretries.is_set || is_set(nhrpclientresolutionrequestretries.yfilter)) leaf_name_data.push_back(nhrpclientresolutionrequestretries.get_name_leafdata());
    if (nhrpclientpurgerequestretries.is_set || is_set(nhrpclientpurgerequestretries.yfilter)) leaf_name_data.push_back(nhrpclientpurgerequestretries.get_name_leafdata());
    if (nhrpclientdefaultmtu.is_set || is_set(nhrpclientdefaultmtu.yfilter)) leaf_name_data.push_back(nhrpclientdefaultmtu.get_name_leafdata());
    if (nhrpclientholdtime.is_set || is_set(nhrpclientholdtime.yfilter)) leaf_name_data.push_back(nhrpclientholdtime.get_name_leafdata());
    if (nhrpclientrequestid.is_set || is_set(nhrpclientrequestid.yfilter)) leaf_name_data.push_back(nhrpclientrequestid.get_name_leafdata());
    if (nhrpclientstoragetype.is_set || is_set(nhrpclientstoragetype.yfilter)) leaf_name_data.push_back(nhrpclientstoragetype.get_name_leafdata());
    if (nhrpclientrowstatus.is_set || is_set(nhrpclientrowstatus.yfilter)) leaf_name_data.push_back(nhrpclientrowstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NHRPMIB::Nhrpclienttable::Nhrpcliententry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NHRPMIB::Nhrpclienttable::Nhrpcliententry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void NHRPMIB::Nhrpclienttable::Nhrpcliententry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nhrpClientIndex")
    {
        nhrpclientindex = value;
        nhrpclientindex.value_namespace = name_space;
        nhrpclientindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nhrpClientInternetworkAddrType")
    {
        nhrpclientinternetworkaddrtype = value;
        nhrpclientinternetworkaddrtype.value_namespace = name_space;
        nhrpclientinternetworkaddrtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nhrpClientInternetworkAddr")
    {
        nhrpclientinternetworkaddr = value;
        nhrpclientinternetworkaddr.value_namespace = name_space;
        nhrpclientinternetworkaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nhrpClientNbmaAddrType")
    {
        nhrpclientnbmaaddrtype = value;
        nhrpclientnbmaaddrtype.value_namespace = name_space;
        nhrpclientnbmaaddrtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nhrpClientNbmaAddr")
    {
        nhrpclientnbmaaddr = value;
        nhrpclientnbmaaddr.value_namespace = name_space;
        nhrpclientnbmaaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nhrpClientNbmaSubaddr")
    {
        nhrpclientnbmasubaddr = value;
        nhrpclientnbmasubaddr.value_namespace = name_space;
        nhrpclientnbmasubaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nhrpClientInitialRequestTimeout")
    {
        nhrpclientinitialrequesttimeout = value;
        nhrpclientinitialrequesttimeout.value_namespace = name_space;
        nhrpclientinitialrequesttimeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nhrpClientRegistrationRequestRetries")
    {
        nhrpclientregistrationrequestretries = value;
        nhrpclientregistrationrequestretries.value_namespace = name_space;
        nhrpclientregistrationrequestretries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nhrpClientResolutionRequestRetries")
    {
        nhrpclientresolutionrequestretries = value;
        nhrpclientresolutionrequestretries.value_namespace = name_space;
        nhrpclientresolutionrequestretries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nhrpClientPurgeRequestRetries")
    {
        nhrpclientpurgerequestretries = value;
        nhrpclientpurgerequestretries.value_namespace = name_space;
        nhrpclientpurgerequestretries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nhrpClientDefaultMtu")
    {
        nhrpclientdefaultmtu = value;
        nhrpclientdefaultmtu.value_namespace = name_space;
        nhrpclientdefaultmtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nhrpClientHoldTime")
    {
        nhrpclientholdtime = value;
        nhrpclientholdtime.value_namespace = name_space;
        nhrpclientholdtime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nhrpClientRequestID")
    {
        nhrpclientrequestid = value;
        nhrpclientrequestid.value_namespace = name_space;
        nhrpclientrequestid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nhrpClientStorageType")
    {
        nhrpclientstoragetype = value;
        nhrpclientstoragetype.value_namespace = name_space;
        nhrpclientstoragetype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nhrpClientRowStatus")
    {
        nhrpclientrowstatus = value;
        nhrpclientrowstatus.value_namespace = name_space;
        nhrpclientrowstatus.value_namespace_prefix = name_space_prefix;
    }
}

void NHRPMIB::Nhrpclienttable::Nhrpcliententry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nhrpClientIndex")
    {
        nhrpclientindex.yfilter = yfilter;
    }
    if(value_path == "nhrpClientInternetworkAddrType")
    {
        nhrpclientinternetworkaddrtype.yfilter = yfilter;
    }
    if(value_path == "nhrpClientInternetworkAddr")
    {
        nhrpclientinternetworkaddr.yfilter = yfilter;
    }
    if(value_path == "nhrpClientNbmaAddrType")
    {
        nhrpclientnbmaaddrtype.yfilter = yfilter;
    }
    if(value_path == "nhrpClientNbmaAddr")
    {
        nhrpclientnbmaaddr.yfilter = yfilter;
    }
    if(value_path == "nhrpClientNbmaSubaddr")
    {
        nhrpclientnbmasubaddr.yfilter = yfilter;
    }
    if(value_path == "nhrpClientInitialRequestTimeout")
    {
        nhrpclientinitialrequesttimeout.yfilter = yfilter;
    }
    if(value_path == "nhrpClientRegistrationRequestRetries")
    {
        nhrpclientregistrationrequestretries.yfilter = yfilter;
    }
    if(value_path == "nhrpClientResolutionRequestRetries")
    {
        nhrpclientresolutionrequestretries.yfilter = yfilter;
    }
    if(value_path == "nhrpClientPurgeRequestRetries")
    {
        nhrpclientpurgerequestretries.yfilter = yfilter;
    }
    if(value_path == "nhrpClientDefaultMtu")
    {
        nhrpclientdefaultmtu.yfilter = yfilter;
    }
    if(value_path == "nhrpClientHoldTime")
    {
        nhrpclientholdtime.yfilter = yfilter;
    }
    if(value_path == "nhrpClientRequestID")
    {
        nhrpclientrequestid.yfilter = yfilter;
    }
    if(value_path == "nhrpClientStorageType")
    {
        nhrpclientstoragetype.yfilter = yfilter;
    }
    if(value_path == "nhrpClientRowStatus")
    {
        nhrpclientrowstatus.yfilter = yfilter;
    }
}

bool NHRPMIB::Nhrpclienttable::Nhrpcliententry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nhrpClientIndex" || name == "nhrpClientInternetworkAddrType" || name == "nhrpClientInternetworkAddr" || name == "nhrpClientNbmaAddrType" || name == "nhrpClientNbmaAddr" || name == "nhrpClientNbmaSubaddr" || name == "nhrpClientInitialRequestTimeout" || name == "nhrpClientRegistrationRequestRetries" || name == "nhrpClientResolutionRequestRetries" || name == "nhrpClientPurgeRequestRetries" || name == "nhrpClientDefaultMtu" || name == "nhrpClientHoldTime" || name == "nhrpClientRequestID" || name == "nhrpClientStorageType" || name == "nhrpClientRowStatus")
        return true;
    return false;
}

NHRPMIB::Nhrpclientregistrationtable::Nhrpclientregistrationtable()
{

    yang_name = "nhrpClientRegistrationTable"; yang_parent_name = "NHRP-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

NHRPMIB::Nhrpclientregistrationtable::~Nhrpclientregistrationtable()
{
}

bool NHRPMIB::Nhrpclientregistrationtable::has_data() const
{
    for (std::size_t index=0; index<nhrpclientregistrationentry.size(); index++)
    {
        if(nhrpclientregistrationentry[index]->has_data())
            return true;
    }
    return false;
}

bool NHRPMIB::Nhrpclientregistrationtable::has_operation() const
{
    for (std::size_t index=0; index<nhrpclientregistrationentry.size(); index++)
    {
        if(nhrpclientregistrationentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string NHRPMIB::Nhrpclientregistrationtable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "NHRP-MIB:NHRP-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string NHRPMIB::Nhrpclientregistrationtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nhrpClientRegistrationTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NHRPMIB::Nhrpclientregistrationtable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> NHRPMIB::Nhrpclientregistrationtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nhrpClientRegistrationEntry")
    {
        auto c = std::make_shared<NHRPMIB::Nhrpclientregistrationtable::Nhrpclientregistrationentry>();
        c->parent = this;
        nhrpclientregistrationentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NHRPMIB::Nhrpclientregistrationtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : nhrpclientregistrationentry)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void NHRPMIB::Nhrpclientregistrationtable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NHRPMIB::Nhrpclientregistrationtable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NHRPMIB::Nhrpclientregistrationtable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nhrpClientRegistrationEntry")
        return true;
    return false;
}

NHRPMIB::Nhrpclientregistrationtable::Nhrpclientregistrationentry::Nhrpclientregistrationentry()
    :
    nhrpclientindex{YType::str, "nhrpClientIndex"},
    nhrpclientregindex{YType::uint32, "nhrpClientRegIndex"},
    nhrpclientreguniqueness{YType::enumeration, "nhrpClientRegUniqueness"},
    nhrpclientregstate{YType::enumeration, "nhrpClientRegState"},
    nhrpclientregrowstatus{YType::enumeration, "nhrpClientRegRowStatus"}
{

    yang_name = "nhrpClientRegistrationEntry"; yang_parent_name = "nhrpClientRegistrationTable"; is_top_level_class = false; has_list_ancestor = false;
}

NHRPMIB::Nhrpclientregistrationtable::Nhrpclientregistrationentry::~Nhrpclientregistrationentry()
{
}

bool NHRPMIB::Nhrpclientregistrationtable::Nhrpclientregistrationentry::has_data() const
{
    return nhrpclientindex.is_set
	|| nhrpclientregindex.is_set
	|| nhrpclientreguniqueness.is_set
	|| nhrpclientregstate.is_set
	|| nhrpclientregrowstatus.is_set;
}

bool NHRPMIB::Nhrpclientregistrationtable::Nhrpclientregistrationentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nhrpclientindex.yfilter)
	|| ydk::is_set(nhrpclientregindex.yfilter)
	|| ydk::is_set(nhrpclientreguniqueness.yfilter)
	|| ydk::is_set(nhrpclientregstate.yfilter)
	|| ydk::is_set(nhrpclientregrowstatus.yfilter);
}

std::string NHRPMIB::Nhrpclientregistrationtable::Nhrpclientregistrationentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "NHRP-MIB:NHRP-MIB/nhrpClientRegistrationTable/" << get_segment_path();
    return path_buffer.str();
}

std::string NHRPMIB::Nhrpclientregistrationtable::Nhrpclientregistrationentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nhrpClientRegistrationEntry" <<"[nhrpClientIndex='" <<nhrpclientindex <<"']" <<"[nhrpClientRegIndex='" <<nhrpclientregindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NHRPMIB::Nhrpclientregistrationtable::Nhrpclientregistrationentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nhrpclientindex.is_set || is_set(nhrpclientindex.yfilter)) leaf_name_data.push_back(nhrpclientindex.get_name_leafdata());
    if (nhrpclientregindex.is_set || is_set(nhrpclientregindex.yfilter)) leaf_name_data.push_back(nhrpclientregindex.get_name_leafdata());
    if (nhrpclientreguniqueness.is_set || is_set(nhrpclientreguniqueness.yfilter)) leaf_name_data.push_back(nhrpclientreguniqueness.get_name_leafdata());
    if (nhrpclientregstate.is_set || is_set(nhrpclientregstate.yfilter)) leaf_name_data.push_back(nhrpclientregstate.get_name_leafdata());
    if (nhrpclientregrowstatus.is_set || is_set(nhrpclientregrowstatus.yfilter)) leaf_name_data.push_back(nhrpclientregrowstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NHRPMIB::Nhrpclientregistrationtable::Nhrpclientregistrationentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NHRPMIB::Nhrpclientregistrationtable::Nhrpclientregistrationentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void NHRPMIB::Nhrpclientregistrationtable::Nhrpclientregistrationentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nhrpClientIndex")
    {
        nhrpclientindex = value;
        nhrpclientindex.value_namespace = name_space;
        nhrpclientindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nhrpClientRegIndex")
    {
        nhrpclientregindex = value;
        nhrpclientregindex.value_namespace = name_space;
        nhrpclientregindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nhrpClientRegUniqueness")
    {
        nhrpclientreguniqueness = value;
        nhrpclientreguniqueness.value_namespace = name_space;
        nhrpclientreguniqueness.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nhrpClientRegState")
    {
        nhrpclientregstate = value;
        nhrpclientregstate.value_namespace = name_space;
        nhrpclientregstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nhrpClientRegRowStatus")
    {
        nhrpclientregrowstatus = value;
        nhrpclientregrowstatus.value_namespace = name_space;
        nhrpclientregrowstatus.value_namespace_prefix = name_space_prefix;
    }
}

void NHRPMIB::Nhrpclientregistrationtable::Nhrpclientregistrationentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nhrpClientIndex")
    {
        nhrpclientindex.yfilter = yfilter;
    }
    if(value_path == "nhrpClientRegIndex")
    {
        nhrpclientregindex.yfilter = yfilter;
    }
    if(value_path == "nhrpClientRegUniqueness")
    {
        nhrpclientreguniqueness.yfilter = yfilter;
    }
    if(value_path == "nhrpClientRegState")
    {
        nhrpclientregstate.yfilter = yfilter;
    }
    if(value_path == "nhrpClientRegRowStatus")
    {
        nhrpclientregrowstatus.yfilter = yfilter;
    }
}

bool NHRPMIB::Nhrpclientregistrationtable::Nhrpclientregistrationentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nhrpClientIndex" || name == "nhrpClientRegIndex" || name == "nhrpClientRegUniqueness" || name == "nhrpClientRegState" || name == "nhrpClientRegRowStatus")
        return true;
    return false;
}

NHRPMIB::Nhrpclientnhstable::Nhrpclientnhstable()
{

    yang_name = "nhrpClientNhsTable"; yang_parent_name = "NHRP-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

NHRPMIB::Nhrpclientnhstable::~Nhrpclientnhstable()
{
}

bool NHRPMIB::Nhrpclientnhstable::has_data() const
{
    for (std::size_t index=0; index<nhrpclientnhsentry.size(); index++)
    {
        if(nhrpclientnhsentry[index]->has_data())
            return true;
    }
    return false;
}

bool NHRPMIB::Nhrpclientnhstable::has_operation() const
{
    for (std::size_t index=0; index<nhrpclientnhsentry.size(); index++)
    {
        if(nhrpclientnhsentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string NHRPMIB::Nhrpclientnhstable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "NHRP-MIB:NHRP-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string NHRPMIB::Nhrpclientnhstable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nhrpClientNhsTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NHRPMIB::Nhrpclientnhstable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> NHRPMIB::Nhrpclientnhstable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nhrpClientNhsEntry")
    {
        auto c = std::make_shared<NHRPMIB::Nhrpclientnhstable::Nhrpclientnhsentry>();
        c->parent = this;
        nhrpclientnhsentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NHRPMIB::Nhrpclientnhstable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : nhrpclientnhsentry)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void NHRPMIB::Nhrpclientnhstable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NHRPMIB::Nhrpclientnhstable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NHRPMIB::Nhrpclientnhstable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nhrpClientNhsEntry")
        return true;
    return false;
}

NHRPMIB::Nhrpclientnhstable::Nhrpclientnhsentry::Nhrpclientnhsentry()
    :
    nhrpclientindex{YType::str, "nhrpClientIndex"},
    nhrpclientnhsindex{YType::uint32, "nhrpClientNhsIndex"},
    nhrpclientnhsinternetworkaddrtype{YType::enumeration, "nhrpClientNhsInternetworkAddrType"},
    nhrpclientnhsinternetworkaddr{YType::str, "nhrpClientNhsInternetworkAddr"},
    nhrpclientnhsnbmaaddrtype{YType::enumeration, "nhrpClientNhsNbmaAddrType"},
    nhrpclientnhsnbmaaddr{YType::str, "nhrpClientNhsNbmaAddr"},
    nhrpclientnhsnbmasubaddr{YType::str, "nhrpClientNhsNbmaSubaddr"},
    nhrpclientnhsinuse{YType::boolean, "nhrpClientNhsInUse"},
    nhrpclientnhsrowstatus{YType::enumeration, "nhrpClientNhsRowStatus"}
{

    yang_name = "nhrpClientNhsEntry"; yang_parent_name = "nhrpClientNhsTable"; is_top_level_class = false; has_list_ancestor = false;
}

NHRPMIB::Nhrpclientnhstable::Nhrpclientnhsentry::~Nhrpclientnhsentry()
{
}

bool NHRPMIB::Nhrpclientnhstable::Nhrpclientnhsentry::has_data() const
{
    return nhrpclientindex.is_set
	|| nhrpclientnhsindex.is_set
	|| nhrpclientnhsinternetworkaddrtype.is_set
	|| nhrpclientnhsinternetworkaddr.is_set
	|| nhrpclientnhsnbmaaddrtype.is_set
	|| nhrpclientnhsnbmaaddr.is_set
	|| nhrpclientnhsnbmasubaddr.is_set
	|| nhrpclientnhsinuse.is_set
	|| nhrpclientnhsrowstatus.is_set;
}

bool NHRPMIB::Nhrpclientnhstable::Nhrpclientnhsentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nhrpclientindex.yfilter)
	|| ydk::is_set(nhrpclientnhsindex.yfilter)
	|| ydk::is_set(nhrpclientnhsinternetworkaddrtype.yfilter)
	|| ydk::is_set(nhrpclientnhsinternetworkaddr.yfilter)
	|| ydk::is_set(nhrpclientnhsnbmaaddrtype.yfilter)
	|| ydk::is_set(nhrpclientnhsnbmaaddr.yfilter)
	|| ydk::is_set(nhrpclientnhsnbmasubaddr.yfilter)
	|| ydk::is_set(nhrpclientnhsinuse.yfilter)
	|| ydk::is_set(nhrpclientnhsrowstatus.yfilter);
}

std::string NHRPMIB::Nhrpclientnhstable::Nhrpclientnhsentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "NHRP-MIB:NHRP-MIB/nhrpClientNhsTable/" << get_segment_path();
    return path_buffer.str();
}

std::string NHRPMIB::Nhrpclientnhstable::Nhrpclientnhsentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nhrpClientNhsEntry" <<"[nhrpClientIndex='" <<nhrpclientindex <<"']" <<"[nhrpClientNhsIndex='" <<nhrpclientnhsindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NHRPMIB::Nhrpclientnhstable::Nhrpclientnhsentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nhrpclientindex.is_set || is_set(nhrpclientindex.yfilter)) leaf_name_data.push_back(nhrpclientindex.get_name_leafdata());
    if (nhrpclientnhsindex.is_set || is_set(nhrpclientnhsindex.yfilter)) leaf_name_data.push_back(nhrpclientnhsindex.get_name_leafdata());
    if (nhrpclientnhsinternetworkaddrtype.is_set || is_set(nhrpclientnhsinternetworkaddrtype.yfilter)) leaf_name_data.push_back(nhrpclientnhsinternetworkaddrtype.get_name_leafdata());
    if (nhrpclientnhsinternetworkaddr.is_set || is_set(nhrpclientnhsinternetworkaddr.yfilter)) leaf_name_data.push_back(nhrpclientnhsinternetworkaddr.get_name_leafdata());
    if (nhrpclientnhsnbmaaddrtype.is_set || is_set(nhrpclientnhsnbmaaddrtype.yfilter)) leaf_name_data.push_back(nhrpclientnhsnbmaaddrtype.get_name_leafdata());
    if (nhrpclientnhsnbmaaddr.is_set || is_set(nhrpclientnhsnbmaaddr.yfilter)) leaf_name_data.push_back(nhrpclientnhsnbmaaddr.get_name_leafdata());
    if (nhrpclientnhsnbmasubaddr.is_set || is_set(nhrpclientnhsnbmasubaddr.yfilter)) leaf_name_data.push_back(nhrpclientnhsnbmasubaddr.get_name_leafdata());
    if (nhrpclientnhsinuse.is_set || is_set(nhrpclientnhsinuse.yfilter)) leaf_name_data.push_back(nhrpclientnhsinuse.get_name_leafdata());
    if (nhrpclientnhsrowstatus.is_set || is_set(nhrpclientnhsrowstatus.yfilter)) leaf_name_data.push_back(nhrpclientnhsrowstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NHRPMIB::Nhrpclientnhstable::Nhrpclientnhsentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NHRPMIB::Nhrpclientnhstable::Nhrpclientnhsentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void NHRPMIB::Nhrpclientnhstable::Nhrpclientnhsentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nhrpClientIndex")
    {
        nhrpclientindex = value;
        nhrpclientindex.value_namespace = name_space;
        nhrpclientindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nhrpClientNhsIndex")
    {
        nhrpclientnhsindex = value;
        nhrpclientnhsindex.value_namespace = name_space;
        nhrpclientnhsindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nhrpClientNhsInternetworkAddrType")
    {
        nhrpclientnhsinternetworkaddrtype = value;
        nhrpclientnhsinternetworkaddrtype.value_namespace = name_space;
        nhrpclientnhsinternetworkaddrtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nhrpClientNhsInternetworkAddr")
    {
        nhrpclientnhsinternetworkaddr = value;
        nhrpclientnhsinternetworkaddr.value_namespace = name_space;
        nhrpclientnhsinternetworkaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nhrpClientNhsNbmaAddrType")
    {
        nhrpclientnhsnbmaaddrtype = value;
        nhrpclientnhsnbmaaddrtype.value_namespace = name_space;
        nhrpclientnhsnbmaaddrtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nhrpClientNhsNbmaAddr")
    {
        nhrpclientnhsnbmaaddr = value;
        nhrpclientnhsnbmaaddr.value_namespace = name_space;
        nhrpclientnhsnbmaaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nhrpClientNhsNbmaSubaddr")
    {
        nhrpclientnhsnbmasubaddr = value;
        nhrpclientnhsnbmasubaddr.value_namespace = name_space;
        nhrpclientnhsnbmasubaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nhrpClientNhsInUse")
    {
        nhrpclientnhsinuse = value;
        nhrpclientnhsinuse.value_namespace = name_space;
        nhrpclientnhsinuse.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nhrpClientNhsRowStatus")
    {
        nhrpclientnhsrowstatus = value;
        nhrpclientnhsrowstatus.value_namespace = name_space;
        nhrpclientnhsrowstatus.value_namespace_prefix = name_space_prefix;
    }
}

void NHRPMIB::Nhrpclientnhstable::Nhrpclientnhsentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nhrpClientIndex")
    {
        nhrpclientindex.yfilter = yfilter;
    }
    if(value_path == "nhrpClientNhsIndex")
    {
        nhrpclientnhsindex.yfilter = yfilter;
    }
    if(value_path == "nhrpClientNhsInternetworkAddrType")
    {
        nhrpclientnhsinternetworkaddrtype.yfilter = yfilter;
    }
    if(value_path == "nhrpClientNhsInternetworkAddr")
    {
        nhrpclientnhsinternetworkaddr.yfilter = yfilter;
    }
    if(value_path == "nhrpClientNhsNbmaAddrType")
    {
        nhrpclientnhsnbmaaddrtype.yfilter = yfilter;
    }
    if(value_path == "nhrpClientNhsNbmaAddr")
    {
        nhrpclientnhsnbmaaddr.yfilter = yfilter;
    }
    if(value_path == "nhrpClientNhsNbmaSubaddr")
    {
        nhrpclientnhsnbmasubaddr.yfilter = yfilter;
    }
    if(value_path == "nhrpClientNhsInUse")
    {
        nhrpclientnhsinuse.yfilter = yfilter;
    }
    if(value_path == "nhrpClientNhsRowStatus")
    {
        nhrpclientnhsrowstatus.yfilter = yfilter;
    }
}

bool NHRPMIB::Nhrpclientnhstable::Nhrpclientnhsentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nhrpClientIndex" || name == "nhrpClientNhsIndex" || name == "nhrpClientNhsInternetworkAddrType" || name == "nhrpClientNhsInternetworkAddr" || name == "nhrpClientNhsNbmaAddrType" || name == "nhrpClientNhsNbmaAddr" || name == "nhrpClientNhsNbmaSubaddr" || name == "nhrpClientNhsInUse" || name == "nhrpClientNhsRowStatus")
        return true;
    return false;
}

NHRPMIB::Nhrpclientstattable::Nhrpclientstattable()
{

    yang_name = "nhrpClientStatTable"; yang_parent_name = "NHRP-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

NHRPMIB::Nhrpclientstattable::~Nhrpclientstattable()
{
}

bool NHRPMIB::Nhrpclientstattable::has_data() const
{
    for (std::size_t index=0; index<nhrpclientstatentry.size(); index++)
    {
        if(nhrpclientstatentry[index]->has_data())
            return true;
    }
    return false;
}

bool NHRPMIB::Nhrpclientstattable::has_operation() const
{
    for (std::size_t index=0; index<nhrpclientstatentry.size(); index++)
    {
        if(nhrpclientstatentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string NHRPMIB::Nhrpclientstattable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "NHRP-MIB:NHRP-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string NHRPMIB::Nhrpclientstattable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nhrpClientStatTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NHRPMIB::Nhrpclientstattable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> NHRPMIB::Nhrpclientstattable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nhrpClientStatEntry")
    {
        auto c = std::make_shared<NHRPMIB::Nhrpclientstattable::Nhrpclientstatentry>();
        c->parent = this;
        nhrpclientstatentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NHRPMIB::Nhrpclientstattable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : nhrpclientstatentry)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void NHRPMIB::Nhrpclientstattable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NHRPMIB::Nhrpclientstattable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NHRPMIB::Nhrpclientstattable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nhrpClientStatEntry")
        return true;
    return false;
}

NHRPMIB::Nhrpclientstattable::Nhrpclientstatentry::Nhrpclientstatentry()
    :
    nhrpclientindex{YType::str, "nhrpClientIndex"},
    nhrpclientstattxresolvereq{YType::uint32, "nhrpClientStatTxResolveReq"},
    nhrpclientstatrxresolvereplyack{YType::uint32, "nhrpClientStatRxResolveReplyAck"},
    nhrpclientstatrxresolvereplynakprohibited{YType::uint32, "nhrpClientStatRxResolveReplyNakProhibited"},
    nhrpclientstatrxresolvereplynakinsufresources{YType::uint32, "nhrpClientStatRxResolveReplyNakInsufResources"},
    nhrpclientstatrxresolvereplynaknobinding{YType::uint32, "nhrpClientStatRxResolveReplyNakNoBinding"},
    nhrpclientstatrxresolvereplynaknotunique{YType::uint32, "nhrpClientStatRxResolveReplyNakNotUnique"},
    nhrpclientstattxregisterreq{YType::uint32, "nhrpClientStatTxRegisterReq"},
    nhrpclientstatrxregisterack{YType::uint32, "nhrpClientStatRxRegisterAck"},
    nhrpclientstatrxregisternakprohibited{YType::uint32, "nhrpClientStatRxRegisterNakProhibited"},
    nhrpclientstatrxregisternakinsufresources{YType::uint32, "nhrpClientStatRxRegisterNakInsufResources"},
    nhrpclientstatrxregisternakalreadyreg{YType::uint32, "nhrpClientStatRxRegisterNakAlreadyReg"},
    nhrpclientstatrxpurgereq{YType::uint32, "nhrpClientStatRxPurgeReq"},
    nhrpclientstattxpurgereq{YType::uint32, "nhrpClientStatTxPurgeReq"},
    nhrpclientstatrxpurgereply{YType::uint32, "nhrpClientStatRxPurgeReply"},
    nhrpclientstattxpurgereply{YType::uint32, "nhrpClientStatTxPurgeReply"},
    nhrpclientstattxerrorindication{YType::uint32, "nhrpClientStatTxErrorIndication"},
    nhrpclientstatrxerrunrecognizedextension{YType::uint32, "nhrpClientStatRxErrUnrecognizedExtension"},
    nhrpclientstatrxerrloopdetected{YType::uint32, "nhrpClientStatRxErrLoopDetected"},
    nhrpclientstatrxerrprotoaddrunreachable{YType::uint32, "nhrpClientStatRxErrProtoAddrUnreachable"},
    nhrpclientstatrxerrprotoerror{YType::uint32, "nhrpClientStatRxErrProtoError"},
    nhrpclientstatrxerrsdusizeexceeded{YType::uint32, "nhrpClientStatRxErrSduSizeExceeded"},
    nhrpclientstatrxerrinvalidextension{YType::uint32, "nhrpClientStatRxErrInvalidExtension"},
    nhrpclientstatrxerrauthenticationfailure{YType::uint32, "nhrpClientStatRxErrAuthenticationFailure"},
    nhrpclientstatrxerrhopcountexceeded{YType::uint32, "nhrpClientStatRxErrHopCountExceeded"},
    nhrpclientstatdiscontinuitytime{YType::uint32, "nhrpClientStatDiscontinuityTime"}
{

    yang_name = "nhrpClientStatEntry"; yang_parent_name = "nhrpClientStatTable"; is_top_level_class = false; has_list_ancestor = false;
}

NHRPMIB::Nhrpclientstattable::Nhrpclientstatentry::~Nhrpclientstatentry()
{
}

bool NHRPMIB::Nhrpclientstattable::Nhrpclientstatentry::has_data() const
{
    return nhrpclientindex.is_set
	|| nhrpclientstattxresolvereq.is_set
	|| nhrpclientstatrxresolvereplyack.is_set
	|| nhrpclientstatrxresolvereplynakprohibited.is_set
	|| nhrpclientstatrxresolvereplynakinsufresources.is_set
	|| nhrpclientstatrxresolvereplynaknobinding.is_set
	|| nhrpclientstatrxresolvereplynaknotunique.is_set
	|| nhrpclientstattxregisterreq.is_set
	|| nhrpclientstatrxregisterack.is_set
	|| nhrpclientstatrxregisternakprohibited.is_set
	|| nhrpclientstatrxregisternakinsufresources.is_set
	|| nhrpclientstatrxregisternakalreadyreg.is_set
	|| nhrpclientstatrxpurgereq.is_set
	|| nhrpclientstattxpurgereq.is_set
	|| nhrpclientstatrxpurgereply.is_set
	|| nhrpclientstattxpurgereply.is_set
	|| nhrpclientstattxerrorindication.is_set
	|| nhrpclientstatrxerrunrecognizedextension.is_set
	|| nhrpclientstatrxerrloopdetected.is_set
	|| nhrpclientstatrxerrprotoaddrunreachable.is_set
	|| nhrpclientstatrxerrprotoerror.is_set
	|| nhrpclientstatrxerrsdusizeexceeded.is_set
	|| nhrpclientstatrxerrinvalidextension.is_set
	|| nhrpclientstatrxerrauthenticationfailure.is_set
	|| nhrpclientstatrxerrhopcountexceeded.is_set
	|| nhrpclientstatdiscontinuitytime.is_set;
}

bool NHRPMIB::Nhrpclientstattable::Nhrpclientstatentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nhrpclientindex.yfilter)
	|| ydk::is_set(nhrpclientstattxresolvereq.yfilter)
	|| ydk::is_set(nhrpclientstatrxresolvereplyack.yfilter)
	|| ydk::is_set(nhrpclientstatrxresolvereplynakprohibited.yfilter)
	|| ydk::is_set(nhrpclientstatrxresolvereplynakinsufresources.yfilter)
	|| ydk::is_set(nhrpclientstatrxresolvereplynaknobinding.yfilter)
	|| ydk::is_set(nhrpclientstatrxresolvereplynaknotunique.yfilter)
	|| ydk::is_set(nhrpclientstattxregisterreq.yfilter)
	|| ydk::is_set(nhrpclientstatrxregisterack.yfilter)
	|| ydk::is_set(nhrpclientstatrxregisternakprohibited.yfilter)
	|| ydk::is_set(nhrpclientstatrxregisternakinsufresources.yfilter)
	|| ydk::is_set(nhrpclientstatrxregisternakalreadyreg.yfilter)
	|| ydk::is_set(nhrpclientstatrxpurgereq.yfilter)
	|| ydk::is_set(nhrpclientstattxpurgereq.yfilter)
	|| ydk::is_set(nhrpclientstatrxpurgereply.yfilter)
	|| ydk::is_set(nhrpclientstattxpurgereply.yfilter)
	|| ydk::is_set(nhrpclientstattxerrorindication.yfilter)
	|| ydk::is_set(nhrpclientstatrxerrunrecognizedextension.yfilter)
	|| ydk::is_set(nhrpclientstatrxerrloopdetected.yfilter)
	|| ydk::is_set(nhrpclientstatrxerrprotoaddrunreachable.yfilter)
	|| ydk::is_set(nhrpclientstatrxerrprotoerror.yfilter)
	|| ydk::is_set(nhrpclientstatrxerrsdusizeexceeded.yfilter)
	|| ydk::is_set(nhrpclientstatrxerrinvalidextension.yfilter)
	|| ydk::is_set(nhrpclientstatrxerrauthenticationfailure.yfilter)
	|| ydk::is_set(nhrpclientstatrxerrhopcountexceeded.yfilter)
	|| ydk::is_set(nhrpclientstatdiscontinuitytime.yfilter);
}

std::string NHRPMIB::Nhrpclientstattable::Nhrpclientstatentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "NHRP-MIB:NHRP-MIB/nhrpClientStatTable/" << get_segment_path();
    return path_buffer.str();
}

std::string NHRPMIB::Nhrpclientstattable::Nhrpclientstatentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nhrpClientStatEntry" <<"[nhrpClientIndex='" <<nhrpclientindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NHRPMIB::Nhrpclientstattable::Nhrpclientstatentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nhrpclientindex.is_set || is_set(nhrpclientindex.yfilter)) leaf_name_data.push_back(nhrpclientindex.get_name_leafdata());
    if (nhrpclientstattxresolvereq.is_set || is_set(nhrpclientstattxresolvereq.yfilter)) leaf_name_data.push_back(nhrpclientstattxresolvereq.get_name_leafdata());
    if (nhrpclientstatrxresolvereplyack.is_set || is_set(nhrpclientstatrxresolvereplyack.yfilter)) leaf_name_data.push_back(nhrpclientstatrxresolvereplyack.get_name_leafdata());
    if (nhrpclientstatrxresolvereplynakprohibited.is_set || is_set(nhrpclientstatrxresolvereplynakprohibited.yfilter)) leaf_name_data.push_back(nhrpclientstatrxresolvereplynakprohibited.get_name_leafdata());
    if (nhrpclientstatrxresolvereplynakinsufresources.is_set || is_set(nhrpclientstatrxresolvereplynakinsufresources.yfilter)) leaf_name_data.push_back(nhrpclientstatrxresolvereplynakinsufresources.get_name_leafdata());
    if (nhrpclientstatrxresolvereplynaknobinding.is_set || is_set(nhrpclientstatrxresolvereplynaknobinding.yfilter)) leaf_name_data.push_back(nhrpclientstatrxresolvereplynaknobinding.get_name_leafdata());
    if (nhrpclientstatrxresolvereplynaknotunique.is_set || is_set(nhrpclientstatrxresolvereplynaknotunique.yfilter)) leaf_name_data.push_back(nhrpclientstatrxresolvereplynaknotunique.get_name_leafdata());
    if (nhrpclientstattxregisterreq.is_set || is_set(nhrpclientstattxregisterreq.yfilter)) leaf_name_data.push_back(nhrpclientstattxregisterreq.get_name_leafdata());
    if (nhrpclientstatrxregisterack.is_set || is_set(nhrpclientstatrxregisterack.yfilter)) leaf_name_data.push_back(nhrpclientstatrxregisterack.get_name_leafdata());
    if (nhrpclientstatrxregisternakprohibited.is_set || is_set(nhrpclientstatrxregisternakprohibited.yfilter)) leaf_name_data.push_back(nhrpclientstatrxregisternakprohibited.get_name_leafdata());
    if (nhrpclientstatrxregisternakinsufresources.is_set || is_set(nhrpclientstatrxregisternakinsufresources.yfilter)) leaf_name_data.push_back(nhrpclientstatrxregisternakinsufresources.get_name_leafdata());
    if (nhrpclientstatrxregisternakalreadyreg.is_set || is_set(nhrpclientstatrxregisternakalreadyreg.yfilter)) leaf_name_data.push_back(nhrpclientstatrxregisternakalreadyreg.get_name_leafdata());
    if (nhrpclientstatrxpurgereq.is_set || is_set(nhrpclientstatrxpurgereq.yfilter)) leaf_name_data.push_back(nhrpclientstatrxpurgereq.get_name_leafdata());
    if (nhrpclientstattxpurgereq.is_set || is_set(nhrpclientstattxpurgereq.yfilter)) leaf_name_data.push_back(nhrpclientstattxpurgereq.get_name_leafdata());
    if (nhrpclientstatrxpurgereply.is_set || is_set(nhrpclientstatrxpurgereply.yfilter)) leaf_name_data.push_back(nhrpclientstatrxpurgereply.get_name_leafdata());
    if (nhrpclientstattxpurgereply.is_set || is_set(nhrpclientstattxpurgereply.yfilter)) leaf_name_data.push_back(nhrpclientstattxpurgereply.get_name_leafdata());
    if (nhrpclientstattxerrorindication.is_set || is_set(nhrpclientstattxerrorindication.yfilter)) leaf_name_data.push_back(nhrpclientstattxerrorindication.get_name_leafdata());
    if (nhrpclientstatrxerrunrecognizedextension.is_set || is_set(nhrpclientstatrxerrunrecognizedextension.yfilter)) leaf_name_data.push_back(nhrpclientstatrxerrunrecognizedextension.get_name_leafdata());
    if (nhrpclientstatrxerrloopdetected.is_set || is_set(nhrpclientstatrxerrloopdetected.yfilter)) leaf_name_data.push_back(nhrpclientstatrxerrloopdetected.get_name_leafdata());
    if (nhrpclientstatrxerrprotoaddrunreachable.is_set || is_set(nhrpclientstatrxerrprotoaddrunreachable.yfilter)) leaf_name_data.push_back(nhrpclientstatrxerrprotoaddrunreachable.get_name_leafdata());
    if (nhrpclientstatrxerrprotoerror.is_set || is_set(nhrpclientstatrxerrprotoerror.yfilter)) leaf_name_data.push_back(nhrpclientstatrxerrprotoerror.get_name_leafdata());
    if (nhrpclientstatrxerrsdusizeexceeded.is_set || is_set(nhrpclientstatrxerrsdusizeexceeded.yfilter)) leaf_name_data.push_back(nhrpclientstatrxerrsdusizeexceeded.get_name_leafdata());
    if (nhrpclientstatrxerrinvalidextension.is_set || is_set(nhrpclientstatrxerrinvalidextension.yfilter)) leaf_name_data.push_back(nhrpclientstatrxerrinvalidextension.get_name_leafdata());
    if (nhrpclientstatrxerrauthenticationfailure.is_set || is_set(nhrpclientstatrxerrauthenticationfailure.yfilter)) leaf_name_data.push_back(nhrpclientstatrxerrauthenticationfailure.get_name_leafdata());
    if (nhrpclientstatrxerrhopcountexceeded.is_set || is_set(nhrpclientstatrxerrhopcountexceeded.yfilter)) leaf_name_data.push_back(nhrpclientstatrxerrhopcountexceeded.get_name_leafdata());
    if (nhrpclientstatdiscontinuitytime.is_set || is_set(nhrpclientstatdiscontinuitytime.yfilter)) leaf_name_data.push_back(nhrpclientstatdiscontinuitytime.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NHRPMIB::Nhrpclientstattable::Nhrpclientstatentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NHRPMIB::Nhrpclientstattable::Nhrpclientstatentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void NHRPMIB::Nhrpclientstattable::Nhrpclientstatentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nhrpClientIndex")
    {
        nhrpclientindex = value;
        nhrpclientindex.value_namespace = name_space;
        nhrpclientindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nhrpClientStatTxResolveReq")
    {
        nhrpclientstattxresolvereq = value;
        nhrpclientstattxresolvereq.value_namespace = name_space;
        nhrpclientstattxresolvereq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nhrpClientStatRxResolveReplyAck")
    {
        nhrpclientstatrxresolvereplyack = value;
        nhrpclientstatrxresolvereplyack.value_namespace = name_space;
        nhrpclientstatrxresolvereplyack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nhrpClientStatRxResolveReplyNakProhibited")
    {
        nhrpclientstatrxresolvereplynakprohibited = value;
        nhrpclientstatrxresolvereplynakprohibited.value_namespace = name_space;
        nhrpclientstatrxresolvereplynakprohibited.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nhrpClientStatRxResolveReplyNakInsufResources")
    {
        nhrpclientstatrxresolvereplynakinsufresources = value;
        nhrpclientstatrxresolvereplynakinsufresources.value_namespace = name_space;
        nhrpclientstatrxresolvereplynakinsufresources.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nhrpClientStatRxResolveReplyNakNoBinding")
    {
        nhrpclientstatrxresolvereplynaknobinding = value;
        nhrpclientstatrxresolvereplynaknobinding.value_namespace = name_space;
        nhrpclientstatrxresolvereplynaknobinding.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nhrpClientStatRxResolveReplyNakNotUnique")
    {
        nhrpclientstatrxresolvereplynaknotunique = value;
        nhrpclientstatrxresolvereplynaknotunique.value_namespace = name_space;
        nhrpclientstatrxresolvereplynaknotunique.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nhrpClientStatTxRegisterReq")
    {
        nhrpclientstattxregisterreq = value;
        nhrpclientstattxregisterreq.value_namespace = name_space;
        nhrpclientstattxregisterreq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nhrpClientStatRxRegisterAck")
    {
        nhrpclientstatrxregisterack = value;
        nhrpclientstatrxregisterack.value_namespace = name_space;
        nhrpclientstatrxregisterack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nhrpClientStatRxRegisterNakProhibited")
    {
        nhrpclientstatrxregisternakprohibited = value;
        nhrpclientstatrxregisternakprohibited.value_namespace = name_space;
        nhrpclientstatrxregisternakprohibited.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nhrpClientStatRxRegisterNakInsufResources")
    {
        nhrpclientstatrxregisternakinsufresources = value;
        nhrpclientstatrxregisternakinsufresources.value_namespace = name_space;
        nhrpclientstatrxregisternakinsufresources.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nhrpClientStatRxRegisterNakAlreadyReg")
    {
        nhrpclientstatrxregisternakalreadyreg = value;
        nhrpclientstatrxregisternakalreadyreg.value_namespace = name_space;
        nhrpclientstatrxregisternakalreadyreg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nhrpClientStatRxPurgeReq")
    {
        nhrpclientstatrxpurgereq = value;
        nhrpclientstatrxpurgereq.value_namespace = name_space;
        nhrpclientstatrxpurgereq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nhrpClientStatTxPurgeReq")
    {
        nhrpclientstattxpurgereq = value;
        nhrpclientstattxpurgereq.value_namespace = name_space;
        nhrpclientstattxpurgereq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nhrpClientStatRxPurgeReply")
    {
        nhrpclientstatrxpurgereply = value;
        nhrpclientstatrxpurgereply.value_namespace = name_space;
        nhrpclientstatrxpurgereply.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nhrpClientStatTxPurgeReply")
    {
        nhrpclientstattxpurgereply = value;
        nhrpclientstattxpurgereply.value_namespace = name_space;
        nhrpclientstattxpurgereply.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nhrpClientStatTxErrorIndication")
    {
        nhrpclientstattxerrorindication = value;
        nhrpclientstattxerrorindication.value_namespace = name_space;
        nhrpclientstattxerrorindication.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nhrpClientStatRxErrUnrecognizedExtension")
    {
        nhrpclientstatrxerrunrecognizedextension = value;
        nhrpclientstatrxerrunrecognizedextension.value_namespace = name_space;
        nhrpclientstatrxerrunrecognizedextension.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nhrpClientStatRxErrLoopDetected")
    {
        nhrpclientstatrxerrloopdetected = value;
        nhrpclientstatrxerrloopdetected.value_namespace = name_space;
        nhrpclientstatrxerrloopdetected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nhrpClientStatRxErrProtoAddrUnreachable")
    {
        nhrpclientstatrxerrprotoaddrunreachable = value;
        nhrpclientstatrxerrprotoaddrunreachable.value_namespace = name_space;
        nhrpclientstatrxerrprotoaddrunreachable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nhrpClientStatRxErrProtoError")
    {
        nhrpclientstatrxerrprotoerror = value;
        nhrpclientstatrxerrprotoerror.value_namespace = name_space;
        nhrpclientstatrxerrprotoerror.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nhrpClientStatRxErrSduSizeExceeded")
    {
        nhrpclientstatrxerrsdusizeexceeded = value;
        nhrpclientstatrxerrsdusizeexceeded.value_namespace = name_space;
        nhrpclientstatrxerrsdusizeexceeded.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nhrpClientStatRxErrInvalidExtension")
    {
        nhrpclientstatrxerrinvalidextension = value;
        nhrpclientstatrxerrinvalidextension.value_namespace = name_space;
        nhrpclientstatrxerrinvalidextension.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nhrpClientStatRxErrAuthenticationFailure")
    {
        nhrpclientstatrxerrauthenticationfailure = value;
        nhrpclientstatrxerrauthenticationfailure.value_namespace = name_space;
        nhrpclientstatrxerrauthenticationfailure.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nhrpClientStatRxErrHopCountExceeded")
    {
        nhrpclientstatrxerrhopcountexceeded = value;
        nhrpclientstatrxerrhopcountexceeded.value_namespace = name_space;
        nhrpclientstatrxerrhopcountexceeded.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nhrpClientStatDiscontinuityTime")
    {
        nhrpclientstatdiscontinuitytime = value;
        nhrpclientstatdiscontinuitytime.value_namespace = name_space;
        nhrpclientstatdiscontinuitytime.value_namespace_prefix = name_space_prefix;
    }
}

void NHRPMIB::Nhrpclientstattable::Nhrpclientstatentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nhrpClientIndex")
    {
        nhrpclientindex.yfilter = yfilter;
    }
    if(value_path == "nhrpClientStatTxResolveReq")
    {
        nhrpclientstattxresolvereq.yfilter = yfilter;
    }
    if(value_path == "nhrpClientStatRxResolveReplyAck")
    {
        nhrpclientstatrxresolvereplyack.yfilter = yfilter;
    }
    if(value_path == "nhrpClientStatRxResolveReplyNakProhibited")
    {
        nhrpclientstatrxresolvereplynakprohibited.yfilter = yfilter;
    }
    if(value_path == "nhrpClientStatRxResolveReplyNakInsufResources")
    {
        nhrpclientstatrxresolvereplynakinsufresources.yfilter = yfilter;
    }
    if(value_path == "nhrpClientStatRxResolveReplyNakNoBinding")
    {
        nhrpclientstatrxresolvereplynaknobinding.yfilter = yfilter;
    }
    if(value_path == "nhrpClientStatRxResolveReplyNakNotUnique")
    {
        nhrpclientstatrxresolvereplynaknotunique.yfilter = yfilter;
    }
    if(value_path == "nhrpClientStatTxRegisterReq")
    {
        nhrpclientstattxregisterreq.yfilter = yfilter;
    }
    if(value_path == "nhrpClientStatRxRegisterAck")
    {
        nhrpclientstatrxregisterack.yfilter = yfilter;
    }
    if(value_path == "nhrpClientStatRxRegisterNakProhibited")
    {
        nhrpclientstatrxregisternakprohibited.yfilter = yfilter;
    }
    if(value_path == "nhrpClientStatRxRegisterNakInsufResources")
    {
        nhrpclientstatrxregisternakinsufresources.yfilter = yfilter;
    }
    if(value_path == "nhrpClientStatRxRegisterNakAlreadyReg")
    {
        nhrpclientstatrxregisternakalreadyreg.yfilter = yfilter;
    }
    if(value_path == "nhrpClientStatRxPurgeReq")
    {
        nhrpclientstatrxpurgereq.yfilter = yfilter;
    }
    if(value_path == "nhrpClientStatTxPurgeReq")
    {
        nhrpclientstattxpurgereq.yfilter = yfilter;
    }
    if(value_path == "nhrpClientStatRxPurgeReply")
    {
        nhrpclientstatrxpurgereply.yfilter = yfilter;
    }
    if(value_path == "nhrpClientStatTxPurgeReply")
    {
        nhrpclientstattxpurgereply.yfilter = yfilter;
    }
    if(value_path == "nhrpClientStatTxErrorIndication")
    {
        nhrpclientstattxerrorindication.yfilter = yfilter;
    }
    if(value_path == "nhrpClientStatRxErrUnrecognizedExtension")
    {
        nhrpclientstatrxerrunrecognizedextension.yfilter = yfilter;
    }
    if(value_path == "nhrpClientStatRxErrLoopDetected")
    {
        nhrpclientstatrxerrloopdetected.yfilter = yfilter;
    }
    if(value_path == "nhrpClientStatRxErrProtoAddrUnreachable")
    {
        nhrpclientstatrxerrprotoaddrunreachable.yfilter = yfilter;
    }
    if(value_path == "nhrpClientStatRxErrProtoError")
    {
        nhrpclientstatrxerrprotoerror.yfilter = yfilter;
    }
    if(value_path == "nhrpClientStatRxErrSduSizeExceeded")
    {
        nhrpclientstatrxerrsdusizeexceeded.yfilter = yfilter;
    }
    if(value_path == "nhrpClientStatRxErrInvalidExtension")
    {
        nhrpclientstatrxerrinvalidextension.yfilter = yfilter;
    }
    if(value_path == "nhrpClientStatRxErrAuthenticationFailure")
    {
        nhrpclientstatrxerrauthenticationfailure.yfilter = yfilter;
    }
    if(value_path == "nhrpClientStatRxErrHopCountExceeded")
    {
        nhrpclientstatrxerrhopcountexceeded.yfilter = yfilter;
    }
    if(value_path == "nhrpClientStatDiscontinuityTime")
    {
        nhrpclientstatdiscontinuitytime.yfilter = yfilter;
    }
}

bool NHRPMIB::Nhrpclientstattable::Nhrpclientstatentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nhrpClientIndex" || name == "nhrpClientStatTxResolveReq" || name == "nhrpClientStatRxResolveReplyAck" || name == "nhrpClientStatRxResolveReplyNakProhibited" || name == "nhrpClientStatRxResolveReplyNakInsufResources" || name == "nhrpClientStatRxResolveReplyNakNoBinding" || name == "nhrpClientStatRxResolveReplyNakNotUnique" || name == "nhrpClientStatTxRegisterReq" || name == "nhrpClientStatRxRegisterAck" || name == "nhrpClientStatRxRegisterNakProhibited" || name == "nhrpClientStatRxRegisterNakInsufResources" || name == "nhrpClientStatRxRegisterNakAlreadyReg" || name == "nhrpClientStatRxPurgeReq" || name == "nhrpClientStatTxPurgeReq" || name == "nhrpClientStatRxPurgeReply" || name == "nhrpClientStatTxPurgeReply" || name == "nhrpClientStatTxErrorIndication" || name == "nhrpClientStatRxErrUnrecognizedExtension" || name == "nhrpClientStatRxErrLoopDetected" || name == "nhrpClientStatRxErrProtoAddrUnreachable" || name == "nhrpClientStatRxErrProtoError" || name == "nhrpClientStatRxErrSduSizeExceeded" || name == "nhrpClientStatRxErrInvalidExtension" || name == "nhrpClientStatRxErrAuthenticationFailure" || name == "nhrpClientStatRxErrHopCountExceeded" || name == "nhrpClientStatDiscontinuityTime")
        return true;
    return false;
}

NHRPMIB::Nhrpservertable::Nhrpservertable()
{

    yang_name = "nhrpServerTable"; yang_parent_name = "NHRP-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

NHRPMIB::Nhrpservertable::~Nhrpservertable()
{
}

bool NHRPMIB::Nhrpservertable::has_data() const
{
    for (std::size_t index=0; index<nhrpserverentry.size(); index++)
    {
        if(nhrpserverentry[index]->has_data())
            return true;
    }
    return false;
}

bool NHRPMIB::Nhrpservertable::has_operation() const
{
    for (std::size_t index=0; index<nhrpserverentry.size(); index++)
    {
        if(nhrpserverentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string NHRPMIB::Nhrpservertable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "NHRP-MIB:NHRP-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string NHRPMIB::Nhrpservertable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nhrpServerTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NHRPMIB::Nhrpservertable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> NHRPMIB::Nhrpservertable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nhrpServerEntry")
    {
        auto c = std::make_shared<NHRPMIB::Nhrpservertable::Nhrpserverentry>();
        c->parent = this;
        nhrpserverentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NHRPMIB::Nhrpservertable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : nhrpserverentry)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void NHRPMIB::Nhrpservertable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NHRPMIB::Nhrpservertable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NHRPMIB::Nhrpservertable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nhrpServerEntry")
        return true;
    return false;
}

NHRPMIB::Nhrpservertable::Nhrpserverentry::Nhrpserverentry()
    :
    nhrpserverindex{YType::uint32, "nhrpServerIndex"},
    nhrpserverinternetworkaddrtype{YType::enumeration, "nhrpServerInternetworkAddrType"},
    nhrpserverinternetworkaddr{YType::str, "nhrpServerInternetworkAddr"},
    nhrpservernbmaaddrtype{YType::enumeration, "nhrpServerNbmaAddrType"},
    nhrpservernbmaaddr{YType::str, "nhrpServerNbmaAddr"},
    nhrpservernbmasubaddr{YType::str, "nhrpServerNbmaSubaddr"},
    nhrpserverstoragetype{YType::enumeration, "nhrpServerStorageType"},
    nhrpserverrowstatus{YType::enumeration, "nhrpServerRowStatus"}
{

    yang_name = "nhrpServerEntry"; yang_parent_name = "nhrpServerTable"; is_top_level_class = false; has_list_ancestor = false;
}

NHRPMIB::Nhrpservertable::Nhrpserverentry::~Nhrpserverentry()
{
}

bool NHRPMIB::Nhrpservertable::Nhrpserverentry::has_data() const
{
    return nhrpserverindex.is_set
	|| nhrpserverinternetworkaddrtype.is_set
	|| nhrpserverinternetworkaddr.is_set
	|| nhrpservernbmaaddrtype.is_set
	|| nhrpservernbmaaddr.is_set
	|| nhrpservernbmasubaddr.is_set
	|| nhrpserverstoragetype.is_set
	|| nhrpserverrowstatus.is_set;
}

bool NHRPMIB::Nhrpservertable::Nhrpserverentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nhrpserverindex.yfilter)
	|| ydk::is_set(nhrpserverinternetworkaddrtype.yfilter)
	|| ydk::is_set(nhrpserverinternetworkaddr.yfilter)
	|| ydk::is_set(nhrpservernbmaaddrtype.yfilter)
	|| ydk::is_set(nhrpservernbmaaddr.yfilter)
	|| ydk::is_set(nhrpservernbmasubaddr.yfilter)
	|| ydk::is_set(nhrpserverstoragetype.yfilter)
	|| ydk::is_set(nhrpserverrowstatus.yfilter);
}

std::string NHRPMIB::Nhrpservertable::Nhrpserverentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "NHRP-MIB:NHRP-MIB/nhrpServerTable/" << get_segment_path();
    return path_buffer.str();
}

std::string NHRPMIB::Nhrpservertable::Nhrpserverentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nhrpServerEntry" <<"[nhrpServerIndex='" <<nhrpserverindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NHRPMIB::Nhrpservertable::Nhrpserverentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nhrpserverindex.is_set || is_set(nhrpserverindex.yfilter)) leaf_name_data.push_back(nhrpserverindex.get_name_leafdata());
    if (nhrpserverinternetworkaddrtype.is_set || is_set(nhrpserverinternetworkaddrtype.yfilter)) leaf_name_data.push_back(nhrpserverinternetworkaddrtype.get_name_leafdata());
    if (nhrpserverinternetworkaddr.is_set || is_set(nhrpserverinternetworkaddr.yfilter)) leaf_name_data.push_back(nhrpserverinternetworkaddr.get_name_leafdata());
    if (nhrpservernbmaaddrtype.is_set || is_set(nhrpservernbmaaddrtype.yfilter)) leaf_name_data.push_back(nhrpservernbmaaddrtype.get_name_leafdata());
    if (nhrpservernbmaaddr.is_set || is_set(nhrpservernbmaaddr.yfilter)) leaf_name_data.push_back(nhrpservernbmaaddr.get_name_leafdata());
    if (nhrpservernbmasubaddr.is_set || is_set(nhrpservernbmasubaddr.yfilter)) leaf_name_data.push_back(nhrpservernbmasubaddr.get_name_leafdata());
    if (nhrpserverstoragetype.is_set || is_set(nhrpserverstoragetype.yfilter)) leaf_name_data.push_back(nhrpserverstoragetype.get_name_leafdata());
    if (nhrpserverrowstatus.is_set || is_set(nhrpserverrowstatus.yfilter)) leaf_name_data.push_back(nhrpserverrowstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NHRPMIB::Nhrpservertable::Nhrpserverentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NHRPMIB::Nhrpservertable::Nhrpserverentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void NHRPMIB::Nhrpservertable::Nhrpserverentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nhrpServerIndex")
    {
        nhrpserverindex = value;
        nhrpserverindex.value_namespace = name_space;
        nhrpserverindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nhrpServerInternetworkAddrType")
    {
        nhrpserverinternetworkaddrtype = value;
        nhrpserverinternetworkaddrtype.value_namespace = name_space;
        nhrpserverinternetworkaddrtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nhrpServerInternetworkAddr")
    {
        nhrpserverinternetworkaddr = value;
        nhrpserverinternetworkaddr.value_namespace = name_space;
        nhrpserverinternetworkaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nhrpServerNbmaAddrType")
    {
        nhrpservernbmaaddrtype = value;
        nhrpservernbmaaddrtype.value_namespace = name_space;
        nhrpservernbmaaddrtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nhrpServerNbmaAddr")
    {
        nhrpservernbmaaddr = value;
        nhrpservernbmaaddr.value_namespace = name_space;
        nhrpservernbmaaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nhrpServerNbmaSubaddr")
    {
        nhrpservernbmasubaddr = value;
        nhrpservernbmasubaddr.value_namespace = name_space;
        nhrpservernbmasubaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nhrpServerStorageType")
    {
        nhrpserverstoragetype = value;
        nhrpserverstoragetype.value_namespace = name_space;
        nhrpserverstoragetype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nhrpServerRowStatus")
    {
        nhrpserverrowstatus = value;
        nhrpserverrowstatus.value_namespace = name_space;
        nhrpserverrowstatus.value_namespace_prefix = name_space_prefix;
    }
}

void NHRPMIB::Nhrpservertable::Nhrpserverentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nhrpServerIndex")
    {
        nhrpserverindex.yfilter = yfilter;
    }
    if(value_path == "nhrpServerInternetworkAddrType")
    {
        nhrpserverinternetworkaddrtype.yfilter = yfilter;
    }
    if(value_path == "nhrpServerInternetworkAddr")
    {
        nhrpserverinternetworkaddr.yfilter = yfilter;
    }
    if(value_path == "nhrpServerNbmaAddrType")
    {
        nhrpservernbmaaddrtype.yfilter = yfilter;
    }
    if(value_path == "nhrpServerNbmaAddr")
    {
        nhrpservernbmaaddr.yfilter = yfilter;
    }
    if(value_path == "nhrpServerNbmaSubaddr")
    {
        nhrpservernbmasubaddr.yfilter = yfilter;
    }
    if(value_path == "nhrpServerStorageType")
    {
        nhrpserverstoragetype.yfilter = yfilter;
    }
    if(value_path == "nhrpServerRowStatus")
    {
        nhrpserverrowstatus.yfilter = yfilter;
    }
}

bool NHRPMIB::Nhrpservertable::Nhrpserverentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nhrpServerIndex" || name == "nhrpServerInternetworkAddrType" || name == "nhrpServerInternetworkAddr" || name == "nhrpServerNbmaAddrType" || name == "nhrpServerNbmaAddr" || name == "nhrpServerNbmaSubaddr" || name == "nhrpServerStorageType" || name == "nhrpServerRowStatus")
        return true;
    return false;
}

NHRPMIB::Nhrpservercachetable::Nhrpservercachetable()
{

    yang_name = "nhrpServerCacheTable"; yang_parent_name = "NHRP-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

NHRPMIB::Nhrpservercachetable::~Nhrpservercachetable()
{
}

bool NHRPMIB::Nhrpservercachetable::has_data() const
{
    for (std::size_t index=0; index<nhrpservercacheentry.size(); index++)
    {
        if(nhrpservercacheentry[index]->has_data())
            return true;
    }
    return false;
}

bool NHRPMIB::Nhrpservercachetable::has_operation() const
{
    for (std::size_t index=0; index<nhrpservercacheentry.size(); index++)
    {
        if(nhrpservercacheentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string NHRPMIB::Nhrpservercachetable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "NHRP-MIB:NHRP-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string NHRPMIB::Nhrpservercachetable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nhrpServerCacheTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NHRPMIB::Nhrpservercachetable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> NHRPMIB::Nhrpservercachetable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nhrpServerCacheEntry")
    {
        auto c = std::make_shared<NHRPMIB::Nhrpservercachetable::Nhrpservercacheentry>();
        c->parent = this;
        nhrpservercacheentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NHRPMIB::Nhrpservercachetable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : nhrpservercacheentry)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void NHRPMIB::Nhrpservercachetable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NHRPMIB::Nhrpservercachetable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NHRPMIB::Nhrpservercachetable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nhrpServerCacheEntry")
        return true;
    return false;
}

NHRPMIB::Nhrpservercachetable::Nhrpservercacheentry::Nhrpservercacheentry()
    :
    nhrpcacheinternetworkaddrtype{YType::enumeration, "nhrpCacheInternetworkAddrType"},
    nhrpcacheinternetworkaddr{YType::str, "nhrpCacheInternetworkAddr"},
    ifindex{YType::str, "ifIndex"},
    nhrpcacheindex{YType::str, "nhrpCacheIndex"},
    nhrpservercacheauthoritative{YType::boolean, "nhrpServerCacheAuthoritative"},
    nhrpservercacheuniqueness{YType::boolean, "nhrpServerCacheUniqueness"}
{

    yang_name = "nhrpServerCacheEntry"; yang_parent_name = "nhrpServerCacheTable"; is_top_level_class = false; has_list_ancestor = false;
}

NHRPMIB::Nhrpservercachetable::Nhrpservercacheentry::~Nhrpservercacheentry()
{
}

bool NHRPMIB::Nhrpservercachetable::Nhrpservercacheentry::has_data() const
{
    return nhrpcacheinternetworkaddrtype.is_set
	|| nhrpcacheinternetworkaddr.is_set
	|| ifindex.is_set
	|| nhrpcacheindex.is_set
	|| nhrpservercacheauthoritative.is_set
	|| nhrpservercacheuniqueness.is_set;
}

bool NHRPMIB::Nhrpservercachetable::Nhrpservercacheentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nhrpcacheinternetworkaddrtype.yfilter)
	|| ydk::is_set(nhrpcacheinternetworkaddr.yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(nhrpcacheindex.yfilter)
	|| ydk::is_set(nhrpservercacheauthoritative.yfilter)
	|| ydk::is_set(nhrpservercacheuniqueness.yfilter);
}

std::string NHRPMIB::Nhrpservercachetable::Nhrpservercacheentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "NHRP-MIB:NHRP-MIB/nhrpServerCacheTable/" << get_segment_path();
    return path_buffer.str();
}

std::string NHRPMIB::Nhrpservercachetable::Nhrpservercacheentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nhrpServerCacheEntry" <<"[nhrpCacheInternetworkAddrType='" <<nhrpcacheinternetworkaddrtype <<"']" <<"[nhrpCacheInternetworkAddr='" <<nhrpcacheinternetworkaddr <<"']" <<"[ifIndex='" <<ifindex <<"']" <<"[nhrpCacheIndex='" <<nhrpcacheindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NHRPMIB::Nhrpservercachetable::Nhrpservercacheentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nhrpcacheinternetworkaddrtype.is_set || is_set(nhrpcacheinternetworkaddrtype.yfilter)) leaf_name_data.push_back(nhrpcacheinternetworkaddrtype.get_name_leafdata());
    if (nhrpcacheinternetworkaddr.is_set || is_set(nhrpcacheinternetworkaddr.yfilter)) leaf_name_data.push_back(nhrpcacheinternetworkaddr.get_name_leafdata());
    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (nhrpcacheindex.is_set || is_set(nhrpcacheindex.yfilter)) leaf_name_data.push_back(nhrpcacheindex.get_name_leafdata());
    if (nhrpservercacheauthoritative.is_set || is_set(nhrpservercacheauthoritative.yfilter)) leaf_name_data.push_back(nhrpservercacheauthoritative.get_name_leafdata());
    if (nhrpservercacheuniqueness.is_set || is_set(nhrpservercacheuniqueness.yfilter)) leaf_name_data.push_back(nhrpservercacheuniqueness.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NHRPMIB::Nhrpservercachetable::Nhrpservercacheentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NHRPMIB::Nhrpservercachetable::Nhrpservercacheentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void NHRPMIB::Nhrpservercachetable::Nhrpservercacheentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nhrpCacheInternetworkAddrType")
    {
        nhrpcacheinternetworkaddrtype = value;
        nhrpcacheinternetworkaddrtype.value_namespace = name_space;
        nhrpcacheinternetworkaddrtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nhrpCacheInternetworkAddr")
    {
        nhrpcacheinternetworkaddr = value;
        nhrpcacheinternetworkaddr.value_namespace = name_space;
        nhrpcacheinternetworkaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nhrpCacheIndex")
    {
        nhrpcacheindex = value;
        nhrpcacheindex.value_namespace = name_space;
        nhrpcacheindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nhrpServerCacheAuthoritative")
    {
        nhrpservercacheauthoritative = value;
        nhrpservercacheauthoritative.value_namespace = name_space;
        nhrpservercacheauthoritative.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nhrpServerCacheUniqueness")
    {
        nhrpservercacheuniqueness = value;
        nhrpservercacheuniqueness.value_namespace = name_space;
        nhrpservercacheuniqueness.value_namespace_prefix = name_space_prefix;
    }
}

void NHRPMIB::Nhrpservercachetable::Nhrpservercacheentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nhrpCacheInternetworkAddrType")
    {
        nhrpcacheinternetworkaddrtype.yfilter = yfilter;
    }
    if(value_path == "nhrpCacheInternetworkAddr")
    {
        nhrpcacheinternetworkaddr.yfilter = yfilter;
    }
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "nhrpCacheIndex")
    {
        nhrpcacheindex.yfilter = yfilter;
    }
    if(value_path == "nhrpServerCacheAuthoritative")
    {
        nhrpservercacheauthoritative.yfilter = yfilter;
    }
    if(value_path == "nhrpServerCacheUniqueness")
    {
        nhrpservercacheuniqueness.yfilter = yfilter;
    }
}

bool NHRPMIB::Nhrpservercachetable::Nhrpservercacheentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nhrpCacheInternetworkAddrType" || name == "nhrpCacheInternetworkAddr" || name == "ifIndex" || name == "nhrpCacheIndex" || name == "nhrpServerCacheAuthoritative" || name == "nhrpServerCacheUniqueness")
        return true;
    return false;
}

NHRPMIB::Nhrpservernhctable::Nhrpservernhctable()
{

    yang_name = "nhrpServerNhcTable"; yang_parent_name = "NHRP-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

NHRPMIB::Nhrpservernhctable::~Nhrpservernhctable()
{
}

bool NHRPMIB::Nhrpservernhctable::has_data() const
{
    for (std::size_t index=0; index<nhrpservernhcentry.size(); index++)
    {
        if(nhrpservernhcentry[index]->has_data())
            return true;
    }
    return false;
}

bool NHRPMIB::Nhrpservernhctable::has_operation() const
{
    for (std::size_t index=0; index<nhrpservernhcentry.size(); index++)
    {
        if(nhrpservernhcentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string NHRPMIB::Nhrpservernhctable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "NHRP-MIB:NHRP-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string NHRPMIB::Nhrpservernhctable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nhrpServerNhcTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NHRPMIB::Nhrpservernhctable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> NHRPMIB::Nhrpservernhctable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nhrpServerNhcEntry")
    {
        auto c = std::make_shared<NHRPMIB::Nhrpservernhctable::Nhrpservernhcentry>();
        c->parent = this;
        nhrpservernhcentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NHRPMIB::Nhrpservernhctable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : nhrpservernhcentry)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void NHRPMIB::Nhrpservernhctable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NHRPMIB::Nhrpservernhctable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NHRPMIB::Nhrpservernhctable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nhrpServerNhcEntry")
        return true;
    return false;
}

NHRPMIB::Nhrpservernhctable::Nhrpservernhcentry::Nhrpservernhcentry()
    :
    nhrpserverindex{YType::str, "nhrpServerIndex"},
    nhrpservernhcindex{YType::uint32, "nhrpServerNhcIndex"},
    nhrpservernhcprefixlength{YType::int32, "nhrpServerNhcPrefixLength"},
    nhrpservernhcinternetworkaddrtype{YType::enumeration, "nhrpServerNhcInternetworkAddrType"},
    nhrpservernhcinternetworkaddr{YType::str, "nhrpServerNhcInternetworkAddr"},
    nhrpservernhcnbmaaddrtype{YType::enumeration, "nhrpServerNhcNbmaAddrType"},
    nhrpservernhcnbmaaddr{YType::str, "nhrpServerNhcNbmaAddr"},
    nhrpservernhcnbmasubaddr{YType::str, "nhrpServerNhcNbmaSubaddr"},
    nhrpservernhcinuse{YType::boolean, "nhrpServerNhcInUse"},
    nhrpservernhcrowstatus{YType::enumeration, "nhrpServerNhcRowStatus"}
{

    yang_name = "nhrpServerNhcEntry"; yang_parent_name = "nhrpServerNhcTable"; is_top_level_class = false; has_list_ancestor = false;
}

NHRPMIB::Nhrpservernhctable::Nhrpservernhcentry::~Nhrpservernhcentry()
{
}

bool NHRPMIB::Nhrpservernhctable::Nhrpservernhcentry::has_data() const
{
    return nhrpserverindex.is_set
	|| nhrpservernhcindex.is_set
	|| nhrpservernhcprefixlength.is_set
	|| nhrpservernhcinternetworkaddrtype.is_set
	|| nhrpservernhcinternetworkaddr.is_set
	|| nhrpservernhcnbmaaddrtype.is_set
	|| nhrpservernhcnbmaaddr.is_set
	|| nhrpservernhcnbmasubaddr.is_set
	|| nhrpservernhcinuse.is_set
	|| nhrpservernhcrowstatus.is_set;
}

bool NHRPMIB::Nhrpservernhctable::Nhrpservernhcentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nhrpserverindex.yfilter)
	|| ydk::is_set(nhrpservernhcindex.yfilter)
	|| ydk::is_set(nhrpservernhcprefixlength.yfilter)
	|| ydk::is_set(nhrpservernhcinternetworkaddrtype.yfilter)
	|| ydk::is_set(nhrpservernhcinternetworkaddr.yfilter)
	|| ydk::is_set(nhrpservernhcnbmaaddrtype.yfilter)
	|| ydk::is_set(nhrpservernhcnbmaaddr.yfilter)
	|| ydk::is_set(nhrpservernhcnbmasubaddr.yfilter)
	|| ydk::is_set(nhrpservernhcinuse.yfilter)
	|| ydk::is_set(nhrpservernhcrowstatus.yfilter);
}

std::string NHRPMIB::Nhrpservernhctable::Nhrpservernhcentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "NHRP-MIB:NHRP-MIB/nhrpServerNhcTable/" << get_segment_path();
    return path_buffer.str();
}

std::string NHRPMIB::Nhrpservernhctable::Nhrpservernhcentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nhrpServerNhcEntry" <<"[nhrpServerIndex='" <<nhrpserverindex <<"']" <<"[nhrpServerNhcIndex='" <<nhrpservernhcindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NHRPMIB::Nhrpservernhctable::Nhrpservernhcentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nhrpserverindex.is_set || is_set(nhrpserverindex.yfilter)) leaf_name_data.push_back(nhrpserverindex.get_name_leafdata());
    if (nhrpservernhcindex.is_set || is_set(nhrpservernhcindex.yfilter)) leaf_name_data.push_back(nhrpservernhcindex.get_name_leafdata());
    if (nhrpservernhcprefixlength.is_set || is_set(nhrpservernhcprefixlength.yfilter)) leaf_name_data.push_back(nhrpservernhcprefixlength.get_name_leafdata());
    if (nhrpservernhcinternetworkaddrtype.is_set || is_set(nhrpservernhcinternetworkaddrtype.yfilter)) leaf_name_data.push_back(nhrpservernhcinternetworkaddrtype.get_name_leafdata());
    if (nhrpservernhcinternetworkaddr.is_set || is_set(nhrpservernhcinternetworkaddr.yfilter)) leaf_name_data.push_back(nhrpservernhcinternetworkaddr.get_name_leafdata());
    if (nhrpservernhcnbmaaddrtype.is_set || is_set(nhrpservernhcnbmaaddrtype.yfilter)) leaf_name_data.push_back(nhrpservernhcnbmaaddrtype.get_name_leafdata());
    if (nhrpservernhcnbmaaddr.is_set || is_set(nhrpservernhcnbmaaddr.yfilter)) leaf_name_data.push_back(nhrpservernhcnbmaaddr.get_name_leafdata());
    if (nhrpservernhcnbmasubaddr.is_set || is_set(nhrpservernhcnbmasubaddr.yfilter)) leaf_name_data.push_back(nhrpservernhcnbmasubaddr.get_name_leafdata());
    if (nhrpservernhcinuse.is_set || is_set(nhrpservernhcinuse.yfilter)) leaf_name_data.push_back(nhrpservernhcinuse.get_name_leafdata());
    if (nhrpservernhcrowstatus.is_set || is_set(nhrpservernhcrowstatus.yfilter)) leaf_name_data.push_back(nhrpservernhcrowstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NHRPMIB::Nhrpservernhctable::Nhrpservernhcentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NHRPMIB::Nhrpservernhctable::Nhrpservernhcentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void NHRPMIB::Nhrpservernhctable::Nhrpservernhcentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nhrpServerIndex")
    {
        nhrpserverindex = value;
        nhrpserverindex.value_namespace = name_space;
        nhrpserverindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nhrpServerNhcIndex")
    {
        nhrpservernhcindex = value;
        nhrpservernhcindex.value_namespace = name_space;
        nhrpservernhcindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nhrpServerNhcPrefixLength")
    {
        nhrpservernhcprefixlength = value;
        nhrpservernhcprefixlength.value_namespace = name_space;
        nhrpservernhcprefixlength.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nhrpServerNhcInternetworkAddrType")
    {
        nhrpservernhcinternetworkaddrtype = value;
        nhrpservernhcinternetworkaddrtype.value_namespace = name_space;
        nhrpservernhcinternetworkaddrtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nhrpServerNhcInternetworkAddr")
    {
        nhrpservernhcinternetworkaddr = value;
        nhrpservernhcinternetworkaddr.value_namespace = name_space;
        nhrpservernhcinternetworkaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nhrpServerNhcNbmaAddrType")
    {
        nhrpservernhcnbmaaddrtype = value;
        nhrpservernhcnbmaaddrtype.value_namespace = name_space;
        nhrpservernhcnbmaaddrtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nhrpServerNhcNbmaAddr")
    {
        nhrpservernhcnbmaaddr = value;
        nhrpservernhcnbmaaddr.value_namespace = name_space;
        nhrpservernhcnbmaaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nhrpServerNhcNbmaSubaddr")
    {
        nhrpservernhcnbmasubaddr = value;
        nhrpservernhcnbmasubaddr.value_namespace = name_space;
        nhrpservernhcnbmasubaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nhrpServerNhcInUse")
    {
        nhrpservernhcinuse = value;
        nhrpservernhcinuse.value_namespace = name_space;
        nhrpservernhcinuse.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nhrpServerNhcRowStatus")
    {
        nhrpservernhcrowstatus = value;
        nhrpservernhcrowstatus.value_namespace = name_space;
        nhrpservernhcrowstatus.value_namespace_prefix = name_space_prefix;
    }
}

void NHRPMIB::Nhrpservernhctable::Nhrpservernhcentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nhrpServerIndex")
    {
        nhrpserverindex.yfilter = yfilter;
    }
    if(value_path == "nhrpServerNhcIndex")
    {
        nhrpservernhcindex.yfilter = yfilter;
    }
    if(value_path == "nhrpServerNhcPrefixLength")
    {
        nhrpservernhcprefixlength.yfilter = yfilter;
    }
    if(value_path == "nhrpServerNhcInternetworkAddrType")
    {
        nhrpservernhcinternetworkaddrtype.yfilter = yfilter;
    }
    if(value_path == "nhrpServerNhcInternetworkAddr")
    {
        nhrpservernhcinternetworkaddr.yfilter = yfilter;
    }
    if(value_path == "nhrpServerNhcNbmaAddrType")
    {
        nhrpservernhcnbmaaddrtype.yfilter = yfilter;
    }
    if(value_path == "nhrpServerNhcNbmaAddr")
    {
        nhrpservernhcnbmaaddr.yfilter = yfilter;
    }
    if(value_path == "nhrpServerNhcNbmaSubaddr")
    {
        nhrpservernhcnbmasubaddr.yfilter = yfilter;
    }
    if(value_path == "nhrpServerNhcInUse")
    {
        nhrpservernhcinuse.yfilter = yfilter;
    }
    if(value_path == "nhrpServerNhcRowStatus")
    {
        nhrpservernhcrowstatus.yfilter = yfilter;
    }
}

bool NHRPMIB::Nhrpservernhctable::Nhrpservernhcentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nhrpServerIndex" || name == "nhrpServerNhcIndex" || name == "nhrpServerNhcPrefixLength" || name == "nhrpServerNhcInternetworkAddrType" || name == "nhrpServerNhcInternetworkAddr" || name == "nhrpServerNhcNbmaAddrType" || name == "nhrpServerNhcNbmaAddr" || name == "nhrpServerNhcNbmaSubaddr" || name == "nhrpServerNhcInUse" || name == "nhrpServerNhcRowStatus")
        return true;
    return false;
}

NHRPMIB::Nhrpserverstattable::Nhrpserverstattable()
{

    yang_name = "nhrpServerStatTable"; yang_parent_name = "NHRP-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

NHRPMIB::Nhrpserverstattable::~Nhrpserverstattable()
{
}

bool NHRPMIB::Nhrpserverstattable::has_data() const
{
    for (std::size_t index=0; index<nhrpserverstatentry.size(); index++)
    {
        if(nhrpserverstatentry[index]->has_data())
            return true;
    }
    return false;
}

bool NHRPMIB::Nhrpserverstattable::has_operation() const
{
    for (std::size_t index=0; index<nhrpserverstatentry.size(); index++)
    {
        if(nhrpserverstatentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string NHRPMIB::Nhrpserverstattable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "NHRP-MIB:NHRP-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string NHRPMIB::Nhrpserverstattable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nhrpServerStatTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NHRPMIB::Nhrpserverstattable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> NHRPMIB::Nhrpserverstattable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nhrpServerStatEntry")
    {
        auto c = std::make_shared<NHRPMIB::Nhrpserverstattable::Nhrpserverstatentry>();
        c->parent = this;
        nhrpserverstatentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NHRPMIB::Nhrpserverstattable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : nhrpserverstatentry)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void NHRPMIB::Nhrpserverstattable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NHRPMIB::Nhrpserverstattable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NHRPMIB::Nhrpserverstattable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nhrpServerStatEntry")
        return true;
    return false;
}

NHRPMIB::Nhrpserverstattable::Nhrpserverstatentry::Nhrpserverstatentry()
    :
    nhrpserverindex{YType::str, "nhrpServerIndex"},
    nhrpserverstatrxresolvereq{YType::uint32, "nhrpServerStatRxResolveReq"},
    nhrpserverstattxresolvereplyack{YType::uint32, "nhrpServerStatTxResolveReplyAck"},
    nhrpserverstattxresolvereplynakprohibited{YType::uint32, "nhrpServerStatTxResolveReplyNakProhibited"},
    nhrpserverstattxresolvereplynakinsufresources{YType::uint32, "nhrpServerStatTxResolveReplyNakInsufResources"},
    nhrpserverstattxresolvereplynaknobinding{YType::uint32, "nhrpServerStatTxResolveReplyNakNoBinding"},
    nhrpserverstattxresolvereplynaknotunique{YType::uint32, "nhrpServerStatTxResolveReplyNakNotUnique"},
    nhrpserverstatrxregisterreq{YType::uint32, "nhrpServerStatRxRegisterReq"},
    nhrpserverstattxregisterack{YType::uint32, "nhrpServerStatTxRegisterAck"},
    nhrpserverstattxregisternakprohibited{YType::uint32, "nhrpServerStatTxRegisterNakProhibited"},
    nhrpserverstattxregisternakinsufresources{YType::uint32, "nhrpServerStatTxRegisterNakInsufResources"},
    nhrpserverstattxregisternakalreadyreg{YType::uint32, "nhrpServerStatTxRegisterNakAlreadyReg"},
    nhrpserverstatrxpurgereq{YType::uint32, "nhrpServerStatRxPurgeReq"},
    nhrpserverstattxpurgereq{YType::uint32, "nhrpServerStatTxPurgeReq"},
    nhrpserverstatrxpurgereply{YType::uint32, "nhrpServerStatRxPurgeReply"},
    nhrpserverstattxpurgereply{YType::uint32, "nhrpServerStatTxPurgeReply"},
    nhrpserverstatrxerrunrecognizedextension{YType::uint32, "nhrpServerStatRxErrUnrecognizedExtension"},
    nhrpserverstatrxerrloopdetected{YType::uint32, "nhrpServerStatRxErrLoopDetected"},
    nhrpserverstatrxerrprotoaddrunreachable{YType::uint32, "nhrpServerStatRxErrProtoAddrUnreachable"},
    nhrpserverstatrxerrprotoerror{YType::uint32, "nhrpServerStatRxErrProtoError"},
    nhrpserverstatrxerrsdusizeexceeded{YType::uint32, "nhrpServerStatRxErrSduSizeExceeded"},
    nhrpserverstatrxerrinvalidextension{YType::uint32, "nhrpServerStatRxErrInvalidExtension"},
    nhrpserverstatrxerrinvalidresreplyreceived{YType::uint32, "nhrpServerStatRxErrInvalidResReplyReceived"},
    nhrpserverstatrxerrauthenticationfailure{YType::uint32, "nhrpServerStatRxErrAuthenticationFailure"},
    nhrpserverstatrxerrhopcountexceeded{YType::uint32, "nhrpServerStatRxErrHopCountExceeded"},
    nhrpserverstattxerrunrecognizedextension{YType::uint32, "nhrpServerStatTxErrUnrecognizedExtension"},
    nhrpserverstattxerrloopdetected{YType::uint32, "nhrpServerStatTxErrLoopDetected"},
    nhrpserverstattxerrprotoaddrunreachable{YType::uint32, "nhrpServerStatTxErrProtoAddrUnreachable"},
    nhrpserverstattxerrprotoerror{YType::uint32, "nhrpServerStatTxErrProtoError"},
    nhrpserverstattxerrsdusizeexceeded{YType::uint32, "nhrpServerStatTxErrSduSizeExceeded"},
    nhrpserverstattxerrinvalidextension{YType::uint32, "nhrpServerStatTxErrInvalidExtension"},
    nhrpserverstattxerrauthenticationfailure{YType::uint32, "nhrpServerStatTxErrAuthenticationFailure"},
    nhrpserverstattxerrhopcountexceeded{YType::uint32, "nhrpServerStatTxErrHopCountExceeded"},
    nhrpserverstatfwresolvereq{YType::uint32, "nhrpServerStatFwResolveReq"},
    nhrpserverstatfwresolvereply{YType::uint32, "nhrpServerStatFwResolveReply"},
    nhrpserverstatfwregisterreq{YType::uint32, "nhrpServerStatFwRegisterReq"},
    nhrpserverstatfwregisterreply{YType::uint32, "nhrpServerStatFwRegisterReply"},
    nhrpserverstatfwpurgereq{YType::uint32, "nhrpServerStatFwPurgeReq"},
    nhrpserverstatfwpurgereply{YType::uint32, "nhrpServerStatFwPurgeReply"},
    nhrpserverstatfwerrorindication{YType::uint32, "nhrpServerStatFwErrorIndication"},
    nhrpserverstatdiscontinuitytime{YType::uint32, "nhrpServerStatDiscontinuityTime"}
{

    yang_name = "nhrpServerStatEntry"; yang_parent_name = "nhrpServerStatTable"; is_top_level_class = false; has_list_ancestor = false;
}

NHRPMIB::Nhrpserverstattable::Nhrpserverstatentry::~Nhrpserverstatentry()
{
}

bool NHRPMIB::Nhrpserverstattable::Nhrpserverstatentry::has_data() const
{
    return nhrpserverindex.is_set
	|| nhrpserverstatrxresolvereq.is_set
	|| nhrpserverstattxresolvereplyack.is_set
	|| nhrpserverstattxresolvereplynakprohibited.is_set
	|| nhrpserverstattxresolvereplynakinsufresources.is_set
	|| nhrpserverstattxresolvereplynaknobinding.is_set
	|| nhrpserverstattxresolvereplynaknotunique.is_set
	|| nhrpserverstatrxregisterreq.is_set
	|| nhrpserverstattxregisterack.is_set
	|| nhrpserverstattxregisternakprohibited.is_set
	|| nhrpserverstattxregisternakinsufresources.is_set
	|| nhrpserverstattxregisternakalreadyreg.is_set
	|| nhrpserverstatrxpurgereq.is_set
	|| nhrpserverstattxpurgereq.is_set
	|| nhrpserverstatrxpurgereply.is_set
	|| nhrpserverstattxpurgereply.is_set
	|| nhrpserverstatrxerrunrecognizedextension.is_set
	|| nhrpserverstatrxerrloopdetected.is_set
	|| nhrpserverstatrxerrprotoaddrunreachable.is_set
	|| nhrpserverstatrxerrprotoerror.is_set
	|| nhrpserverstatrxerrsdusizeexceeded.is_set
	|| nhrpserverstatrxerrinvalidextension.is_set
	|| nhrpserverstatrxerrinvalidresreplyreceived.is_set
	|| nhrpserverstatrxerrauthenticationfailure.is_set
	|| nhrpserverstatrxerrhopcountexceeded.is_set
	|| nhrpserverstattxerrunrecognizedextension.is_set
	|| nhrpserverstattxerrloopdetected.is_set
	|| nhrpserverstattxerrprotoaddrunreachable.is_set
	|| nhrpserverstattxerrprotoerror.is_set
	|| nhrpserverstattxerrsdusizeexceeded.is_set
	|| nhrpserverstattxerrinvalidextension.is_set
	|| nhrpserverstattxerrauthenticationfailure.is_set
	|| nhrpserverstattxerrhopcountexceeded.is_set
	|| nhrpserverstatfwresolvereq.is_set
	|| nhrpserverstatfwresolvereply.is_set
	|| nhrpserverstatfwregisterreq.is_set
	|| nhrpserverstatfwregisterreply.is_set
	|| nhrpserverstatfwpurgereq.is_set
	|| nhrpserverstatfwpurgereply.is_set
	|| nhrpserverstatfwerrorindication.is_set
	|| nhrpserverstatdiscontinuitytime.is_set;
}

bool NHRPMIB::Nhrpserverstattable::Nhrpserverstatentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nhrpserverindex.yfilter)
	|| ydk::is_set(nhrpserverstatrxresolvereq.yfilter)
	|| ydk::is_set(nhrpserverstattxresolvereplyack.yfilter)
	|| ydk::is_set(nhrpserverstattxresolvereplynakprohibited.yfilter)
	|| ydk::is_set(nhrpserverstattxresolvereplynakinsufresources.yfilter)
	|| ydk::is_set(nhrpserverstattxresolvereplynaknobinding.yfilter)
	|| ydk::is_set(nhrpserverstattxresolvereplynaknotunique.yfilter)
	|| ydk::is_set(nhrpserverstatrxregisterreq.yfilter)
	|| ydk::is_set(nhrpserverstattxregisterack.yfilter)
	|| ydk::is_set(nhrpserverstattxregisternakprohibited.yfilter)
	|| ydk::is_set(nhrpserverstattxregisternakinsufresources.yfilter)
	|| ydk::is_set(nhrpserverstattxregisternakalreadyreg.yfilter)
	|| ydk::is_set(nhrpserverstatrxpurgereq.yfilter)
	|| ydk::is_set(nhrpserverstattxpurgereq.yfilter)
	|| ydk::is_set(nhrpserverstatrxpurgereply.yfilter)
	|| ydk::is_set(nhrpserverstattxpurgereply.yfilter)
	|| ydk::is_set(nhrpserverstatrxerrunrecognizedextension.yfilter)
	|| ydk::is_set(nhrpserverstatrxerrloopdetected.yfilter)
	|| ydk::is_set(nhrpserverstatrxerrprotoaddrunreachable.yfilter)
	|| ydk::is_set(nhrpserverstatrxerrprotoerror.yfilter)
	|| ydk::is_set(nhrpserverstatrxerrsdusizeexceeded.yfilter)
	|| ydk::is_set(nhrpserverstatrxerrinvalidextension.yfilter)
	|| ydk::is_set(nhrpserverstatrxerrinvalidresreplyreceived.yfilter)
	|| ydk::is_set(nhrpserverstatrxerrauthenticationfailure.yfilter)
	|| ydk::is_set(nhrpserverstatrxerrhopcountexceeded.yfilter)
	|| ydk::is_set(nhrpserverstattxerrunrecognizedextension.yfilter)
	|| ydk::is_set(nhrpserverstattxerrloopdetected.yfilter)
	|| ydk::is_set(nhrpserverstattxerrprotoaddrunreachable.yfilter)
	|| ydk::is_set(nhrpserverstattxerrprotoerror.yfilter)
	|| ydk::is_set(nhrpserverstattxerrsdusizeexceeded.yfilter)
	|| ydk::is_set(nhrpserverstattxerrinvalidextension.yfilter)
	|| ydk::is_set(nhrpserverstattxerrauthenticationfailure.yfilter)
	|| ydk::is_set(nhrpserverstattxerrhopcountexceeded.yfilter)
	|| ydk::is_set(nhrpserverstatfwresolvereq.yfilter)
	|| ydk::is_set(nhrpserverstatfwresolvereply.yfilter)
	|| ydk::is_set(nhrpserverstatfwregisterreq.yfilter)
	|| ydk::is_set(nhrpserverstatfwregisterreply.yfilter)
	|| ydk::is_set(nhrpserverstatfwpurgereq.yfilter)
	|| ydk::is_set(nhrpserverstatfwpurgereply.yfilter)
	|| ydk::is_set(nhrpserverstatfwerrorindication.yfilter)
	|| ydk::is_set(nhrpserverstatdiscontinuitytime.yfilter);
}

std::string NHRPMIB::Nhrpserverstattable::Nhrpserverstatentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "NHRP-MIB:NHRP-MIB/nhrpServerStatTable/" << get_segment_path();
    return path_buffer.str();
}

std::string NHRPMIB::Nhrpserverstattable::Nhrpserverstatentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nhrpServerStatEntry" <<"[nhrpServerIndex='" <<nhrpserverindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NHRPMIB::Nhrpserverstattable::Nhrpserverstatentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nhrpserverindex.is_set || is_set(nhrpserverindex.yfilter)) leaf_name_data.push_back(nhrpserverindex.get_name_leafdata());
    if (nhrpserverstatrxresolvereq.is_set || is_set(nhrpserverstatrxresolvereq.yfilter)) leaf_name_data.push_back(nhrpserverstatrxresolvereq.get_name_leafdata());
    if (nhrpserverstattxresolvereplyack.is_set || is_set(nhrpserverstattxresolvereplyack.yfilter)) leaf_name_data.push_back(nhrpserverstattxresolvereplyack.get_name_leafdata());
    if (nhrpserverstattxresolvereplynakprohibited.is_set || is_set(nhrpserverstattxresolvereplynakprohibited.yfilter)) leaf_name_data.push_back(nhrpserverstattxresolvereplynakprohibited.get_name_leafdata());
    if (nhrpserverstattxresolvereplynakinsufresources.is_set || is_set(nhrpserverstattxresolvereplynakinsufresources.yfilter)) leaf_name_data.push_back(nhrpserverstattxresolvereplynakinsufresources.get_name_leafdata());
    if (nhrpserverstattxresolvereplynaknobinding.is_set || is_set(nhrpserverstattxresolvereplynaknobinding.yfilter)) leaf_name_data.push_back(nhrpserverstattxresolvereplynaknobinding.get_name_leafdata());
    if (nhrpserverstattxresolvereplynaknotunique.is_set || is_set(nhrpserverstattxresolvereplynaknotunique.yfilter)) leaf_name_data.push_back(nhrpserverstattxresolvereplynaknotunique.get_name_leafdata());
    if (nhrpserverstatrxregisterreq.is_set || is_set(nhrpserverstatrxregisterreq.yfilter)) leaf_name_data.push_back(nhrpserverstatrxregisterreq.get_name_leafdata());
    if (nhrpserverstattxregisterack.is_set || is_set(nhrpserverstattxregisterack.yfilter)) leaf_name_data.push_back(nhrpserverstattxregisterack.get_name_leafdata());
    if (nhrpserverstattxregisternakprohibited.is_set || is_set(nhrpserverstattxregisternakprohibited.yfilter)) leaf_name_data.push_back(nhrpserverstattxregisternakprohibited.get_name_leafdata());
    if (nhrpserverstattxregisternakinsufresources.is_set || is_set(nhrpserverstattxregisternakinsufresources.yfilter)) leaf_name_data.push_back(nhrpserverstattxregisternakinsufresources.get_name_leafdata());
    if (nhrpserverstattxregisternakalreadyreg.is_set || is_set(nhrpserverstattxregisternakalreadyreg.yfilter)) leaf_name_data.push_back(nhrpserverstattxregisternakalreadyreg.get_name_leafdata());
    if (nhrpserverstatrxpurgereq.is_set || is_set(nhrpserverstatrxpurgereq.yfilter)) leaf_name_data.push_back(nhrpserverstatrxpurgereq.get_name_leafdata());
    if (nhrpserverstattxpurgereq.is_set || is_set(nhrpserverstattxpurgereq.yfilter)) leaf_name_data.push_back(nhrpserverstattxpurgereq.get_name_leafdata());
    if (nhrpserverstatrxpurgereply.is_set || is_set(nhrpserverstatrxpurgereply.yfilter)) leaf_name_data.push_back(nhrpserverstatrxpurgereply.get_name_leafdata());
    if (nhrpserverstattxpurgereply.is_set || is_set(nhrpserverstattxpurgereply.yfilter)) leaf_name_data.push_back(nhrpserverstattxpurgereply.get_name_leafdata());
    if (nhrpserverstatrxerrunrecognizedextension.is_set || is_set(nhrpserverstatrxerrunrecognizedextension.yfilter)) leaf_name_data.push_back(nhrpserverstatrxerrunrecognizedextension.get_name_leafdata());
    if (nhrpserverstatrxerrloopdetected.is_set || is_set(nhrpserverstatrxerrloopdetected.yfilter)) leaf_name_data.push_back(nhrpserverstatrxerrloopdetected.get_name_leafdata());
    if (nhrpserverstatrxerrprotoaddrunreachable.is_set || is_set(nhrpserverstatrxerrprotoaddrunreachable.yfilter)) leaf_name_data.push_back(nhrpserverstatrxerrprotoaddrunreachable.get_name_leafdata());
    if (nhrpserverstatrxerrprotoerror.is_set || is_set(nhrpserverstatrxerrprotoerror.yfilter)) leaf_name_data.push_back(nhrpserverstatrxerrprotoerror.get_name_leafdata());
    if (nhrpserverstatrxerrsdusizeexceeded.is_set || is_set(nhrpserverstatrxerrsdusizeexceeded.yfilter)) leaf_name_data.push_back(nhrpserverstatrxerrsdusizeexceeded.get_name_leafdata());
    if (nhrpserverstatrxerrinvalidextension.is_set || is_set(nhrpserverstatrxerrinvalidextension.yfilter)) leaf_name_data.push_back(nhrpserverstatrxerrinvalidextension.get_name_leafdata());
    if (nhrpserverstatrxerrinvalidresreplyreceived.is_set || is_set(nhrpserverstatrxerrinvalidresreplyreceived.yfilter)) leaf_name_data.push_back(nhrpserverstatrxerrinvalidresreplyreceived.get_name_leafdata());
    if (nhrpserverstatrxerrauthenticationfailure.is_set || is_set(nhrpserverstatrxerrauthenticationfailure.yfilter)) leaf_name_data.push_back(nhrpserverstatrxerrauthenticationfailure.get_name_leafdata());
    if (nhrpserverstatrxerrhopcountexceeded.is_set || is_set(nhrpserverstatrxerrhopcountexceeded.yfilter)) leaf_name_data.push_back(nhrpserverstatrxerrhopcountexceeded.get_name_leafdata());
    if (nhrpserverstattxerrunrecognizedextension.is_set || is_set(nhrpserverstattxerrunrecognizedextension.yfilter)) leaf_name_data.push_back(nhrpserverstattxerrunrecognizedextension.get_name_leafdata());
    if (nhrpserverstattxerrloopdetected.is_set || is_set(nhrpserverstattxerrloopdetected.yfilter)) leaf_name_data.push_back(nhrpserverstattxerrloopdetected.get_name_leafdata());
    if (nhrpserverstattxerrprotoaddrunreachable.is_set || is_set(nhrpserverstattxerrprotoaddrunreachable.yfilter)) leaf_name_data.push_back(nhrpserverstattxerrprotoaddrunreachable.get_name_leafdata());
    if (nhrpserverstattxerrprotoerror.is_set || is_set(nhrpserverstattxerrprotoerror.yfilter)) leaf_name_data.push_back(nhrpserverstattxerrprotoerror.get_name_leafdata());
    if (nhrpserverstattxerrsdusizeexceeded.is_set || is_set(nhrpserverstattxerrsdusizeexceeded.yfilter)) leaf_name_data.push_back(nhrpserverstattxerrsdusizeexceeded.get_name_leafdata());
    if (nhrpserverstattxerrinvalidextension.is_set || is_set(nhrpserverstattxerrinvalidextension.yfilter)) leaf_name_data.push_back(nhrpserverstattxerrinvalidextension.get_name_leafdata());
    if (nhrpserverstattxerrauthenticationfailure.is_set || is_set(nhrpserverstattxerrauthenticationfailure.yfilter)) leaf_name_data.push_back(nhrpserverstattxerrauthenticationfailure.get_name_leafdata());
    if (nhrpserverstattxerrhopcountexceeded.is_set || is_set(nhrpserverstattxerrhopcountexceeded.yfilter)) leaf_name_data.push_back(nhrpserverstattxerrhopcountexceeded.get_name_leafdata());
    if (nhrpserverstatfwresolvereq.is_set || is_set(nhrpserverstatfwresolvereq.yfilter)) leaf_name_data.push_back(nhrpserverstatfwresolvereq.get_name_leafdata());
    if (nhrpserverstatfwresolvereply.is_set || is_set(nhrpserverstatfwresolvereply.yfilter)) leaf_name_data.push_back(nhrpserverstatfwresolvereply.get_name_leafdata());
    if (nhrpserverstatfwregisterreq.is_set || is_set(nhrpserverstatfwregisterreq.yfilter)) leaf_name_data.push_back(nhrpserverstatfwregisterreq.get_name_leafdata());
    if (nhrpserverstatfwregisterreply.is_set || is_set(nhrpserverstatfwregisterreply.yfilter)) leaf_name_data.push_back(nhrpserverstatfwregisterreply.get_name_leafdata());
    if (nhrpserverstatfwpurgereq.is_set || is_set(nhrpserverstatfwpurgereq.yfilter)) leaf_name_data.push_back(nhrpserverstatfwpurgereq.get_name_leafdata());
    if (nhrpserverstatfwpurgereply.is_set || is_set(nhrpserverstatfwpurgereply.yfilter)) leaf_name_data.push_back(nhrpserverstatfwpurgereply.get_name_leafdata());
    if (nhrpserverstatfwerrorindication.is_set || is_set(nhrpserverstatfwerrorindication.yfilter)) leaf_name_data.push_back(nhrpserverstatfwerrorindication.get_name_leafdata());
    if (nhrpserverstatdiscontinuitytime.is_set || is_set(nhrpserverstatdiscontinuitytime.yfilter)) leaf_name_data.push_back(nhrpserverstatdiscontinuitytime.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NHRPMIB::Nhrpserverstattable::Nhrpserverstatentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NHRPMIB::Nhrpserverstattable::Nhrpserverstatentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void NHRPMIB::Nhrpserverstattable::Nhrpserverstatentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nhrpServerIndex")
    {
        nhrpserverindex = value;
        nhrpserverindex.value_namespace = name_space;
        nhrpserverindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nhrpServerStatRxResolveReq")
    {
        nhrpserverstatrxresolvereq = value;
        nhrpserverstatrxresolvereq.value_namespace = name_space;
        nhrpserverstatrxresolvereq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nhrpServerStatTxResolveReplyAck")
    {
        nhrpserverstattxresolvereplyack = value;
        nhrpserverstattxresolvereplyack.value_namespace = name_space;
        nhrpserverstattxresolvereplyack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nhrpServerStatTxResolveReplyNakProhibited")
    {
        nhrpserverstattxresolvereplynakprohibited = value;
        nhrpserverstattxresolvereplynakprohibited.value_namespace = name_space;
        nhrpserverstattxresolvereplynakprohibited.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nhrpServerStatTxResolveReplyNakInsufResources")
    {
        nhrpserverstattxresolvereplynakinsufresources = value;
        nhrpserverstattxresolvereplynakinsufresources.value_namespace = name_space;
        nhrpserverstattxresolvereplynakinsufresources.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nhrpServerStatTxResolveReplyNakNoBinding")
    {
        nhrpserverstattxresolvereplynaknobinding = value;
        nhrpserverstattxresolvereplynaknobinding.value_namespace = name_space;
        nhrpserverstattxresolvereplynaknobinding.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nhrpServerStatTxResolveReplyNakNotUnique")
    {
        nhrpserverstattxresolvereplynaknotunique = value;
        nhrpserverstattxresolvereplynaknotunique.value_namespace = name_space;
        nhrpserverstattxresolvereplynaknotunique.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nhrpServerStatRxRegisterReq")
    {
        nhrpserverstatrxregisterreq = value;
        nhrpserverstatrxregisterreq.value_namespace = name_space;
        nhrpserverstatrxregisterreq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nhrpServerStatTxRegisterAck")
    {
        nhrpserverstattxregisterack = value;
        nhrpserverstattxregisterack.value_namespace = name_space;
        nhrpserverstattxregisterack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nhrpServerStatTxRegisterNakProhibited")
    {
        nhrpserverstattxregisternakprohibited = value;
        nhrpserverstattxregisternakprohibited.value_namespace = name_space;
        nhrpserverstattxregisternakprohibited.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nhrpServerStatTxRegisterNakInsufResources")
    {
        nhrpserverstattxregisternakinsufresources = value;
        nhrpserverstattxregisternakinsufresources.value_namespace = name_space;
        nhrpserverstattxregisternakinsufresources.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nhrpServerStatTxRegisterNakAlreadyReg")
    {
        nhrpserverstattxregisternakalreadyreg = value;
        nhrpserverstattxregisternakalreadyreg.value_namespace = name_space;
        nhrpserverstattxregisternakalreadyreg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nhrpServerStatRxPurgeReq")
    {
        nhrpserverstatrxpurgereq = value;
        nhrpserverstatrxpurgereq.value_namespace = name_space;
        nhrpserverstatrxpurgereq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nhrpServerStatTxPurgeReq")
    {
        nhrpserverstattxpurgereq = value;
        nhrpserverstattxpurgereq.value_namespace = name_space;
        nhrpserverstattxpurgereq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nhrpServerStatRxPurgeReply")
    {
        nhrpserverstatrxpurgereply = value;
        nhrpserverstatrxpurgereply.value_namespace = name_space;
        nhrpserverstatrxpurgereply.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nhrpServerStatTxPurgeReply")
    {
        nhrpserverstattxpurgereply = value;
        nhrpserverstattxpurgereply.value_namespace = name_space;
        nhrpserverstattxpurgereply.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nhrpServerStatRxErrUnrecognizedExtension")
    {
        nhrpserverstatrxerrunrecognizedextension = value;
        nhrpserverstatrxerrunrecognizedextension.value_namespace = name_space;
        nhrpserverstatrxerrunrecognizedextension.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nhrpServerStatRxErrLoopDetected")
    {
        nhrpserverstatrxerrloopdetected = value;
        nhrpserverstatrxerrloopdetected.value_namespace = name_space;
        nhrpserverstatrxerrloopdetected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nhrpServerStatRxErrProtoAddrUnreachable")
    {
        nhrpserverstatrxerrprotoaddrunreachable = value;
        nhrpserverstatrxerrprotoaddrunreachable.value_namespace = name_space;
        nhrpserverstatrxerrprotoaddrunreachable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nhrpServerStatRxErrProtoError")
    {
        nhrpserverstatrxerrprotoerror = value;
        nhrpserverstatrxerrprotoerror.value_namespace = name_space;
        nhrpserverstatrxerrprotoerror.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nhrpServerStatRxErrSduSizeExceeded")
    {
        nhrpserverstatrxerrsdusizeexceeded = value;
        nhrpserverstatrxerrsdusizeexceeded.value_namespace = name_space;
        nhrpserverstatrxerrsdusizeexceeded.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nhrpServerStatRxErrInvalidExtension")
    {
        nhrpserverstatrxerrinvalidextension = value;
        nhrpserverstatrxerrinvalidextension.value_namespace = name_space;
        nhrpserverstatrxerrinvalidextension.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nhrpServerStatRxErrInvalidResReplyReceived")
    {
        nhrpserverstatrxerrinvalidresreplyreceived = value;
        nhrpserverstatrxerrinvalidresreplyreceived.value_namespace = name_space;
        nhrpserverstatrxerrinvalidresreplyreceived.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nhrpServerStatRxErrAuthenticationFailure")
    {
        nhrpserverstatrxerrauthenticationfailure = value;
        nhrpserverstatrxerrauthenticationfailure.value_namespace = name_space;
        nhrpserverstatrxerrauthenticationfailure.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nhrpServerStatRxErrHopCountExceeded")
    {
        nhrpserverstatrxerrhopcountexceeded = value;
        nhrpserverstatrxerrhopcountexceeded.value_namespace = name_space;
        nhrpserverstatrxerrhopcountexceeded.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nhrpServerStatTxErrUnrecognizedExtension")
    {
        nhrpserverstattxerrunrecognizedextension = value;
        nhrpserverstattxerrunrecognizedextension.value_namespace = name_space;
        nhrpserverstattxerrunrecognizedextension.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nhrpServerStatTxErrLoopDetected")
    {
        nhrpserverstattxerrloopdetected = value;
        nhrpserverstattxerrloopdetected.value_namespace = name_space;
        nhrpserverstattxerrloopdetected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nhrpServerStatTxErrProtoAddrUnreachable")
    {
        nhrpserverstattxerrprotoaddrunreachable = value;
        nhrpserverstattxerrprotoaddrunreachable.value_namespace = name_space;
        nhrpserverstattxerrprotoaddrunreachable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nhrpServerStatTxErrProtoError")
    {
        nhrpserverstattxerrprotoerror = value;
        nhrpserverstattxerrprotoerror.value_namespace = name_space;
        nhrpserverstattxerrprotoerror.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nhrpServerStatTxErrSduSizeExceeded")
    {
        nhrpserverstattxerrsdusizeexceeded = value;
        nhrpserverstattxerrsdusizeexceeded.value_namespace = name_space;
        nhrpserverstattxerrsdusizeexceeded.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nhrpServerStatTxErrInvalidExtension")
    {
        nhrpserverstattxerrinvalidextension = value;
        nhrpserverstattxerrinvalidextension.value_namespace = name_space;
        nhrpserverstattxerrinvalidextension.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nhrpServerStatTxErrAuthenticationFailure")
    {
        nhrpserverstattxerrauthenticationfailure = value;
        nhrpserverstattxerrauthenticationfailure.value_namespace = name_space;
        nhrpserverstattxerrauthenticationfailure.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nhrpServerStatTxErrHopCountExceeded")
    {
        nhrpserverstattxerrhopcountexceeded = value;
        nhrpserverstattxerrhopcountexceeded.value_namespace = name_space;
        nhrpserverstattxerrhopcountexceeded.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nhrpServerStatFwResolveReq")
    {
        nhrpserverstatfwresolvereq = value;
        nhrpserverstatfwresolvereq.value_namespace = name_space;
        nhrpserverstatfwresolvereq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nhrpServerStatFwResolveReply")
    {
        nhrpserverstatfwresolvereply = value;
        nhrpserverstatfwresolvereply.value_namespace = name_space;
        nhrpserverstatfwresolvereply.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nhrpServerStatFwRegisterReq")
    {
        nhrpserverstatfwregisterreq = value;
        nhrpserverstatfwregisterreq.value_namespace = name_space;
        nhrpserverstatfwregisterreq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nhrpServerStatFwRegisterReply")
    {
        nhrpserverstatfwregisterreply = value;
        nhrpserverstatfwregisterreply.value_namespace = name_space;
        nhrpserverstatfwregisterreply.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nhrpServerStatFwPurgeReq")
    {
        nhrpserverstatfwpurgereq = value;
        nhrpserverstatfwpurgereq.value_namespace = name_space;
        nhrpserverstatfwpurgereq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nhrpServerStatFwPurgeReply")
    {
        nhrpserverstatfwpurgereply = value;
        nhrpserverstatfwpurgereply.value_namespace = name_space;
        nhrpserverstatfwpurgereply.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nhrpServerStatFwErrorIndication")
    {
        nhrpserverstatfwerrorindication = value;
        nhrpserverstatfwerrorindication.value_namespace = name_space;
        nhrpserverstatfwerrorindication.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nhrpServerStatDiscontinuityTime")
    {
        nhrpserverstatdiscontinuitytime = value;
        nhrpserverstatdiscontinuitytime.value_namespace = name_space;
        nhrpserverstatdiscontinuitytime.value_namespace_prefix = name_space_prefix;
    }
}

void NHRPMIB::Nhrpserverstattable::Nhrpserverstatentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nhrpServerIndex")
    {
        nhrpserverindex.yfilter = yfilter;
    }
    if(value_path == "nhrpServerStatRxResolveReq")
    {
        nhrpserverstatrxresolvereq.yfilter = yfilter;
    }
    if(value_path == "nhrpServerStatTxResolveReplyAck")
    {
        nhrpserverstattxresolvereplyack.yfilter = yfilter;
    }
    if(value_path == "nhrpServerStatTxResolveReplyNakProhibited")
    {
        nhrpserverstattxresolvereplynakprohibited.yfilter = yfilter;
    }
    if(value_path == "nhrpServerStatTxResolveReplyNakInsufResources")
    {
        nhrpserverstattxresolvereplynakinsufresources.yfilter = yfilter;
    }
    if(value_path == "nhrpServerStatTxResolveReplyNakNoBinding")
    {
        nhrpserverstattxresolvereplynaknobinding.yfilter = yfilter;
    }
    if(value_path == "nhrpServerStatTxResolveReplyNakNotUnique")
    {
        nhrpserverstattxresolvereplynaknotunique.yfilter = yfilter;
    }
    if(value_path == "nhrpServerStatRxRegisterReq")
    {
        nhrpserverstatrxregisterreq.yfilter = yfilter;
    }
    if(value_path == "nhrpServerStatTxRegisterAck")
    {
        nhrpserverstattxregisterack.yfilter = yfilter;
    }
    if(value_path == "nhrpServerStatTxRegisterNakProhibited")
    {
        nhrpserverstattxregisternakprohibited.yfilter = yfilter;
    }
    if(value_path == "nhrpServerStatTxRegisterNakInsufResources")
    {
        nhrpserverstattxregisternakinsufresources.yfilter = yfilter;
    }
    if(value_path == "nhrpServerStatTxRegisterNakAlreadyReg")
    {
        nhrpserverstattxregisternakalreadyreg.yfilter = yfilter;
    }
    if(value_path == "nhrpServerStatRxPurgeReq")
    {
        nhrpserverstatrxpurgereq.yfilter = yfilter;
    }
    if(value_path == "nhrpServerStatTxPurgeReq")
    {
        nhrpserverstattxpurgereq.yfilter = yfilter;
    }
    if(value_path == "nhrpServerStatRxPurgeReply")
    {
        nhrpserverstatrxpurgereply.yfilter = yfilter;
    }
    if(value_path == "nhrpServerStatTxPurgeReply")
    {
        nhrpserverstattxpurgereply.yfilter = yfilter;
    }
    if(value_path == "nhrpServerStatRxErrUnrecognizedExtension")
    {
        nhrpserverstatrxerrunrecognizedextension.yfilter = yfilter;
    }
    if(value_path == "nhrpServerStatRxErrLoopDetected")
    {
        nhrpserverstatrxerrloopdetected.yfilter = yfilter;
    }
    if(value_path == "nhrpServerStatRxErrProtoAddrUnreachable")
    {
        nhrpserverstatrxerrprotoaddrunreachable.yfilter = yfilter;
    }
    if(value_path == "nhrpServerStatRxErrProtoError")
    {
        nhrpserverstatrxerrprotoerror.yfilter = yfilter;
    }
    if(value_path == "nhrpServerStatRxErrSduSizeExceeded")
    {
        nhrpserverstatrxerrsdusizeexceeded.yfilter = yfilter;
    }
    if(value_path == "nhrpServerStatRxErrInvalidExtension")
    {
        nhrpserverstatrxerrinvalidextension.yfilter = yfilter;
    }
    if(value_path == "nhrpServerStatRxErrInvalidResReplyReceived")
    {
        nhrpserverstatrxerrinvalidresreplyreceived.yfilter = yfilter;
    }
    if(value_path == "nhrpServerStatRxErrAuthenticationFailure")
    {
        nhrpserverstatrxerrauthenticationfailure.yfilter = yfilter;
    }
    if(value_path == "nhrpServerStatRxErrHopCountExceeded")
    {
        nhrpserverstatrxerrhopcountexceeded.yfilter = yfilter;
    }
    if(value_path == "nhrpServerStatTxErrUnrecognizedExtension")
    {
        nhrpserverstattxerrunrecognizedextension.yfilter = yfilter;
    }
    if(value_path == "nhrpServerStatTxErrLoopDetected")
    {
        nhrpserverstattxerrloopdetected.yfilter = yfilter;
    }
    if(value_path == "nhrpServerStatTxErrProtoAddrUnreachable")
    {
        nhrpserverstattxerrprotoaddrunreachable.yfilter = yfilter;
    }
    if(value_path == "nhrpServerStatTxErrProtoError")
    {
        nhrpserverstattxerrprotoerror.yfilter = yfilter;
    }
    if(value_path == "nhrpServerStatTxErrSduSizeExceeded")
    {
        nhrpserverstattxerrsdusizeexceeded.yfilter = yfilter;
    }
    if(value_path == "nhrpServerStatTxErrInvalidExtension")
    {
        nhrpserverstattxerrinvalidextension.yfilter = yfilter;
    }
    if(value_path == "nhrpServerStatTxErrAuthenticationFailure")
    {
        nhrpserverstattxerrauthenticationfailure.yfilter = yfilter;
    }
    if(value_path == "nhrpServerStatTxErrHopCountExceeded")
    {
        nhrpserverstattxerrhopcountexceeded.yfilter = yfilter;
    }
    if(value_path == "nhrpServerStatFwResolveReq")
    {
        nhrpserverstatfwresolvereq.yfilter = yfilter;
    }
    if(value_path == "nhrpServerStatFwResolveReply")
    {
        nhrpserverstatfwresolvereply.yfilter = yfilter;
    }
    if(value_path == "nhrpServerStatFwRegisterReq")
    {
        nhrpserverstatfwregisterreq.yfilter = yfilter;
    }
    if(value_path == "nhrpServerStatFwRegisterReply")
    {
        nhrpserverstatfwregisterreply.yfilter = yfilter;
    }
    if(value_path == "nhrpServerStatFwPurgeReq")
    {
        nhrpserverstatfwpurgereq.yfilter = yfilter;
    }
    if(value_path == "nhrpServerStatFwPurgeReply")
    {
        nhrpserverstatfwpurgereply.yfilter = yfilter;
    }
    if(value_path == "nhrpServerStatFwErrorIndication")
    {
        nhrpserverstatfwerrorindication.yfilter = yfilter;
    }
    if(value_path == "nhrpServerStatDiscontinuityTime")
    {
        nhrpserverstatdiscontinuitytime.yfilter = yfilter;
    }
}

bool NHRPMIB::Nhrpserverstattable::Nhrpserverstatentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nhrpServerIndex" || name == "nhrpServerStatRxResolveReq" || name == "nhrpServerStatTxResolveReplyAck" || name == "nhrpServerStatTxResolveReplyNakProhibited" || name == "nhrpServerStatTxResolveReplyNakInsufResources" || name == "nhrpServerStatTxResolveReplyNakNoBinding" || name == "nhrpServerStatTxResolveReplyNakNotUnique" || name == "nhrpServerStatRxRegisterReq" || name == "nhrpServerStatTxRegisterAck" || name == "nhrpServerStatTxRegisterNakProhibited" || name == "nhrpServerStatTxRegisterNakInsufResources" || name == "nhrpServerStatTxRegisterNakAlreadyReg" || name == "nhrpServerStatRxPurgeReq" || name == "nhrpServerStatTxPurgeReq" || name == "nhrpServerStatRxPurgeReply" || name == "nhrpServerStatTxPurgeReply" || name == "nhrpServerStatRxErrUnrecognizedExtension" || name == "nhrpServerStatRxErrLoopDetected" || name == "nhrpServerStatRxErrProtoAddrUnreachable" || name == "nhrpServerStatRxErrProtoError" || name == "nhrpServerStatRxErrSduSizeExceeded" || name == "nhrpServerStatRxErrInvalidExtension" || name == "nhrpServerStatRxErrInvalidResReplyReceived" || name == "nhrpServerStatRxErrAuthenticationFailure" || name == "nhrpServerStatRxErrHopCountExceeded" || name == "nhrpServerStatTxErrUnrecognizedExtension" || name == "nhrpServerStatTxErrLoopDetected" || name == "nhrpServerStatTxErrProtoAddrUnreachable" || name == "nhrpServerStatTxErrProtoError" || name == "nhrpServerStatTxErrSduSizeExceeded" || name == "nhrpServerStatTxErrInvalidExtension" || name == "nhrpServerStatTxErrAuthenticationFailure" || name == "nhrpServerStatTxErrHopCountExceeded" || name == "nhrpServerStatFwResolveReq" || name == "nhrpServerStatFwResolveReply" || name == "nhrpServerStatFwRegisterReq" || name == "nhrpServerStatFwRegisterReply" || name == "nhrpServerStatFwPurgeReq" || name == "nhrpServerStatFwPurgeReply" || name == "nhrpServerStatFwErrorIndication" || name == "nhrpServerStatDiscontinuityTime")
        return true;
    return false;
}

const Enum::YLeaf NHRPMIB::Nhrpcachetable::Nhrpcacheentry::Nhrpcachetype::other {1, "other"};
const Enum::YLeaf NHRPMIB::Nhrpcachetable::Nhrpcacheentry::Nhrpcachetype::register_ {2, "register"};
const Enum::YLeaf NHRPMIB::Nhrpcachetable::Nhrpcacheentry::Nhrpcachetype::resolveAuthoritative {3, "resolveAuthoritative"};
const Enum::YLeaf NHRPMIB::Nhrpcachetable::Nhrpcacheentry::Nhrpcachetype::resoveNonauthoritative {4, "resoveNonauthoritative"};
const Enum::YLeaf NHRPMIB::Nhrpcachetable::Nhrpcacheentry::Nhrpcachetype::transit {5, "transit"};
const Enum::YLeaf NHRPMIB::Nhrpcachetable::Nhrpcacheentry::Nhrpcachetype::administrativelyAdded {6, "administrativelyAdded"};
const Enum::YLeaf NHRPMIB::Nhrpcachetable::Nhrpcacheentry::Nhrpcachetype::atmarp {7, "atmarp"};
const Enum::YLeaf NHRPMIB::Nhrpcachetable::Nhrpcacheentry::Nhrpcachetype::scsp {8, "scsp"};

const Enum::YLeaf NHRPMIB::Nhrpcachetable::Nhrpcacheentry::Nhrpcachestate::incomplete {1, "incomplete"};
const Enum::YLeaf NHRPMIB::Nhrpcachetable::Nhrpcacheentry::Nhrpcachestate::ackReply {2, "ackReply"};
const Enum::YLeaf NHRPMIB::Nhrpcachetable::Nhrpcacheentry::Nhrpcachestate::nakReply {3, "nakReply"};

const Enum::YLeaf NHRPMIB::Nhrpclientregistrationtable::Nhrpclientregistrationentry::Nhrpclientreguniqueness::requestUnique {1, "requestUnique"};
const Enum::YLeaf NHRPMIB::Nhrpclientregistrationtable::Nhrpclientregistrationentry::Nhrpclientreguniqueness::requestNotUnique {2, "requestNotUnique"};

const Enum::YLeaf NHRPMIB::Nhrpclientregistrationtable::Nhrpclientregistrationentry::Nhrpclientregstate::other {1, "other"};
const Enum::YLeaf NHRPMIB::Nhrpclientregistrationtable::Nhrpclientregistrationentry::Nhrpclientregstate::registering {2, "registering"};
const Enum::YLeaf NHRPMIB::Nhrpclientregistrationtable::Nhrpclientregistrationentry::Nhrpclientregstate::ackRegisterReply {3, "ackRegisterReply"};
const Enum::YLeaf NHRPMIB::Nhrpclientregistrationtable::Nhrpclientregistrationentry::Nhrpclientregstate::nakRegisterReply {4, "nakRegisterReply"};


}
}

