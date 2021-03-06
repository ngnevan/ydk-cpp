
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "TCP_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace TCP_MIB {

TCPMIB::TCPMIB()
    :
    tcp(std::make_shared<TCPMIB::Tcp>())
	,tcpconntable(std::make_shared<TCPMIB::Tcpconntable>())
	,tcpconnectiontable(std::make_shared<TCPMIB::Tcpconnectiontable>())
	,tcplistenertable(std::make_shared<TCPMIB::Tcplistenertable>())
{
    tcp->parent = this;
    tcpconntable->parent = this;
    tcpconnectiontable->parent = this;
    tcplistenertable->parent = this;

    yang_name = "TCP-MIB"; yang_parent_name = "TCP-MIB"; is_top_level_class = true; has_list_ancestor = false;
}

TCPMIB::~TCPMIB()
{
}

bool TCPMIB::has_data() const
{
    return (tcp !=  nullptr && tcp->has_data())
	|| (tcpconntable !=  nullptr && tcpconntable->has_data())
	|| (tcpconnectiontable !=  nullptr && tcpconnectiontable->has_data())
	|| (tcplistenertable !=  nullptr && tcplistenertable->has_data());
}

bool TCPMIB::has_operation() const
{
    return is_set(yfilter)
	|| (tcp !=  nullptr && tcp->has_operation())
	|| (tcpconntable !=  nullptr && tcpconntable->has_operation())
	|| (tcpconnectiontable !=  nullptr && tcpconnectiontable->has_operation())
	|| (tcplistenertable !=  nullptr && tcplistenertable->has_operation());
}

std::string TCPMIB::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "TCP-MIB:TCP-MIB";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TCPMIB::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> TCPMIB::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tcp")
    {
        if(tcp == nullptr)
        {
            tcp = std::make_shared<TCPMIB::Tcp>();
        }
        return tcp;
    }

    if(child_yang_name == "tcpConnTable")
    {
        if(tcpconntable == nullptr)
        {
            tcpconntable = std::make_shared<TCPMIB::Tcpconntable>();
        }
        return tcpconntable;
    }

    if(child_yang_name == "tcpConnectionTable")
    {
        if(tcpconnectiontable == nullptr)
        {
            tcpconnectiontable = std::make_shared<TCPMIB::Tcpconnectiontable>();
        }
        return tcpconnectiontable;
    }

    if(child_yang_name == "tcpListenerTable")
    {
        if(tcplistenertable == nullptr)
        {
            tcplistenertable = std::make_shared<TCPMIB::Tcplistenertable>();
        }
        return tcplistenertable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TCPMIB::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(tcp != nullptr)
    {
        children["tcp"] = tcp;
    }

    if(tcpconntable != nullptr)
    {
        children["tcpConnTable"] = tcpconntable;
    }

    if(tcpconnectiontable != nullptr)
    {
        children["tcpConnectionTable"] = tcpconnectiontable;
    }

    if(tcplistenertable != nullptr)
    {
        children["tcpListenerTable"] = tcplistenertable;
    }

    return children;
}

void TCPMIB::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void TCPMIB::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> TCPMIB::clone_ptr() const
{
    return std::make_shared<TCPMIB>();
}

std::string TCPMIB::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string TCPMIB::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function TCPMIB::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> TCPMIB::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool TCPMIB::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tcp" || name == "tcpConnTable" || name == "tcpConnectionTable" || name == "tcpListenerTable")
        return true;
    return false;
}

TCPMIB::Tcp::Tcp()
    :
    tcprtoalgorithm{YType::enumeration, "tcpRtoAlgorithm"},
    tcprtomin{YType::int32, "tcpRtoMin"},
    tcprtomax{YType::int32, "tcpRtoMax"},
    tcpmaxconn{YType::int32, "tcpMaxConn"},
    tcpactiveopens{YType::uint32, "tcpActiveOpens"},
    tcppassiveopens{YType::uint32, "tcpPassiveOpens"},
    tcpattemptfails{YType::uint32, "tcpAttemptFails"},
    tcpestabresets{YType::uint32, "tcpEstabResets"},
    tcpcurrestab{YType::uint32, "tcpCurrEstab"},
    tcpinsegs{YType::uint32, "tcpInSegs"},
    tcpoutsegs{YType::uint32, "tcpOutSegs"},
    tcpretranssegs{YType::uint32, "tcpRetransSegs"},
    tcpinerrs{YType::uint32, "tcpInErrs"},
    tcpoutrsts{YType::uint32, "tcpOutRsts"},
    tcphcinsegs{YType::uint64, "tcpHCInSegs"},
    tcphcoutsegs{YType::uint64, "tcpHCOutSegs"}
{

    yang_name = "tcp"; yang_parent_name = "TCP-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

TCPMIB::Tcp::~Tcp()
{
}

bool TCPMIB::Tcp::has_data() const
{
    return tcprtoalgorithm.is_set
	|| tcprtomin.is_set
	|| tcprtomax.is_set
	|| tcpmaxconn.is_set
	|| tcpactiveopens.is_set
	|| tcppassiveopens.is_set
	|| tcpattemptfails.is_set
	|| tcpestabresets.is_set
	|| tcpcurrestab.is_set
	|| tcpinsegs.is_set
	|| tcpoutsegs.is_set
	|| tcpretranssegs.is_set
	|| tcpinerrs.is_set
	|| tcpoutrsts.is_set
	|| tcphcinsegs.is_set
	|| tcphcoutsegs.is_set;
}

bool TCPMIB::Tcp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tcprtoalgorithm.yfilter)
	|| ydk::is_set(tcprtomin.yfilter)
	|| ydk::is_set(tcprtomax.yfilter)
	|| ydk::is_set(tcpmaxconn.yfilter)
	|| ydk::is_set(tcpactiveopens.yfilter)
	|| ydk::is_set(tcppassiveopens.yfilter)
	|| ydk::is_set(tcpattemptfails.yfilter)
	|| ydk::is_set(tcpestabresets.yfilter)
	|| ydk::is_set(tcpcurrestab.yfilter)
	|| ydk::is_set(tcpinsegs.yfilter)
	|| ydk::is_set(tcpoutsegs.yfilter)
	|| ydk::is_set(tcpretranssegs.yfilter)
	|| ydk::is_set(tcpinerrs.yfilter)
	|| ydk::is_set(tcpoutrsts.yfilter)
	|| ydk::is_set(tcphcinsegs.yfilter)
	|| ydk::is_set(tcphcoutsegs.yfilter);
}

std::string TCPMIB::Tcp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "TCP-MIB:TCP-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string TCPMIB::Tcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TCPMIB::Tcp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tcprtoalgorithm.is_set || is_set(tcprtoalgorithm.yfilter)) leaf_name_data.push_back(tcprtoalgorithm.get_name_leafdata());
    if (tcprtomin.is_set || is_set(tcprtomin.yfilter)) leaf_name_data.push_back(tcprtomin.get_name_leafdata());
    if (tcprtomax.is_set || is_set(tcprtomax.yfilter)) leaf_name_data.push_back(tcprtomax.get_name_leafdata());
    if (tcpmaxconn.is_set || is_set(tcpmaxconn.yfilter)) leaf_name_data.push_back(tcpmaxconn.get_name_leafdata());
    if (tcpactiveopens.is_set || is_set(tcpactiveopens.yfilter)) leaf_name_data.push_back(tcpactiveopens.get_name_leafdata());
    if (tcppassiveopens.is_set || is_set(tcppassiveopens.yfilter)) leaf_name_data.push_back(tcppassiveopens.get_name_leafdata());
    if (tcpattemptfails.is_set || is_set(tcpattemptfails.yfilter)) leaf_name_data.push_back(tcpattemptfails.get_name_leafdata());
    if (tcpestabresets.is_set || is_set(tcpestabresets.yfilter)) leaf_name_data.push_back(tcpestabresets.get_name_leafdata());
    if (tcpcurrestab.is_set || is_set(tcpcurrestab.yfilter)) leaf_name_data.push_back(tcpcurrestab.get_name_leafdata());
    if (tcpinsegs.is_set || is_set(tcpinsegs.yfilter)) leaf_name_data.push_back(tcpinsegs.get_name_leafdata());
    if (tcpoutsegs.is_set || is_set(tcpoutsegs.yfilter)) leaf_name_data.push_back(tcpoutsegs.get_name_leafdata());
    if (tcpretranssegs.is_set || is_set(tcpretranssegs.yfilter)) leaf_name_data.push_back(tcpretranssegs.get_name_leafdata());
    if (tcpinerrs.is_set || is_set(tcpinerrs.yfilter)) leaf_name_data.push_back(tcpinerrs.get_name_leafdata());
    if (tcpoutrsts.is_set || is_set(tcpoutrsts.yfilter)) leaf_name_data.push_back(tcpoutrsts.get_name_leafdata());
    if (tcphcinsegs.is_set || is_set(tcphcinsegs.yfilter)) leaf_name_data.push_back(tcphcinsegs.get_name_leafdata());
    if (tcphcoutsegs.is_set || is_set(tcphcoutsegs.yfilter)) leaf_name_data.push_back(tcphcoutsegs.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> TCPMIB::Tcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TCPMIB::Tcp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void TCPMIB::Tcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tcpRtoAlgorithm")
    {
        tcprtoalgorithm = value;
        tcprtoalgorithm.value_namespace = name_space;
        tcprtoalgorithm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tcpRtoMin")
    {
        tcprtomin = value;
        tcprtomin.value_namespace = name_space;
        tcprtomin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tcpRtoMax")
    {
        tcprtomax = value;
        tcprtomax.value_namespace = name_space;
        tcprtomax.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tcpMaxConn")
    {
        tcpmaxconn = value;
        tcpmaxconn.value_namespace = name_space;
        tcpmaxconn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tcpActiveOpens")
    {
        tcpactiveopens = value;
        tcpactiveopens.value_namespace = name_space;
        tcpactiveopens.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tcpPassiveOpens")
    {
        tcppassiveopens = value;
        tcppassiveopens.value_namespace = name_space;
        tcppassiveopens.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tcpAttemptFails")
    {
        tcpattemptfails = value;
        tcpattemptfails.value_namespace = name_space;
        tcpattemptfails.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tcpEstabResets")
    {
        tcpestabresets = value;
        tcpestabresets.value_namespace = name_space;
        tcpestabresets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tcpCurrEstab")
    {
        tcpcurrestab = value;
        tcpcurrestab.value_namespace = name_space;
        tcpcurrestab.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tcpInSegs")
    {
        tcpinsegs = value;
        tcpinsegs.value_namespace = name_space;
        tcpinsegs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tcpOutSegs")
    {
        tcpoutsegs = value;
        tcpoutsegs.value_namespace = name_space;
        tcpoutsegs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tcpRetransSegs")
    {
        tcpretranssegs = value;
        tcpretranssegs.value_namespace = name_space;
        tcpretranssegs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tcpInErrs")
    {
        tcpinerrs = value;
        tcpinerrs.value_namespace = name_space;
        tcpinerrs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tcpOutRsts")
    {
        tcpoutrsts = value;
        tcpoutrsts.value_namespace = name_space;
        tcpoutrsts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tcpHCInSegs")
    {
        tcphcinsegs = value;
        tcphcinsegs.value_namespace = name_space;
        tcphcinsegs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tcpHCOutSegs")
    {
        tcphcoutsegs = value;
        tcphcoutsegs.value_namespace = name_space;
        tcphcoutsegs.value_namespace_prefix = name_space_prefix;
    }
}

void TCPMIB::Tcp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tcpRtoAlgorithm")
    {
        tcprtoalgorithm.yfilter = yfilter;
    }
    if(value_path == "tcpRtoMin")
    {
        tcprtomin.yfilter = yfilter;
    }
    if(value_path == "tcpRtoMax")
    {
        tcprtomax.yfilter = yfilter;
    }
    if(value_path == "tcpMaxConn")
    {
        tcpmaxconn.yfilter = yfilter;
    }
    if(value_path == "tcpActiveOpens")
    {
        tcpactiveopens.yfilter = yfilter;
    }
    if(value_path == "tcpPassiveOpens")
    {
        tcppassiveopens.yfilter = yfilter;
    }
    if(value_path == "tcpAttemptFails")
    {
        tcpattemptfails.yfilter = yfilter;
    }
    if(value_path == "tcpEstabResets")
    {
        tcpestabresets.yfilter = yfilter;
    }
    if(value_path == "tcpCurrEstab")
    {
        tcpcurrestab.yfilter = yfilter;
    }
    if(value_path == "tcpInSegs")
    {
        tcpinsegs.yfilter = yfilter;
    }
    if(value_path == "tcpOutSegs")
    {
        tcpoutsegs.yfilter = yfilter;
    }
    if(value_path == "tcpRetransSegs")
    {
        tcpretranssegs.yfilter = yfilter;
    }
    if(value_path == "tcpInErrs")
    {
        tcpinerrs.yfilter = yfilter;
    }
    if(value_path == "tcpOutRsts")
    {
        tcpoutrsts.yfilter = yfilter;
    }
    if(value_path == "tcpHCInSegs")
    {
        tcphcinsegs.yfilter = yfilter;
    }
    if(value_path == "tcpHCOutSegs")
    {
        tcphcoutsegs.yfilter = yfilter;
    }
}

bool TCPMIB::Tcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tcpRtoAlgorithm" || name == "tcpRtoMin" || name == "tcpRtoMax" || name == "tcpMaxConn" || name == "tcpActiveOpens" || name == "tcpPassiveOpens" || name == "tcpAttemptFails" || name == "tcpEstabResets" || name == "tcpCurrEstab" || name == "tcpInSegs" || name == "tcpOutSegs" || name == "tcpRetransSegs" || name == "tcpInErrs" || name == "tcpOutRsts" || name == "tcpHCInSegs" || name == "tcpHCOutSegs")
        return true;
    return false;
}

TCPMIB::Tcpconntable::Tcpconntable()
{

    yang_name = "tcpConnTable"; yang_parent_name = "TCP-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

TCPMIB::Tcpconntable::~Tcpconntable()
{
}

bool TCPMIB::Tcpconntable::has_data() const
{
    for (std::size_t index=0; index<tcpconnentry.size(); index++)
    {
        if(tcpconnentry[index]->has_data())
            return true;
    }
    return false;
}

bool TCPMIB::Tcpconntable::has_operation() const
{
    for (std::size_t index=0; index<tcpconnentry.size(); index++)
    {
        if(tcpconnentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string TCPMIB::Tcpconntable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "TCP-MIB:TCP-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string TCPMIB::Tcpconntable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcpConnTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TCPMIB::Tcpconntable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> TCPMIB::Tcpconntable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tcpConnEntry")
    {
        auto c = std::make_shared<TCPMIB::Tcpconntable::Tcpconnentry>();
        c->parent = this;
        tcpconnentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TCPMIB::Tcpconntable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : tcpconnentry)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void TCPMIB::Tcpconntable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void TCPMIB::Tcpconntable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool TCPMIB::Tcpconntable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tcpConnEntry")
        return true;
    return false;
}

TCPMIB::Tcpconntable::Tcpconnentry::Tcpconnentry()
    :
    tcpconnlocaladdress{YType::str, "tcpConnLocalAddress"},
    tcpconnlocalport{YType::int32, "tcpConnLocalPort"},
    tcpconnremaddress{YType::str, "tcpConnRemAddress"},
    tcpconnremport{YType::int32, "tcpConnRemPort"},
    tcpconnstate{YType::enumeration, "tcpConnState"}
{

    yang_name = "tcpConnEntry"; yang_parent_name = "tcpConnTable"; is_top_level_class = false; has_list_ancestor = false;
}

TCPMIB::Tcpconntable::Tcpconnentry::~Tcpconnentry()
{
}

bool TCPMIB::Tcpconntable::Tcpconnentry::has_data() const
{
    return tcpconnlocaladdress.is_set
	|| tcpconnlocalport.is_set
	|| tcpconnremaddress.is_set
	|| tcpconnremport.is_set
	|| tcpconnstate.is_set;
}

bool TCPMIB::Tcpconntable::Tcpconnentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tcpconnlocaladdress.yfilter)
	|| ydk::is_set(tcpconnlocalport.yfilter)
	|| ydk::is_set(tcpconnremaddress.yfilter)
	|| ydk::is_set(tcpconnremport.yfilter)
	|| ydk::is_set(tcpconnstate.yfilter);
}

std::string TCPMIB::Tcpconntable::Tcpconnentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "TCP-MIB:TCP-MIB/tcpConnTable/" << get_segment_path();
    return path_buffer.str();
}

std::string TCPMIB::Tcpconntable::Tcpconnentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcpConnEntry" <<"[tcpConnLocalAddress='" <<tcpconnlocaladdress <<"']" <<"[tcpConnLocalPort='" <<tcpconnlocalport <<"']" <<"[tcpConnRemAddress='" <<tcpconnremaddress <<"']" <<"[tcpConnRemPort='" <<tcpconnremport <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TCPMIB::Tcpconntable::Tcpconnentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tcpconnlocaladdress.is_set || is_set(tcpconnlocaladdress.yfilter)) leaf_name_data.push_back(tcpconnlocaladdress.get_name_leafdata());
    if (tcpconnlocalport.is_set || is_set(tcpconnlocalport.yfilter)) leaf_name_data.push_back(tcpconnlocalport.get_name_leafdata());
    if (tcpconnremaddress.is_set || is_set(tcpconnremaddress.yfilter)) leaf_name_data.push_back(tcpconnremaddress.get_name_leafdata());
    if (tcpconnremport.is_set || is_set(tcpconnremport.yfilter)) leaf_name_data.push_back(tcpconnremport.get_name_leafdata());
    if (tcpconnstate.is_set || is_set(tcpconnstate.yfilter)) leaf_name_data.push_back(tcpconnstate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> TCPMIB::Tcpconntable::Tcpconnentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TCPMIB::Tcpconntable::Tcpconnentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void TCPMIB::Tcpconntable::Tcpconnentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tcpConnLocalAddress")
    {
        tcpconnlocaladdress = value;
        tcpconnlocaladdress.value_namespace = name_space;
        tcpconnlocaladdress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tcpConnLocalPort")
    {
        tcpconnlocalport = value;
        tcpconnlocalport.value_namespace = name_space;
        tcpconnlocalport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tcpConnRemAddress")
    {
        tcpconnremaddress = value;
        tcpconnremaddress.value_namespace = name_space;
        tcpconnremaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tcpConnRemPort")
    {
        tcpconnremport = value;
        tcpconnremport.value_namespace = name_space;
        tcpconnremport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tcpConnState")
    {
        tcpconnstate = value;
        tcpconnstate.value_namespace = name_space;
        tcpconnstate.value_namespace_prefix = name_space_prefix;
    }
}

void TCPMIB::Tcpconntable::Tcpconnentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tcpConnLocalAddress")
    {
        tcpconnlocaladdress.yfilter = yfilter;
    }
    if(value_path == "tcpConnLocalPort")
    {
        tcpconnlocalport.yfilter = yfilter;
    }
    if(value_path == "tcpConnRemAddress")
    {
        tcpconnremaddress.yfilter = yfilter;
    }
    if(value_path == "tcpConnRemPort")
    {
        tcpconnremport.yfilter = yfilter;
    }
    if(value_path == "tcpConnState")
    {
        tcpconnstate.yfilter = yfilter;
    }
}

bool TCPMIB::Tcpconntable::Tcpconnentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tcpConnLocalAddress" || name == "tcpConnLocalPort" || name == "tcpConnRemAddress" || name == "tcpConnRemPort" || name == "tcpConnState")
        return true;
    return false;
}

TCPMIB::Tcpconnectiontable::Tcpconnectiontable()
{

    yang_name = "tcpConnectionTable"; yang_parent_name = "TCP-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

TCPMIB::Tcpconnectiontable::~Tcpconnectiontable()
{
}

bool TCPMIB::Tcpconnectiontable::has_data() const
{
    for (std::size_t index=0; index<tcpconnectionentry.size(); index++)
    {
        if(tcpconnectionentry[index]->has_data())
            return true;
    }
    return false;
}

bool TCPMIB::Tcpconnectiontable::has_operation() const
{
    for (std::size_t index=0; index<tcpconnectionentry.size(); index++)
    {
        if(tcpconnectionentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string TCPMIB::Tcpconnectiontable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "TCP-MIB:TCP-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string TCPMIB::Tcpconnectiontable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcpConnectionTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TCPMIB::Tcpconnectiontable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> TCPMIB::Tcpconnectiontable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tcpConnectionEntry")
    {
        auto c = std::make_shared<TCPMIB::Tcpconnectiontable::Tcpconnectionentry>();
        c->parent = this;
        tcpconnectionentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TCPMIB::Tcpconnectiontable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : tcpconnectionentry)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void TCPMIB::Tcpconnectiontable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void TCPMIB::Tcpconnectiontable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool TCPMIB::Tcpconnectiontable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tcpConnectionEntry")
        return true;
    return false;
}

TCPMIB::Tcpconnectiontable::Tcpconnectionentry::Tcpconnectionentry()
    :
    tcpconnectionlocaladdresstype{YType::enumeration, "tcpConnectionLocalAddressType"},
    tcpconnectionlocaladdress{YType::str, "tcpConnectionLocalAddress"},
    tcpconnectionlocalport{YType::uint16, "tcpConnectionLocalPort"},
    tcpconnectionremaddresstype{YType::enumeration, "tcpConnectionRemAddressType"},
    tcpconnectionremaddress{YType::str, "tcpConnectionRemAddress"},
    tcpconnectionremport{YType::uint16, "tcpConnectionRemPort"},
    tcpconnectionstate{YType::enumeration, "tcpConnectionState"},
    tcpconnectionprocess{YType::uint32, "tcpConnectionProcess"}
{

    yang_name = "tcpConnectionEntry"; yang_parent_name = "tcpConnectionTable"; is_top_level_class = false; has_list_ancestor = false;
}

TCPMIB::Tcpconnectiontable::Tcpconnectionentry::~Tcpconnectionentry()
{
}

bool TCPMIB::Tcpconnectiontable::Tcpconnectionentry::has_data() const
{
    return tcpconnectionlocaladdresstype.is_set
	|| tcpconnectionlocaladdress.is_set
	|| tcpconnectionlocalport.is_set
	|| tcpconnectionremaddresstype.is_set
	|| tcpconnectionremaddress.is_set
	|| tcpconnectionremport.is_set
	|| tcpconnectionstate.is_set
	|| tcpconnectionprocess.is_set;
}

bool TCPMIB::Tcpconnectiontable::Tcpconnectionentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tcpconnectionlocaladdresstype.yfilter)
	|| ydk::is_set(tcpconnectionlocaladdress.yfilter)
	|| ydk::is_set(tcpconnectionlocalport.yfilter)
	|| ydk::is_set(tcpconnectionremaddresstype.yfilter)
	|| ydk::is_set(tcpconnectionremaddress.yfilter)
	|| ydk::is_set(tcpconnectionremport.yfilter)
	|| ydk::is_set(tcpconnectionstate.yfilter)
	|| ydk::is_set(tcpconnectionprocess.yfilter);
}

std::string TCPMIB::Tcpconnectiontable::Tcpconnectionentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "TCP-MIB:TCP-MIB/tcpConnectionTable/" << get_segment_path();
    return path_buffer.str();
}

std::string TCPMIB::Tcpconnectiontable::Tcpconnectionentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcpConnectionEntry" <<"[tcpConnectionLocalAddressType='" <<tcpconnectionlocaladdresstype <<"']" <<"[tcpConnectionLocalAddress='" <<tcpconnectionlocaladdress <<"']" <<"[tcpConnectionLocalPort='" <<tcpconnectionlocalport <<"']" <<"[tcpConnectionRemAddressType='" <<tcpconnectionremaddresstype <<"']" <<"[tcpConnectionRemAddress='" <<tcpconnectionremaddress <<"']" <<"[tcpConnectionRemPort='" <<tcpconnectionremport <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TCPMIB::Tcpconnectiontable::Tcpconnectionentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tcpconnectionlocaladdresstype.is_set || is_set(tcpconnectionlocaladdresstype.yfilter)) leaf_name_data.push_back(tcpconnectionlocaladdresstype.get_name_leafdata());
    if (tcpconnectionlocaladdress.is_set || is_set(tcpconnectionlocaladdress.yfilter)) leaf_name_data.push_back(tcpconnectionlocaladdress.get_name_leafdata());
    if (tcpconnectionlocalport.is_set || is_set(tcpconnectionlocalport.yfilter)) leaf_name_data.push_back(tcpconnectionlocalport.get_name_leafdata());
    if (tcpconnectionremaddresstype.is_set || is_set(tcpconnectionremaddresstype.yfilter)) leaf_name_data.push_back(tcpconnectionremaddresstype.get_name_leafdata());
    if (tcpconnectionremaddress.is_set || is_set(tcpconnectionremaddress.yfilter)) leaf_name_data.push_back(tcpconnectionremaddress.get_name_leafdata());
    if (tcpconnectionremport.is_set || is_set(tcpconnectionremport.yfilter)) leaf_name_data.push_back(tcpconnectionremport.get_name_leafdata());
    if (tcpconnectionstate.is_set || is_set(tcpconnectionstate.yfilter)) leaf_name_data.push_back(tcpconnectionstate.get_name_leafdata());
    if (tcpconnectionprocess.is_set || is_set(tcpconnectionprocess.yfilter)) leaf_name_data.push_back(tcpconnectionprocess.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> TCPMIB::Tcpconnectiontable::Tcpconnectionentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TCPMIB::Tcpconnectiontable::Tcpconnectionentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void TCPMIB::Tcpconnectiontable::Tcpconnectionentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tcpConnectionLocalAddressType")
    {
        tcpconnectionlocaladdresstype = value;
        tcpconnectionlocaladdresstype.value_namespace = name_space;
        tcpconnectionlocaladdresstype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tcpConnectionLocalAddress")
    {
        tcpconnectionlocaladdress = value;
        tcpconnectionlocaladdress.value_namespace = name_space;
        tcpconnectionlocaladdress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tcpConnectionLocalPort")
    {
        tcpconnectionlocalport = value;
        tcpconnectionlocalport.value_namespace = name_space;
        tcpconnectionlocalport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tcpConnectionRemAddressType")
    {
        tcpconnectionremaddresstype = value;
        tcpconnectionremaddresstype.value_namespace = name_space;
        tcpconnectionremaddresstype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tcpConnectionRemAddress")
    {
        tcpconnectionremaddress = value;
        tcpconnectionremaddress.value_namespace = name_space;
        tcpconnectionremaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tcpConnectionRemPort")
    {
        tcpconnectionremport = value;
        tcpconnectionremport.value_namespace = name_space;
        tcpconnectionremport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tcpConnectionState")
    {
        tcpconnectionstate = value;
        tcpconnectionstate.value_namespace = name_space;
        tcpconnectionstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tcpConnectionProcess")
    {
        tcpconnectionprocess = value;
        tcpconnectionprocess.value_namespace = name_space;
        tcpconnectionprocess.value_namespace_prefix = name_space_prefix;
    }
}

void TCPMIB::Tcpconnectiontable::Tcpconnectionentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tcpConnectionLocalAddressType")
    {
        tcpconnectionlocaladdresstype.yfilter = yfilter;
    }
    if(value_path == "tcpConnectionLocalAddress")
    {
        tcpconnectionlocaladdress.yfilter = yfilter;
    }
    if(value_path == "tcpConnectionLocalPort")
    {
        tcpconnectionlocalport.yfilter = yfilter;
    }
    if(value_path == "tcpConnectionRemAddressType")
    {
        tcpconnectionremaddresstype.yfilter = yfilter;
    }
    if(value_path == "tcpConnectionRemAddress")
    {
        tcpconnectionremaddress.yfilter = yfilter;
    }
    if(value_path == "tcpConnectionRemPort")
    {
        tcpconnectionremport.yfilter = yfilter;
    }
    if(value_path == "tcpConnectionState")
    {
        tcpconnectionstate.yfilter = yfilter;
    }
    if(value_path == "tcpConnectionProcess")
    {
        tcpconnectionprocess.yfilter = yfilter;
    }
}

bool TCPMIB::Tcpconnectiontable::Tcpconnectionentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tcpConnectionLocalAddressType" || name == "tcpConnectionLocalAddress" || name == "tcpConnectionLocalPort" || name == "tcpConnectionRemAddressType" || name == "tcpConnectionRemAddress" || name == "tcpConnectionRemPort" || name == "tcpConnectionState" || name == "tcpConnectionProcess")
        return true;
    return false;
}

TCPMIB::Tcplistenertable::Tcplistenertable()
{

    yang_name = "tcpListenerTable"; yang_parent_name = "TCP-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

TCPMIB::Tcplistenertable::~Tcplistenertable()
{
}

bool TCPMIB::Tcplistenertable::has_data() const
{
    for (std::size_t index=0; index<tcplistenerentry.size(); index++)
    {
        if(tcplistenerentry[index]->has_data())
            return true;
    }
    return false;
}

bool TCPMIB::Tcplistenertable::has_operation() const
{
    for (std::size_t index=0; index<tcplistenerentry.size(); index++)
    {
        if(tcplistenerentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string TCPMIB::Tcplistenertable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "TCP-MIB:TCP-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string TCPMIB::Tcplistenertable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcpListenerTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TCPMIB::Tcplistenertable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> TCPMIB::Tcplistenertable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tcpListenerEntry")
    {
        auto c = std::make_shared<TCPMIB::Tcplistenertable::Tcplistenerentry>();
        c->parent = this;
        tcplistenerentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TCPMIB::Tcplistenertable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : tcplistenerentry)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void TCPMIB::Tcplistenertable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void TCPMIB::Tcplistenertable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool TCPMIB::Tcplistenertable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tcpListenerEntry")
        return true;
    return false;
}

TCPMIB::Tcplistenertable::Tcplistenerentry::Tcplistenerentry()
    :
    tcplistenerlocaladdresstype{YType::enumeration, "tcpListenerLocalAddressType"},
    tcplistenerlocaladdress{YType::str, "tcpListenerLocalAddress"},
    tcplistenerlocalport{YType::uint16, "tcpListenerLocalPort"},
    tcplistenerprocess{YType::uint32, "tcpListenerProcess"}
{

    yang_name = "tcpListenerEntry"; yang_parent_name = "tcpListenerTable"; is_top_level_class = false; has_list_ancestor = false;
}

TCPMIB::Tcplistenertable::Tcplistenerentry::~Tcplistenerentry()
{
}

bool TCPMIB::Tcplistenertable::Tcplistenerentry::has_data() const
{
    return tcplistenerlocaladdresstype.is_set
	|| tcplistenerlocaladdress.is_set
	|| tcplistenerlocalport.is_set
	|| tcplistenerprocess.is_set;
}

bool TCPMIB::Tcplistenertable::Tcplistenerentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tcplistenerlocaladdresstype.yfilter)
	|| ydk::is_set(tcplistenerlocaladdress.yfilter)
	|| ydk::is_set(tcplistenerlocalport.yfilter)
	|| ydk::is_set(tcplistenerprocess.yfilter);
}

std::string TCPMIB::Tcplistenertable::Tcplistenerentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "TCP-MIB:TCP-MIB/tcpListenerTable/" << get_segment_path();
    return path_buffer.str();
}

std::string TCPMIB::Tcplistenertable::Tcplistenerentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcpListenerEntry" <<"[tcpListenerLocalAddressType='" <<tcplistenerlocaladdresstype <<"']" <<"[tcpListenerLocalAddress='" <<tcplistenerlocaladdress <<"']" <<"[tcpListenerLocalPort='" <<tcplistenerlocalport <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > TCPMIB::Tcplistenertable::Tcplistenerentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tcplistenerlocaladdresstype.is_set || is_set(tcplistenerlocaladdresstype.yfilter)) leaf_name_data.push_back(tcplistenerlocaladdresstype.get_name_leafdata());
    if (tcplistenerlocaladdress.is_set || is_set(tcplistenerlocaladdress.yfilter)) leaf_name_data.push_back(tcplistenerlocaladdress.get_name_leafdata());
    if (tcplistenerlocalport.is_set || is_set(tcplistenerlocalport.yfilter)) leaf_name_data.push_back(tcplistenerlocalport.get_name_leafdata());
    if (tcplistenerprocess.is_set || is_set(tcplistenerprocess.yfilter)) leaf_name_data.push_back(tcplistenerprocess.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> TCPMIB::Tcplistenertable::Tcplistenerentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TCPMIB::Tcplistenertable::Tcplistenerentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void TCPMIB::Tcplistenertable::Tcplistenerentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tcpListenerLocalAddressType")
    {
        tcplistenerlocaladdresstype = value;
        tcplistenerlocaladdresstype.value_namespace = name_space;
        tcplistenerlocaladdresstype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tcpListenerLocalAddress")
    {
        tcplistenerlocaladdress = value;
        tcplistenerlocaladdress.value_namespace = name_space;
        tcplistenerlocaladdress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tcpListenerLocalPort")
    {
        tcplistenerlocalport = value;
        tcplistenerlocalport.value_namespace = name_space;
        tcplistenerlocalport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tcpListenerProcess")
    {
        tcplistenerprocess = value;
        tcplistenerprocess.value_namespace = name_space;
        tcplistenerprocess.value_namespace_prefix = name_space_prefix;
    }
}

void TCPMIB::Tcplistenertable::Tcplistenerentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tcpListenerLocalAddressType")
    {
        tcplistenerlocaladdresstype.yfilter = yfilter;
    }
    if(value_path == "tcpListenerLocalAddress")
    {
        tcplistenerlocaladdress.yfilter = yfilter;
    }
    if(value_path == "tcpListenerLocalPort")
    {
        tcplistenerlocalport.yfilter = yfilter;
    }
    if(value_path == "tcpListenerProcess")
    {
        tcplistenerprocess.yfilter = yfilter;
    }
}

bool TCPMIB::Tcplistenertable::Tcplistenerentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tcpListenerLocalAddressType" || name == "tcpListenerLocalAddress" || name == "tcpListenerLocalPort" || name == "tcpListenerProcess")
        return true;
    return false;
}

const Enum::YLeaf TCPMIB::Tcp::Tcprtoalgorithm::other {1, "other"};
const Enum::YLeaf TCPMIB::Tcp::Tcprtoalgorithm::constant {2, "constant"};
const Enum::YLeaf TCPMIB::Tcp::Tcprtoalgorithm::rsre {3, "rsre"};
const Enum::YLeaf TCPMIB::Tcp::Tcprtoalgorithm::vanj {4, "vanj"};
const Enum::YLeaf TCPMIB::Tcp::Tcprtoalgorithm::rfc2988 {5, "rfc2988"};

const Enum::YLeaf TCPMIB::Tcpconntable::Tcpconnentry::Tcpconnstate::closed {1, "closed"};
const Enum::YLeaf TCPMIB::Tcpconntable::Tcpconnentry::Tcpconnstate::listen {2, "listen"};
const Enum::YLeaf TCPMIB::Tcpconntable::Tcpconnentry::Tcpconnstate::synSent {3, "synSent"};
const Enum::YLeaf TCPMIB::Tcpconntable::Tcpconnentry::Tcpconnstate::synReceived {4, "synReceived"};
const Enum::YLeaf TCPMIB::Tcpconntable::Tcpconnentry::Tcpconnstate::established {5, "established"};
const Enum::YLeaf TCPMIB::Tcpconntable::Tcpconnentry::Tcpconnstate::finWait1 {6, "finWait1"};
const Enum::YLeaf TCPMIB::Tcpconntable::Tcpconnentry::Tcpconnstate::finWait2 {7, "finWait2"};
const Enum::YLeaf TCPMIB::Tcpconntable::Tcpconnentry::Tcpconnstate::closeWait {8, "closeWait"};
const Enum::YLeaf TCPMIB::Tcpconntable::Tcpconnentry::Tcpconnstate::lastAck {9, "lastAck"};
const Enum::YLeaf TCPMIB::Tcpconntable::Tcpconnentry::Tcpconnstate::closing {10, "closing"};
const Enum::YLeaf TCPMIB::Tcpconntable::Tcpconnentry::Tcpconnstate::timeWait {11, "timeWait"};
const Enum::YLeaf TCPMIB::Tcpconntable::Tcpconnentry::Tcpconnstate::deleteTCB {12, "deleteTCB"};

const Enum::YLeaf TCPMIB::Tcpconnectiontable::Tcpconnectionentry::Tcpconnectionstate::closed {1, "closed"};
const Enum::YLeaf TCPMIB::Tcpconnectiontable::Tcpconnectionentry::Tcpconnectionstate::listen {2, "listen"};
const Enum::YLeaf TCPMIB::Tcpconnectiontable::Tcpconnectionentry::Tcpconnectionstate::synSent {3, "synSent"};
const Enum::YLeaf TCPMIB::Tcpconnectiontable::Tcpconnectionentry::Tcpconnectionstate::synReceived {4, "synReceived"};
const Enum::YLeaf TCPMIB::Tcpconnectiontable::Tcpconnectionentry::Tcpconnectionstate::established {5, "established"};
const Enum::YLeaf TCPMIB::Tcpconnectiontable::Tcpconnectionentry::Tcpconnectionstate::finWait1 {6, "finWait1"};
const Enum::YLeaf TCPMIB::Tcpconnectiontable::Tcpconnectionentry::Tcpconnectionstate::finWait2 {7, "finWait2"};
const Enum::YLeaf TCPMIB::Tcpconnectiontable::Tcpconnectionentry::Tcpconnectionstate::closeWait {8, "closeWait"};
const Enum::YLeaf TCPMIB::Tcpconnectiontable::Tcpconnectionentry::Tcpconnectionstate::lastAck {9, "lastAck"};
const Enum::YLeaf TCPMIB::Tcpconnectiontable::Tcpconnectionentry::Tcpconnectionstate::closing {10, "closing"};
const Enum::YLeaf TCPMIB::Tcpconnectiontable::Tcpconnectionentry::Tcpconnectionstate::timeWait {11, "timeWait"};
const Enum::YLeaf TCPMIB::Tcpconnectiontable::Tcpconnectionentry::Tcpconnectionstate::deleteTCB {12, "deleteTCB"};


}
}

