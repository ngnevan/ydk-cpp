
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_FTP_CLIENT_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace CISCO_FTP_CLIENT_MIB {

CISCOFTPCLIENTMIB::CISCOFTPCLIENTMIB()
    :
    cfcrequest(std::make_shared<CISCOFTPCLIENTMIB::Cfcrequest>())
	,cfcrequesttable(std::make_shared<CISCOFTPCLIENTMIB::Cfcrequesttable>())
{
    cfcrequest->parent = this;
    cfcrequesttable->parent = this;

    yang_name = "CISCO-FTP-CLIENT-MIB"; yang_parent_name = "CISCO-FTP-CLIENT-MIB"; is_top_level_class = true; has_list_ancestor = false;
}

CISCOFTPCLIENTMIB::~CISCOFTPCLIENTMIB()
{
}

bool CISCOFTPCLIENTMIB::has_data() const
{
    return (cfcrequest !=  nullptr && cfcrequest->has_data())
	|| (cfcrequesttable !=  nullptr && cfcrequesttable->has_data());
}

bool CISCOFTPCLIENTMIB::has_operation() const
{
    return is_set(yfilter)
	|| (cfcrequest !=  nullptr && cfcrequest->has_operation())
	|| (cfcrequesttable !=  nullptr && cfcrequesttable->has_operation());
}

std::string CISCOFTPCLIENTMIB::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-FTP-CLIENT-MIB:CISCO-FTP-CLIENT-MIB";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOFTPCLIENTMIB::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOFTPCLIENTMIB::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cfcRequest")
    {
        if(cfcrequest == nullptr)
        {
            cfcrequest = std::make_shared<CISCOFTPCLIENTMIB::Cfcrequest>();
        }
        return cfcrequest;
    }

    if(child_yang_name == "cfcRequestTable")
    {
        if(cfcrequesttable == nullptr)
        {
            cfcrequesttable = std::make_shared<CISCOFTPCLIENTMIB::Cfcrequesttable>();
        }
        return cfcrequesttable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOFTPCLIENTMIB::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cfcrequest != nullptr)
    {
        children["cfcRequest"] = cfcrequest;
    }

    if(cfcrequesttable != nullptr)
    {
        children["cfcRequestTable"] = cfcrequesttable;
    }

    return children;
}

void CISCOFTPCLIENTMIB::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOFTPCLIENTMIB::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> CISCOFTPCLIENTMIB::clone_ptr() const
{
    return std::make_shared<CISCOFTPCLIENTMIB>();
}

std::string CISCOFTPCLIENTMIB::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string CISCOFTPCLIENTMIB::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function CISCOFTPCLIENTMIB::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> CISCOFTPCLIENTMIB::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool CISCOFTPCLIENTMIB::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cfcRequest" || name == "cfcRequestTable")
        return true;
    return false;
}

CISCOFTPCLIENTMIB::Cfcrequest::Cfcrequest()
    :
    cfcrequestmaximum{YType::uint32, "cfcRequestMaximum"},
    cfcrequests{YType::uint32, "cfcRequests"},
    cfcrequestshigh{YType::uint32, "cfcRequestsHigh"},
    cfcrequestsbumped{YType::uint32, "cfcRequestsBumped"}
{

    yang_name = "cfcRequest"; yang_parent_name = "CISCO-FTP-CLIENT-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOFTPCLIENTMIB::Cfcrequest::~Cfcrequest()
{
}

bool CISCOFTPCLIENTMIB::Cfcrequest::has_data() const
{
    return cfcrequestmaximum.is_set
	|| cfcrequests.is_set
	|| cfcrequestshigh.is_set
	|| cfcrequestsbumped.is_set;
}

bool CISCOFTPCLIENTMIB::Cfcrequest::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cfcrequestmaximum.yfilter)
	|| ydk::is_set(cfcrequests.yfilter)
	|| ydk::is_set(cfcrequestshigh.yfilter)
	|| ydk::is_set(cfcrequestsbumped.yfilter);
}

std::string CISCOFTPCLIENTMIB::Cfcrequest::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-FTP-CLIENT-MIB:CISCO-FTP-CLIENT-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOFTPCLIENTMIB::Cfcrequest::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cfcRequest";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOFTPCLIENTMIB::Cfcrequest::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cfcrequestmaximum.is_set || is_set(cfcrequestmaximum.yfilter)) leaf_name_data.push_back(cfcrequestmaximum.get_name_leafdata());
    if (cfcrequests.is_set || is_set(cfcrequests.yfilter)) leaf_name_data.push_back(cfcrequests.get_name_leafdata());
    if (cfcrequestshigh.is_set || is_set(cfcrequestshigh.yfilter)) leaf_name_data.push_back(cfcrequestshigh.get_name_leafdata());
    if (cfcrequestsbumped.is_set || is_set(cfcrequestsbumped.yfilter)) leaf_name_data.push_back(cfcrequestsbumped.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOFTPCLIENTMIB::Cfcrequest::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOFTPCLIENTMIB::Cfcrequest::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CISCOFTPCLIENTMIB::Cfcrequest::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cfcRequestMaximum")
    {
        cfcrequestmaximum = value;
        cfcrequestmaximum.value_namespace = name_space;
        cfcrequestmaximum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cfcRequests")
    {
        cfcrequests = value;
        cfcrequests.value_namespace = name_space;
        cfcrequests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cfcRequestsHigh")
    {
        cfcrequestshigh = value;
        cfcrequestshigh.value_namespace = name_space;
        cfcrequestshigh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cfcRequestsBumped")
    {
        cfcrequestsbumped = value;
        cfcrequestsbumped.value_namespace = name_space;
        cfcrequestsbumped.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOFTPCLIENTMIB::Cfcrequest::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cfcRequestMaximum")
    {
        cfcrequestmaximum.yfilter = yfilter;
    }
    if(value_path == "cfcRequests")
    {
        cfcrequests.yfilter = yfilter;
    }
    if(value_path == "cfcRequestsHigh")
    {
        cfcrequestshigh.yfilter = yfilter;
    }
    if(value_path == "cfcRequestsBumped")
    {
        cfcrequestsbumped.yfilter = yfilter;
    }
}

bool CISCOFTPCLIENTMIB::Cfcrequest::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cfcRequestMaximum" || name == "cfcRequests" || name == "cfcRequestsHigh" || name == "cfcRequestsBumped")
        return true;
    return false;
}

CISCOFTPCLIENTMIB::Cfcrequesttable::Cfcrequesttable()
{

    yang_name = "cfcRequestTable"; yang_parent_name = "CISCO-FTP-CLIENT-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOFTPCLIENTMIB::Cfcrequesttable::~Cfcrequesttable()
{
}

bool CISCOFTPCLIENTMIB::Cfcrequesttable::has_data() const
{
    for (std::size_t index=0; index<cfcrequestentry.size(); index++)
    {
        if(cfcrequestentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOFTPCLIENTMIB::Cfcrequesttable::has_operation() const
{
    for (std::size_t index=0; index<cfcrequestentry.size(); index++)
    {
        if(cfcrequestentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOFTPCLIENTMIB::Cfcrequesttable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-FTP-CLIENT-MIB:CISCO-FTP-CLIENT-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOFTPCLIENTMIB::Cfcrequesttable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cfcRequestTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOFTPCLIENTMIB::Cfcrequesttable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOFTPCLIENTMIB::Cfcrequesttable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cfcRequestEntry")
    {
        for(auto const & c : cfcrequestentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CISCOFTPCLIENTMIB::Cfcrequesttable::Cfcrequestentry>();
        c->parent = this;
        cfcrequestentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOFTPCLIENTMIB::Cfcrequesttable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cfcrequestentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CISCOFTPCLIENTMIB::Cfcrequesttable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOFTPCLIENTMIB::Cfcrequesttable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOFTPCLIENTMIB::Cfcrequesttable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cfcRequestEntry")
        return true;
    return false;
}

CISCOFTPCLIENTMIB::Cfcrequesttable::Cfcrequestentry::Cfcrequestentry()
    :
    cfcrequestindex{YType::uint32, "cfcRequestIndex"},
    cfcrequestoperation{YType::enumeration, "cfcRequestOperation"},
    cfcrequestlocalfile{YType::str, "cfcRequestLocalFile"},
    cfcrequestremotefile{YType::str, "cfcRequestRemoteFile"},
    cfcrequestserver{YType::str, "cfcRequestServer"},
    cfcrequestuser{YType::str, "cfcRequestUser"},
    cfcrequestpassword{YType::str, "cfcRequestPassword"},
    cfcrequestresult{YType::enumeration, "cfcRequestResult"},
    cfcrequestcompletiontime{YType::uint32, "cfcRequestCompletionTime"},
    cfcrequeststop{YType::enumeration, "cfcRequestStop"},
    cfcrequestoperationstate{YType::enumeration, "cfcRequestOperationState"},
    cfcrequestentrystatus{YType::enumeration, "cfcRequestEntryStatus"}
{

    yang_name = "cfcRequestEntry"; yang_parent_name = "cfcRequestTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOFTPCLIENTMIB::Cfcrequesttable::Cfcrequestentry::~Cfcrequestentry()
{
}

bool CISCOFTPCLIENTMIB::Cfcrequesttable::Cfcrequestentry::has_data() const
{
    return cfcrequestindex.is_set
	|| cfcrequestoperation.is_set
	|| cfcrequestlocalfile.is_set
	|| cfcrequestremotefile.is_set
	|| cfcrequestserver.is_set
	|| cfcrequestuser.is_set
	|| cfcrequestpassword.is_set
	|| cfcrequestresult.is_set
	|| cfcrequestcompletiontime.is_set
	|| cfcrequeststop.is_set
	|| cfcrequestoperationstate.is_set
	|| cfcrequestentrystatus.is_set;
}

bool CISCOFTPCLIENTMIB::Cfcrequesttable::Cfcrequestentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cfcrequestindex.yfilter)
	|| ydk::is_set(cfcrequestoperation.yfilter)
	|| ydk::is_set(cfcrequestlocalfile.yfilter)
	|| ydk::is_set(cfcrequestremotefile.yfilter)
	|| ydk::is_set(cfcrequestserver.yfilter)
	|| ydk::is_set(cfcrequestuser.yfilter)
	|| ydk::is_set(cfcrequestpassword.yfilter)
	|| ydk::is_set(cfcrequestresult.yfilter)
	|| ydk::is_set(cfcrequestcompletiontime.yfilter)
	|| ydk::is_set(cfcrequeststop.yfilter)
	|| ydk::is_set(cfcrequestoperationstate.yfilter)
	|| ydk::is_set(cfcrequestentrystatus.yfilter);
}

std::string CISCOFTPCLIENTMIB::Cfcrequesttable::Cfcrequestentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-FTP-CLIENT-MIB:CISCO-FTP-CLIENT-MIB/cfcRequestTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOFTPCLIENTMIB::Cfcrequesttable::Cfcrequestentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cfcRequestEntry" <<"[cfcRequestIndex='" <<cfcrequestindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOFTPCLIENTMIB::Cfcrequesttable::Cfcrequestentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cfcrequestindex.is_set || is_set(cfcrequestindex.yfilter)) leaf_name_data.push_back(cfcrequestindex.get_name_leafdata());
    if (cfcrequestoperation.is_set || is_set(cfcrequestoperation.yfilter)) leaf_name_data.push_back(cfcrequestoperation.get_name_leafdata());
    if (cfcrequestlocalfile.is_set || is_set(cfcrequestlocalfile.yfilter)) leaf_name_data.push_back(cfcrequestlocalfile.get_name_leafdata());
    if (cfcrequestremotefile.is_set || is_set(cfcrequestremotefile.yfilter)) leaf_name_data.push_back(cfcrequestremotefile.get_name_leafdata());
    if (cfcrequestserver.is_set || is_set(cfcrequestserver.yfilter)) leaf_name_data.push_back(cfcrequestserver.get_name_leafdata());
    if (cfcrequestuser.is_set || is_set(cfcrequestuser.yfilter)) leaf_name_data.push_back(cfcrequestuser.get_name_leafdata());
    if (cfcrequestpassword.is_set || is_set(cfcrequestpassword.yfilter)) leaf_name_data.push_back(cfcrequestpassword.get_name_leafdata());
    if (cfcrequestresult.is_set || is_set(cfcrequestresult.yfilter)) leaf_name_data.push_back(cfcrequestresult.get_name_leafdata());
    if (cfcrequestcompletiontime.is_set || is_set(cfcrequestcompletiontime.yfilter)) leaf_name_data.push_back(cfcrequestcompletiontime.get_name_leafdata());
    if (cfcrequeststop.is_set || is_set(cfcrequeststop.yfilter)) leaf_name_data.push_back(cfcrequeststop.get_name_leafdata());
    if (cfcrequestoperationstate.is_set || is_set(cfcrequestoperationstate.yfilter)) leaf_name_data.push_back(cfcrequestoperationstate.get_name_leafdata());
    if (cfcrequestentrystatus.is_set || is_set(cfcrequestentrystatus.yfilter)) leaf_name_data.push_back(cfcrequestentrystatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOFTPCLIENTMIB::Cfcrequesttable::Cfcrequestentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOFTPCLIENTMIB::Cfcrequesttable::Cfcrequestentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CISCOFTPCLIENTMIB::Cfcrequesttable::Cfcrequestentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cfcRequestIndex")
    {
        cfcrequestindex = value;
        cfcrequestindex.value_namespace = name_space;
        cfcrequestindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cfcRequestOperation")
    {
        cfcrequestoperation = value;
        cfcrequestoperation.value_namespace = name_space;
        cfcrequestoperation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cfcRequestLocalFile")
    {
        cfcrequestlocalfile = value;
        cfcrequestlocalfile.value_namespace = name_space;
        cfcrequestlocalfile.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cfcRequestRemoteFile")
    {
        cfcrequestremotefile = value;
        cfcrequestremotefile.value_namespace = name_space;
        cfcrequestremotefile.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cfcRequestServer")
    {
        cfcrequestserver = value;
        cfcrequestserver.value_namespace = name_space;
        cfcrequestserver.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cfcRequestUser")
    {
        cfcrequestuser = value;
        cfcrequestuser.value_namespace = name_space;
        cfcrequestuser.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cfcRequestPassword")
    {
        cfcrequestpassword = value;
        cfcrequestpassword.value_namespace = name_space;
        cfcrequestpassword.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cfcRequestResult")
    {
        cfcrequestresult = value;
        cfcrequestresult.value_namespace = name_space;
        cfcrequestresult.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cfcRequestCompletionTime")
    {
        cfcrequestcompletiontime = value;
        cfcrequestcompletiontime.value_namespace = name_space;
        cfcrequestcompletiontime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cfcRequestStop")
    {
        cfcrequeststop = value;
        cfcrequeststop.value_namespace = name_space;
        cfcrequeststop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cfcRequestOperationState")
    {
        cfcrequestoperationstate = value;
        cfcrequestoperationstate.value_namespace = name_space;
        cfcrequestoperationstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cfcRequestEntryStatus")
    {
        cfcrequestentrystatus = value;
        cfcrequestentrystatus.value_namespace = name_space;
        cfcrequestentrystatus.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOFTPCLIENTMIB::Cfcrequesttable::Cfcrequestentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cfcRequestIndex")
    {
        cfcrequestindex.yfilter = yfilter;
    }
    if(value_path == "cfcRequestOperation")
    {
        cfcrequestoperation.yfilter = yfilter;
    }
    if(value_path == "cfcRequestLocalFile")
    {
        cfcrequestlocalfile.yfilter = yfilter;
    }
    if(value_path == "cfcRequestRemoteFile")
    {
        cfcrequestremotefile.yfilter = yfilter;
    }
    if(value_path == "cfcRequestServer")
    {
        cfcrequestserver.yfilter = yfilter;
    }
    if(value_path == "cfcRequestUser")
    {
        cfcrequestuser.yfilter = yfilter;
    }
    if(value_path == "cfcRequestPassword")
    {
        cfcrequestpassword.yfilter = yfilter;
    }
    if(value_path == "cfcRequestResult")
    {
        cfcrequestresult.yfilter = yfilter;
    }
    if(value_path == "cfcRequestCompletionTime")
    {
        cfcrequestcompletiontime.yfilter = yfilter;
    }
    if(value_path == "cfcRequestStop")
    {
        cfcrequeststop.yfilter = yfilter;
    }
    if(value_path == "cfcRequestOperationState")
    {
        cfcrequestoperationstate.yfilter = yfilter;
    }
    if(value_path == "cfcRequestEntryStatus")
    {
        cfcrequestentrystatus.yfilter = yfilter;
    }
}

bool CISCOFTPCLIENTMIB::Cfcrequesttable::Cfcrequestentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cfcRequestIndex" || name == "cfcRequestOperation" || name == "cfcRequestLocalFile" || name == "cfcRequestRemoteFile" || name == "cfcRequestServer" || name == "cfcRequestUser" || name == "cfcRequestPassword" || name == "cfcRequestResult" || name == "cfcRequestCompletionTime" || name == "cfcRequestStop" || name == "cfcRequestOperationState" || name == "cfcRequestEntryStatus")
        return true;
    return false;
}

const Enum::YLeaf CISCOFTPCLIENTMIB::Cfcrequesttable::Cfcrequestentry::Cfcrequestoperation::putBinary {1, "putBinary"};
const Enum::YLeaf CISCOFTPCLIENTMIB::Cfcrequesttable::Cfcrequestentry::Cfcrequestoperation::putASCII {2, "putASCII"};

const Enum::YLeaf CISCOFTPCLIENTMIB::Cfcrequesttable::Cfcrequestentry::Cfcrequestresult::pending {1, "pending"};
const Enum::YLeaf CISCOFTPCLIENTMIB::Cfcrequesttable::Cfcrequestentry::Cfcrequestresult::success {2, "success"};
const Enum::YLeaf CISCOFTPCLIENTMIB::Cfcrequesttable::Cfcrequestentry::Cfcrequestresult::aborted {3, "aborted"};
const Enum::YLeaf CISCOFTPCLIENTMIB::Cfcrequesttable::Cfcrequestentry::Cfcrequestresult::fileOpenFailLocal {4, "fileOpenFailLocal"};
const Enum::YLeaf CISCOFTPCLIENTMIB::Cfcrequesttable::Cfcrequestentry::Cfcrequestresult::fileOpenFailRemote {5, "fileOpenFailRemote"};
const Enum::YLeaf CISCOFTPCLIENTMIB::Cfcrequesttable::Cfcrequestentry::Cfcrequestresult::badDomainName {6, "badDomainName"};
const Enum::YLeaf CISCOFTPCLIENTMIB::Cfcrequesttable::Cfcrequestentry::Cfcrequestresult::unreachableIpAddress {7, "unreachableIpAddress"};
const Enum::YLeaf CISCOFTPCLIENTMIB::Cfcrequesttable::Cfcrequestentry::Cfcrequestresult::linkFailed {8, "linkFailed"};
const Enum::YLeaf CISCOFTPCLIENTMIB::Cfcrequesttable::Cfcrequestentry::Cfcrequestresult::fileReadFailed {9, "fileReadFailed"};
const Enum::YLeaf CISCOFTPCLIENTMIB::Cfcrequesttable::Cfcrequestentry::Cfcrequestresult::fileWriteFailed {10, "fileWriteFailed"};

const Enum::YLeaf CISCOFTPCLIENTMIB::Cfcrequesttable::Cfcrequestentry::Cfcrequeststop::ready {1, "ready"};
const Enum::YLeaf CISCOFTPCLIENTMIB::Cfcrequesttable::Cfcrequestentry::Cfcrequeststop::stop {2, "stop"};

const Enum::YLeaf CISCOFTPCLIENTMIB::Cfcrequesttable::Cfcrequestentry::Cfcrequestoperationstate::running {1, "running"};
const Enum::YLeaf CISCOFTPCLIENTMIB::Cfcrequesttable::Cfcrequestentry::Cfcrequestoperationstate::stopping {2, "stopping"};
const Enum::YLeaf CISCOFTPCLIENTMIB::Cfcrequesttable::Cfcrequestentry::Cfcrequestoperationstate::stopped {3, "stopped"};


}
}

