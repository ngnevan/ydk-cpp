
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "INTEGRATED_SERVICES_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace INTEGRATED_SERVICES_MIB {

INTEGRATEDSERVICESMIB::INTEGRATEDSERVICESMIB()
    :
    intsrvgenobjects(std::make_shared<INTEGRATEDSERVICESMIB::Intsrvgenobjects>())
	,intsrvifattribtable(std::make_shared<INTEGRATEDSERVICESMIB::Intsrvifattribtable>())
	,intsrvflowtable(std::make_shared<INTEGRATEDSERVICESMIB::Intsrvflowtable>())
{
    intsrvgenobjects->parent = this;
    intsrvifattribtable->parent = this;
    intsrvflowtable->parent = this;

    yang_name = "INTEGRATED-SERVICES-MIB"; yang_parent_name = "INTEGRATED-SERVICES-MIB"; is_top_level_class = true; has_list_ancestor = false;
}

INTEGRATEDSERVICESMIB::~INTEGRATEDSERVICESMIB()
{
}

bool INTEGRATEDSERVICESMIB::has_data() const
{
    return (intsrvgenobjects !=  nullptr && intsrvgenobjects->has_data())
	|| (intsrvifattribtable !=  nullptr && intsrvifattribtable->has_data())
	|| (intsrvflowtable !=  nullptr && intsrvflowtable->has_data());
}

bool INTEGRATEDSERVICESMIB::has_operation() const
{
    return is_set(yfilter)
	|| (intsrvgenobjects !=  nullptr && intsrvgenobjects->has_operation())
	|| (intsrvifattribtable !=  nullptr && intsrvifattribtable->has_operation())
	|| (intsrvflowtable !=  nullptr && intsrvflowtable->has_operation());
}

std::string INTEGRATEDSERVICESMIB::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "INTEGRATED-SERVICES-MIB:INTEGRATED-SERVICES-MIB";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > INTEGRATEDSERVICESMIB::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> INTEGRATEDSERVICESMIB::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "intSrvGenObjects")
    {
        if(intsrvgenobjects == nullptr)
        {
            intsrvgenobjects = std::make_shared<INTEGRATEDSERVICESMIB::Intsrvgenobjects>();
        }
        return intsrvgenobjects;
    }

    if(child_yang_name == "intSrvIfAttribTable")
    {
        if(intsrvifattribtable == nullptr)
        {
            intsrvifattribtable = std::make_shared<INTEGRATEDSERVICESMIB::Intsrvifattribtable>();
        }
        return intsrvifattribtable;
    }

    if(child_yang_name == "intSrvFlowTable")
    {
        if(intsrvflowtable == nullptr)
        {
            intsrvflowtable = std::make_shared<INTEGRATEDSERVICESMIB::Intsrvflowtable>();
        }
        return intsrvflowtable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> INTEGRATEDSERVICESMIB::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(intsrvgenobjects != nullptr)
    {
        children["intSrvGenObjects"] = intsrvgenobjects;
    }

    if(intsrvifattribtable != nullptr)
    {
        children["intSrvIfAttribTable"] = intsrvifattribtable;
    }

    if(intsrvflowtable != nullptr)
    {
        children["intSrvFlowTable"] = intsrvflowtable;
    }

    return children;
}

void INTEGRATEDSERVICESMIB::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void INTEGRATEDSERVICESMIB::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> INTEGRATEDSERVICESMIB::clone_ptr() const
{
    return std::make_shared<INTEGRATEDSERVICESMIB>();
}

std::string INTEGRATEDSERVICESMIB::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string INTEGRATEDSERVICESMIB::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function INTEGRATEDSERVICESMIB::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> INTEGRATEDSERVICESMIB::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool INTEGRATEDSERVICESMIB::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "intSrvGenObjects" || name == "intSrvIfAttribTable" || name == "intSrvFlowTable")
        return true;
    return false;
}

INTEGRATEDSERVICESMIB::Intsrvgenobjects::Intsrvgenobjects()
    :
    intsrvflownewindex{YType::int32, "intSrvFlowNewIndex"}
{

    yang_name = "intSrvGenObjects"; yang_parent_name = "INTEGRATED-SERVICES-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

INTEGRATEDSERVICESMIB::Intsrvgenobjects::~Intsrvgenobjects()
{
}

bool INTEGRATEDSERVICESMIB::Intsrvgenobjects::has_data() const
{
    return intsrvflownewindex.is_set;
}

bool INTEGRATEDSERVICESMIB::Intsrvgenobjects::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(intsrvflownewindex.yfilter);
}

std::string INTEGRATEDSERVICESMIB::Intsrvgenobjects::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "INTEGRATED-SERVICES-MIB:INTEGRATED-SERVICES-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string INTEGRATEDSERVICESMIB::Intsrvgenobjects::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "intSrvGenObjects";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > INTEGRATEDSERVICESMIB::Intsrvgenobjects::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (intsrvflownewindex.is_set || is_set(intsrvflownewindex.yfilter)) leaf_name_data.push_back(intsrvflownewindex.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> INTEGRATEDSERVICESMIB::Intsrvgenobjects::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> INTEGRATEDSERVICESMIB::Intsrvgenobjects::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void INTEGRATEDSERVICESMIB::Intsrvgenobjects::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "intSrvFlowNewIndex")
    {
        intsrvflownewindex = value;
        intsrvflownewindex.value_namespace = name_space;
        intsrvflownewindex.value_namespace_prefix = name_space_prefix;
    }
}

void INTEGRATEDSERVICESMIB::Intsrvgenobjects::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "intSrvFlowNewIndex")
    {
        intsrvflownewindex.yfilter = yfilter;
    }
}

bool INTEGRATEDSERVICESMIB::Intsrvgenobjects::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "intSrvFlowNewIndex")
        return true;
    return false;
}

INTEGRATEDSERVICESMIB::Intsrvifattribtable::Intsrvifattribtable()
{

    yang_name = "intSrvIfAttribTable"; yang_parent_name = "INTEGRATED-SERVICES-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

INTEGRATEDSERVICESMIB::Intsrvifattribtable::~Intsrvifattribtable()
{
}

bool INTEGRATEDSERVICESMIB::Intsrvifattribtable::has_data() const
{
    for (std::size_t index=0; index<intsrvifattribentry.size(); index++)
    {
        if(intsrvifattribentry[index]->has_data())
            return true;
    }
    return false;
}

bool INTEGRATEDSERVICESMIB::Intsrvifattribtable::has_operation() const
{
    for (std::size_t index=0; index<intsrvifattribentry.size(); index++)
    {
        if(intsrvifattribentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string INTEGRATEDSERVICESMIB::Intsrvifattribtable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "INTEGRATED-SERVICES-MIB:INTEGRATED-SERVICES-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string INTEGRATEDSERVICESMIB::Intsrvifattribtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "intSrvIfAttribTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > INTEGRATEDSERVICESMIB::Intsrvifattribtable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> INTEGRATEDSERVICESMIB::Intsrvifattribtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "intSrvIfAttribEntry")
    {
        auto c = std::make_shared<INTEGRATEDSERVICESMIB::Intsrvifattribtable::Intsrvifattribentry>();
        c->parent = this;
        intsrvifattribentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> INTEGRATEDSERVICESMIB::Intsrvifattribtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : intsrvifattribentry)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void INTEGRATEDSERVICESMIB::Intsrvifattribtable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void INTEGRATEDSERVICESMIB::Intsrvifattribtable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool INTEGRATEDSERVICESMIB::Intsrvifattribtable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "intSrvIfAttribEntry")
        return true;
    return false;
}

INTEGRATEDSERVICESMIB::Intsrvifattribtable::Intsrvifattribentry::Intsrvifattribentry()
    :
    ifindex{YType::str, "ifIndex"},
    intsrvifattriballocatedbits{YType::int32, "intSrvIfAttribAllocatedBits"},
    intsrvifattribmaxallocatedbits{YType::int32, "intSrvIfAttribMaxAllocatedBits"},
    intsrvifattriballocatedbuffer{YType::int32, "intSrvIfAttribAllocatedBuffer"},
    intsrvifattribflows{YType::uint32, "intSrvIfAttribFlows"},
    intsrvifattribpropagationdelay{YType::int32, "intSrvIfAttribPropagationDelay"},
    intsrvifattribstatus{YType::enumeration, "intSrvIfAttribStatus"}
{

    yang_name = "intSrvIfAttribEntry"; yang_parent_name = "intSrvIfAttribTable"; is_top_level_class = false; has_list_ancestor = false;
}

INTEGRATEDSERVICESMIB::Intsrvifattribtable::Intsrvifattribentry::~Intsrvifattribentry()
{
}

bool INTEGRATEDSERVICESMIB::Intsrvifattribtable::Intsrvifattribentry::has_data() const
{
    return ifindex.is_set
	|| intsrvifattriballocatedbits.is_set
	|| intsrvifattribmaxallocatedbits.is_set
	|| intsrvifattriballocatedbuffer.is_set
	|| intsrvifattribflows.is_set
	|| intsrvifattribpropagationdelay.is_set
	|| intsrvifattribstatus.is_set;
}

bool INTEGRATEDSERVICESMIB::Intsrvifattribtable::Intsrvifattribentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(intsrvifattriballocatedbits.yfilter)
	|| ydk::is_set(intsrvifattribmaxallocatedbits.yfilter)
	|| ydk::is_set(intsrvifattriballocatedbuffer.yfilter)
	|| ydk::is_set(intsrvifattribflows.yfilter)
	|| ydk::is_set(intsrvifattribpropagationdelay.yfilter)
	|| ydk::is_set(intsrvifattribstatus.yfilter);
}

std::string INTEGRATEDSERVICESMIB::Intsrvifattribtable::Intsrvifattribentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "INTEGRATED-SERVICES-MIB:INTEGRATED-SERVICES-MIB/intSrvIfAttribTable/" << get_segment_path();
    return path_buffer.str();
}

std::string INTEGRATEDSERVICESMIB::Intsrvifattribtable::Intsrvifattribentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "intSrvIfAttribEntry" <<"[ifIndex='" <<ifindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > INTEGRATEDSERVICESMIB::Intsrvifattribtable::Intsrvifattribentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (intsrvifattriballocatedbits.is_set || is_set(intsrvifattriballocatedbits.yfilter)) leaf_name_data.push_back(intsrvifattriballocatedbits.get_name_leafdata());
    if (intsrvifattribmaxallocatedbits.is_set || is_set(intsrvifattribmaxallocatedbits.yfilter)) leaf_name_data.push_back(intsrvifattribmaxallocatedbits.get_name_leafdata());
    if (intsrvifattriballocatedbuffer.is_set || is_set(intsrvifattriballocatedbuffer.yfilter)) leaf_name_data.push_back(intsrvifattriballocatedbuffer.get_name_leafdata());
    if (intsrvifattribflows.is_set || is_set(intsrvifattribflows.yfilter)) leaf_name_data.push_back(intsrvifattribflows.get_name_leafdata());
    if (intsrvifattribpropagationdelay.is_set || is_set(intsrvifattribpropagationdelay.yfilter)) leaf_name_data.push_back(intsrvifattribpropagationdelay.get_name_leafdata());
    if (intsrvifattribstatus.is_set || is_set(intsrvifattribstatus.yfilter)) leaf_name_data.push_back(intsrvifattribstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> INTEGRATEDSERVICESMIB::Intsrvifattribtable::Intsrvifattribentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> INTEGRATEDSERVICESMIB::Intsrvifattribtable::Intsrvifattribentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void INTEGRATEDSERVICESMIB::Intsrvifattribtable::Intsrvifattribentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "intSrvIfAttribAllocatedBits")
    {
        intsrvifattriballocatedbits = value;
        intsrvifattriballocatedbits.value_namespace = name_space;
        intsrvifattriballocatedbits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "intSrvIfAttribMaxAllocatedBits")
    {
        intsrvifattribmaxallocatedbits = value;
        intsrvifattribmaxallocatedbits.value_namespace = name_space;
        intsrvifattribmaxallocatedbits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "intSrvIfAttribAllocatedBuffer")
    {
        intsrvifattriballocatedbuffer = value;
        intsrvifattriballocatedbuffer.value_namespace = name_space;
        intsrvifattriballocatedbuffer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "intSrvIfAttribFlows")
    {
        intsrvifattribflows = value;
        intsrvifattribflows.value_namespace = name_space;
        intsrvifattribflows.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "intSrvIfAttribPropagationDelay")
    {
        intsrvifattribpropagationdelay = value;
        intsrvifattribpropagationdelay.value_namespace = name_space;
        intsrvifattribpropagationdelay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "intSrvIfAttribStatus")
    {
        intsrvifattribstatus = value;
        intsrvifattribstatus.value_namespace = name_space;
        intsrvifattribstatus.value_namespace_prefix = name_space_prefix;
    }
}

void INTEGRATEDSERVICESMIB::Intsrvifattribtable::Intsrvifattribentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "intSrvIfAttribAllocatedBits")
    {
        intsrvifattriballocatedbits.yfilter = yfilter;
    }
    if(value_path == "intSrvIfAttribMaxAllocatedBits")
    {
        intsrvifattribmaxallocatedbits.yfilter = yfilter;
    }
    if(value_path == "intSrvIfAttribAllocatedBuffer")
    {
        intsrvifattriballocatedbuffer.yfilter = yfilter;
    }
    if(value_path == "intSrvIfAttribFlows")
    {
        intsrvifattribflows.yfilter = yfilter;
    }
    if(value_path == "intSrvIfAttribPropagationDelay")
    {
        intsrvifattribpropagationdelay.yfilter = yfilter;
    }
    if(value_path == "intSrvIfAttribStatus")
    {
        intsrvifattribstatus.yfilter = yfilter;
    }
}

bool INTEGRATEDSERVICESMIB::Intsrvifattribtable::Intsrvifattribentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "intSrvIfAttribAllocatedBits" || name == "intSrvIfAttribMaxAllocatedBits" || name == "intSrvIfAttribAllocatedBuffer" || name == "intSrvIfAttribFlows" || name == "intSrvIfAttribPropagationDelay" || name == "intSrvIfAttribStatus")
        return true;
    return false;
}

INTEGRATEDSERVICESMIB::Intsrvflowtable::Intsrvflowtable()
{

    yang_name = "intSrvFlowTable"; yang_parent_name = "INTEGRATED-SERVICES-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

INTEGRATEDSERVICESMIB::Intsrvflowtable::~Intsrvflowtable()
{
}

bool INTEGRATEDSERVICESMIB::Intsrvflowtable::has_data() const
{
    for (std::size_t index=0; index<intsrvflowentry.size(); index++)
    {
        if(intsrvflowentry[index]->has_data())
            return true;
    }
    return false;
}

bool INTEGRATEDSERVICESMIB::Intsrvflowtable::has_operation() const
{
    for (std::size_t index=0; index<intsrvflowentry.size(); index++)
    {
        if(intsrvflowentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string INTEGRATEDSERVICESMIB::Intsrvflowtable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "INTEGRATED-SERVICES-MIB:INTEGRATED-SERVICES-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string INTEGRATEDSERVICESMIB::Intsrvflowtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "intSrvFlowTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > INTEGRATEDSERVICESMIB::Intsrvflowtable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> INTEGRATEDSERVICESMIB::Intsrvflowtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "intSrvFlowEntry")
    {
        auto c = std::make_shared<INTEGRATEDSERVICESMIB::Intsrvflowtable::Intsrvflowentry>();
        c->parent = this;
        intsrvflowentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> INTEGRATEDSERVICESMIB::Intsrvflowtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : intsrvflowentry)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void INTEGRATEDSERVICESMIB::Intsrvflowtable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void INTEGRATEDSERVICESMIB::Intsrvflowtable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool INTEGRATEDSERVICESMIB::Intsrvflowtable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "intSrvFlowEntry")
        return true;
    return false;
}

INTEGRATEDSERVICESMIB::Intsrvflowtable::Intsrvflowentry::Intsrvflowentry()
    :
    intsrvflownumber{YType::int32, "intSrvFlowNumber"},
    intsrvflowtype{YType::int32, "intSrvFlowType"},
    intsrvflowowner{YType::enumeration, "intSrvFlowOwner"},
    intsrvflowdestaddr{YType::str, "intSrvFlowDestAddr"},
    intsrvflowsenderaddr{YType::str, "intSrvFlowSenderAddr"},
    intsrvflowdestaddrlength{YType::int32, "intSrvFlowDestAddrLength"},
    intsrvflowsenderaddrlength{YType::int32, "intSrvFlowSenderAddrLength"},
    intsrvflowprotocol{YType::int32, "intSrvFlowProtocol"},
    intsrvflowdestport{YType::str, "intSrvFlowDestPort"},
    intsrvflowport{YType::str, "intSrvFlowPort"},
    intsrvflowflowid{YType::int32, "intSrvFlowFlowId"},
    intsrvflowinterface{YType::int32, "intSrvFlowInterface"},
    intsrvflowifaddr{YType::str, "intSrvFlowIfAddr"},
    intsrvflowrate{YType::int32, "intSrvFlowRate"},
    intsrvflowburst{YType::int32, "intSrvFlowBurst"},
    intsrvflowweight{YType::int32, "intSrvFlowWeight"},
    intsrvflowqueue{YType::int32, "intSrvFlowQueue"},
    intsrvflowmintu{YType::int32, "intSrvFlowMinTU"},
    intsrvflowmaxtu{YType::int32, "intSrvFlowMaxTU"},
    intsrvflowbesteffort{YType::uint32, "intSrvFlowBestEffort"},
    intsrvflowpoliced{YType::uint32, "intSrvFlowPoliced"},
    intsrvflowdiscard{YType::boolean, "intSrvFlowDiscard"},
    intsrvflowservice{YType::enumeration, "intSrvFlowService"},
    intsrvfloworder{YType::int32, "intSrvFlowOrder"},
    intsrvflowstatus{YType::enumeration, "intSrvFlowStatus"}
{

    yang_name = "intSrvFlowEntry"; yang_parent_name = "intSrvFlowTable"; is_top_level_class = false; has_list_ancestor = false;
}

INTEGRATEDSERVICESMIB::Intsrvflowtable::Intsrvflowentry::~Intsrvflowentry()
{
}

bool INTEGRATEDSERVICESMIB::Intsrvflowtable::Intsrvflowentry::has_data() const
{
    return intsrvflownumber.is_set
	|| intsrvflowtype.is_set
	|| intsrvflowowner.is_set
	|| intsrvflowdestaddr.is_set
	|| intsrvflowsenderaddr.is_set
	|| intsrvflowdestaddrlength.is_set
	|| intsrvflowsenderaddrlength.is_set
	|| intsrvflowprotocol.is_set
	|| intsrvflowdestport.is_set
	|| intsrvflowport.is_set
	|| intsrvflowflowid.is_set
	|| intsrvflowinterface.is_set
	|| intsrvflowifaddr.is_set
	|| intsrvflowrate.is_set
	|| intsrvflowburst.is_set
	|| intsrvflowweight.is_set
	|| intsrvflowqueue.is_set
	|| intsrvflowmintu.is_set
	|| intsrvflowmaxtu.is_set
	|| intsrvflowbesteffort.is_set
	|| intsrvflowpoliced.is_set
	|| intsrvflowdiscard.is_set
	|| intsrvflowservice.is_set
	|| intsrvfloworder.is_set
	|| intsrvflowstatus.is_set;
}

bool INTEGRATEDSERVICESMIB::Intsrvflowtable::Intsrvflowentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(intsrvflownumber.yfilter)
	|| ydk::is_set(intsrvflowtype.yfilter)
	|| ydk::is_set(intsrvflowowner.yfilter)
	|| ydk::is_set(intsrvflowdestaddr.yfilter)
	|| ydk::is_set(intsrvflowsenderaddr.yfilter)
	|| ydk::is_set(intsrvflowdestaddrlength.yfilter)
	|| ydk::is_set(intsrvflowsenderaddrlength.yfilter)
	|| ydk::is_set(intsrvflowprotocol.yfilter)
	|| ydk::is_set(intsrvflowdestport.yfilter)
	|| ydk::is_set(intsrvflowport.yfilter)
	|| ydk::is_set(intsrvflowflowid.yfilter)
	|| ydk::is_set(intsrvflowinterface.yfilter)
	|| ydk::is_set(intsrvflowifaddr.yfilter)
	|| ydk::is_set(intsrvflowrate.yfilter)
	|| ydk::is_set(intsrvflowburst.yfilter)
	|| ydk::is_set(intsrvflowweight.yfilter)
	|| ydk::is_set(intsrvflowqueue.yfilter)
	|| ydk::is_set(intsrvflowmintu.yfilter)
	|| ydk::is_set(intsrvflowmaxtu.yfilter)
	|| ydk::is_set(intsrvflowbesteffort.yfilter)
	|| ydk::is_set(intsrvflowpoliced.yfilter)
	|| ydk::is_set(intsrvflowdiscard.yfilter)
	|| ydk::is_set(intsrvflowservice.yfilter)
	|| ydk::is_set(intsrvfloworder.yfilter)
	|| ydk::is_set(intsrvflowstatus.yfilter);
}

std::string INTEGRATEDSERVICESMIB::Intsrvflowtable::Intsrvflowentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "INTEGRATED-SERVICES-MIB:INTEGRATED-SERVICES-MIB/intSrvFlowTable/" << get_segment_path();
    return path_buffer.str();
}

std::string INTEGRATEDSERVICESMIB::Intsrvflowtable::Intsrvflowentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "intSrvFlowEntry" <<"[intSrvFlowNumber='" <<intsrvflownumber <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > INTEGRATEDSERVICESMIB::Intsrvflowtable::Intsrvflowentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (intsrvflownumber.is_set || is_set(intsrvflownumber.yfilter)) leaf_name_data.push_back(intsrvflownumber.get_name_leafdata());
    if (intsrvflowtype.is_set || is_set(intsrvflowtype.yfilter)) leaf_name_data.push_back(intsrvflowtype.get_name_leafdata());
    if (intsrvflowowner.is_set || is_set(intsrvflowowner.yfilter)) leaf_name_data.push_back(intsrvflowowner.get_name_leafdata());
    if (intsrvflowdestaddr.is_set || is_set(intsrvflowdestaddr.yfilter)) leaf_name_data.push_back(intsrvflowdestaddr.get_name_leafdata());
    if (intsrvflowsenderaddr.is_set || is_set(intsrvflowsenderaddr.yfilter)) leaf_name_data.push_back(intsrvflowsenderaddr.get_name_leafdata());
    if (intsrvflowdestaddrlength.is_set || is_set(intsrvflowdestaddrlength.yfilter)) leaf_name_data.push_back(intsrvflowdestaddrlength.get_name_leafdata());
    if (intsrvflowsenderaddrlength.is_set || is_set(intsrvflowsenderaddrlength.yfilter)) leaf_name_data.push_back(intsrvflowsenderaddrlength.get_name_leafdata());
    if (intsrvflowprotocol.is_set || is_set(intsrvflowprotocol.yfilter)) leaf_name_data.push_back(intsrvflowprotocol.get_name_leafdata());
    if (intsrvflowdestport.is_set || is_set(intsrvflowdestport.yfilter)) leaf_name_data.push_back(intsrvflowdestport.get_name_leafdata());
    if (intsrvflowport.is_set || is_set(intsrvflowport.yfilter)) leaf_name_data.push_back(intsrvflowport.get_name_leafdata());
    if (intsrvflowflowid.is_set || is_set(intsrvflowflowid.yfilter)) leaf_name_data.push_back(intsrvflowflowid.get_name_leafdata());
    if (intsrvflowinterface.is_set || is_set(intsrvflowinterface.yfilter)) leaf_name_data.push_back(intsrvflowinterface.get_name_leafdata());
    if (intsrvflowifaddr.is_set || is_set(intsrvflowifaddr.yfilter)) leaf_name_data.push_back(intsrvflowifaddr.get_name_leafdata());
    if (intsrvflowrate.is_set || is_set(intsrvflowrate.yfilter)) leaf_name_data.push_back(intsrvflowrate.get_name_leafdata());
    if (intsrvflowburst.is_set || is_set(intsrvflowburst.yfilter)) leaf_name_data.push_back(intsrvflowburst.get_name_leafdata());
    if (intsrvflowweight.is_set || is_set(intsrvflowweight.yfilter)) leaf_name_data.push_back(intsrvflowweight.get_name_leafdata());
    if (intsrvflowqueue.is_set || is_set(intsrvflowqueue.yfilter)) leaf_name_data.push_back(intsrvflowqueue.get_name_leafdata());
    if (intsrvflowmintu.is_set || is_set(intsrvflowmintu.yfilter)) leaf_name_data.push_back(intsrvflowmintu.get_name_leafdata());
    if (intsrvflowmaxtu.is_set || is_set(intsrvflowmaxtu.yfilter)) leaf_name_data.push_back(intsrvflowmaxtu.get_name_leafdata());
    if (intsrvflowbesteffort.is_set || is_set(intsrvflowbesteffort.yfilter)) leaf_name_data.push_back(intsrvflowbesteffort.get_name_leafdata());
    if (intsrvflowpoliced.is_set || is_set(intsrvflowpoliced.yfilter)) leaf_name_data.push_back(intsrvflowpoliced.get_name_leafdata());
    if (intsrvflowdiscard.is_set || is_set(intsrvflowdiscard.yfilter)) leaf_name_data.push_back(intsrvflowdiscard.get_name_leafdata());
    if (intsrvflowservice.is_set || is_set(intsrvflowservice.yfilter)) leaf_name_data.push_back(intsrvflowservice.get_name_leafdata());
    if (intsrvfloworder.is_set || is_set(intsrvfloworder.yfilter)) leaf_name_data.push_back(intsrvfloworder.get_name_leafdata());
    if (intsrvflowstatus.is_set || is_set(intsrvflowstatus.yfilter)) leaf_name_data.push_back(intsrvflowstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> INTEGRATEDSERVICESMIB::Intsrvflowtable::Intsrvflowentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> INTEGRATEDSERVICESMIB::Intsrvflowtable::Intsrvflowentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void INTEGRATEDSERVICESMIB::Intsrvflowtable::Intsrvflowentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "intSrvFlowNumber")
    {
        intsrvflownumber = value;
        intsrvflownumber.value_namespace = name_space;
        intsrvflownumber.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "intSrvFlowType")
    {
        intsrvflowtype = value;
        intsrvflowtype.value_namespace = name_space;
        intsrvflowtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "intSrvFlowOwner")
    {
        intsrvflowowner = value;
        intsrvflowowner.value_namespace = name_space;
        intsrvflowowner.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "intSrvFlowDestAddr")
    {
        intsrvflowdestaddr = value;
        intsrvflowdestaddr.value_namespace = name_space;
        intsrvflowdestaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "intSrvFlowSenderAddr")
    {
        intsrvflowsenderaddr = value;
        intsrvflowsenderaddr.value_namespace = name_space;
        intsrvflowsenderaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "intSrvFlowDestAddrLength")
    {
        intsrvflowdestaddrlength = value;
        intsrvflowdestaddrlength.value_namespace = name_space;
        intsrvflowdestaddrlength.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "intSrvFlowSenderAddrLength")
    {
        intsrvflowsenderaddrlength = value;
        intsrvflowsenderaddrlength.value_namespace = name_space;
        intsrvflowsenderaddrlength.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "intSrvFlowProtocol")
    {
        intsrvflowprotocol = value;
        intsrvflowprotocol.value_namespace = name_space;
        intsrvflowprotocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "intSrvFlowDestPort")
    {
        intsrvflowdestport = value;
        intsrvflowdestport.value_namespace = name_space;
        intsrvflowdestport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "intSrvFlowPort")
    {
        intsrvflowport = value;
        intsrvflowport.value_namespace = name_space;
        intsrvflowport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "intSrvFlowFlowId")
    {
        intsrvflowflowid = value;
        intsrvflowflowid.value_namespace = name_space;
        intsrvflowflowid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "intSrvFlowInterface")
    {
        intsrvflowinterface = value;
        intsrvflowinterface.value_namespace = name_space;
        intsrvflowinterface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "intSrvFlowIfAddr")
    {
        intsrvflowifaddr = value;
        intsrvflowifaddr.value_namespace = name_space;
        intsrvflowifaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "intSrvFlowRate")
    {
        intsrvflowrate = value;
        intsrvflowrate.value_namespace = name_space;
        intsrvflowrate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "intSrvFlowBurst")
    {
        intsrvflowburst = value;
        intsrvflowburst.value_namespace = name_space;
        intsrvflowburst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "intSrvFlowWeight")
    {
        intsrvflowweight = value;
        intsrvflowweight.value_namespace = name_space;
        intsrvflowweight.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "intSrvFlowQueue")
    {
        intsrvflowqueue = value;
        intsrvflowqueue.value_namespace = name_space;
        intsrvflowqueue.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "intSrvFlowMinTU")
    {
        intsrvflowmintu = value;
        intsrvflowmintu.value_namespace = name_space;
        intsrvflowmintu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "intSrvFlowMaxTU")
    {
        intsrvflowmaxtu = value;
        intsrvflowmaxtu.value_namespace = name_space;
        intsrvflowmaxtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "intSrvFlowBestEffort")
    {
        intsrvflowbesteffort = value;
        intsrvflowbesteffort.value_namespace = name_space;
        intsrvflowbesteffort.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "intSrvFlowPoliced")
    {
        intsrvflowpoliced = value;
        intsrvflowpoliced.value_namespace = name_space;
        intsrvflowpoliced.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "intSrvFlowDiscard")
    {
        intsrvflowdiscard = value;
        intsrvflowdiscard.value_namespace = name_space;
        intsrvflowdiscard.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "intSrvFlowService")
    {
        intsrvflowservice = value;
        intsrvflowservice.value_namespace = name_space;
        intsrvflowservice.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "intSrvFlowOrder")
    {
        intsrvfloworder = value;
        intsrvfloworder.value_namespace = name_space;
        intsrvfloworder.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "intSrvFlowStatus")
    {
        intsrvflowstatus = value;
        intsrvflowstatus.value_namespace = name_space;
        intsrvflowstatus.value_namespace_prefix = name_space_prefix;
    }
}

void INTEGRATEDSERVICESMIB::Intsrvflowtable::Intsrvflowentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "intSrvFlowNumber")
    {
        intsrvflownumber.yfilter = yfilter;
    }
    if(value_path == "intSrvFlowType")
    {
        intsrvflowtype.yfilter = yfilter;
    }
    if(value_path == "intSrvFlowOwner")
    {
        intsrvflowowner.yfilter = yfilter;
    }
    if(value_path == "intSrvFlowDestAddr")
    {
        intsrvflowdestaddr.yfilter = yfilter;
    }
    if(value_path == "intSrvFlowSenderAddr")
    {
        intsrvflowsenderaddr.yfilter = yfilter;
    }
    if(value_path == "intSrvFlowDestAddrLength")
    {
        intsrvflowdestaddrlength.yfilter = yfilter;
    }
    if(value_path == "intSrvFlowSenderAddrLength")
    {
        intsrvflowsenderaddrlength.yfilter = yfilter;
    }
    if(value_path == "intSrvFlowProtocol")
    {
        intsrvflowprotocol.yfilter = yfilter;
    }
    if(value_path == "intSrvFlowDestPort")
    {
        intsrvflowdestport.yfilter = yfilter;
    }
    if(value_path == "intSrvFlowPort")
    {
        intsrvflowport.yfilter = yfilter;
    }
    if(value_path == "intSrvFlowFlowId")
    {
        intsrvflowflowid.yfilter = yfilter;
    }
    if(value_path == "intSrvFlowInterface")
    {
        intsrvflowinterface.yfilter = yfilter;
    }
    if(value_path == "intSrvFlowIfAddr")
    {
        intsrvflowifaddr.yfilter = yfilter;
    }
    if(value_path == "intSrvFlowRate")
    {
        intsrvflowrate.yfilter = yfilter;
    }
    if(value_path == "intSrvFlowBurst")
    {
        intsrvflowburst.yfilter = yfilter;
    }
    if(value_path == "intSrvFlowWeight")
    {
        intsrvflowweight.yfilter = yfilter;
    }
    if(value_path == "intSrvFlowQueue")
    {
        intsrvflowqueue.yfilter = yfilter;
    }
    if(value_path == "intSrvFlowMinTU")
    {
        intsrvflowmintu.yfilter = yfilter;
    }
    if(value_path == "intSrvFlowMaxTU")
    {
        intsrvflowmaxtu.yfilter = yfilter;
    }
    if(value_path == "intSrvFlowBestEffort")
    {
        intsrvflowbesteffort.yfilter = yfilter;
    }
    if(value_path == "intSrvFlowPoliced")
    {
        intsrvflowpoliced.yfilter = yfilter;
    }
    if(value_path == "intSrvFlowDiscard")
    {
        intsrvflowdiscard.yfilter = yfilter;
    }
    if(value_path == "intSrvFlowService")
    {
        intsrvflowservice.yfilter = yfilter;
    }
    if(value_path == "intSrvFlowOrder")
    {
        intsrvfloworder.yfilter = yfilter;
    }
    if(value_path == "intSrvFlowStatus")
    {
        intsrvflowstatus.yfilter = yfilter;
    }
}

bool INTEGRATEDSERVICESMIB::Intsrvflowtable::Intsrvflowentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "intSrvFlowNumber" || name == "intSrvFlowType" || name == "intSrvFlowOwner" || name == "intSrvFlowDestAddr" || name == "intSrvFlowSenderAddr" || name == "intSrvFlowDestAddrLength" || name == "intSrvFlowSenderAddrLength" || name == "intSrvFlowProtocol" || name == "intSrvFlowDestPort" || name == "intSrvFlowPort" || name == "intSrvFlowFlowId" || name == "intSrvFlowInterface" || name == "intSrvFlowIfAddr" || name == "intSrvFlowRate" || name == "intSrvFlowBurst" || name == "intSrvFlowWeight" || name == "intSrvFlowQueue" || name == "intSrvFlowMinTU" || name == "intSrvFlowMaxTU" || name == "intSrvFlowBestEffort" || name == "intSrvFlowPoliced" || name == "intSrvFlowDiscard" || name == "intSrvFlowService" || name == "intSrvFlowOrder" || name == "intSrvFlowStatus")
        return true;
    return false;
}

const Enum::YLeaf QosService::bestEffort {1, "bestEffort"};
const Enum::YLeaf QosService::guaranteedDelay {2, "guaranteedDelay"};
const Enum::YLeaf QosService::controlledLoad {5, "controlledLoad"};

const Enum::YLeaf INTEGRATEDSERVICESMIB::Intsrvflowtable::Intsrvflowentry::Intsrvflowowner::other {1, "other"};
const Enum::YLeaf INTEGRATEDSERVICESMIB::Intsrvflowtable::Intsrvflowentry::Intsrvflowowner::rsvp {2, "rsvp"};
const Enum::YLeaf INTEGRATEDSERVICESMIB::Intsrvflowtable::Intsrvflowentry::Intsrvflowowner::management {3, "management"};


}
}

