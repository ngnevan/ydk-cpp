
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_137.hpp"
#include "Cisco_IOS_XE_native_139.hpp"
#include "Cisco_IOS_XE_native_138.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {

Native::Router::Lisp::Decapsulation::Filter::Rloc::Rloc()
    :
    source(std::make_shared<Native::Router::Lisp::Decapsulation::Filter::Rloc::Source>())
{
    source->parent = this;

    yang_name = "rloc"; yang_parent_name = "filter"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::Decapsulation::Filter::Rloc::~Rloc()
{
}

bool Native::Router::Lisp::Decapsulation::Filter::Rloc::has_data() const
{
    return (source !=  nullptr && source->has_data());
}

bool Native::Router::Lisp::Decapsulation::Filter::Rloc::has_operation() const
{
    return is_set(yfilter)
	|| (source !=  nullptr && source->has_operation());
}

std::string Native::Router::Lisp::Decapsulation::Filter::Rloc::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/decapsulation/filter/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Decapsulation::Filter::Rloc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rloc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Decapsulation::Filter::Rloc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Decapsulation::Filter::Rloc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "source")
    {
        if(source == nullptr)
        {
            source = std::make_shared<Native::Router::Lisp::Decapsulation::Filter::Rloc::Source>();
        }
        return source;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Decapsulation::Filter::Rloc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(source != nullptr)
    {
        children["source"] = source;
    }

    return children;
}

void Native::Router::Lisp::Decapsulation::Filter::Rloc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Lisp::Decapsulation::Filter::Rloc::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Lisp::Decapsulation::Filter::Rloc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source")
        return true;
    return false;
}

Native::Router::Lisp::Decapsulation::Filter::Rloc::Source::Source()
    :
    locator_set{YType::str, "locator-set"},
    member{YType::empty, "member"}
{

    yang_name = "source"; yang_parent_name = "rloc"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::Decapsulation::Filter::Rloc::Source::~Source()
{
}

bool Native::Router::Lisp::Decapsulation::Filter::Rloc::Source::has_data() const
{
    return locator_set.is_set
	|| member.is_set;
}

bool Native::Router::Lisp::Decapsulation::Filter::Rloc::Source::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(locator_set.yfilter)
	|| ydk::is_set(member.yfilter);
}

std::string Native::Router::Lisp::Decapsulation::Filter::Rloc::Source::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/decapsulation/filter/rloc/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Decapsulation::Filter::Rloc::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Decapsulation::Filter::Rloc::Source::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (locator_set.is_set || is_set(locator_set.yfilter)) leaf_name_data.push_back(locator_set.get_name_leafdata());
    if (member.is_set || is_set(member.yfilter)) leaf_name_data.push_back(member.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Decapsulation::Filter::Rloc::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Decapsulation::Filter::Rloc::Source::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Decapsulation::Filter::Rloc::Source::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "locator-set")
    {
        locator_set = value;
        locator_set.value_namespace = name_space;
        locator_set.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "member")
    {
        member = value;
        member.value_namespace = name_space;
        member.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Decapsulation::Filter::Rloc::Source::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "locator-set")
    {
        locator_set.yfilter = yfilter;
    }
    if(value_path == "member")
    {
        member.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Decapsulation::Filter::Rloc::Source::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "locator-set" || name == "member")
        return true;
    return false;
}

Native::Router::Lisp::Etr::Etr()
    :
    map_server(std::make_shared<Native::Router::Lisp::Etr::MapServer>())
{
    map_server->parent = this;

    yang_name = "etr"; yang_parent_name = "lisp"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::Etr::~Etr()
{
}

bool Native::Router::Lisp::Etr::has_data() const
{
    return (map_server !=  nullptr && map_server->has_data());
}

bool Native::Router::Lisp::Etr::has_operation() const
{
    return is_set(yfilter)
	|| (map_server !=  nullptr && map_server->has_operation());
}

std::string Native::Router::Lisp::Etr::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Etr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "etr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Etr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Etr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "map-server")
    {
        if(map_server == nullptr)
        {
            map_server = std::make_shared<Native::Router::Lisp::Etr::MapServer>();
        }
        return map_server;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Etr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(map_server != nullptr)
    {
        children["map-server"] = map_server;
    }

    return children;
}

void Native::Router::Lisp::Etr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Lisp::Etr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Lisp::Etr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "map-server")
        return true;
    return false;
}

Native::Router::Lisp::Etr::MapServer::MapServer()
    :
    source_address{YType::str, "source-address"}
{

    yang_name = "map-server"; yang_parent_name = "etr"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::Etr::MapServer::~MapServer()
{
}

bool Native::Router::Lisp::Etr::MapServer::has_data() const
{
    return source_address.is_set;
}

bool Native::Router::Lisp::Etr::MapServer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source_address.yfilter);
}

std::string Native::Router::Lisp::Etr::MapServer::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/etr/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Etr::MapServer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-server";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Etr::MapServer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Etr::MapServer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Etr::MapServer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Etr::MapServer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Etr::MapServer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Etr::MapServer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source-address")
        return true;
    return false;
}

Native::Router::Lisp::Ipv4::Ipv4()
    :
    alt_vrf{YType::str, "alt-vrf"},
    map_request_source{YType::str, "map-request-source"},
    proxy_etr{YType::empty, "proxy-etr"},
    proxy_itr{YType::str, "proxy-itr"},
    sgt{YType::empty, "sgt"}
    	,
    database_mapping(std::make_shared<Native::Router::Lisp::Ipv4::DatabaseMapping>())
	,distance(std::make_shared<Native::Router::Lisp::Ipv4::Distance>())
	,itr(std::make_shared<Native::Router::Lisp::Ipv4::Itr>())
	,itr_enable(std::make_shared<Native::Router::Lisp::Ipv4::ItrEnable>())
	,etr(std::make_shared<Native::Router::Lisp::Ipv4::Etr>())
	,etr_enable(std::make_shared<Native::Router::Lisp::Ipv4::EtrEnable>())
	,locator(std::make_shared<Native::Router::Lisp::Ipv4::Locator>())
	,map_cache(std::make_shared<Native::Router::Lisp::Ipv4::MapCache>())
	,map_cache_limit(std::make_shared<Native::Router::Lisp::Ipv4::MapCacheLimit>())
	,map_cache_persistent(std::make_shared<Native::Router::Lisp::Ipv4::MapCachePersistent>())
	,map_resolver(nullptr) // presence node
	,map_server(nullptr) // presence node
	,path_mtu_discovery(nullptr) // presence node
	,route_export(std::make_shared<Native::Router::Lisp::Ipv4::RouteExport>())
	,route_import(std::make_shared<Native::Router::Lisp::Ipv4::RouteImport>())
	,site_registration(std::make_shared<Native::Router::Lisp::Ipv4::SiteRegistration>())
	,solicit_map_request(std::make_shared<Native::Router::Lisp::Ipv4::SolicitMapRequest>())
{
    database_mapping->parent = this;
    distance->parent = this;
    itr->parent = this;
    itr_enable->parent = this;
    etr->parent = this;
    etr_enable->parent = this;
    locator->parent = this;
    map_cache->parent = this;
    map_cache_limit->parent = this;
    map_cache_persistent->parent = this;
    route_export->parent = this;
    route_import->parent = this;
    site_registration->parent = this;
    solicit_map_request->parent = this;

    yang_name = "ipv4"; yang_parent_name = "lisp"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::Ipv4::~Ipv4()
{
}

bool Native::Router::Lisp::Ipv4::has_data() const
{
    for (std::size_t index=0; index<use_petr.size(); index++)
    {
        if(use_petr[index]->has_data())
            return true;
    }
    for (auto const & leaf : proxy_itr.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return alt_vrf.is_set
	|| map_request_source.is_set
	|| proxy_etr.is_set
	|| sgt.is_set
	|| (database_mapping !=  nullptr && database_mapping->has_data())
	|| (distance !=  nullptr && distance->has_data())
	|| (itr !=  nullptr && itr->has_data())
	|| (itr_enable !=  nullptr && itr_enable->has_data())
	|| (etr !=  nullptr && etr->has_data())
	|| (etr_enable !=  nullptr && etr_enable->has_data())
	|| (locator !=  nullptr && locator->has_data())
	|| (map_cache !=  nullptr && map_cache->has_data())
	|| (map_cache_limit !=  nullptr && map_cache_limit->has_data())
	|| (map_cache_persistent !=  nullptr && map_cache_persistent->has_data())
	|| (map_resolver !=  nullptr && map_resolver->has_data())
	|| (map_server !=  nullptr && map_server->has_data())
	|| (path_mtu_discovery !=  nullptr && path_mtu_discovery->has_data())
	|| (route_export !=  nullptr && route_export->has_data())
	|| (route_import !=  nullptr && route_import->has_data())
	|| (site_registration !=  nullptr && site_registration->has_data())
	|| (solicit_map_request !=  nullptr && solicit_map_request->has_data());
}

bool Native::Router::Lisp::Ipv4::has_operation() const
{
    for (std::size_t index=0; index<use_petr.size(); index++)
    {
        if(use_petr[index]->has_operation())
            return true;
    }
    for (auto const & leaf : proxy_itr.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(alt_vrf.yfilter)
	|| ydk::is_set(map_request_source.yfilter)
	|| ydk::is_set(proxy_etr.yfilter)
	|| ydk::is_set(proxy_itr.yfilter)
	|| ydk::is_set(sgt.yfilter)
	|| (database_mapping !=  nullptr && database_mapping->has_operation())
	|| (distance !=  nullptr && distance->has_operation())
	|| (itr !=  nullptr && itr->has_operation())
	|| (itr_enable !=  nullptr && itr_enable->has_operation())
	|| (etr !=  nullptr && etr->has_operation())
	|| (etr_enable !=  nullptr && etr_enable->has_operation())
	|| (locator !=  nullptr && locator->has_operation())
	|| (map_cache !=  nullptr && map_cache->has_operation())
	|| (map_cache_limit !=  nullptr && map_cache_limit->has_operation())
	|| (map_cache_persistent !=  nullptr && map_cache_persistent->has_operation())
	|| (map_resolver !=  nullptr && map_resolver->has_operation())
	|| (map_server !=  nullptr && map_server->has_operation())
	|| (path_mtu_discovery !=  nullptr && path_mtu_discovery->has_operation())
	|| (route_export !=  nullptr && route_export->has_operation())
	|| (route_import !=  nullptr && route_import->has_operation())
	|| (site_registration !=  nullptr && site_registration->has_operation())
	|| (solicit_map_request !=  nullptr && solicit_map_request->has_operation());
}

std::string Native::Router::Lisp::Ipv4::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (alt_vrf.is_set || is_set(alt_vrf.yfilter)) leaf_name_data.push_back(alt_vrf.get_name_leafdata());
    if (map_request_source.is_set || is_set(map_request_source.yfilter)) leaf_name_data.push_back(map_request_source.get_name_leafdata());
    if (proxy_etr.is_set || is_set(proxy_etr.yfilter)) leaf_name_data.push_back(proxy_etr.get_name_leafdata());
    if (sgt.is_set || is_set(sgt.yfilter)) leaf_name_data.push_back(sgt.get_name_leafdata());

    auto proxy_itr_name_datas = proxy_itr.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), proxy_itr_name_datas.begin(), proxy_itr_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "database-mapping")
    {
        if(database_mapping == nullptr)
        {
            database_mapping = std::make_shared<Native::Router::Lisp::Ipv4::DatabaseMapping>();
        }
        return database_mapping;
    }

    if(child_yang_name == "distance")
    {
        if(distance == nullptr)
        {
            distance = std::make_shared<Native::Router::Lisp::Ipv4::Distance>();
        }
        return distance;
    }

    if(child_yang_name == "itr")
    {
        if(itr == nullptr)
        {
            itr = std::make_shared<Native::Router::Lisp::Ipv4::Itr>();
        }
        return itr;
    }

    if(child_yang_name == "itr-enable")
    {
        if(itr_enable == nullptr)
        {
            itr_enable = std::make_shared<Native::Router::Lisp::Ipv4::ItrEnable>();
        }
        return itr_enable;
    }

    if(child_yang_name == "etr")
    {
        if(etr == nullptr)
        {
            etr = std::make_shared<Native::Router::Lisp::Ipv4::Etr>();
        }
        return etr;
    }

    if(child_yang_name == "etr-enable")
    {
        if(etr_enable == nullptr)
        {
            etr_enable = std::make_shared<Native::Router::Lisp::Ipv4::EtrEnable>();
        }
        return etr_enable;
    }

    if(child_yang_name == "locator")
    {
        if(locator == nullptr)
        {
            locator = std::make_shared<Native::Router::Lisp::Ipv4::Locator>();
        }
        return locator;
    }

    if(child_yang_name == "map-cache")
    {
        if(map_cache == nullptr)
        {
            map_cache = std::make_shared<Native::Router::Lisp::Ipv4::MapCache>();
        }
        return map_cache;
    }

    if(child_yang_name == "map-cache-limit")
    {
        if(map_cache_limit == nullptr)
        {
            map_cache_limit = std::make_shared<Native::Router::Lisp::Ipv4::MapCacheLimit>();
        }
        return map_cache_limit;
    }

    if(child_yang_name == "map-cache-persistent")
    {
        if(map_cache_persistent == nullptr)
        {
            map_cache_persistent = std::make_shared<Native::Router::Lisp::Ipv4::MapCachePersistent>();
        }
        return map_cache_persistent;
    }

    if(child_yang_name == "map-resolver")
    {
        if(map_resolver == nullptr)
        {
            map_resolver = std::make_shared<Native::Router::Lisp::Ipv4::MapResolver>();
        }
        return map_resolver;
    }

    if(child_yang_name == "map-server")
    {
        if(map_server == nullptr)
        {
            map_server = std::make_shared<Native::Router::Lisp::Ipv4::MapServer>();
        }
        return map_server;
    }

    if(child_yang_name == "path-mtu-discovery")
    {
        if(path_mtu_discovery == nullptr)
        {
            path_mtu_discovery = std::make_shared<Native::Router::Lisp::Ipv4::PathMtuDiscovery>();
        }
        return path_mtu_discovery;
    }

    if(child_yang_name == "route-export")
    {
        if(route_export == nullptr)
        {
            route_export = std::make_shared<Native::Router::Lisp::Ipv4::RouteExport>();
        }
        return route_export;
    }

    if(child_yang_name == "route-import")
    {
        if(route_import == nullptr)
        {
            route_import = std::make_shared<Native::Router::Lisp::Ipv4::RouteImport>();
        }
        return route_import;
    }

    if(child_yang_name == "site-registration")
    {
        if(site_registration == nullptr)
        {
            site_registration = std::make_shared<Native::Router::Lisp::Ipv4::SiteRegistration>();
        }
        return site_registration;
    }

    if(child_yang_name == "solicit-map-request")
    {
        if(solicit_map_request == nullptr)
        {
            solicit_map_request = std::make_shared<Native::Router::Lisp::Ipv4::SolicitMapRequest>();
        }
        return solicit_map_request;
    }

    if(child_yang_name == "use-petr")
    {
        for(auto const & c : use_petr)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Lisp::Ipv4::UsePetr>();
        c->parent = this;
        use_petr.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(database_mapping != nullptr)
    {
        children["database-mapping"] = database_mapping;
    }

    if(distance != nullptr)
    {
        children["distance"] = distance;
    }

    if(itr != nullptr)
    {
        children["itr"] = itr;
    }

    if(itr_enable != nullptr)
    {
        children["itr-enable"] = itr_enable;
    }

    if(etr != nullptr)
    {
        children["etr"] = etr;
    }

    if(etr_enable != nullptr)
    {
        children["etr-enable"] = etr_enable;
    }

    if(locator != nullptr)
    {
        children["locator"] = locator;
    }

    if(map_cache != nullptr)
    {
        children["map-cache"] = map_cache;
    }

    if(map_cache_limit != nullptr)
    {
        children["map-cache-limit"] = map_cache_limit;
    }

    if(map_cache_persistent != nullptr)
    {
        children["map-cache-persistent"] = map_cache_persistent;
    }

    if(map_resolver != nullptr)
    {
        children["map-resolver"] = map_resolver;
    }

    if(map_server != nullptr)
    {
        children["map-server"] = map_server;
    }

    if(path_mtu_discovery != nullptr)
    {
        children["path-mtu-discovery"] = path_mtu_discovery;
    }

    if(route_export != nullptr)
    {
        children["route-export"] = route_export;
    }

    if(route_import != nullptr)
    {
        children["route-import"] = route_import;
    }

    if(site_registration != nullptr)
    {
        children["site-registration"] = site_registration;
    }

    if(solicit_map_request != nullptr)
    {
        children["solicit-map-request"] = solicit_map_request;
    }

    for (auto const & c : use_petr)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Lisp::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "alt-vrf")
    {
        alt_vrf = value;
        alt_vrf.value_namespace = name_space;
        alt_vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "map-request-source")
    {
        map_request_source = value;
        map_request_source.value_namespace = name_space;
        map_request_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "proxy-etr")
    {
        proxy_etr = value;
        proxy_etr.value_namespace = name_space;
        proxy_etr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "proxy-itr")
    {
        proxy_itr.append(value);
    }
    if(value_path == "sgt")
    {
        sgt = value;
        sgt.value_namespace = name_space;
        sgt.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "alt-vrf")
    {
        alt_vrf.yfilter = yfilter;
    }
    if(value_path == "map-request-source")
    {
        map_request_source.yfilter = yfilter;
    }
    if(value_path == "proxy-etr")
    {
        proxy_etr.yfilter = yfilter;
    }
    if(value_path == "proxy-itr")
    {
        proxy_itr.yfilter = yfilter;
    }
    if(value_path == "sgt")
    {
        sgt.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "database-mapping" || name == "distance" || name == "itr" || name == "itr-enable" || name == "etr" || name == "etr-enable" || name == "locator" || name == "map-cache" || name == "map-cache-limit" || name == "map-cache-persistent" || name == "map-resolver" || name == "map-server" || name == "path-mtu-discovery" || name == "route-export" || name == "route-import" || name == "site-registration" || name == "solicit-map-request" || name == "use-petr" || name == "alt-vrf" || name == "map-request-source" || name == "proxy-etr" || name == "proxy-itr" || name == "sgt")
        return true;
    return false;
}

Native::Router::Lisp::Ipv4::DatabaseMapping::DatabaseMapping()
    :
    limit(std::make_shared<Native::Router::Lisp::Ipv4::DatabaseMapping::Limit>())
{
    limit->parent = this;

    yang_name = "database-mapping"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::Ipv4::DatabaseMapping::~DatabaseMapping()
{
}

bool Native::Router::Lisp::Ipv4::DatabaseMapping::has_data() const
{
    return (limit !=  nullptr && limit->has_data());
}

bool Native::Router::Lisp::Ipv4::DatabaseMapping::has_operation() const
{
    return is_set(yfilter)
	|| (limit !=  nullptr && limit->has_operation());
}

std::string Native::Router::Lisp::Ipv4::DatabaseMapping::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/ipv4/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Ipv4::DatabaseMapping::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database-mapping";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Ipv4::DatabaseMapping::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Ipv4::DatabaseMapping::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "limit")
    {
        if(limit == nullptr)
        {
            limit = std::make_shared<Native::Router::Lisp::Ipv4::DatabaseMapping::Limit>();
        }
        return limit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Ipv4::DatabaseMapping::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(limit != nullptr)
    {
        children["limit"] = limit;
    }

    return children;
}

void Native::Router::Lisp::Ipv4::DatabaseMapping::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Lisp::Ipv4::DatabaseMapping::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Lisp::Ipv4::DatabaseMapping::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "limit")
        return true;
    return false;
}

Native::Router::Lisp::Ipv4::DatabaseMapping::Limit::Limit()
    :
    dynamic{YType::uint32, "dynamic"},
    warning_threshold{YType::uint8, "warning-threshold"}
{

    yang_name = "limit"; yang_parent_name = "database-mapping"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::Ipv4::DatabaseMapping::Limit::~Limit()
{
}

bool Native::Router::Lisp::Ipv4::DatabaseMapping::Limit::has_data() const
{
    return dynamic.is_set
	|| warning_threshold.is_set;
}

bool Native::Router::Lisp::Ipv4::DatabaseMapping::Limit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dynamic.yfilter)
	|| ydk::is_set(warning_threshold.yfilter);
}

std::string Native::Router::Lisp::Ipv4::DatabaseMapping::Limit::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/ipv4/database-mapping/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Ipv4::DatabaseMapping::Limit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Ipv4::DatabaseMapping::Limit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dynamic.is_set || is_set(dynamic.yfilter)) leaf_name_data.push_back(dynamic.get_name_leafdata());
    if (warning_threshold.is_set || is_set(warning_threshold.yfilter)) leaf_name_data.push_back(warning_threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Ipv4::DatabaseMapping::Limit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Ipv4::DatabaseMapping::Limit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Ipv4::DatabaseMapping::Limit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dynamic")
    {
        dynamic = value;
        dynamic.value_namespace = name_space;
        dynamic.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold = value;
        warning_threshold.value_namespace = name_space;
        warning_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Ipv4::DatabaseMapping::Limit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dynamic")
    {
        dynamic.yfilter = yfilter;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Ipv4::DatabaseMapping::Limit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dynamic" || name == "warning-threshold")
        return true;
    return false;
}

Native::Router::Lisp::Ipv4::Distance::Distance()
    :
    alt{YType::uint8, "alt"},
    dyn_eid{YType::uint8, "dyn-eid"},
    site_registrations{YType::uint8, "site-registrations"}
{

    yang_name = "distance"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::Ipv4::Distance::~Distance()
{
}

bool Native::Router::Lisp::Ipv4::Distance::has_data() const
{
    return alt.is_set
	|| dyn_eid.is_set
	|| site_registrations.is_set;
}

bool Native::Router::Lisp::Ipv4::Distance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(alt.yfilter)
	|| ydk::is_set(dyn_eid.yfilter)
	|| ydk::is_set(site_registrations.yfilter);
}

std::string Native::Router::Lisp::Ipv4::Distance::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/ipv4/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Ipv4::Distance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "distance";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Ipv4::Distance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (alt.is_set || is_set(alt.yfilter)) leaf_name_data.push_back(alt.get_name_leafdata());
    if (dyn_eid.is_set || is_set(dyn_eid.yfilter)) leaf_name_data.push_back(dyn_eid.get_name_leafdata());
    if (site_registrations.is_set || is_set(site_registrations.yfilter)) leaf_name_data.push_back(site_registrations.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Ipv4::Distance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Ipv4::Distance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Ipv4::Distance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "alt")
    {
        alt = value;
        alt.value_namespace = name_space;
        alt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dyn-eid")
    {
        dyn_eid = value;
        dyn_eid.value_namespace = name_space;
        dyn_eid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "site-registrations")
    {
        site_registrations = value;
        site_registrations.value_namespace = name_space;
        site_registrations.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Ipv4::Distance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "alt")
    {
        alt.yfilter = yfilter;
    }
    if(value_path == "dyn-eid")
    {
        dyn_eid.yfilter = yfilter;
    }
    if(value_path == "site-registrations")
    {
        site_registrations.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Ipv4::Distance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "alt" || name == "dyn-eid" || name == "site-registrations")
        return true;
    return false;
}

Native::Router::Lisp::Ipv4::Itr::Itr()
{

    yang_name = "itr"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::Ipv4::Itr::~Itr()
{
}

bool Native::Router::Lisp::Ipv4::Itr::has_data() const
{
    for (std::size_t index=0; index<map_resolver.size(); index++)
    {
        if(map_resolver[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::Lisp::Ipv4::Itr::has_operation() const
{
    for (std::size_t index=0; index<map_resolver.size(); index++)
    {
        if(map_resolver[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Router::Lisp::Ipv4::Itr::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/ipv4/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Ipv4::Itr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "itr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Ipv4::Itr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Ipv4::Itr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "map-resolver")
    {
        for(auto const & c : map_resolver)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Lisp::Ipv4::Itr::MapResolver>();
        c->parent = this;
        map_resolver.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Ipv4::Itr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : map_resolver)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Lisp::Ipv4::Itr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Lisp::Ipv4::Itr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Lisp::Ipv4::Itr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "map-resolver")
        return true;
    return false;
}

Native::Router::Lisp::Ipv4::Itr::MapResolver::MapResolver()
    :
    ip_addr{YType::str, "ip-addr"}
{

    yang_name = "map-resolver"; yang_parent_name = "itr"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::Ipv4::Itr::MapResolver::~MapResolver()
{
}

bool Native::Router::Lisp::Ipv4::Itr::MapResolver::has_data() const
{
    return ip_addr.is_set;
}

bool Native::Router::Lisp::Ipv4::Itr::MapResolver::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip_addr.yfilter);
}

std::string Native::Router::Lisp::Ipv4::Itr::MapResolver::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/ipv4/itr/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Ipv4::Itr::MapResolver::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-resolver" <<"[ip-addr='" <<ip_addr <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Ipv4::Itr::MapResolver::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_addr.is_set || is_set(ip_addr.yfilter)) leaf_name_data.push_back(ip_addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Ipv4::Itr::MapResolver::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Ipv4::Itr::MapResolver::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Ipv4::Itr::MapResolver::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip-addr")
    {
        ip_addr = value;
        ip_addr.value_namespace = name_space;
        ip_addr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Ipv4::Itr::MapResolver::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip-addr")
    {
        ip_addr.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Ipv4::Itr::MapResolver::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-addr")
        return true;
    return false;
}

Native::Router::Lisp::Ipv4::ItrEnable::ItrEnable()
    :
    itr{YType::empty, "itr"}
{

    yang_name = "itr-enable"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::Ipv4::ItrEnable::~ItrEnable()
{
}

bool Native::Router::Lisp::Ipv4::ItrEnable::has_data() const
{
    return itr.is_set;
}

bool Native::Router::Lisp::Ipv4::ItrEnable::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(itr.yfilter);
}

std::string Native::Router::Lisp::Ipv4::ItrEnable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/ipv4/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Ipv4::ItrEnable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "itr-enable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Ipv4::ItrEnable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (itr.is_set || is_set(itr.yfilter)) leaf_name_data.push_back(itr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Ipv4::ItrEnable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Ipv4::ItrEnable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Ipv4::ItrEnable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "itr")
    {
        itr = value;
        itr.value_namespace = name_space;
        itr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Ipv4::ItrEnable::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "itr")
    {
        itr.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Ipv4::ItrEnable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "itr")
        return true;
    return false;
}

Native::Router::Lisp::Ipv4::Etr::Etr()
{

    yang_name = "etr"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::Ipv4::Etr::~Etr()
{
}

bool Native::Router::Lisp::Ipv4::Etr::has_data() const
{
    for (std::size_t index=0; index<map_server.size(); index++)
    {
        if(map_server[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::Lisp::Ipv4::Etr::has_operation() const
{
    for (std::size_t index=0; index<map_server.size(); index++)
    {
        if(map_server[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Router::Lisp::Ipv4::Etr::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/ipv4/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Ipv4::Etr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "etr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Ipv4::Etr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Ipv4::Etr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "map-server")
    {
        for(auto const & c : map_server)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Lisp::Ipv4::Etr::MapServer>();
        c->parent = this;
        map_server.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Ipv4::Etr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : map_server)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Lisp::Ipv4::Etr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Lisp::Ipv4::Etr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Lisp::Ipv4::Etr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "map-server")
        return true;
    return false;
}

Native::Router::Lisp::Ipv4::Etr::MapServer::MapServer()
    :
    ip_addr{YType::str, "ip-addr"},
    proxy_reply{YType::empty, "proxy-reply"}
    	,
    key(std::make_shared<Native::Router::Lisp::Ipv4::Etr::MapServer::Key>())
{
    key->parent = this;

    yang_name = "map-server"; yang_parent_name = "etr"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::Ipv4::Etr::MapServer::~MapServer()
{
}

bool Native::Router::Lisp::Ipv4::Etr::MapServer::has_data() const
{
    return ip_addr.is_set
	|| proxy_reply.is_set
	|| (key !=  nullptr && key->has_data());
}

bool Native::Router::Lisp::Ipv4::Etr::MapServer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip_addr.yfilter)
	|| ydk::is_set(proxy_reply.yfilter)
	|| (key !=  nullptr && key->has_operation());
}

std::string Native::Router::Lisp::Ipv4::Etr::MapServer::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/ipv4/etr/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Ipv4::Etr::MapServer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-server" <<"[ip-addr='" <<ip_addr <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Ipv4::Etr::MapServer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_addr.is_set || is_set(ip_addr.yfilter)) leaf_name_data.push_back(ip_addr.get_name_leafdata());
    if (proxy_reply.is_set || is_set(proxy_reply.yfilter)) leaf_name_data.push_back(proxy_reply.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Ipv4::Etr::MapServer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key")
    {
        if(key == nullptr)
        {
            key = std::make_shared<Native::Router::Lisp::Ipv4::Etr::MapServer::Key>();
        }
        return key;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Ipv4::Etr::MapServer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(key != nullptr)
    {
        children["key"] = key;
    }

    return children;
}

void Native::Router::Lisp::Ipv4::Etr::MapServer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip-addr")
    {
        ip_addr = value;
        ip_addr.value_namespace = name_space;
        ip_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "proxy-reply")
    {
        proxy_reply = value;
        proxy_reply.value_namespace = name_space;
        proxy_reply.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Ipv4::Etr::MapServer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip-addr")
    {
        ip_addr.yfilter = yfilter;
    }
    if(value_path == "proxy-reply")
    {
        proxy_reply.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Ipv4::Etr::MapServer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key" || name == "ip-addr" || name == "proxy-reply")
        return true;
    return false;
}

Native::Router::Lisp::Ipv4::Etr::MapServer::Key::Key()
    :
    key_0{YType::str, "key-0"},
    key_6{YType::str, "key-6"},
    key_7{YType::str, "key-7"},
    pwd{YType::str, "pwd"}
{

    yang_name = "key"; yang_parent_name = "map-server"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Lisp::Ipv4::Etr::MapServer::Key::~Key()
{
}

bool Native::Router::Lisp::Ipv4::Etr::MapServer::Key::has_data() const
{
    return key_0.is_set
	|| key_6.is_set
	|| key_7.is_set
	|| pwd.is_set;
}

bool Native::Router::Lisp::Ipv4::Etr::MapServer::Key::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(key_0.yfilter)
	|| ydk::is_set(key_6.yfilter)
	|| ydk::is_set(key_7.yfilter)
	|| ydk::is_set(pwd.yfilter);
}

std::string Native::Router::Lisp::Ipv4::Etr::MapServer::Key::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Ipv4::Etr::MapServer::Key::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key_0.is_set || is_set(key_0.yfilter)) leaf_name_data.push_back(key_0.get_name_leafdata());
    if (key_6.is_set || is_set(key_6.yfilter)) leaf_name_data.push_back(key_6.get_name_leafdata());
    if (key_7.is_set || is_set(key_7.yfilter)) leaf_name_data.push_back(key_7.get_name_leafdata());
    if (pwd.is_set || is_set(pwd.yfilter)) leaf_name_data.push_back(pwd.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Ipv4::Etr::MapServer::Key::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Ipv4::Etr::MapServer::Key::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Ipv4::Etr::MapServer::Key::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "key-0")
    {
        key_0 = value;
        key_0.value_namespace = name_space;
        key_0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key-6")
    {
        key_6 = value;
        key_6.value_namespace = name_space;
        key_6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key-7")
    {
        key_7 = value;
        key_7.value_namespace = name_space;
        key_7.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pwd")
    {
        pwd = value;
        pwd.value_namespace = name_space;
        pwd.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Ipv4::Etr::MapServer::Key::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "key-0")
    {
        key_0.yfilter = yfilter;
    }
    if(value_path == "key-6")
    {
        key_6.yfilter = yfilter;
    }
    if(value_path == "key-7")
    {
        key_7.yfilter = yfilter;
    }
    if(value_path == "pwd")
    {
        pwd.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Ipv4::Etr::MapServer::Key::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key-0" || name == "key-6" || name == "key-7" || name == "pwd")
        return true;
    return false;
}

Native::Router::Lisp::Ipv4::EtrEnable::EtrEnable()
    :
    etr{YType::empty, "etr"}
{

    yang_name = "etr-enable"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::Ipv4::EtrEnable::~EtrEnable()
{
}

bool Native::Router::Lisp::Ipv4::EtrEnable::has_data() const
{
    return etr.is_set;
}

bool Native::Router::Lisp::Ipv4::EtrEnable::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(etr.yfilter);
}

std::string Native::Router::Lisp::Ipv4::EtrEnable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/ipv4/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Ipv4::EtrEnable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "etr-enable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Ipv4::EtrEnable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (etr.is_set || is_set(etr.yfilter)) leaf_name_data.push_back(etr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Ipv4::EtrEnable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Ipv4::EtrEnable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Ipv4::EtrEnable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "etr")
    {
        etr = value;
        etr.value_namespace = name_space;
        etr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Ipv4::EtrEnable::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "etr")
    {
        etr.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Ipv4::EtrEnable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "etr")
        return true;
    return false;
}

Native::Router::Lisp::Ipv4::Locator::Locator()
    :
    reachability(std::make_shared<Native::Router::Lisp::Ipv4::Locator::Reachability>())
{
    reachability->parent = this;

    yang_name = "locator"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::Ipv4::Locator::~Locator()
{
}

bool Native::Router::Lisp::Ipv4::Locator::has_data() const
{
    return (reachability !=  nullptr && reachability->has_data());
}

bool Native::Router::Lisp::Ipv4::Locator::has_operation() const
{
    return is_set(yfilter)
	|| (reachability !=  nullptr && reachability->has_operation());
}

std::string Native::Router::Lisp::Ipv4::Locator::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/ipv4/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Ipv4::Locator::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "locator";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Ipv4::Locator::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Ipv4::Locator::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "reachability")
    {
        if(reachability == nullptr)
        {
            reachability = std::make_shared<Native::Router::Lisp::Ipv4::Locator::Reachability>();
        }
        return reachability;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Ipv4::Locator::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(reachability != nullptr)
    {
        children["reachability"] = reachability;
    }

    return children;
}

void Native::Router::Lisp::Ipv4::Locator::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Lisp::Ipv4::Locator::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Lisp::Ipv4::Locator::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reachability")
        return true;
    return false;
}

Native::Router::Lisp::Ipv4::Locator::Reachability::Reachability()
    :
    exclude_default{YType::empty, "exclude-default"}
{

    yang_name = "reachability"; yang_parent_name = "locator"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::Ipv4::Locator::Reachability::~Reachability()
{
}

bool Native::Router::Lisp::Ipv4::Locator::Reachability::has_data() const
{
    return exclude_default.is_set;
}

bool Native::Router::Lisp::Ipv4::Locator::Reachability::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(exclude_default.yfilter);
}

std::string Native::Router::Lisp::Ipv4::Locator::Reachability::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/ipv4/locator/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Ipv4::Locator::Reachability::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reachability";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Ipv4::Locator::Reachability::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (exclude_default.is_set || is_set(exclude_default.yfilter)) leaf_name_data.push_back(exclude_default.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Ipv4::Locator::Reachability::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Ipv4::Locator::Reachability::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Ipv4::Locator::Reachability::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "exclude-default")
    {
        exclude_default = value;
        exclude_default.value_namespace = name_space;
        exclude_default.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Ipv4::Locator::Reachability::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "exclude-default")
    {
        exclude_default.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Ipv4::Locator::Reachability::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "exclude-default")
        return true;
    return false;
}

Native::Router::Lisp::Ipv4::MapCache::MapCache()
    :
    site_registration{YType::empty, "site-registration"}
{

    yang_name = "map-cache"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::Ipv4::MapCache::~MapCache()
{
}

bool Native::Router::Lisp::Ipv4::MapCache::has_data() const
{
    return site_registration.is_set;
}

bool Native::Router::Lisp::Ipv4::MapCache::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(site_registration.yfilter);
}

std::string Native::Router::Lisp::Ipv4::MapCache::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/ipv4/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Ipv4::MapCache::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-cache";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Ipv4::MapCache::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (site_registration.is_set || is_set(site_registration.yfilter)) leaf_name_data.push_back(site_registration.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Ipv4::MapCache::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Ipv4::MapCache::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Ipv4::MapCache::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "site-registration")
    {
        site_registration = value;
        site_registration.value_namespace = name_space;
        site_registration.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Ipv4::MapCache::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "site-registration")
    {
        site_registration.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Ipv4::MapCache::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "site-registration")
        return true;
    return false;
}

Native::Router::Lisp::Ipv4::MapCacheLimit::MapCacheLimit()
    :
    max_map_cache_entries{YType::uint32, "max-map-cache-entries"},
    reserve_list{YType::str, "reserve-list"},
    warning_threshold{YType::uint8, "warning-threshold"}
{

    yang_name = "map-cache-limit"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::Ipv4::MapCacheLimit::~MapCacheLimit()
{
}

bool Native::Router::Lisp::Ipv4::MapCacheLimit::has_data() const
{
    return max_map_cache_entries.is_set
	|| reserve_list.is_set
	|| warning_threshold.is_set;
}

bool Native::Router::Lisp::Ipv4::MapCacheLimit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_map_cache_entries.yfilter)
	|| ydk::is_set(reserve_list.yfilter)
	|| ydk::is_set(warning_threshold.yfilter);
}

std::string Native::Router::Lisp::Ipv4::MapCacheLimit::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/ipv4/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Ipv4::MapCacheLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-cache-limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Ipv4::MapCacheLimit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_map_cache_entries.is_set || is_set(max_map_cache_entries.yfilter)) leaf_name_data.push_back(max_map_cache_entries.get_name_leafdata());
    if (reserve_list.is_set || is_set(reserve_list.yfilter)) leaf_name_data.push_back(reserve_list.get_name_leafdata());
    if (warning_threshold.is_set || is_set(warning_threshold.yfilter)) leaf_name_data.push_back(warning_threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Ipv4::MapCacheLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Ipv4::MapCacheLimit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Ipv4::MapCacheLimit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-map-cache-entries")
    {
        max_map_cache_entries = value;
        max_map_cache_entries.value_namespace = name_space;
        max_map_cache_entries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reserve-list")
    {
        reserve_list = value;
        reserve_list.value_namespace = name_space;
        reserve_list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold = value;
        warning_threshold.value_namespace = name_space;
        warning_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Ipv4::MapCacheLimit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-map-cache-entries")
    {
        max_map_cache_entries.yfilter = yfilter;
    }
    if(value_path == "reserve-list")
    {
        reserve_list.yfilter = yfilter;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Ipv4::MapCacheLimit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-map-cache-entries" || name == "reserve-list" || name == "warning-threshold")
        return true;
    return false;
}

Native::Router::Lisp::Ipv4::MapCachePersistent::MapCachePersistent()
    :
    interval{YType::uint16, "interval"}
{

    yang_name = "map-cache-persistent"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::Ipv4::MapCachePersistent::~MapCachePersistent()
{
}

bool Native::Router::Lisp::Ipv4::MapCachePersistent::has_data() const
{
    return interval.is_set;
}

bool Native::Router::Lisp::Ipv4::MapCachePersistent::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interval.yfilter);
}

std::string Native::Router::Lisp::Ipv4::MapCachePersistent::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/ipv4/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Ipv4::MapCachePersistent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-cache-persistent";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Ipv4::MapCachePersistent::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Ipv4::MapCachePersistent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Ipv4::MapCachePersistent::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Ipv4::MapCachePersistent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Ipv4::MapCachePersistent::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Ipv4::MapCachePersistent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interval")
        return true;
    return false;
}

Native::Router::Lisp::Ipv4::MapResolver::MapResolver()
    :
    map_request(std::make_shared<Native::Router::Lisp::Ipv4::MapResolver::MapRequest>())
{
    map_request->parent = this;

    yang_name = "map-resolver"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::Ipv4::MapResolver::~MapResolver()
{
}

bool Native::Router::Lisp::Ipv4::MapResolver::has_data() const
{
    return (map_request !=  nullptr && map_request->has_data());
}

bool Native::Router::Lisp::Ipv4::MapResolver::has_operation() const
{
    return is_set(yfilter)
	|| (map_request !=  nullptr && map_request->has_operation());
}

std::string Native::Router::Lisp::Ipv4::MapResolver::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/ipv4/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Ipv4::MapResolver::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-resolver";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Ipv4::MapResolver::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Ipv4::MapResolver::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "map-request")
    {
        if(map_request == nullptr)
        {
            map_request = std::make_shared<Native::Router::Lisp::Ipv4::MapResolver::MapRequest>();
        }
        return map_request;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Ipv4::MapResolver::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(map_request != nullptr)
    {
        children["map-request"] = map_request;
    }

    return children;
}

void Native::Router::Lisp::Ipv4::MapResolver::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Lisp::Ipv4::MapResolver::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Lisp::Ipv4::MapResolver::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "map-request")
        return true;
    return false;
}

Native::Router::Lisp::Ipv4::MapResolver::MapRequest::MapRequest()
    :
    validate(std::make_shared<Native::Router::Lisp::Ipv4::MapResolver::MapRequest::Validate>())
{
    validate->parent = this;

    yang_name = "map-request"; yang_parent_name = "map-resolver"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::Ipv4::MapResolver::MapRequest::~MapRequest()
{
}

bool Native::Router::Lisp::Ipv4::MapResolver::MapRequest::has_data() const
{
    return (validate !=  nullptr && validate->has_data());
}

bool Native::Router::Lisp::Ipv4::MapResolver::MapRequest::has_operation() const
{
    return is_set(yfilter)
	|| (validate !=  nullptr && validate->has_operation());
}

std::string Native::Router::Lisp::Ipv4::MapResolver::MapRequest::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/ipv4/map-resolver/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Ipv4::MapResolver::MapRequest::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-request";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Ipv4::MapResolver::MapRequest::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Ipv4::MapResolver::MapRequest::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "validate")
    {
        if(validate == nullptr)
        {
            validate = std::make_shared<Native::Router::Lisp::Ipv4::MapResolver::MapRequest::Validate>();
        }
        return validate;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Ipv4::MapResolver::MapRequest::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(validate != nullptr)
    {
        children["validate"] = validate;
    }

    return children;
}

void Native::Router::Lisp::Ipv4::MapResolver::MapRequest::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Lisp::Ipv4::MapResolver::MapRequest::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Lisp::Ipv4::MapResolver::MapRequest::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "validate")
        return true;
    return false;
}

Native::Router::Lisp::Ipv4::MapResolver::MapRequest::Validate::Validate()
    :
    source(std::make_shared<Native::Router::Lisp::Ipv4::MapResolver::MapRequest::Validate::Source>())
{
    source->parent = this;

    yang_name = "validate"; yang_parent_name = "map-request"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::Ipv4::MapResolver::MapRequest::Validate::~Validate()
{
}

bool Native::Router::Lisp::Ipv4::MapResolver::MapRequest::Validate::has_data() const
{
    return (source !=  nullptr && source->has_data());
}

bool Native::Router::Lisp::Ipv4::MapResolver::MapRequest::Validate::has_operation() const
{
    return is_set(yfilter)
	|| (source !=  nullptr && source->has_operation());
}

std::string Native::Router::Lisp::Ipv4::MapResolver::MapRequest::Validate::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/ipv4/map-resolver/map-request/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Ipv4::MapResolver::MapRequest::Validate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "validate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Ipv4::MapResolver::MapRequest::Validate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Ipv4::MapResolver::MapRequest::Validate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "source")
    {
        if(source == nullptr)
        {
            source = std::make_shared<Native::Router::Lisp::Ipv4::MapResolver::MapRequest::Validate::Source>();
        }
        return source;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Ipv4::MapResolver::MapRequest::Validate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(source != nullptr)
    {
        children["source"] = source;
    }

    return children;
}

void Native::Router::Lisp::Ipv4::MapResolver::MapRequest::Validate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Lisp::Ipv4::MapResolver::MapRequest::Validate::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Lisp::Ipv4::MapResolver::MapRequest::Validate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source")
        return true;
    return false;
}

Native::Router::Lisp::Ipv4::MapResolver::MapRequest::Validate::Source::Source()
    :
    list{YType::empty, "list"},
    registered{YType::empty, "registered"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "source"; yang_parent_name = "validate"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::Ipv4::MapResolver::MapRequest::Validate::Source::~Source()
{
}

bool Native::Router::Lisp::Ipv4::MapResolver::MapRequest::Validate::Source::has_data() const
{
    return list.is_set
	|| registered.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool Native::Router::Lisp::Ipv4::MapResolver::MapRequest::Validate::Source::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(list.yfilter)
	|| ydk::is_set(registered.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string Native::Router::Lisp::Ipv4::MapResolver::MapRequest::Validate::Source::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/ipv4/map-resolver/map-request/validate/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Ipv4::MapResolver::MapRequest::Validate::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Ipv4::MapResolver::MapRequest::Validate::Source::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (list.is_set || is_set(list.yfilter)) leaf_name_data.push_back(list.get_name_leafdata());
    if (registered.is_set || is_set(registered.yfilter)) leaf_name_data.push_back(registered.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Ipv4::MapResolver::MapRequest::Validate::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Ipv4::MapResolver::MapRequest::Validate::Source::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Ipv4::MapResolver::MapRequest::Validate::Source::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "list")
    {
        list = value;
        list.value_namespace = name_space;
        list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "registered")
    {
        registered = value;
        registered.value_namespace = name_space;
        registered.value_namespace_prefix = name_space_prefix;
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

void Native::Router::Lisp::Ipv4::MapResolver::MapRequest::Validate::Source::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "list")
    {
        list.yfilter = yfilter;
    }
    if(value_path == "registered")
    {
        registered.yfilter = yfilter;
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

bool Native::Router::Lisp::Ipv4::MapResolver::MapRequest::Validate::Source::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "list" || name == "registered" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Native::Router::Lisp::Ipv4::MapServer::MapServer()
    :
    map_register(std::make_shared<Native::Router::Lisp::Ipv4::MapServer::MapRegister>())
{
    map_register->parent = this;

    yang_name = "map-server"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::Ipv4::MapServer::~MapServer()
{
}

bool Native::Router::Lisp::Ipv4::MapServer::has_data() const
{
    return (map_register !=  nullptr && map_register->has_data());
}

bool Native::Router::Lisp::Ipv4::MapServer::has_operation() const
{
    return is_set(yfilter)
	|| (map_register !=  nullptr && map_register->has_operation());
}

std::string Native::Router::Lisp::Ipv4::MapServer::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/ipv4/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Ipv4::MapServer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-server";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Ipv4::MapServer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Ipv4::MapServer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "map-register")
    {
        if(map_register == nullptr)
        {
            map_register = std::make_shared<Native::Router::Lisp::Ipv4::MapServer::MapRegister>();
        }
        return map_register;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Ipv4::MapServer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(map_register != nullptr)
    {
        children["map-register"] = map_register;
    }

    return children;
}

void Native::Router::Lisp::Ipv4::MapServer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Lisp::Ipv4::MapServer::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Lisp::Ipv4::MapServer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "map-register")
        return true;
    return false;
}

Native::Router::Lisp::Ipv4::MapServer::MapRegister::MapRegister()
    :
    validate(std::make_shared<Native::Router::Lisp::Ipv4::MapServer::MapRegister::Validate>())
{
    validate->parent = this;

    yang_name = "map-register"; yang_parent_name = "map-server"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::Ipv4::MapServer::MapRegister::~MapRegister()
{
}

bool Native::Router::Lisp::Ipv4::MapServer::MapRegister::has_data() const
{
    return (validate !=  nullptr && validate->has_data());
}

bool Native::Router::Lisp::Ipv4::MapServer::MapRegister::has_operation() const
{
    return is_set(yfilter)
	|| (validate !=  nullptr && validate->has_operation());
}

std::string Native::Router::Lisp::Ipv4::MapServer::MapRegister::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/ipv4/map-server/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Ipv4::MapServer::MapRegister::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-register";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Ipv4::MapServer::MapRegister::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Ipv4::MapServer::MapRegister::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "validate")
    {
        if(validate == nullptr)
        {
            validate = std::make_shared<Native::Router::Lisp::Ipv4::MapServer::MapRegister::Validate>();
        }
        return validate;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Ipv4::MapServer::MapRegister::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(validate != nullptr)
    {
        children["validate"] = validate;
    }

    return children;
}

void Native::Router::Lisp::Ipv4::MapServer::MapRegister::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Lisp::Ipv4::MapServer::MapRegister::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Lisp::Ipv4::MapServer::MapRegister::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "validate")
        return true;
    return false;
}

Native::Router::Lisp::Ipv4::MapServer::MapRegister::Validate::Validate()
    :
    source(std::make_shared<Native::Router::Lisp::Ipv4::MapServer::MapRegister::Validate::Source>())
{
    source->parent = this;

    yang_name = "validate"; yang_parent_name = "map-register"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::Ipv4::MapServer::MapRegister::Validate::~Validate()
{
}

bool Native::Router::Lisp::Ipv4::MapServer::MapRegister::Validate::has_data() const
{
    return (source !=  nullptr && source->has_data());
}

bool Native::Router::Lisp::Ipv4::MapServer::MapRegister::Validate::has_operation() const
{
    return is_set(yfilter)
	|| (source !=  nullptr && source->has_operation());
}

std::string Native::Router::Lisp::Ipv4::MapServer::MapRegister::Validate::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/ipv4/map-server/map-register/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Ipv4::MapServer::MapRegister::Validate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "validate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Ipv4::MapServer::MapRegister::Validate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Ipv4::MapServer::MapRegister::Validate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "source")
    {
        if(source == nullptr)
        {
            source = std::make_shared<Native::Router::Lisp::Ipv4::MapServer::MapRegister::Validate::Source>();
        }
        return source;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Ipv4::MapServer::MapRegister::Validate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(source != nullptr)
    {
        children["source"] = source;
    }

    return children;
}

void Native::Router::Lisp::Ipv4::MapServer::MapRegister::Validate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Lisp::Ipv4::MapServer::MapRegister::Validate::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Lisp::Ipv4::MapServer::MapRegister::Validate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source")
        return true;
    return false;
}

Native::Router::Lisp::Ipv4::MapServer::MapRegister::Validate::Source::Source()
    :
    allowed_locator{YType::empty, "allowed-locator"}
{

    yang_name = "source"; yang_parent_name = "validate"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::Ipv4::MapServer::MapRegister::Validate::Source::~Source()
{
}

bool Native::Router::Lisp::Ipv4::MapServer::MapRegister::Validate::Source::has_data() const
{
    return allowed_locator.is_set;
}

bool Native::Router::Lisp::Ipv4::MapServer::MapRegister::Validate::Source::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(allowed_locator.yfilter);
}

std::string Native::Router::Lisp::Ipv4::MapServer::MapRegister::Validate::Source::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/ipv4/map-server/map-register/validate/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Ipv4::MapServer::MapRegister::Validate::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Ipv4::MapServer::MapRegister::Validate::Source::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (allowed_locator.is_set || is_set(allowed_locator.yfilter)) leaf_name_data.push_back(allowed_locator.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Ipv4::MapServer::MapRegister::Validate::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Ipv4::MapServer::MapRegister::Validate::Source::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Ipv4::MapServer::MapRegister::Validate::Source::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "allowed-locator")
    {
        allowed_locator = value;
        allowed_locator.value_namespace = name_space;
        allowed_locator.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Ipv4::MapServer::MapRegister::Validate::Source::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "allowed-locator")
    {
        allowed_locator.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Ipv4::MapServer::MapRegister::Validate::Source::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "allowed-locator")
        return true;
    return false;
}

Native::Router::Lisp::Ipv4::PathMtuDiscovery::PathMtuDiscovery()
    :
    max{YType::uint16, "max"},
    min{YType::uint16, "min"}
{

    yang_name = "path-mtu-discovery"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::Ipv4::PathMtuDiscovery::~PathMtuDiscovery()
{
}

bool Native::Router::Lisp::Ipv4::PathMtuDiscovery::has_data() const
{
    return max.is_set
	|| min.is_set;
}

bool Native::Router::Lisp::Ipv4::PathMtuDiscovery::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max.yfilter)
	|| ydk::is_set(min.yfilter);
}

std::string Native::Router::Lisp::Ipv4::PathMtuDiscovery::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/ipv4/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Ipv4::PathMtuDiscovery::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-mtu-discovery";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Ipv4::PathMtuDiscovery::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());
    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Ipv4::PathMtuDiscovery::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Ipv4::PathMtuDiscovery::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Ipv4::PathMtuDiscovery::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min")
    {
        min = value;
        min.value_namespace = name_space;
        min.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Ipv4::PathMtuDiscovery::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
    if(value_path == "min")
    {
        min.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Ipv4::PathMtuDiscovery::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max" || name == "min")
        return true;
    return false;
}

Native::Router::Lisp::Ipv4::RouteExport::RouteExport()
    :
    site_registrations{YType::empty, "site-registrations"},
    away_eids{YType::empty, "away-eids"}
{

    yang_name = "route-export"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::Ipv4::RouteExport::~RouteExport()
{
}

bool Native::Router::Lisp::Ipv4::RouteExport::has_data() const
{
    return site_registrations.is_set
	|| away_eids.is_set;
}

bool Native::Router::Lisp::Ipv4::RouteExport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(site_registrations.yfilter)
	|| ydk::is_set(away_eids.yfilter);
}

std::string Native::Router::Lisp::Ipv4::RouteExport::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/ipv4/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Ipv4::RouteExport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-export";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Ipv4::RouteExport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (site_registrations.is_set || is_set(site_registrations.yfilter)) leaf_name_data.push_back(site_registrations.get_name_leafdata());
    if (away_eids.is_set || is_set(away_eids.yfilter)) leaf_name_data.push_back(away_eids.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Ipv4::RouteExport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Ipv4::RouteExport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Ipv4::RouteExport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "site-registrations")
    {
        site_registrations = value;
        site_registrations.value_namespace = name_space;
        site_registrations.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "away-eids")
    {
        away_eids = value;
        away_eids.value_namespace = name_space;
        away_eids.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Ipv4::RouteExport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "site-registrations")
    {
        site_registrations.yfilter = yfilter;
    }
    if(value_path == "away-eids")
    {
        away_eids.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Ipv4::RouteExport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "site-registrations" || name == "away-eids")
        return true;
    return false;
}

Native::Router::Lisp::Ipv4::RouteImport::RouteImport()
    :
    database(std::make_shared<Native::Router::Lisp::Ipv4::RouteImport::Database>())
	,map_cache(std::make_shared<Native::Router::Lisp::Ipv4::RouteImport::MapCache>())
{
    database->parent = this;
    map_cache->parent = this;

    yang_name = "route-import"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::Ipv4::RouteImport::~RouteImport()
{
}

bool Native::Router::Lisp::Ipv4::RouteImport::has_data() const
{
    return (database !=  nullptr && database->has_data())
	|| (map_cache !=  nullptr && map_cache->has_data());
}

bool Native::Router::Lisp::Ipv4::RouteImport::has_operation() const
{
    return is_set(yfilter)
	|| (database !=  nullptr && database->has_operation())
	|| (map_cache !=  nullptr && map_cache->has_operation());
}

std::string Native::Router::Lisp::Ipv4::RouteImport::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/ipv4/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Ipv4::RouteImport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-import";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Ipv4::RouteImport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Ipv4::RouteImport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "database")
    {
        if(database == nullptr)
        {
            database = std::make_shared<Native::Router::Lisp::Ipv4::RouteImport::Database>();
        }
        return database;
    }

    if(child_yang_name == "map-cache")
    {
        if(map_cache == nullptr)
        {
            map_cache = std::make_shared<Native::Router::Lisp::Ipv4::RouteImport::MapCache>();
        }
        return map_cache;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Ipv4::RouteImport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(database != nullptr)
    {
        children["database"] = database;
    }

    if(map_cache != nullptr)
    {
        children["map-cache"] = map_cache;
    }

    return children;
}

void Native::Router::Lisp::Ipv4::RouteImport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Lisp::Ipv4::RouteImport::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Lisp::Ipv4::RouteImport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "database" || name == "map-cache")
        return true;
    return false;
}

Native::Router::Lisp::Ipv4::RouteImport::Database::Database()
    :
    connected(std::make_shared<Native::Router::Lisp::Ipv4::RouteImport::Database::Connected>())
	,maximum_prefix(std::make_shared<Native::Router::Lisp::Ipv4::RouteImport::Database::MaximumPrefix>())
	,rip(std::make_shared<Native::Router::Lisp::Ipv4::RouteImport::Database::Rip>())
	,static_(std::make_shared<Native::Router::Lisp::Ipv4::RouteImport::Database::Static_>())
{
    connected->parent = this;
    maximum_prefix->parent = this;
    rip->parent = this;
    static_->parent = this;

    yang_name = "database"; yang_parent_name = "route-import"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::Ipv4::RouteImport::Database::~Database()
{
}

bool Native::Router::Lisp::Ipv4::RouteImport::Database::has_data() const
{
    for (std::size_t index=0; index<bgp.size(); index++)
    {
        if(bgp[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<eigrp.size(); index++)
    {
        if(eigrp[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<isis.size(); index++)
    {
        if(isis[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ospf.size(); index++)
    {
        if(ospf[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ospfv3.size(); index++)
    {
        if(ospfv3[index]->has_data())
            return true;
    }
    return (connected !=  nullptr && connected->has_data())
	|| (maximum_prefix !=  nullptr && maximum_prefix->has_data())
	|| (rip !=  nullptr && rip->has_data())
	|| (static_ !=  nullptr && static_->has_data());
}

bool Native::Router::Lisp::Ipv4::RouteImport::Database::has_operation() const
{
    for (std::size_t index=0; index<bgp.size(); index++)
    {
        if(bgp[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<eigrp.size(); index++)
    {
        if(eigrp[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<isis.size(); index++)
    {
        if(isis[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ospf.size(); index++)
    {
        if(ospf[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ospfv3.size(); index++)
    {
        if(ospfv3[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (connected !=  nullptr && connected->has_operation())
	|| (maximum_prefix !=  nullptr && maximum_prefix->has_operation())
	|| (rip !=  nullptr && rip->has_operation())
	|| (static_ !=  nullptr && static_->has_operation());
}

std::string Native::Router::Lisp::Ipv4::RouteImport::Database::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/ipv4/route-import/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Ipv4::RouteImport::Database::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Ipv4::RouteImport::Database::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Ipv4::RouteImport::Database::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bgp")
    {
        for(auto const & c : bgp)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Lisp::Ipv4::RouteImport::Database::Bgp>();
        c->parent = this;
        bgp.push_back(c);
        return c;
    }

    if(child_yang_name == "connected")
    {
        if(connected == nullptr)
        {
            connected = std::make_shared<Native::Router::Lisp::Ipv4::RouteImport::Database::Connected>();
        }
        return connected;
    }

    if(child_yang_name == "eigrp")
    {
        for(auto const & c : eigrp)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Lisp::Ipv4::RouteImport::Database::Eigrp>();
        c->parent = this;
        eigrp.push_back(c);
        return c;
    }

    if(child_yang_name == "isis")
    {
        for(auto const & c : isis)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Lisp::Ipv4::RouteImport::Database::Isis>();
        c->parent = this;
        isis.push_back(c);
        return c;
    }

    if(child_yang_name == "maximum-prefix")
    {
        if(maximum_prefix == nullptr)
        {
            maximum_prefix = std::make_shared<Native::Router::Lisp::Ipv4::RouteImport::Database::MaximumPrefix>();
        }
        return maximum_prefix;
    }

    if(child_yang_name == "ospf")
    {
        for(auto const & c : ospf)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Lisp::Ipv4::RouteImport::Database::Ospf>();
        c->parent = this;
        ospf.push_back(c);
        return c;
    }

    if(child_yang_name == "ospfv3")
    {
        for(auto const & c : ospfv3)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Lisp::Ipv4::RouteImport::Database::Ospfv3>();
        c->parent = this;
        ospfv3.push_back(c);
        return c;
    }

    if(child_yang_name == "rip")
    {
        if(rip == nullptr)
        {
            rip = std::make_shared<Native::Router::Lisp::Ipv4::RouteImport::Database::Rip>();
        }
        return rip;
    }

    if(child_yang_name == "static")
    {
        if(static_ == nullptr)
        {
            static_ = std::make_shared<Native::Router::Lisp::Ipv4::RouteImport::Database::Static_>();
        }
        return static_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Ipv4::RouteImport::Database::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bgp)
    {
        children[c->get_segment_path()] = c;
    }

    if(connected != nullptr)
    {
        children["connected"] = connected;
    }

    for (auto const & c : eigrp)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : isis)
    {
        children[c->get_segment_path()] = c;
    }

    if(maximum_prefix != nullptr)
    {
        children["maximum-prefix"] = maximum_prefix;
    }

    for (auto const & c : ospf)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : ospfv3)
    {
        children[c->get_segment_path()] = c;
    }

    if(rip != nullptr)
    {
        children["rip"] = rip;
    }

    if(static_ != nullptr)
    {
        children["static"] = static_;
    }

    return children;
}

void Native::Router::Lisp::Ipv4::RouteImport::Database::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Lisp::Ipv4::RouteImport::Database::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Lisp::Ipv4::RouteImport::Database::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp" || name == "connected" || name == "eigrp" || name == "isis" || name == "maximum-prefix" || name == "ospf" || name == "ospfv3" || name == "rip" || name == "static")
        return true;
    return false;
}

Native::Router::Lisp::Ipv4::RouteImport::Database::Bgp::Bgp()
    :
    id{YType::str, "id"}
    	,
    lisp_ip_route_import(std::make_shared<Native::Router::Lisp::Ipv4::RouteImport::Database::Bgp::LispIpRouteImport>())
{
    lisp_ip_route_import->parent = this;

    yang_name = "bgp"; yang_parent_name = "database"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::Ipv4::RouteImport::Database::Bgp::~Bgp()
{
}

bool Native::Router::Lisp::Ipv4::RouteImport::Database::Bgp::has_data() const
{
    return id.is_set
	|| (lisp_ip_route_import !=  nullptr && lisp_ip_route_import->has_data());
}

bool Native::Router::Lisp::Ipv4::RouteImport::Database::Bgp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| (lisp_ip_route_import !=  nullptr && lisp_ip_route_import->has_operation());
}

std::string Native::Router::Lisp::Ipv4::RouteImport::Database::Bgp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/ipv4/route-import/database/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Ipv4::RouteImport::Database::Bgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Ipv4::RouteImport::Database::Bgp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Ipv4::RouteImport::Database::Bgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lisp-ip-route-import")
    {
        if(lisp_ip_route_import == nullptr)
        {
            lisp_ip_route_import = std::make_shared<Native::Router::Lisp::Ipv4::RouteImport::Database::Bgp::LispIpRouteImport>();
        }
        return lisp_ip_route_import;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Ipv4::RouteImport::Database::Bgp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(lisp_ip_route_import != nullptr)
    {
        children["lisp-ip-route-import"] = lisp_ip_route_import;
    }

    return children;
}

void Native::Router::Lisp::Ipv4::RouteImport::Database::Bgp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Ipv4::RouteImport::Database::Bgp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Ipv4::RouteImport::Database::Bgp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lisp-ip-route-import" || name == "id")
        return true;
    return false;
}

Native::Router::Lisp::Ipv4::RouteImport::Database::Bgp::LispIpRouteImport::LispIpRouteImport()
    :
    route_map{YType::str, "route-map"},
    locator_set{YType::str, "locator-set"}
{

    yang_name = "lisp-ip-route-import"; yang_parent_name = "bgp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Lisp::Ipv4::RouteImport::Database::Bgp::LispIpRouteImport::~LispIpRouteImport()
{
}

bool Native::Router::Lisp::Ipv4::RouteImport::Database::Bgp::LispIpRouteImport::has_data() const
{
    return route_map.is_set
	|| locator_set.is_set;
}

bool Native::Router::Lisp::Ipv4::RouteImport::Database::Bgp::LispIpRouteImport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(locator_set.yfilter);
}

std::string Native::Router::Lisp::Ipv4::RouteImport::Database::Bgp::LispIpRouteImport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lisp-ip-route-import";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Ipv4::RouteImport::Database::Bgp::LispIpRouteImport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (locator_set.is_set || is_set(locator_set.yfilter)) leaf_name_data.push_back(locator_set.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Ipv4::RouteImport::Database::Bgp::LispIpRouteImport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Ipv4::RouteImport::Database::Bgp::LispIpRouteImport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Ipv4::RouteImport::Database::Bgp::LispIpRouteImport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locator-set")
    {
        locator_set = value;
        locator_set.value_namespace = name_space;
        locator_set.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Ipv4::RouteImport::Database::Bgp::LispIpRouteImport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "locator-set")
    {
        locator_set.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Ipv4::RouteImport::Database::Bgp::LispIpRouteImport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-map" || name == "locator-set")
        return true;
    return false;
}

Native::Router::Lisp::Ipv4::RouteImport::Database::Connected::Connected()
    :
    lisp_ip_route_import(std::make_shared<Native::Router::Lisp::Ipv4::RouteImport::Database::Connected::LispIpRouteImport>())
{
    lisp_ip_route_import->parent = this;

    yang_name = "connected"; yang_parent_name = "database"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::Ipv4::RouteImport::Database::Connected::~Connected()
{
}

bool Native::Router::Lisp::Ipv4::RouteImport::Database::Connected::has_data() const
{
    return (lisp_ip_route_import !=  nullptr && lisp_ip_route_import->has_data());
}

bool Native::Router::Lisp::Ipv4::RouteImport::Database::Connected::has_operation() const
{
    return is_set(yfilter)
	|| (lisp_ip_route_import !=  nullptr && lisp_ip_route_import->has_operation());
}

std::string Native::Router::Lisp::Ipv4::RouteImport::Database::Connected::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/ipv4/route-import/database/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Ipv4::RouteImport::Database::Connected::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connected";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Ipv4::RouteImport::Database::Connected::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Ipv4::RouteImport::Database::Connected::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lisp-ip-route-import")
    {
        if(lisp_ip_route_import == nullptr)
        {
            lisp_ip_route_import = std::make_shared<Native::Router::Lisp::Ipv4::RouteImport::Database::Connected::LispIpRouteImport>();
        }
        return lisp_ip_route_import;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Ipv4::RouteImport::Database::Connected::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(lisp_ip_route_import != nullptr)
    {
        children["lisp-ip-route-import"] = lisp_ip_route_import;
    }

    return children;
}

void Native::Router::Lisp::Ipv4::RouteImport::Database::Connected::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Lisp::Ipv4::RouteImport::Database::Connected::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Lisp::Ipv4::RouteImport::Database::Connected::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lisp-ip-route-import")
        return true;
    return false;
}

Native::Router::Lisp::Ipv4::RouteImport::Database::Connected::LispIpRouteImport::LispIpRouteImport()
    :
    route_map{YType::str, "route-map"},
    locator_set{YType::str, "locator-set"}
{

    yang_name = "lisp-ip-route-import"; yang_parent_name = "connected"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::Ipv4::RouteImport::Database::Connected::LispIpRouteImport::~LispIpRouteImport()
{
}

bool Native::Router::Lisp::Ipv4::RouteImport::Database::Connected::LispIpRouteImport::has_data() const
{
    return route_map.is_set
	|| locator_set.is_set;
}

bool Native::Router::Lisp::Ipv4::RouteImport::Database::Connected::LispIpRouteImport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(locator_set.yfilter);
}

std::string Native::Router::Lisp::Ipv4::RouteImport::Database::Connected::LispIpRouteImport::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/ipv4/route-import/database/connected/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Ipv4::RouteImport::Database::Connected::LispIpRouteImport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lisp-ip-route-import";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Ipv4::RouteImport::Database::Connected::LispIpRouteImport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (locator_set.is_set || is_set(locator_set.yfilter)) leaf_name_data.push_back(locator_set.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Ipv4::RouteImport::Database::Connected::LispIpRouteImport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Ipv4::RouteImport::Database::Connected::LispIpRouteImport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Ipv4::RouteImport::Database::Connected::LispIpRouteImport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locator-set")
    {
        locator_set = value;
        locator_set.value_namespace = name_space;
        locator_set.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Ipv4::RouteImport::Database::Connected::LispIpRouteImport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "locator-set")
    {
        locator_set.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Ipv4::RouteImport::Database::Connected::LispIpRouteImport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-map" || name == "locator-set")
        return true;
    return false;
}

Native::Router::Lisp::Ipv4::RouteImport::Database::Eigrp::Eigrp()
    :
    id{YType::uint16, "id"}
    	,
    lisp_ip_route_import(std::make_shared<Native::Router::Lisp::Ipv4::RouteImport::Database::Eigrp::LispIpRouteImport>())
{
    lisp_ip_route_import->parent = this;

    yang_name = "eigrp"; yang_parent_name = "database"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::Ipv4::RouteImport::Database::Eigrp::~Eigrp()
{
}

bool Native::Router::Lisp::Ipv4::RouteImport::Database::Eigrp::has_data() const
{
    return id.is_set
	|| (lisp_ip_route_import !=  nullptr && lisp_ip_route_import->has_data());
}

bool Native::Router::Lisp::Ipv4::RouteImport::Database::Eigrp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| (lisp_ip_route_import !=  nullptr && lisp_ip_route_import->has_operation());
}

std::string Native::Router::Lisp::Ipv4::RouteImport::Database::Eigrp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/ipv4/route-import/database/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Ipv4::RouteImport::Database::Eigrp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eigrp" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Ipv4::RouteImport::Database::Eigrp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Ipv4::RouteImport::Database::Eigrp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lisp-ip-route-import")
    {
        if(lisp_ip_route_import == nullptr)
        {
            lisp_ip_route_import = std::make_shared<Native::Router::Lisp::Ipv4::RouteImport::Database::Eigrp::LispIpRouteImport>();
        }
        return lisp_ip_route_import;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Ipv4::RouteImport::Database::Eigrp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(lisp_ip_route_import != nullptr)
    {
        children["lisp-ip-route-import"] = lisp_ip_route_import;
    }

    return children;
}

void Native::Router::Lisp::Ipv4::RouteImport::Database::Eigrp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Ipv4::RouteImport::Database::Eigrp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Ipv4::RouteImport::Database::Eigrp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lisp-ip-route-import" || name == "id")
        return true;
    return false;
}

Native::Router::Lisp::Ipv4::RouteImport::Database::Eigrp::LispIpRouteImport::LispIpRouteImport()
    :
    route_map{YType::str, "route-map"},
    locator_set{YType::str, "locator-set"}
{

    yang_name = "lisp-ip-route-import"; yang_parent_name = "eigrp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Lisp::Ipv4::RouteImport::Database::Eigrp::LispIpRouteImport::~LispIpRouteImport()
{
}

bool Native::Router::Lisp::Ipv4::RouteImport::Database::Eigrp::LispIpRouteImport::has_data() const
{
    return route_map.is_set
	|| locator_set.is_set;
}

bool Native::Router::Lisp::Ipv4::RouteImport::Database::Eigrp::LispIpRouteImport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(locator_set.yfilter);
}

std::string Native::Router::Lisp::Ipv4::RouteImport::Database::Eigrp::LispIpRouteImport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lisp-ip-route-import";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Ipv4::RouteImport::Database::Eigrp::LispIpRouteImport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (locator_set.is_set || is_set(locator_set.yfilter)) leaf_name_data.push_back(locator_set.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Ipv4::RouteImport::Database::Eigrp::LispIpRouteImport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Ipv4::RouteImport::Database::Eigrp::LispIpRouteImport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Ipv4::RouteImport::Database::Eigrp::LispIpRouteImport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locator-set")
    {
        locator_set = value;
        locator_set.value_namespace = name_space;
        locator_set.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Ipv4::RouteImport::Database::Eigrp::LispIpRouteImport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "locator-set")
    {
        locator_set.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Ipv4::RouteImport::Database::Eigrp::LispIpRouteImport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-map" || name == "locator-set")
        return true;
    return false;
}

Native::Router::Lisp::Ipv4::RouteImport::Database::Isis::Isis()
    :
    id{YType::str, "id"}
    	,
    lisp_ip_route_import(std::make_shared<Native::Router::Lisp::Ipv4::RouteImport::Database::Isis::LispIpRouteImport>())
{
    lisp_ip_route_import->parent = this;

    yang_name = "isis"; yang_parent_name = "database"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::Ipv4::RouteImport::Database::Isis::~Isis()
{
}

bool Native::Router::Lisp::Ipv4::RouteImport::Database::Isis::has_data() const
{
    return id.is_set
	|| (lisp_ip_route_import !=  nullptr && lisp_ip_route_import->has_data());
}

bool Native::Router::Lisp::Ipv4::RouteImport::Database::Isis::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| (lisp_ip_route_import !=  nullptr && lisp_ip_route_import->has_operation());
}

std::string Native::Router::Lisp::Ipv4::RouteImport::Database::Isis::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/ipv4/route-import/database/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Ipv4::RouteImport::Database::Isis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Ipv4::RouteImport::Database::Isis::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Ipv4::RouteImport::Database::Isis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lisp-ip-route-import")
    {
        if(lisp_ip_route_import == nullptr)
        {
            lisp_ip_route_import = std::make_shared<Native::Router::Lisp::Ipv4::RouteImport::Database::Isis::LispIpRouteImport>();
        }
        return lisp_ip_route_import;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Ipv4::RouteImport::Database::Isis::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(lisp_ip_route_import != nullptr)
    {
        children["lisp-ip-route-import"] = lisp_ip_route_import;
    }

    return children;
}

void Native::Router::Lisp::Ipv4::RouteImport::Database::Isis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Ipv4::RouteImport::Database::Isis::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Ipv4::RouteImport::Database::Isis::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lisp-ip-route-import" || name == "id")
        return true;
    return false;
}

Native::Router::Lisp::Ipv4::RouteImport::Database::Isis::LispIpRouteImport::LispIpRouteImport()
    :
    route_map{YType::str, "route-map"},
    locator_set{YType::str, "locator-set"}
{

    yang_name = "lisp-ip-route-import"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Lisp::Ipv4::RouteImport::Database::Isis::LispIpRouteImport::~LispIpRouteImport()
{
}

bool Native::Router::Lisp::Ipv4::RouteImport::Database::Isis::LispIpRouteImport::has_data() const
{
    return route_map.is_set
	|| locator_set.is_set;
}

bool Native::Router::Lisp::Ipv4::RouteImport::Database::Isis::LispIpRouteImport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(locator_set.yfilter);
}

std::string Native::Router::Lisp::Ipv4::RouteImport::Database::Isis::LispIpRouteImport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lisp-ip-route-import";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Ipv4::RouteImport::Database::Isis::LispIpRouteImport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (locator_set.is_set || is_set(locator_set.yfilter)) leaf_name_data.push_back(locator_set.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Ipv4::RouteImport::Database::Isis::LispIpRouteImport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Ipv4::RouteImport::Database::Isis::LispIpRouteImport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Ipv4::RouteImport::Database::Isis::LispIpRouteImport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locator-set")
    {
        locator_set = value;
        locator_set.value_namespace = name_space;
        locator_set.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Ipv4::RouteImport::Database::Isis::LispIpRouteImport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "locator-set")
    {
        locator_set.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Ipv4::RouteImport::Database::Isis::LispIpRouteImport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-map" || name == "locator-set")
        return true;
    return false;
}

Native::Router::Lisp::Ipv4::RouteImport::Database::MaximumPrefix::MaximumPrefix()
    :
    number{YType::int32, "number"},
    warning_only{YType::empty, "warning-only"},
    threshold{YType::uint8, "threshold"},
    threshold1{YType::uint8, "threshold1"},
    warning_only1{YType::empty, "warning-only1"}
{

    yang_name = "maximum-prefix"; yang_parent_name = "database"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::Ipv4::RouteImport::Database::MaximumPrefix::~MaximumPrefix()
{
}

bool Native::Router::Lisp::Ipv4::RouteImport::Database::MaximumPrefix::has_data() const
{
    return number.is_set
	|| warning_only.is_set
	|| threshold.is_set
	|| threshold1.is_set
	|| warning_only1.is_set;
}

bool Native::Router::Lisp::Ipv4::RouteImport::Database::MaximumPrefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(warning_only.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(threshold1.yfilter)
	|| ydk::is_set(warning_only1.yfilter);
}

std::string Native::Router::Lisp::Ipv4::RouteImport::Database::MaximumPrefix::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/ipv4/route-import/database/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Ipv4::RouteImport::Database::MaximumPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maximum-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Ipv4::RouteImport::Database::MaximumPrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (warning_only.is_set || is_set(warning_only.yfilter)) leaf_name_data.push_back(warning_only.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (threshold1.is_set || is_set(threshold1.yfilter)) leaf_name_data.push_back(threshold1.get_name_leafdata());
    if (warning_only1.is_set || is_set(warning_only1.yfilter)) leaf_name_data.push_back(warning_only1.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Ipv4::RouteImport::Database::MaximumPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Ipv4::RouteImport::Database::MaximumPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Ipv4::RouteImport::Database::MaximumPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "warning-only")
    {
        warning_only = value;
        warning_only.value_namespace = name_space;
        warning_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold1")
    {
        threshold1 = value;
        threshold1.value_namespace = name_space;
        threshold1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "warning-only1")
    {
        warning_only1 = value;
        warning_only1.value_namespace = name_space;
        warning_only1.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Ipv4::RouteImport::Database::MaximumPrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "warning-only")
    {
        warning_only.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "threshold1")
    {
        threshold1.yfilter = yfilter;
    }
    if(value_path == "warning-only1")
    {
        warning_only1.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Ipv4::RouteImport::Database::MaximumPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number" || name == "warning-only" || name == "threshold" || name == "threshold1" || name == "warning-only1")
        return true;
    return false;
}

Native::Router::Lisp::Ipv4::RouteImport::Database::Ospf::Ospf()
    :
    id{YType::uint16, "id"}
    	,
    lisp_ip_route_import(std::make_shared<Native::Router::Lisp::Ipv4::RouteImport::Database::Ospf::LispIpRouteImport>())
{
    lisp_ip_route_import->parent = this;

    yang_name = "ospf"; yang_parent_name = "database"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::Ipv4::RouteImport::Database::Ospf::~Ospf()
{
}

bool Native::Router::Lisp::Ipv4::RouteImport::Database::Ospf::has_data() const
{
    return id.is_set
	|| (lisp_ip_route_import !=  nullptr && lisp_ip_route_import->has_data());
}

bool Native::Router::Lisp::Ipv4::RouteImport::Database::Ospf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| (lisp_ip_route_import !=  nullptr && lisp_ip_route_import->has_operation());
}

std::string Native::Router::Lisp::Ipv4::RouteImport::Database::Ospf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/ipv4/route-import/database/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Ipv4::RouteImport::Database::Ospf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospf" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Ipv4::RouteImport::Database::Ospf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Ipv4::RouteImport::Database::Ospf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lisp-ip-route-import")
    {
        if(lisp_ip_route_import == nullptr)
        {
            lisp_ip_route_import = std::make_shared<Native::Router::Lisp::Ipv4::RouteImport::Database::Ospf::LispIpRouteImport>();
        }
        return lisp_ip_route_import;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Ipv4::RouteImport::Database::Ospf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(lisp_ip_route_import != nullptr)
    {
        children["lisp-ip-route-import"] = lisp_ip_route_import;
    }

    return children;
}

void Native::Router::Lisp::Ipv4::RouteImport::Database::Ospf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Ipv4::RouteImport::Database::Ospf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Ipv4::RouteImport::Database::Ospf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lisp-ip-route-import" || name == "id")
        return true;
    return false;
}

Native::Router::Lisp::Ipv4::RouteImport::Database::Ospf::LispIpRouteImport::LispIpRouteImport()
    :
    route_map{YType::str, "route-map"},
    locator_set{YType::str, "locator-set"}
{

    yang_name = "lisp-ip-route-import"; yang_parent_name = "ospf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Lisp::Ipv4::RouteImport::Database::Ospf::LispIpRouteImport::~LispIpRouteImport()
{
}

bool Native::Router::Lisp::Ipv4::RouteImport::Database::Ospf::LispIpRouteImport::has_data() const
{
    return route_map.is_set
	|| locator_set.is_set;
}

bool Native::Router::Lisp::Ipv4::RouteImport::Database::Ospf::LispIpRouteImport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(locator_set.yfilter);
}

std::string Native::Router::Lisp::Ipv4::RouteImport::Database::Ospf::LispIpRouteImport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lisp-ip-route-import";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Ipv4::RouteImport::Database::Ospf::LispIpRouteImport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (locator_set.is_set || is_set(locator_set.yfilter)) leaf_name_data.push_back(locator_set.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Ipv4::RouteImport::Database::Ospf::LispIpRouteImport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Ipv4::RouteImport::Database::Ospf::LispIpRouteImport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Ipv4::RouteImport::Database::Ospf::LispIpRouteImport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locator-set")
    {
        locator_set = value;
        locator_set.value_namespace = name_space;
        locator_set.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Ipv4::RouteImport::Database::Ospf::LispIpRouteImport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "locator-set")
    {
        locator_set.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Ipv4::RouteImport::Database::Ospf::LispIpRouteImport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-map" || name == "locator-set")
        return true;
    return false;
}

Native::Router::Lisp::Ipv4::RouteImport::Database::Ospfv3::Ospfv3()
    :
    id{YType::uint16, "id"}
    	,
    lisp_ip_route_import(std::make_shared<Native::Router::Lisp::Ipv4::RouteImport::Database::Ospfv3::LispIpRouteImport>())
{
    lisp_ip_route_import->parent = this;

    yang_name = "ospfv3"; yang_parent_name = "database"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::Ipv4::RouteImport::Database::Ospfv3::~Ospfv3()
{
}

bool Native::Router::Lisp::Ipv4::RouteImport::Database::Ospfv3::has_data() const
{
    return id.is_set
	|| (lisp_ip_route_import !=  nullptr && lisp_ip_route_import->has_data());
}

bool Native::Router::Lisp::Ipv4::RouteImport::Database::Ospfv3::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| (lisp_ip_route_import !=  nullptr && lisp_ip_route_import->has_operation());
}

std::string Native::Router::Lisp::Ipv4::RouteImport::Database::Ospfv3::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/ipv4/route-import/database/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Ipv4::RouteImport::Database::Ospfv3::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfv3" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Ipv4::RouteImport::Database::Ospfv3::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Ipv4::RouteImport::Database::Ospfv3::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lisp-ip-route-import")
    {
        if(lisp_ip_route_import == nullptr)
        {
            lisp_ip_route_import = std::make_shared<Native::Router::Lisp::Ipv4::RouteImport::Database::Ospfv3::LispIpRouteImport>();
        }
        return lisp_ip_route_import;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Ipv4::RouteImport::Database::Ospfv3::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(lisp_ip_route_import != nullptr)
    {
        children["lisp-ip-route-import"] = lisp_ip_route_import;
    }

    return children;
}

void Native::Router::Lisp::Ipv4::RouteImport::Database::Ospfv3::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Ipv4::RouteImport::Database::Ospfv3::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Ipv4::RouteImport::Database::Ospfv3::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lisp-ip-route-import" || name == "id")
        return true;
    return false;
}

Native::Router::Lisp::Ipv4::RouteImport::Database::Ospfv3::LispIpRouteImport::LispIpRouteImport()
    :
    route_map{YType::str, "route-map"},
    locator_set{YType::str, "locator-set"}
{

    yang_name = "lisp-ip-route-import"; yang_parent_name = "ospfv3"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Lisp::Ipv4::RouteImport::Database::Ospfv3::LispIpRouteImport::~LispIpRouteImport()
{
}

bool Native::Router::Lisp::Ipv4::RouteImport::Database::Ospfv3::LispIpRouteImport::has_data() const
{
    return route_map.is_set
	|| locator_set.is_set;
}

bool Native::Router::Lisp::Ipv4::RouteImport::Database::Ospfv3::LispIpRouteImport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(locator_set.yfilter);
}

std::string Native::Router::Lisp::Ipv4::RouteImport::Database::Ospfv3::LispIpRouteImport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lisp-ip-route-import";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Ipv4::RouteImport::Database::Ospfv3::LispIpRouteImport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (locator_set.is_set || is_set(locator_set.yfilter)) leaf_name_data.push_back(locator_set.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Ipv4::RouteImport::Database::Ospfv3::LispIpRouteImport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Ipv4::RouteImport::Database::Ospfv3::LispIpRouteImport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Ipv4::RouteImport::Database::Ospfv3::LispIpRouteImport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locator-set")
    {
        locator_set = value;
        locator_set.value_namespace = name_space;
        locator_set.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Ipv4::RouteImport::Database::Ospfv3::LispIpRouteImport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "locator-set")
    {
        locator_set.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Ipv4::RouteImport::Database::Ospfv3::LispIpRouteImport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-map" || name == "locator-set")
        return true;
    return false;
}

Native::Router::Lisp::Ipv4::RouteImport::Database::Rip::Rip()
    :
    lisp_ip_route_import(std::make_shared<Native::Router::Lisp::Ipv4::RouteImport::Database::Rip::LispIpRouteImport>())
{
    lisp_ip_route_import->parent = this;

    yang_name = "rip"; yang_parent_name = "database"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::Ipv4::RouteImport::Database::Rip::~Rip()
{
}

bool Native::Router::Lisp::Ipv4::RouteImport::Database::Rip::has_data() const
{
    return (lisp_ip_route_import !=  nullptr && lisp_ip_route_import->has_data());
}

bool Native::Router::Lisp::Ipv4::RouteImport::Database::Rip::has_operation() const
{
    return is_set(yfilter)
	|| (lisp_ip_route_import !=  nullptr && lisp_ip_route_import->has_operation());
}

std::string Native::Router::Lisp::Ipv4::RouteImport::Database::Rip::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/ipv4/route-import/database/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Ipv4::RouteImport::Database::Rip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Ipv4::RouteImport::Database::Rip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Ipv4::RouteImport::Database::Rip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lisp-ip-route-import")
    {
        if(lisp_ip_route_import == nullptr)
        {
            lisp_ip_route_import = std::make_shared<Native::Router::Lisp::Ipv4::RouteImport::Database::Rip::LispIpRouteImport>();
        }
        return lisp_ip_route_import;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Ipv4::RouteImport::Database::Rip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(lisp_ip_route_import != nullptr)
    {
        children["lisp-ip-route-import"] = lisp_ip_route_import;
    }

    return children;
}

void Native::Router::Lisp::Ipv4::RouteImport::Database::Rip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Lisp::Ipv4::RouteImport::Database::Rip::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Lisp::Ipv4::RouteImport::Database::Rip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lisp-ip-route-import")
        return true;
    return false;
}

Native::Router::Lisp::Ipv4::RouteImport::Database::Rip::LispIpRouteImport::LispIpRouteImport()
    :
    route_map{YType::str, "route-map"},
    locator_set{YType::str, "locator-set"}
{

    yang_name = "lisp-ip-route-import"; yang_parent_name = "rip"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::Ipv4::RouteImport::Database::Rip::LispIpRouteImport::~LispIpRouteImport()
{
}

bool Native::Router::Lisp::Ipv4::RouteImport::Database::Rip::LispIpRouteImport::has_data() const
{
    return route_map.is_set
	|| locator_set.is_set;
}

bool Native::Router::Lisp::Ipv4::RouteImport::Database::Rip::LispIpRouteImport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(locator_set.yfilter);
}

std::string Native::Router::Lisp::Ipv4::RouteImport::Database::Rip::LispIpRouteImport::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/ipv4/route-import/database/rip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Ipv4::RouteImport::Database::Rip::LispIpRouteImport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lisp-ip-route-import";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Ipv4::RouteImport::Database::Rip::LispIpRouteImport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (locator_set.is_set || is_set(locator_set.yfilter)) leaf_name_data.push_back(locator_set.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Ipv4::RouteImport::Database::Rip::LispIpRouteImport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Ipv4::RouteImport::Database::Rip::LispIpRouteImport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Ipv4::RouteImport::Database::Rip::LispIpRouteImport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locator-set")
    {
        locator_set = value;
        locator_set.value_namespace = name_space;
        locator_set.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Ipv4::RouteImport::Database::Rip::LispIpRouteImport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "locator-set")
    {
        locator_set.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Ipv4::RouteImport::Database::Rip::LispIpRouteImport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-map" || name == "locator-set")
        return true;
    return false;
}

Native::Router::Lisp::Ipv4::RouteImport::Database::Static_::Static_()
    :
    lisp_ip_route_import(std::make_shared<Native::Router::Lisp::Ipv4::RouteImport::Database::Static_::LispIpRouteImport>())
{
    lisp_ip_route_import->parent = this;

    yang_name = "static"; yang_parent_name = "database"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::Ipv4::RouteImport::Database::Static_::~Static_()
{
}

bool Native::Router::Lisp::Ipv4::RouteImport::Database::Static_::has_data() const
{
    return (lisp_ip_route_import !=  nullptr && lisp_ip_route_import->has_data());
}

bool Native::Router::Lisp::Ipv4::RouteImport::Database::Static_::has_operation() const
{
    return is_set(yfilter)
	|| (lisp_ip_route_import !=  nullptr && lisp_ip_route_import->has_operation());
}

std::string Native::Router::Lisp::Ipv4::RouteImport::Database::Static_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/ipv4/route-import/database/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Ipv4::RouteImport::Database::Static_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Ipv4::RouteImport::Database::Static_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Ipv4::RouteImport::Database::Static_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lisp-ip-route-import")
    {
        if(lisp_ip_route_import == nullptr)
        {
            lisp_ip_route_import = std::make_shared<Native::Router::Lisp::Ipv4::RouteImport::Database::Static_::LispIpRouteImport>();
        }
        return lisp_ip_route_import;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Ipv4::RouteImport::Database::Static_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(lisp_ip_route_import != nullptr)
    {
        children["lisp-ip-route-import"] = lisp_ip_route_import;
    }

    return children;
}

void Native::Router::Lisp::Ipv4::RouteImport::Database::Static_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Lisp::Ipv4::RouteImport::Database::Static_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Lisp::Ipv4::RouteImport::Database::Static_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lisp-ip-route-import")
        return true;
    return false;
}

Native::Router::Lisp::Ipv4::RouteImport::Database::Static_::LispIpRouteImport::LispIpRouteImport()
    :
    route_map{YType::str, "route-map"},
    locator_set{YType::str, "locator-set"}
{

    yang_name = "lisp-ip-route-import"; yang_parent_name = "static"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::Ipv4::RouteImport::Database::Static_::LispIpRouteImport::~LispIpRouteImport()
{
}

bool Native::Router::Lisp::Ipv4::RouteImport::Database::Static_::LispIpRouteImport::has_data() const
{
    return route_map.is_set
	|| locator_set.is_set;
}

bool Native::Router::Lisp::Ipv4::RouteImport::Database::Static_::LispIpRouteImport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(locator_set.yfilter);
}

std::string Native::Router::Lisp::Ipv4::RouteImport::Database::Static_::LispIpRouteImport::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/ipv4/route-import/database/static/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Ipv4::RouteImport::Database::Static_::LispIpRouteImport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lisp-ip-route-import";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Ipv4::RouteImport::Database::Static_::LispIpRouteImport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (locator_set.is_set || is_set(locator_set.yfilter)) leaf_name_data.push_back(locator_set.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Ipv4::RouteImport::Database::Static_::LispIpRouteImport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Ipv4::RouteImport::Database::Static_::LispIpRouteImport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Ipv4::RouteImport::Database::Static_::LispIpRouteImport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locator-set")
    {
        locator_set = value;
        locator_set.value_namespace = name_space;
        locator_set.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Ipv4::RouteImport::Database::Static_::LispIpRouteImport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "locator-set")
    {
        locator_set.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Ipv4::RouteImport::Database::Static_::LispIpRouteImport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-map" || name == "locator-set")
        return true;
    return false;
}

Native::Router::Lisp::Ipv4::RouteImport::MapCache::MapCache()
    :
    connected(nullptr) // presence node
	,maximum_prefix(std::make_shared<Native::Router::Lisp::Ipv4::RouteImport::MapCache::MaximumPrefix>())
	,rip(nullptr) // presence node
	,static_(nullptr) // presence node
{
    maximum_prefix->parent = this;

    yang_name = "map-cache"; yang_parent_name = "route-import"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::Ipv4::RouteImport::MapCache::~MapCache()
{
}

bool Native::Router::Lisp::Ipv4::RouteImport::MapCache::has_data() const
{
    for (std::size_t index=0; index<bgp.size(); index++)
    {
        if(bgp[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<eigrp.size(); index++)
    {
        if(eigrp[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<isis.size(); index++)
    {
        if(isis[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ospf.size(); index++)
    {
        if(ospf[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ospfv3.size(); index++)
    {
        if(ospfv3[index]->has_data())
            return true;
    }
    return (connected !=  nullptr && connected->has_data())
	|| (maximum_prefix !=  nullptr && maximum_prefix->has_data())
	|| (rip !=  nullptr && rip->has_data())
	|| (static_ !=  nullptr && static_->has_data());
}

bool Native::Router::Lisp::Ipv4::RouteImport::MapCache::has_operation() const
{
    for (std::size_t index=0; index<bgp.size(); index++)
    {
        if(bgp[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<eigrp.size(); index++)
    {
        if(eigrp[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<isis.size(); index++)
    {
        if(isis[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ospf.size(); index++)
    {
        if(ospf[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ospfv3.size(); index++)
    {
        if(ospfv3[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (connected !=  nullptr && connected->has_operation())
	|| (maximum_prefix !=  nullptr && maximum_prefix->has_operation())
	|| (rip !=  nullptr && rip->has_operation())
	|| (static_ !=  nullptr && static_->has_operation());
}

std::string Native::Router::Lisp::Ipv4::RouteImport::MapCache::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/ipv4/route-import/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Ipv4::RouteImport::MapCache::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-cache";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Ipv4::RouteImport::MapCache::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Ipv4::RouteImport::MapCache::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bgp")
    {
        for(auto const & c : bgp)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Lisp::Ipv4::RouteImport::MapCache::Bgp>();
        c->parent = this;
        bgp.push_back(c);
        return c;
    }

    if(child_yang_name == "connected")
    {
        if(connected == nullptr)
        {
            connected = std::make_shared<Native::Router::Lisp::Ipv4::RouteImport::MapCache::Connected>();
        }
        return connected;
    }

    if(child_yang_name == "eigrp")
    {
        for(auto const & c : eigrp)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Lisp::Ipv4::RouteImport::MapCache::Eigrp>();
        c->parent = this;
        eigrp.push_back(c);
        return c;
    }

    if(child_yang_name == "isis")
    {
        for(auto const & c : isis)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Lisp::Ipv4::RouteImport::MapCache::Isis>();
        c->parent = this;
        isis.push_back(c);
        return c;
    }

    if(child_yang_name == "maximum-prefix")
    {
        if(maximum_prefix == nullptr)
        {
            maximum_prefix = std::make_shared<Native::Router::Lisp::Ipv4::RouteImport::MapCache::MaximumPrefix>();
        }
        return maximum_prefix;
    }

    if(child_yang_name == "ospf")
    {
        for(auto const & c : ospf)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Lisp::Ipv4::RouteImport::MapCache::Ospf>();
        c->parent = this;
        ospf.push_back(c);
        return c;
    }

    if(child_yang_name == "ospfv3")
    {
        for(auto const & c : ospfv3)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Lisp::Ipv4::RouteImport::MapCache::Ospfv3>();
        c->parent = this;
        ospfv3.push_back(c);
        return c;
    }

    if(child_yang_name == "rip")
    {
        if(rip == nullptr)
        {
            rip = std::make_shared<Native::Router::Lisp::Ipv4::RouteImport::MapCache::Rip>();
        }
        return rip;
    }

    if(child_yang_name == "static")
    {
        if(static_ == nullptr)
        {
            static_ = std::make_shared<Native::Router::Lisp::Ipv4::RouteImport::MapCache::Static_>();
        }
        return static_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Ipv4::RouteImport::MapCache::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bgp)
    {
        children[c->get_segment_path()] = c;
    }

    if(connected != nullptr)
    {
        children["connected"] = connected;
    }

    for (auto const & c : eigrp)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : isis)
    {
        children[c->get_segment_path()] = c;
    }

    if(maximum_prefix != nullptr)
    {
        children["maximum-prefix"] = maximum_prefix;
    }

    for (auto const & c : ospf)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : ospfv3)
    {
        children[c->get_segment_path()] = c;
    }

    if(rip != nullptr)
    {
        children["rip"] = rip;
    }

    if(static_ != nullptr)
    {
        children["static"] = static_;
    }

    return children;
}

void Native::Router::Lisp::Ipv4::RouteImport::MapCache::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Lisp::Ipv4::RouteImport::MapCache::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Lisp::Ipv4::RouteImport::MapCache::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp" || name == "connected" || name == "eigrp" || name == "isis" || name == "maximum-prefix" || name == "ospf" || name == "ospfv3" || name == "rip" || name == "static")
        return true;
    return false;
}

Native::Router::Lisp::Ipv4::RouteImport::MapCache::Bgp::Bgp()
    :
    id{YType::str, "id"}
    	,
    map_cache_container(nullptr) // presence node
{

    yang_name = "bgp"; yang_parent_name = "map-cache"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::Ipv4::RouteImport::MapCache::Bgp::~Bgp()
{
}

bool Native::Router::Lisp::Ipv4::RouteImport::MapCache::Bgp::has_data() const
{
    return id.is_set
	|| (map_cache_container !=  nullptr && map_cache_container->has_data());
}

bool Native::Router::Lisp::Ipv4::RouteImport::MapCache::Bgp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| (map_cache_container !=  nullptr && map_cache_container->has_operation());
}

std::string Native::Router::Lisp::Ipv4::RouteImport::MapCache::Bgp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/ipv4/route-import/map-cache/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Ipv4::RouteImport::MapCache::Bgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Ipv4::RouteImport::MapCache::Bgp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Ipv4::RouteImport::MapCache::Bgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "map-cache-container")
    {
        if(map_cache_container == nullptr)
        {
            map_cache_container = std::make_shared<Native::Router::Lisp::Ipv4::RouteImport::MapCache::Bgp::MapCacheContainer>();
        }
        return map_cache_container;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Ipv4::RouteImport::MapCache::Bgp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(map_cache_container != nullptr)
    {
        children["map-cache-container"] = map_cache_container;
    }

    return children;
}

void Native::Router::Lisp::Ipv4::RouteImport::MapCache::Bgp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Ipv4::RouteImport::MapCache::Bgp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Ipv4::RouteImport::MapCache::Bgp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "map-cache-container" || name == "id")
        return true;
    return false;
}

Native::Router::Lisp::Ipv4::RouteImport::MapCache::Bgp::MapCacheContainer::MapCacheContainer()
    :
    route_map{YType::str, "route-map"}
{

    yang_name = "map-cache-container"; yang_parent_name = "bgp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Lisp::Ipv4::RouteImport::MapCache::Bgp::MapCacheContainer::~MapCacheContainer()
{
}

bool Native::Router::Lisp::Ipv4::RouteImport::MapCache::Bgp::MapCacheContainer::has_data() const
{
    return route_map.is_set;
}

bool Native::Router::Lisp::Ipv4::RouteImport::MapCache::Bgp::MapCacheContainer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Lisp::Ipv4::RouteImport::MapCache::Bgp::MapCacheContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-cache-container";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Ipv4::RouteImport::MapCache::Bgp::MapCacheContainer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Ipv4::RouteImport::MapCache::Bgp::MapCacheContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Ipv4::RouteImport::MapCache::Bgp::MapCacheContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Ipv4::RouteImport::MapCache::Bgp::MapCacheContainer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Ipv4::RouteImport::MapCache::Bgp::MapCacheContainer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Ipv4::RouteImport::MapCache::Bgp::MapCacheContainer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-map")
        return true;
    return false;
}

Native::Router::Lisp::Ipv4::RouteImport::MapCache::Connected::Connected()
    :
    map_cache_container(nullptr) // presence node
{

    yang_name = "connected"; yang_parent_name = "map-cache"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::Ipv4::RouteImport::MapCache::Connected::~Connected()
{
}

bool Native::Router::Lisp::Ipv4::RouteImport::MapCache::Connected::has_data() const
{
    return (map_cache_container !=  nullptr && map_cache_container->has_data());
}

bool Native::Router::Lisp::Ipv4::RouteImport::MapCache::Connected::has_operation() const
{
    return is_set(yfilter)
	|| (map_cache_container !=  nullptr && map_cache_container->has_operation());
}

std::string Native::Router::Lisp::Ipv4::RouteImport::MapCache::Connected::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/ipv4/route-import/map-cache/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Ipv4::RouteImport::MapCache::Connected::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connected";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Ipv4::RouteImport::MapCache::Connected::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Ipv4::RouteImport::MapCache::Connected::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "map-cache-container")
    {
        if(map_cache_container == nullptr)
        {
            map_cache_container = std::make_shared<Native::Router::Lisp::Ipv4::RouteImport::MapCache::Connected::MapCacheContainer>();
        }
        return map_cache_container;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Ipv4::RouteImport::MapCache::Connected::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(map_cache_container != nullptr)
    {
        children["map-cache-container"] = map_cache_container;
    }

    return children;
}

void Native::Router::Lisp::Ipv4::RouteImport::MapCache::Connected::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Lisp::Ipv4::RouteImport::MapCache::Connected::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Lisp::Ipv4::RouteImport::MapCache::Connected::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "map-cache-container")
        return true;
    return false;
}

Native::Router::Lisp::Ipv4::RouteImport::MapCache::Connected::MapCacheContainer::MapCacheContainer()
    :
    route_map{YType::str, "route-map"}
{

    yang_name = "map-cache-container"; yang_parent_name = "connected"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::Ipv4::RouteImport::MapCache::Connected::MapCacheContainer::~MapCacheContainer()
{
}

bool Native::Router::Lisp::Ipv4::RouteImport::MapCache::Connected::MapCacheContainer::has_data() const
{
    return route_map.is_set;
}

bool Native::Router::Lisp::Ipv4::RouteImport::MapCache::Connected::MapCacheContainer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Lisp::Ipv4::RouteImport::MapCache::Connected::MapCacheContainer::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/ipv4/route-import/map-cache/connected/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Ipv4::RouteImport::MapCache::Connected::MapCacheContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-cache-container";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Ipv4::RouteImport::MapCache::Connected::MapCacheContainer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Ipv4::RouteImport::MapCache::Connected::MapCacheContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Ipv4::RouteImport::MapCache::Connected::MapCacheContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Ipv4::RouteImport::MapCache::Connected::MapCacheContainer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Ipv4::RouteImport::MapCache::Connected::MapCacheContainer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Ipv4::RouteImport::MapCache::Connected::MapCacheContainer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-map")
        return true;
    return false;
}

Native::Router::Lisp::Ipv4::RouteImport::MapCache::Eigrp::Eigrp()
    :
    id{YType::uint16, "id"}
    	,
    map_cache_container(nullptr) // presence node
{

    yang_name = "eigrp"; yang_parent_name = "map-cache"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::Ipv4::RouteImport::MapCache::Eigrp::~Eigrp()
{
}

bool Native::Router::Lisp::Ipv4::RouteImport::MapCache::Eigrp::has_data() const
{
    return id.is_set
	|| (map_cache_container !=  nullptr && map_cache_container->has_data());
}

bool Native::Router::Lisp::Ipv4::RouteImport::MapCache::Eigrp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| (map_cache_container !=  nullptr && map_cache_container->has_operation());
}

std::string Native::Router::Lisp::Ipv4::RouteImport::MapCache::Eigrp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/ipv4/route-import/map-cache/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Ipv4::RouteImport::MapCache::Eigrp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eigrp" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Ipv4::RouteImport::MapCache::Eigrp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Ipv4::RouteImport::MapCache::Eigrp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "map-cache-container")
    {
        if(map_cache_container == nullptr)
        {
            map_cache_container = std::make_shared<Native::Router::Lisp::Ipv4::RouteImport::MapCache::Eigrp::MapCacheContainer>();
        }
        return map_cache_container;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Ipv4::RouteImport::MapCache::Eigrp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(map_cache_container != nullptr)
    {
        children["map-cache-container"] = map_cache_container;
    }

    return children;
}

void Native::Router::Lisp::Ipv4::RouteImport::MapCache::Eigrp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Ipv4::RouteImport::MapCache::Eigrp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Ipv4::RouteImport::MapCache::Eigrp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "map-cache-container" || name == "id")
        return true;
    return false;
}

Native::Router::Lisp::Ipv4::RouteImport::MapCache::Eigrp::MapCacheContainer::MapCacheContainer()
    :
    route_map{YType::str, "route-map"}
{

    yang_name = "map-cache-container"; yang_parent_name = "eigrp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Lisp::Ipv4::RouteImport::MapCache::Eigrp::MapCacheContainer::~MapCacheContainer()
{
}

bool Native::Router::Lisp::Ipv4::RouteImport::MapCache::Eigrp::MapCacheContainer::has_data() const
{
    return route_map.is_set;
}

bool Native::Router::Lisp::Ipv4::RouteImport::MapCache::Eigrp::MapCacheContainer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Lisp::Ipv4::RouteImport::MapCache::Eigrp::MapCacheContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-cache-container";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Ipv4::RouteImport::MapCache::Eigrp::MapCacheContainer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Ipv4::RouteImport::MapCache::Eigrp::MapCacheContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Ipv4::RouteImport::MapCache::Eigrp::MapCacheContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Ipv4::RouteImport::MapCache::Eigrp::MapCacheContainer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Ipv4::RouteImport::MapCache::Eigrp::MapCacheContainer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Ipv4::RouteImport::MapCache::Eigrp::MapCacheContainer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-map")
        return true;
    return false;
}

Native::Router::Lisp::Ipv4::RouteImport::MapCache::Isis::Isis()
    :
    id{YType::str, "id"}
    	,
    map_cache_container(nullptr) // presence node
{

    yang_name = "isis"; yang_parent_name = "map-cache"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::Ipv4::RouteImport::MapCache::Isis::~Isis()
{
}

bool Native::Router::Lisp::Ipv4::RouteImport::MapCache::Isis::has_data() const
{
    return id.is_set
	|| (map_cache_container !=  nullptr && map_cache_container->has_data());
}

bool Native::Router::Lisp::Ipv4::RouteImport::MapCache::Isis::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| (map_cache_container !=  nullptr && map_cache_container->has_operation());
}

std::string Native::Router::Lisp::Ipv4::RouteImport::MapCache::Isis::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/ipv4/route-import/map-cache/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Ipv4::RouteImport::MapCache::Isis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Ipv4::RouteImport::MapCache::Isis::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Ipv4::RouteImport::MapCache::Isis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "map-cache-container")
    {
        if(map_cache_container == nullptr)
        {
            map_cache_container = std::make_shared<Native::Router::Lisp::Ipv4::RouteImport::MapCache::Isis::MapCacheContainer>();
        }
        return map_cache_container;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Ipv4::RouteImport::MapCache::Isis::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(map_cache_container != nullptr)
    {
        children["map-cache-container"] = map_cache_container;
    }

    return children;
}

void Native::Router::Lisp::Ipv4::RouteImport::MapCache::Isis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Ipv4::RouteImport::MapCache::Isis::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Ipv4::RouteImport::MapCache::Isis::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "map-cache-container" || name == "id")
        return true;
    return false;
}

Native::Router::Lisp::Ipv4::RouteImport::MapCache::Isis::MapCacheContainer::MapCacheContainer()
    :
    route_map{YType::str, "route-map"}
{

    yang_name = "map-cache-container"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Lisp::Ipv4::RouteImport::MapCache::Isis::MapCacheContainer::~MapCacheContainer()
{
}

bool Native::Router::Lisp::Ipv4::RouteImport::MapCache::Isis::MapCacheContainer::has_data() const
{
    return route_map.is_set;
}

bool Native::Router::Lisp::Ipv4::RouteImport::MapCache::Isis::MapCacheContainer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Lisp::Ipv4::RouteImport::MapCache::Isis::MapCacheContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-cache-container";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Ipv4::RouteImport::MapCache::Isis::MapCacheContainer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Ipv4::RouteImport::MapCache::Isis::MapCacheContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Ipv4::RouteImport::MapCache::Isis::MapCacheContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Ipv4::RouteImport::MapCache::Isis::MapCacheContainer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Ipv4::RouteImport::MapCache::Isis::MapCacheContainer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Ipv4::RouteImport::MapCache::Isis::MapCacheContainer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-map")
        return true;
    return false;
}

Native::Router::Lisp::Ipv4::RouteImport::MapCache::MaximumPrefix::MaximumPrefix()
    :
    number{YType::int32, "number"},
    warning_only{YType::empty, "warning-only"},
    threshold{YType::uint8, "threshold"},
    threshold1{YType::uint8, "threshold1"},
    warning_only1{YType::empty, "warning-only1"}
{

    yang_name = "maximum-prefix"; yang_parent_name = "map-cache"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::Ipv4::RouteImport::MapCache::MaximumPrefix::~MaximumPrefix()
{
}

bool Native::Router::Lisp::Ipv4::RouteImport::MapCache::MaximumPrefix::has_data() const
{
    return number.is_set
	|| warning_only.is_set
	|| threshold.is_set
	|| threshold1.is_set
	|| warning_only1.is_set;
}

bool Native::Router::Lisp::Ipv4::RouteImport::MapCache::MaximumPrefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(warning_only.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(threshold1.yfilter)
	|| ydk::is_set(warning_only1.yfilter);
}

std::string Native::Router::Lisp::Ipv4::RouteImport::MapCache::MaximumPrefix::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/ipv4/route-import/map-cache/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Ipv4::RouteImport::MapCache::MaximumPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maximum-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Ipv4::RouteImport::MapCache::MaximumPrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (warning_only.is_set || is_set(warning_only.yfilter)) leaf_name_data.push_back(warning_only.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (threshold1.is_set || is_set(threshold1.yfilter)) leaf_name_data.push_back(threshold1.get_name_leafdata());
    if (warning_only1.is_set || is_set(warning_only1.yfilter)) leaf_name_data.push_back(warning_only1.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Ipv4::RouteImport::MapCache::MaximumPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Ipv4::RouteImport::MapCache::MaximumPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Ipv4::RouteImport::MapCache::MaximumPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "warning-only")
    {
        warning_only = value;
        warning_only.value_namespace = name_space;
        warning_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold1")
    {
        threshold1 = value;
        threshold1.value_namespace = name_space;
        threshold1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "warning-only1")
    {
        warning_only1 = value;
        warning_only1.value_namespace = name_space;
        warning_only1.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Ipv4::RouteImport::MapCache::MaximumPrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "warning-only")
    {
        warning_only.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "threshold1")
    {
        threshold1.yfilter = yfilter;
    }
    if(value_path == "warning-only1")
    {
        warning_only1.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Ipv4::RouteImport::MapCache::MaximumPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number" || name == "warning-only" || name == "threshold" || name == "threshold1" || name == "warning-only1")
        return true;
    return false;
}

Native::Router::Lisp::Ipv4::RouteImport::MapCache::Ospf::Ospf()
    :
    id{YType::uint16, "id"}
    	,
    map_cache_container(nullptr) // presence node
{

    yang_name = "ospf"; yang_parent_name = "map-cache"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::Ipv4::RouteImport::MapCache::Ospf::~Ospf()
{
}

bool Native::Router::Lisp::Ipv4::RouteImport::MapCache::Ospf::has_data() const
{
    return id.is_set
	|| (map_cache_container !=  nullptr && map_cache_container->has_data());
}

bool Native::Router::Lisp::Ipv4::RouteImport::MapCache::Ospf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| (map_cache_container !=  nullptr && map_cache_container->has_operation());
}

std::string Native::Router::Lisp::Ipv4::RouteImport::MapCache::Ospf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/ipv4/route-import/map-cache/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Ipv4::RouteImport::MapCache::Ospf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospf" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Ipv4::RouteImport::MapCache::Ospf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Ipv4::RouteImport::MapCache::Ospf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "map-cache-container")
    {
        if(map_cache_container == nullptr)
        {
            map_cache_container = std::make_shared<Native::Router::Lisp::Ipv4::RouteImport::MapCache::Ospf::MapCacheContainer>();
        }
        return map_cache_container;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Ipv4::RouteImport::MapCache::Ospf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(map_cache_container != nullptr)
    {
        children["map-cache-container"] = map_cache_container;
    }

    return children;
}

void Native::Router::Lisp::Ipv4::RouteImport::MapCache::Ospf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Ipv4::RouteImport::MapCache::Ospf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Ipv4::RouteImport::MapCache::Ospf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "map-cache-container" || name == "id")
        return true;
    return false;
}

Native::Router::Lisp::Ipv4::RouteImport::MapCache::Ospf::MapCacheContainer::MapCacheContainer()
    :
    route_map{YType::str, "route-map"}
{

    yang_name = "map-cache-container"; yang_parent_name = "ospf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Lisp::Ipv4::RouteImport::MapCache::Ospf::MapCacheContainer::~MapCacheContainer()
{
}

bool Native::Router::Lisp::Ipv4::RouteImport::MapCache::Ospf::MapCacheContainer::has_data() const
{
    return route_map.is_set;
}

bool Native::Router::Lisp::Ipv4::RouteImport::MapCache::Ospf::MapCacheContainer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Lisp::Ipv4::RouteImport::MapCache::Ospf::MapCacheContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-cache-container";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Ipv4::RouteImport::MapCache::Ospf::MapCacheContainer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Ipv4::RouteImport::MapCache::Ospf::MapCacheContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Ipv4::RouteImport::MapCache::Ospf::MapCacheContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Ipv4::RouteImport::MapCache::Ospf::MapCacheContainer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Ipv4::RouteImport::MapCache::Ospf::MapCacheContainer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Ipv4::RouteImport::MapCache::Ospf::MapCacheContainer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-map")
        return true;
    return false;
}

Native::Router::Lisp::Ipv4::RouteImport::MapCache::Ospfv3::Ospfv3()
    :
    id{YType::uint16, "id"}
    	,
    map_cache_container(nullptr) // presence node
{

    yang_name = "ospfv3"; yang_parent_name = "map-cache"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::Ipv4::RouteImport::MapCache::Ospfv3::~Ospfv3()
{
}

bool Native::Router::Lisp::Ipv4::RouteImport::MapCache::Ospfv3::has_data() const
{
    return id.is_set
	|| (map_cache_container !=  nullptr && map_cache_container->has_data());
}

bool Native::Router::Lisp::Ipv4::RouteImport::MapCache::Ospfv3::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| (map_cache_container !=  nullptr && map_cache_container->has_operation());
}

std::string Native::Router::Lisp::Ipv4::RouteImport::MapCache::Ospfv3::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/ipv4/route-import/map-cache/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Ipv4::RouteImport::MapCache::Ospfv3::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfv3" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Ipv4::RouteImport::MapCache::Ospfv3::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Ipv4::RouteImport::MapCache::Ospfv3::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "map-cache-container")
    {
        if(map_cache_container == nullptr)
        {
            map_cache_container = std::make_shared<Native::Router::Lisp::Ipv4::RouteImport::MapCache::Ospfv3::MapCacheContainer>();
        }
        return map_cache_container;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Ipv4::RouteImport::MapCache::Ospfv3::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(map_cache_container != nullptr)
    {
        children["map-cache-container"] = map_cache_container;
    }

    return children;
}

void Native::Router::Lisp::Ipv4::RouteImport::MapCache::Ospfv3::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Ipv4::RouteImport::MapCache::Ospfv3::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Ipv4::RouteImport::MapCache::Ospfv3::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "map-cache-container" || name == "id")
        return true;
    return false;
}

Native::Router::Lisp::Ipv4::RouteImport::MapCache::Ospfv3::MapCacheContainer::MapCacheContainer()
    :
    route_map{YType::str, "route-map"}
{

    yang_name = "map-cache-container"; yang_parent_name = "ospfv3"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Lisp::Ipv4::RouteImport::MapCache::Ospfv3::MapCacheContainer::~MapCacheContainer()
{
}

bool Native::Router::Lisp::Ipv4::RouteImport::MapCache::Ospfv3::MapCacheContainer::has_data() const
{
    return route_map.is_set;
}

bool Native::Router::Lisp::Ipv4::RouteImport::MapCache::Ospfv3::MapCacheContainer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Lisp::Ipv4::RouteImport::MapCache::Ospfv3::MapCacheContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-cache-container";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Ipv4::RouteImport::MapCache::Ospfv3::MapCacheContainer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Ipv4::RouteImport::MapCache::Ospfv3::MapCacheContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Ipv4::RouteImport::MapCache::Ospfv3::MapCacheContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Ipv4::RouteImport::MapCache::Ospfv3::MapCacheContainer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Ipv4::RouteImport::MapCache::Ospfv3::MapCacheContainer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Ipv4::RouteImport::MapCache::Ospfv3::MapCacheContainer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-map")
        return true;
    return false;
}

Native::Router::Lisp::Ipv4::RouteImport::MapCache::Rip::Rip()
    :
    map_cache_container(nullptr) // presence node
{

    yang_name = "rip"; yang_parent_name = "map-cache"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::Ipv4::RouteImport::MapCache::Rip::~Rip()
{
}

bool Native::Router::Lisp::Ipv4::RouteImport::MapCache::Rip::has_data() const
{
    return (map_cache_container !=  nullptr && map_cache_container->has_data());
}

bool Native::Router::Lisp::Ipv4::RouteImport::MapCache::Rip::has_operation() const
{
    return is_set(yfilter)
	|| (map_cache_container !=  nullptr && map_cache_container->has_operation());
}

std::string Native::Router::Lisp::Ipv4::RouteImport::MapCache::Rip::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/ipv4/route-import/map-cache/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Ipv4::RouteImport::MapCache::Rip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Ipv4::RouteImport::MapCache::Rip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Ipv4::RouteImport::MapCache::Rip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "map-cache-container")
    {
        if(map_cache_container == nullptr)
        {
            map_cache_container = std::make_shared<Native::Router::Lisp::Ipv4::RouteImport::MapCache::Rip::MapCacheContainer>();
        }
        return map_cache_container;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Ipv4::RouteImport::MapCache::Rip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(map_cache_container != nullptr)
    {
        children["map-cache-container"] = map_cache_container;
    }

    return children;
}

void Native::Router::Lisp::Ipv4::RouteImport::MapCache::Rip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Lisp::Ipv4::RouteImport::MapCache::Rip::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Lisp::Ipv4::RouteImport::MapCache::Rip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "map-cache-container")
        return true;
    return false;
}

Native::Router::Lisp::Ipv4::RouteImport::MapCache::Rip::MapCacheContainer::MapCacheContainer()
    :
    route_map{YType::str, "route-map"}
{

    yang_name = "map-cache-container"; yang_parent_name = "rip"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::Ipv4::RouteImport::MapCache::Rip::MapCacheContainer::~MapCacheContainer()
{
}

bool Native::Router::Lisp::Ipv4::RouteImport::MapCache::Rip::MapCacheContainer::has_data() const
{
    return route_map.is_set;
}

bool Native::Router::Lisp::Ipv4::RouteImport::MapCache::Rip::MapCacheContainer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Lisp::Ipv4::RouteImport::MapCache::Rip::MapCacheContainer::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/ipv4/route-import/map-cache/rip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Ipv4::RouteImport::MapCache::Rip::MapCacheContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-cache-container";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Ipv4::RouteImport::MapCache::Rip::MapCacheContainer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Ipv4::RouteImport::MapCache::Rip::MapCacheContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Ipv4::RouteImport::MapCache::Rip::MapCacheContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Ipv4::RouteImport::MapCache::Rip::MapCacheContainer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Ipv4::RouteImport::MapCache::Rip::MapCacheContainer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Ipv4::RouteImport::MapCache::Rip::MapCacheContainer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-map")
        return true;
    return false;
}

Native::Router::Lisp::Ipv4::RouteImport::MapCache::Static_::Static_()
    :
    map_cache_container(nullptr) // presence node
{

    yang_name = "static"; yang_parent_name = "map-cache"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::Ipv4::RouteImport::MapCache::Static_::~Static_()
{
}

bool Native::Router::Lisp::Ipv4::RouteImport::MapCache::Static_::has_data() const
{
    return (map_cache_container !=  nullptr && map_cache_container->has_data());
}

bool Native::Router::Lisp::Ipv4::RouteImport::MapCache::Static_::has_operation() const
{
    return is_set(yfilter)
	|| (map_cache_container !=  nullptr && map_cache_container->has_operation());
}

std::string Native::Router::Lisp::Ipv4::RouteImport::MapCache::Static_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/ipv4/route-import/map-cache/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Ipv4::RouteImport::MapCache::Static_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Ipv4::RouteImport::MapCache::Static_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Ipv4::RouteImport::MapCache::Static_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "map-cache-container")
    {
        if(map_cache_container == nullptr)
        {
            map_cache_container = std::make_shared<Native::Router::Lisp::Ipv4::RouteImport::MapCache::Static_::MapCacheContainer>();
        }
        return map_cache_container;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Ipv4::RouteImport::MapCache::Static_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(map_cache_container != nullptr)
    {
        children["map-cache-container"] = map_cache_container;
    }

    return children;
}

void Native::Router::Lisp::Ipv4::RouteImport::MapCache::Static_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Lisp::Ipv4::RouteImport::MapCache::Static_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Lisp::Ipv4::RouteImport::MapCache::Static_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "map-cache-container")
        return true;
    return false;
}

Native::Router::Lisp::Ipv4::RouteImport::MapCache::Static_::MapCacheContainer::MapCacheContainer()
    :
    route_map{YType::str, "route-map"}
{

    yang_name = "map-cache-container"; yang_parent_name = "static"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::Ipv4::RouteImport::MapCache::Static_::MapCacheContainer::~MapCacheContainer()
{
}

bool Native::Router::Lisp::Ipv4::RouteImport::MapCache::Static_::MapCacheContainer::has_data() const
{
    return route_map.is_set;
}

bool Native::Router::Lisp::Ipv4::RouteImport::MapCache::Static_::MapCacheContainer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Lisp::Ipv4::RouteImport::MapCache::Static_::MapCacheContainer::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/ipv4/route-import/map-cache/static/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Ipv4::RouteImport::MapCache::Static_::MapCacheContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-cache-container";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Ipv4::RouteImport::MapCache::Static_::MapCacheContainer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Ipv4::RouteImport::MapCache::Static_::MapCacheContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Ipv4::RouteImport::MapCache::Static_::MapCacheContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Ipv4::RouteImport::MapCache::Static_::MapCacheContainer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Ipv4::RouteImport::MapCache::Static_::MapCacheContainer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Ipv4::RouteImport::MapCache::Static_::MapCacheContainer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-map")
        return true;
    return false;
}

Native::Router::Lisp::Ipv4::SiteRegistration::SiteRegistration()
    :
    limit{YType::uint32, "limit"},
    warning_threshold{YType::uint8, "warning-threshold"}
{

    yang_name = "site-registration"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::Ipv4::SiteRegistration::~SiteRegistration()
{
}

bool Native::Router::Lisp::Ipv4::SiteRegistration::has_data() const
{
    return limit.is_set
	|| warning_threshold.is_set;
}

bool Native::Router::Lisp::Ipv4::SiteRegistration::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(limit.yfilter)
	|| ydk::is_set(warning_threshold.yfilter);
}

std::string Native::Router::Lisp::Ipv4::SiteRegistration::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/ipv4/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Ipv4::SiteRegistration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "site-registration";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Ipv4::SiteRegistration::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (limit.is_set || is_set(limit.yfilter)) leaf_name_data.push_back(limit.get_name_leafdata());
    if (warning_threshold.is_set || is_set(warning_threshold.yfilter)) leaf_name_data.push_back(warning_threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Ipv4::SiteRegistration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Ipv4::SiteRegistration::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Ipv4::SiteRegistration::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "limit")
    {
        limit = value;
        limit.value_namespace = name_space;
        limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold = value;
        warning_threshold.value_namespace = name_space;
        warning_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Ipv4::SiteRegistration::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "limit")
    {
        limit.yfilter = yfilter;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Ipv4::SiteRegistration::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "limit" || name == "warning-threshold")
        return true;
    return false;
}

Native::Router::Lisp::Ipv4::SolicitMapRequest::SolicitMapRequest()
    :
    ignore{YType::empty, "ignore"},
    max_per_entry{YType::uint8, "max-per-entry"},
    suppression_time{YType::uint16, "suppression-time"}
{

    yang_name = "solicit-map-request"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::Ipv4::SolicitMapRequest::~SolicitMapRequest()
{
}

bool Native::Router::Lisp::Ipv4::SolicitMapRequest::has_data() const
{
    return ignore.is_set
	|| max_per_entry.is_set
	|| suppression_time.is_set;
}

bool Native::Router::Lisp::Ipv4::SolicitMapRequest::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ignore.yfilter)
	|| ydk::is_set(max_per_entry.yfilter)
	|| ydk::is_set(suppression_time.yfilter);
}

std::string Native::Router::Lisp::Ipv4::SolicitMapRequest::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/ipv4/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Ipv4::SolicitMapRequest::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "solicit-map-request";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Ipv4::SolicitMapRequest::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ignore.is_set || is_set(ignore.yfilter)) leaf_name_data.push_back(ignore.get_name_leafdata());
    if (max_per_entry.is_set || is_set(max_per_entry.yfilter)) leaf_name_data.push_back(max_per_entry.get_name_leafdata());
    if (suppression_time.is_set || is_set(suppression_time.yfilter)) leaf_name_data.push_back(suppression_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Ipv4::SolicitMapRequest::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Ipv4::SolicitMapRequest::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Ipv4::SolicitMapRequest::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ignore")
    {
        ignore = value;
        ignore.value_namespace = name_space;
        ignore.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-per-entry")
    {
        max_per_entry = value;
        max_per_entry.value_namespace = name_space;
        max_per_entry.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suppression-time")
    {
        suppression_time = value;
        suppression_time.value_namespace = name_space;
        suppression_time.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Ipv4::SolicitMapRequest::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ignore")
    {
        ignore.yfilter = yfilter;
    }
    if(value_path == "max-per-entry")
    {
        max_per_entry.yfilter = yfilter;
    }
    if(value_path == "suppression-time")
    {
        suppression_time.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Ipv4::SolicitMapRequest::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ignore" || name == "max-per-entry" || name == "suppression-time")
        return true;
    return false;
}

Native::Router::Lisp::Ipv4::UsePetr::UsePetr()
    :
    locator_address{YType::str, "locator-address"},
    priority{YType::uint8, "priority"},
    weight{YType::uint8, "weight"}
{

    yang_name = "use-petr"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::Ipv4::UsePetr::~UsePetr()
{
}

bool Native::Router::Lisp::Ipv4::UsePetr::has_data() const
{
    return locator_address.is_set
	|| priority.is_set
	|| weight.is_set;
}

bool Native::Router::Lisp::Ipv4::UsePetr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(locator_address.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(weight.yfilter);
}

std::string Native::Router::Lisp::Ipv4::UsePetr::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/ipv4/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Ipv4::UsePetr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "use-petr" <<"[locator-address='" <<locator_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Ipv4::UsePetr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (locator_address.is_set || is_set(locator_address.yfilter)) leaf_name_data.push_back(locator_address.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Ipv4::UsePetr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Ipv4::UsePetr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Ipv4::UsePetr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "locator-address")
    {
        locator_address = value;
        locator_address.value_namespace = name_space;
        locator_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "weight")
    {
        weight = value;
        weight.value_namespace = name_space;
        weight.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Ipv4::UsePetr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "locator-address")
    {
        locator_address.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "weight")
    {
        weight.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Ipv4::UsePetr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "locator-address" || name == "priority" || name == "weight")
        return true;
    return false;
}

Native::Router::Lisp::Ipv6::Ipv6()
    :
    alt_vrf{YType::str, "alt-vrf"},
    map_request_source{YType::str, "map-request-source"},
    proxy_etr{YType::empty, "proxy-etr"},
    proxy_itr{YType::str, "proxy-itr"},
    sgt{YType::empty, "sgt"}
    	,
    database_mapping(std::make_shared<Native::Router::Lisp::Ipv6::DatabaseMapping>())
	,distance(std::make_shared<Native::Router::Lisp::Ipv6::Distance>())
	,itr(std::make_shared<Native::Router::Lisp::Ipv6::Itr>())
	,itr_enable(std::make_shared<Native::Router::Lisp::Ipv6::ItrEnable>())
	,etr(std::make_shared<Native::Router::Lisp::Ipv6::Etr>())
	,etr_enable(std::make_shared<Native::Router::Lisp::Ipv6::EtrEnable>())
	,locator(std::make_shared<Native::Router::Lisp::Ipv6::Locator>())
	,map_cache(std::make_shared<Native::Router::Lisp::Ipv6::MapCache>())
	,map_cache_limit(std::make_shared<Native::Router::Lisp::Ipv6::MapCacheLimit>())
	,map_cache_persistent(std::make_shared<Native::Router::Lisp::Ipv6::MapCachePersistent>())
	,map_resolver(nullptr) // presence node
	,map_server(nullptr) // presence node
	,path_mtu_discovery(nullptr) // presence node
	,route_export(std::make_shared<Native::Router::Lisp::Ipv6::RouteExport>())
	,route_import(std::make_shared<Native::Router::Lisp::Ipv6::RouteImport>())
	,site_registration(std::make_shared<Native::Router::Lisp::Ipv6::SiteRegistration>())
	,solicit_map_request(std::make_shared<Native::Router::Lisp::Ipv6::SolicitMapRequest>())
{
    database_mapping->parent = this;
    distance->parent = this;
    itr->parent = this;
    itr_enable->parent = this;
    etr->parent = this;
    etr_enable->parent = this;
    locator->parent = this;
    map_cache->parent = this;
    map_cache_limit->parent = this;
    map_cache_persistent->parent = this;
    route_export->parent = this;
    route_import->parent = this;
    site_registration->parent = this;
    solicit_map_request->parent = this;

    yang_name = "ipv6"; yang_parent_name = "lisp"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::Ipv6::~Ipv6()
{
}

bool Native::Router::Lisp::Ipv6::has_data() const
{
    for (std::size_t index=0; index<use_petr.size(); index++)
    {
        if(use_petr[index]->has_data())
            return true;
    }
    for (auto const & leaf : proxy_itr.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return alt_vrf.is_set
	|| map_request_source.is_set
	|| proxy_etr.is_set
	|| sgt.is_set
	|| (database_mapping !=  nullptr && database_mapping->has_data())
	|| (distance !=  nullptr && distance->has_data())
	|| (itr !=  nullptr && itr->has_data())
	|| (itr_enable !=  nullptr && itr_enable->has_data())
	|| (etr !=  nullptr && etr->has_data())
	|| (etr_enable !=  nullptr && etr_enable->has_data())
	|| (locator !=  nullptr && locator->has_data())
	|| (map_cache !=  nullptr && map_cache->has_data())
	|| (map_cache_limit !=  nullptr && map_cache_limit->has_data())
	|| (map_cache_persistent !=  nullptr && map_cache_persistent->has_data())
	|| (map_resolver !=  nullptr && map_resolver->has_data())
	|| (map_server !=  nullptr && map_server->has_data())
	|| (path_mtu_discovery !=  nullptr && path_mtu_discovery->has_data())
	|| (route_export !=  nullptr && route_export->has_data())
	|| (route_import !=  nullptr && route_import->has_data())
	|| (site_registration !=  nullptr && site_registration->has_data())
	|| (solicit_map_request !=  nullptr && solicit_map_request->has_data());
}

bool Native::Router::Lisp::Ipv6::has_operation() const
{
    for (std::size_t index=0; index<use_petr.size(); index++)
    {
        if(use_petr[index]->has_operation())
            return true;
    }
    for (auto const & leaf : proxy_itr.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(alt_vrf.yfilter)
	|| ydk::is_set(map_request_source.yfilter)
	|| ydk::is_set(proxy_etr.yfilter)
	|| ydk::is_set(proxy_itr.yfilter)
	|| ydk::is_set(sgt.yfilter)
	|| (database_mapping !=  nullptr && database_mapping->has_operation())
	|| (distance !=  nullptr && distance->has_operation())
	|| (itr !=  nullptr && itr->has_operation())
	|| (itr_enable !=  nullptr && itr_enable->has_operation())
	|| (etr !=  nullptr && etr->has_operation())
	|| (etr_enable !=  nullptr && etr_enable->has_operation())
	|| (locator !=  nullptr && locator->has_operation())
	|| (map_cache !=  nullptr && map_cache->has_operation())
	|| (map_cache_limit !=  nullptr && map_cache_limit->has_operation())
	|| (map_cache_persistent !=  nullptr && map_cache_persistent->has_operation())
	|| (map_resolver !=  nullptr && map_resolver->has_operation())
	|| (map_server !=  nullptr && map_server->has_operation())
	|| (path_mtu_discovery !=  nullptr && path_mtu_discovery->has_operation())
	|| (route_export !=  nullptr && route_export->has_operation())
	|| (route_import !=  nullptr && route_import->has_operation())
	|| (site_registration !=  nullptr && site_registration->has_operation())
	|| (solicit_map_request !=  nullptr && solicit_map_request->has_operation());
}

std::string Native::Router::Lisp::Ipv6::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Ipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (alt_vrf.is_set || is_set(alt_vrf.yfilter)) leaf_name_data.push_back(alt_vrf.get_name_leafdata());
    if (map_request_source.is_set || is_set(map_request_source.yfilter)) leaf_name_data.push_back(map_request_source.get_name_leafdata());
    if (proxy_etr.is_set || is_set(proxy_etr.yfilter)) leaf_name_data.push_back(proxy_etr.get_name_leafdata());
    if (sgt.is_set || is_set(sgt.yfilter)) leaf_name_data.push_back(sgt.get_name_leafdata());

    auto proxy_itr_name_datas = proxy_itr.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), proxy_itr_name_datas.begin(), proxy_itr_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "database-mapping")
    {
        if(database_mapping == nullptr)
        {
            database_mapping = std::make_shared<Native::Router::Lisp::Ipv6::DatabaseMapping>();
        }
        return database_mapping;
    }

    if(child_yang_name == "distance")
    {
        if(distance == nullptr)
        {
            distance = std::make_shared<Native::Router::Lisp::Ipv6::Distance>();
        }
        return distance;
    }

    if(child_yang_name == "itr")
    {
        if(itr == nullptr)
        {
            itr = std::make_shared<Native::Router::Lisp::Ipv6::Itr>();
        }
        return itr;
    }

    if(child_yang_name == "itr-enable")
    {
        if(itr_enable == nullptr)
        {
            itr_enable = std::make_shared<Native::Router::Lisp::Ipv6::ItrEnable>();
        }
        return itr_enable;
    }

    if(child_yang_name == "etr")
    {
        if(etr == nullptr)
        {
            etr = std::make_shared<Native::Router::Lisp::Ipv6::Etr>();
        }
        return etr;
    }

    if(child_yang_name == "etr-enable")
    {
        if(etr_enable == nullptr)
        {
            etr_enable = std::make_shared<Native::Router::Lisp::Ipv6::EtrEnable>();
        }
        return etr_enable;
    }

    if(child_yang_name == "locator")
    {
        if(locator == nullptr)
        {
            locator = std::make_shared<Native::Router::Lisp::Ipv6::Locator>();
        }
        return locator;
    }

    if(child_yang_name == "map-cache")
    {
        if(map_cache == nullptr)
        {
            map_cache = std::make_shared<Native::Router::Lisp::Ipv6::MapCache>();
        }
        return map_cache;
    }

    if(child_yang_name == "map-cache-limit")
    {
        if(map_cache_limit == nullptr)
        {
            map_cache_limit = std::make_shared<Native::Router::Lisp::Ipv6::MapCacheLimit>();
        }
        return map_cache_limit;
    }

    if(child_yang_name == "map-cache-persistent")
    {
        if(map_cache_persistent == nullptr)
        {
            map_cache_persistent = std::make_shared<Native::Router::Lisp::Ipv6::MapCachePersistent>();
        }
        return map_cache_persistent;
    }

    if(child_yang_name == "map-resolver")
    {
        if(map_resolver == nullptr)
        {
            map_resolver = std::make_shared<Native::Router::Lisp::Ipv6::MapResolver>();
        }
        return map_resolver;
    }

    if(child_yang_name == "map-server")
    {
        if(map_server == nullptr)
        {
            map_server = std::make_shared<Native::Router::Lisp::Ipv6::MapServer>();
        }
        return map_server;
    }

    if(child_yang_name == "path-mtu-discovery")
    {
        if(path_mtu_discovery == nullptr)
        {
            path_mtu_discovery = std::make_shared<Native::Router::Lisp::Ipv6::PathMtuDiscovery>();
        }
        return path_mtu_discovery;
    }

    if(child_yang_name == "route-export")
    {
        if(route_export == nullptr)
        {
            route_export = std::make_shared<Native::Router::Lisp::Ipv6::RouteExport>();
        }
        return route_export;
    }

    if(child_yang_name == "route-import")
    {
        if(route_import == nullptr)
        {
            route_import = std::make_shared<Native::Router::Lisp::Ipv6::RouteImport>();
        }
        return route_import;
    }

    if(child_yang_name == "site-registration")
    {
        if(site_registration == nullptr)
        {
            site_registration = std::make_shared<Native::Router::Lisp::Ipv6::SiteRegistration>();
        }
        return site_registration;
    }

    if(child_yang_name == "solicit-map-request")
    {
        if(solicit_map_request == nullptr)
        {
            solicit_map_request = std::make_shared<Native::Router::Lisp::Ipv6::SolicitMapRequest>();
        }
        return solicit_map_request;
    }

    if(child_yang_name == "use-petr")
    {
        for(auto const & c : use_petr)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Lisp::Ipv6::UsePetr>();
        c->parent = this;
        use_petr.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(database_mapping != nullptr)
    {
        children["database-mapping"] = database_mapping;
    }

    if(distance != nullptr)
    {
        children["distance"] = distance;
    }

    if(itr != nullptr)
    {
        children["itr"] = itr;
    }

    if(itr_enable != nullptr)
    {
        children["itr-enable"] = itr_enable;
    }

    if(etr != nullptr)
    {
        children["etr"] = etr;
    }

    if(etr_enable != nullptr)
    {
        children["etr-enable"] = etr_enable;
    }

    if(locator != nullptr)
    {
        children["locator"] = locator;
    }

    if(map_cache != nullptr)
    {
        children["map-cache"] = map_cache;
    }

    if(map_cache_limit != nullptr)
    {
        children["map-cache-limit"] = map_cache_limit;
    }

    if(map_cache_persistent != nullptr)
    {
        children["map-cache-persistent"] = map_cache_persistent;
    }

    if(map_resolver != nullptr)
    {
        children["map-resolver"] = map_resolver;
    }

    if(map_server != nullptr)
    {
        children["map-server"] = map_server;
    }

    if(path_mtu_discovery != nullptr)
    {
        children["path-mtu-discovery"] = path_mtu_discovery;
    }

    if(route_export != nullptr)
    {
        children["route-export"] = route_export;
    }

    if(route_import != nullptr)
    {
        children["route-import"] = route_import;
    }

    if(site_registration != nullptr)
    {
        children["site-registration"] = site_registration;
    }

    if(solicit_map_request != nullptr)
    {
        children["solicit-map-request"] = solicit_map_request;
    }

    for (auto const & c : use_petr)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Lisp::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "alt-vrf")
    {
        alt_vrf = value;
        alt_vrf.value_namespace = name_space;
        alt_vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "map-request-source")
    {
        map_request_source = value;
        map_request_source.value_namespace = name_space;
        map_request_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "proxy-etr")
    {
        proxy_etr = value;
        proxy_etr.value_namespace = name_space;
        proxy_etr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "proxy-itr")
    {
        proxy_itr.append(value);
    }
    if(value_path == "sgt")
    {
        sgt = value;
        sgt.value_namespace = name_space;
        sgt.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "alt-vrf")
    {
        alt_vrf.yfilter = yfilter;
    }
    if(value_path == "map-request-source")
    {
        map_request_source.yfilter = yfilter;
    }
    if(value_path == "proxy-etr")
    {
        proxy_etr.yfilter = yfilter;
    }
    if(value_path == "proxy-itr")
    {
        proxy_itr.yfilter = yfilter;
    }
    if(value_path == "sgt")
    {
        sgt.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "database-mapping" || name == "distance" || name == "itr" || name == "itr-enable" || name == "etr" || name == "etr-enable" || name == "locator" || name == "map-cache" || name == "map-cache-limit" || name == "map-cache-persistent" || name == "map-resolver" || name == "map-server" || name == "path-mtu-discovery" || name == "route-export" || name == "route-import" || name == "site-registration" || name == "solicit-map-request" || name == "use-petr" || name == "alt-vrf" || name == "map-request-source" || name == "proxy-etr" || name == "proxy-itr" || name == "sgt")
        return true;
    return false;
}

Native::Router::Lisp::Ipv6::DatabaseMapping::DatabaseMapping()
    :
    limit(std::make_shared<Native::Router::Lisp::Ipv6::DatabaseMapping::Limit>())
{
    limit->parent = this;

    yang_name = "database-mapping"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::Ipv6::DatabaseMapping::~DatabaseMapping()
{
}

bool Native::Router::Lisp::Ipv6::DatabaseMapping::has_data() const
{
    return (limit !=  nullptr && limit->has_data());
}

bool Native::Router::Lisp::Ipv6::DatabaseMapping::has_operation() const
{
    return is_set(yfilter)
	|| (limit !=  nullptr && limit->has_operation());
}

std::string Native::Router::Lisp::Ipv6::DatabaseMapping::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/ipv6/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Ipv6::DatabaseMapping::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database-mapping";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Ipv6::DatabaseMapping::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Ipv6::DatabaseMapping::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "limit")
    {
        if(limit == nullptr)
        {
            limit = std::make_shared<Native::Router::Lisp::Ipv6::DatabaseMapping::Limit>();
        }
        return limit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Ipv6::DatabaseMapping::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(limit != nullptr)
    {
        children["limit"] = limit;
    }

    return children;
}

void Native::Router::Lisp::Ipv6::DatabaseMapping::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Lisp::Ipv6::DatabaseMapping::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Lisp::Ipv6::DatabaseMapping::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "limit")
        return true;
    return false;
}

Native::Router::Lisp::Ipv6::DatabaseMapping::Limit::Limit()
    :
    dynamic{YType::uint32, "dynamic"},
    warning_threshold{YType::uint8, "warning-threshold"}
{

    yang_name = "limit"; yang_parent_name = "database-mapping"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::Ipv6::DatabaseMapping::Limit::~Limit()
{
}

bool Native::Router::Lisp::Ipv6::DatabaseMapping::Limit::has_data() const
{
    return dynamic.is_set
	|| warning_threshold.is_set;
}

bool Native::Router::Lisp::Ipv6::DatabaseMapping::Limit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dynamic.yfilter)
	|| ydk::is_set(warning_threshold.yfilter);
}

std::string Native::Router::Lisp::Ipv6::DatabaseMapping::Limit::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/ipv6/database-mapping/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Ipv6::DatabaseMapping::Limit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Ipv6::DatabaseMapping::Limit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dynamic.is_set || is_set(dynamic.yfilter)) leaf_name_data.push_back(dynamic.get_name_leafdata());
    if (warning_threshold.is_set || is_set(warning_threshold.yfilter)) leaf_name_data.push_back(warning_threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Ipv6::DatabaseMapping::Limit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Ipv6::DatabaseMapping::Limit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Ipv6::DatabaseMapping::Limit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dynamic")
    {
        dynamic = value;
        dynamic.value_namespace = name_space;
        dynamic.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold = value;
        warning_threshold.value_namespace = name_space;
        warning_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Ipv6::DatabaseMapping::Limit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dynamic")
    {
        dynamic.yfilter = yfilter;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Ipv6::DatabaseMapping::Limit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dynamic" || name == "warning-threshold")
        return true;
    return false;
}

Native::Router::Lisp::Ipv6::Distance::Distance()
    :
    alt{YType::uint8, "alt"},
    dyn_eid{YType::uint8, "dyn-eid"},
    site_registrations{YType::uint8, "site-registrations"}
{

    yang_name = "distance"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::Ipv6::Distance::~Distance()
{
}

bool Native::Router::Lisp::Ipv6::Distance::has_data() const
{
    return alt.is_set
	|| dyn_eid.is_set
	|| site_registrations.is_set;
}

bool Native::Router::Lisp::Ipv6::Distance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(alt.yfilter)
	|| ydk::is_set(dyn_eid.yfilter)
	|| ydk::is_set(site_registrations.yfilter);
}

std::string Native::Router::Lisp::Ipv6::Distance::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/ipv6/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Ipv6::Distance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "distance";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Ipv6::Distance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (alt.is_set || is_set(alt.yfilter)) leaf_name_data.push_back(alt.get_name_leafdata());
    if (dyn_eid.is_set || is_set(dyn_eid.yfilter)) leaf_name_data.push_back(dyn_eid.get_name_leafdata());
    if (site_registrations.is_set || is_set(site_registrations.yfilter)) leaf_name_data.push_back(site_registrations.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Ipv6::Distance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Ipv6::Distance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Ipv6::Distance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "alt")
    {
        alt = value;
        alt.value_namespace = name_space;
        alt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dyn-eid")
    {
        dyn_eid = value;
        dyn_eid.value_namespace = name_space;
        dyn_eid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "site-registrations")
    {
        site_registrations = value;
        site_registrations.value_namespace = name_space;
        site_registrations.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Ipv6::Distance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "alt")
    {
        alt.yfilter = yfilter;
    }
    if(value_path == "dyn-eid")
    {
        dyn_eid.yfilter = yfilter;
    }
    if(value_path == "site-registrations")
    {
        site_registrations.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Ipv6::Distance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "alt" || name == "dyn-eid" || name == "site-registrations")
        return true;
    return false;
}

Native::Router::Lisp::Ipv6::Itr::Itr()
{

    yang_name = "itr"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::Ipv6::Itr::~Itr()
{
}

bool Native::Router::Lisp::Ipv6::Itr::has_data() const
{
    for (std::size_t index=0; index<map_resolver.size(); index++)
    {
        if(map_resolver[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::Lisp::Ipv6::Itr::has_operation() const
{
    for (std::size_t index=0; index<map_resolver.size(); index++)
    {
        if(map_resolver[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Router::Lisp::Ipv6::Itr::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/ipv6/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Ipv6::Itr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "itr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Ipv6::Itr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Ipv6::Itr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "map-resolver")
    {
        for(auto const & c : map_resolver)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Lisp::Ipv6::Itr::MapResolver>();
        c->parent = this;
        map_resolver.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Ipv6::Itr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : map_resolver)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Lisp::Ipv6::Itr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Lisp::Ipv6::Itr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Lisp::Ipv6::Itr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "map-resolver")
        return true;
    return false;
}

Native::Router::Lisp::Ipv6::Itr::MapResolver::MapResolver()
    :
    ip_addr{YType::str, "ip-addr"}
{

    yang_name = "map-resolver"; yang_parent_name = "itr"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::Ipv6::Itr::MapResolver::~MapResolver()
{
}

bool Native::Router::Lisp::Ipv6::Itr::MapResolver::has_data() const
{
    return ip_addr.is_set;
}

bool Native::Router::Lisp::Ipv6::Itr::MapResolver::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip_addr.yfilter);
}

std::string Native::Router::Lisp::Ipv6::Itr::MapResolver::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/ipv6/itr/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Ipv6::Itr::MapResolver::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-resolver" <<"[ip-addr='" <<ip_addr <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Ipv6::Itr::MapResolver::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_addr.is_set || is_set(ip_addr.yfilter)) leaf_name_data.push_back(ip_addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Ipv6::Itr::MapResolver::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Ipv6::Itr::MapResolver::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Ipv6::Itr::MapResolver::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip-addr")
    {
        ip_addr = value;
        ip_addr.value_namespace = name_space;
        ip_addr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Ipv6::Itr::MapResolver::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip-addr")
    {
        ip_addr.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Ipv6::Itr::MapResolver::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-addr")
        return true;
    return false;
}

Native::Router::Lisp::Ipv6::ItrEnable::ItrEnable()
    :
    itr{YType::empty, "itr"}
{

    yang_name = "itr-enable"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::Ipv6::ItrEnable::~ItrEnable()
{
}

bool Native::Router::Lisp::Ipv6::ItrEnable::has_data() const
{
    return itr.is_set;
}

bool Native::Router::Lisp::Ipv6::ItrEnable::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(itr.yfilter);
}

std::string Native::Router::Lisp::Ipv6::ItrEnable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/ipv6/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Ipv6::ItrEnable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "itr-enable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Ipv6::ItrEnable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (itr.is_set || is_set(itr.yfilter)) leaf_name_data.push_back(itr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Ipv6::ItrEnable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Ipv6::ItrEnable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Ipv6::ItrEnable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "itr")
    {
        itr = value;
        itr.value_namespace = name_space;
        itr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Ipv6::ItrEnable::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "itr")
    {
        itr.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Ipv6::ItrEnable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "itr")
        return true;
    return false;
}

Native::Router::Lisp::Ipv6::Etr::Etr()
{

    yang_name = "etr"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::Ipv6::Etr::~Etr()
{
}

bool Native::Router::Lisp::Ipv6::Etr::has_data() const
{
    for (std::size_t index=0; index<map_server.size(); index++)
    {
        if(map_server[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::Lisp::Ipv6::Etr::has_operation() const
{
    for (std::size_t index=0; index<map_server.size(); index++)
    {
        if(map_server[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Router::Lisp::Ipv6::Etr::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/ipv6/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Ipv6::Etr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "etr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Ipv6::Etr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Ipv6::Etr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "map-server")
    {
        for(auto const & c : map_server)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Lisp::Ipv6::Etr::MapServer>();
        c->parent = this;
        map_server.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Ipv6::Etr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : map_server)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Lisp::Ipv6::Etr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Lisp::Ipv6::Etr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Lisp::Ipv6::Etr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "map-server")
        return true;
    return false;
}

Native::Router::Lisp::Ipv6::Etr::MapServer::MapServer()
    :
    ip_addr{YType::str, "ip-addr"},
    proxy_reply{YType::empty, "proxy-reply"}
    	,
    key(std::make_shared<Native::Router::Lisp::Ipv6::Etr::MapServer::Key>())
{
    key->parent = this;

    yang_name = "map-server"; yang_parent_name = "etr"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::Ipv6::Etr::MapServer::~MapServer()
{
}

bool Native::Router::Lisp::Ipv6::Etr::MapServer::has_data() const
{
    return ip_addr.is_set
	|| proxy_reply.is_set
	|| (key !=  nullptr && key->has_data());
}

bool Native::Router::Lisp::Ipv6::Etr::MapServer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip_addr.yfilter)
	|| ydk::is_set(proxy_reply.yfilter)
	|| (key !=  nullptr && key->has_operation());
}

std::string Native::Router::Lisp::Ipv6::Etr::MapServer::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/ipv6/etr/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Ipv6::Etr::MapServer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-server" <<"[ip-addr='" <<ip_addr <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Ipv6::Etr::MapServer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_addr.is_set || is_set(ip_addr.yfilter)) leaf_name_data.push_back(ip_addr.get_name_leafdata());
    if (proxy_reply.is_set || is_set(proxy_reply.yfilter)) leaf_name_data.push_back(proxy_reply.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Ipv6::Etr::MapServer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key")
    {
        if(key == nullptr)
        {
            key = std::make_shared<Native::Router::Lisp::Ipv6::Etr::MapServer::Key>();
        }
        return key;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Ipv6::Etr::MapServer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(key != nullptr)
    {
        children["key"] = key;
    }

    return children;
}

void Native::Router::Lisp::Ipv6::Etr::MapServer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip-addr")
    {
        ip_addr = value;
        ip_addr.value_namespace = name_space;
        ip_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "proxy-reply")
    {
        proxy_reply = value;
        proxy_reply.value_namespace = name_space;
        proxy_reply.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Ipv6::Etr::MapServer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip-addr")
    {
        ip_addr.yfilter = yfilter;
    }
    if(value_path == "proxy-reply")
    {
        proxy_reply.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Ipv6::Etr::MapServer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key" || name == "ip-addr" || name == "proxy-reply")
        return true;
    return false;
}

Native::Router::Lisp::Ipv6::Etr::MapServer::Key::Key()
    :
    key_0{YType::str, "key-0"},
    key_6{YType::str, "key-6"},
    key_7{YType::str, "key-7"},
    pwd{YType::str, "pwd"}
{

    yang_name = "key"; yang_parent_name = "map-server"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Lisp::Ipv6::Etr::MapServer::Key::~Key()
{
}

bool Native::Router::Lisp::Ipv6::Etr::MapServer::Key::has_data() const
{
    return key_0.is_set
	|| key_6.is_set
	|| key_7.is_set
	|| pwd.is_set;
}

bool Native::Router::Lisp::Ipv6::Etr::MapServer::Key::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(key_0.yfilter)
	|| ydk::is_set(key_6.yfilter)
	|| ydk::is_set(key_7.yfilter)
	|| ydk::is_set(pwd.yfilter);
}

std::string Native::Router::Lisp::Ipv6::Etr::MapServer::Key::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Ipv6::Etr::MapServer::Key::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key_0.is_set || is_set(key_0.yfilter)) leaf_name_data.push_back(key_0.get_name_leafdata());
    if (key_6.is_set || is_set(key_6.yfilter)) leaf_name_data.push_back(key_6.get_name_leafdata());
    if (key_7.is_set || is_set(key_7.yfilter)) leaf_name_data.push_back(key_7.get_name_leafdata());
    if (pwd.is_set || is_set(pwd.yfilter)) leaf_name_data.push_back(pwd.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Ipv6::Etr::MapServer::Key::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Ipv6::Etr::MapServer::Key::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Ipv6::Etr::MapServer::Key::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "key-0")
    {
        key_0 = value;
        key_0.value_namespace = name_space;
        key_0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key-6")
    {
        key_6 = value;
        key_6.value_namespace = name_space;
        key_6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key-7")
    {
        key_7 = value;
        key_7.value_namespace = name_space;
        key_7.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pwd")
    {
        pwd = value;
        pwd.value_namespace = name_space;
        pwd.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Ipv6::Etr::MapServer::Key::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "key-0")
    {
        key_0.yfilter = yfilter;
    }
    if(value_path == "key-6")
    {
        key_6.yfilter = yfilter;
    }
    if(value_path == "key-7")
    {
        key_7.yfilter = yfilter;
    }
    if(value_path == "pwd")
    {
        pwd.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Ipv6::Etr::MapServer::Key::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key-0" || name == "key-6" || name == "key-7" || name == "pwd")
        return true;
    return false;
}

Native::Router::Lisp::Ipv6::EtrEnable::EtrEnable()
    :
    etr{YType::empty, "etr"}
{

    yang_name = "etr-enable"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::Ipv6::EtrEnable::~EtrEnable()
{
}

bool Native::Router::Lisp::Ipv6::EtrEnable::has_data() const
{
    return etr.is_set;
}

bool Native::Router::Lisp::Ipv6::EtrEnable::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(etr.yfilter);
}

std::string Native::Router::Lisp::Ipv6::EtrEnable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/ipv6/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Ipv6::EtrEnable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "etr-enable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Ipv6::EtrEnable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (etr.is_set || is_set(etr.yfilter)) leaf_name_data.push_back(etr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Ipv6::EtrEnable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Ipv6::EtrEnable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Ipv6::EtrEnable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "etr")
    {
        etr = value;
        etr.value_namespace = name_space;
        etr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Ipv6::EtrEnable::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "etr")
    {
        etr.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Ipv6::EtrEnable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "etr")
        return true;
    return false;
}

Native::Router::Lisp::Ipv6::Locator::Locator()
    :
    reachability(std::make_shared<Native::Router::Lisp::Ipv6::Locator::Reachability>())
{
    reachability->parent = this;

    yang_name = "locator"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::Ipv6::Locator::~Locator()
{
}

bool Native::Router::Lisp::Ipv6::Locator::has_data() const
{
    return (reachability !=  nullptr && reachability->has_data());
}

bool Native::Router::Lisp::Ipv6::Locator::has_operation() const
{
    return is_set(yfilter)
	|| (reachability !=  nullptr && reachability->has_operation());
}

std::string Native::Router::Lisp::Ipv6::Locator::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/ipv6/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Ipv6::Locator::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "locator";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Ipv6::Locator::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Ipv6::Locator::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "reachability")
    {
        if(reachability == nullptr)
        {
            reachability = std::make_shared<Native::Router::Lisp::Ipv6::Locator::Reachability>();
        }
        return reachability;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Ipv6::Locator::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(reachability != nullptr)
    {
        children["reachability"] = reachability;
    }

    return children;
}

void Native::Router::Lisp::Ipv6::Locator::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Lisp::Ipv6::Locator::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Lisp::Ipv6::Locator::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reachability")
        return true;
    return false;
}

Native::Router::Lisp::Ipv6::Locator::Reachability::Reachability()
    :
    exclude_default{YType::empty, "exclude-default"}
{

    yang_name = "reachability"; yang_parent_name = "locator"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::Ipv6::Locator::Reachability::~Reachability()
{
}

bool Native::Router::Lisp::Ipv6::Locator::Reachability::has_data() const
{
    return exclude_default.is_set;
}

bool Native::Router::Lisp::Ipv6::Locator::Reachability::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(exclude_default.yfilter);
}

std::string Native::Router::Lisp::Ipv6::Locator::Reachability::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/ipv6/locator/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Ipv6::Locator::Reachability::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reachability";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Ipv6::Locator::Reachability::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (exclude_default.is_set || is_set(exclude_default.yfilter)) leaf_name_data.push_back(exclude_default.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Ipv6::Locator::Reachability::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Ipv6::Locator::Reachability::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Ipv6::Locator::Reachability::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "exclude-default")
    {
        exclude_default = value;
        exclude_default.value_namespace = name_space;
        exclude_default.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Ipv6::Locator::Reachability::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "exclude-default")
    {
        exclude_default.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Ipv6::Locator::Reachability::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "exclude-default")
        return true;
    return false;
}

Native::Router::Lisp::Ipv6::MapCache::MapCache()
    :
    site_registration{YType::empty, "site-registration"}
{

    yang_name = "map-cache"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::Ipv6::MapCache::~MapCache()
{
}

bool Native::Router::Lisp::Ipv6::MapCache::has_data() const
{
    return site_registration.is_set;
}

bool Native::Router::Lisp::Ipv6::MapCache::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(site_registration.yfilter);
}

std::string Native::Router::Lisp::Ipv6::MapCache::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/ipv6/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Ipv6::MapCache::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-cache";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Ipv6::MapCache::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (site_registration.is_set || is_set(site_registration.yfilter)) leaf_name_data.push_back(site_registration.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Ipv6::MapCache::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Ipv6::MapCache::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Ipv6::MapCache::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "site-registration")
    {
        site_registration = value;
        site_registration.value_namespace = name_space;
        site_registration.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Ipv6::MapCache::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "site-registration")
    {
        site_registration.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Ipv6::MapCache::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "site-registration")
        return true;
    return false;
}

Native::Router::Lisp::Ipv6::MapCacheLimit::MapCacheLimit()
    :
    max_map_cache_entries{YType::uint32, "max-map-cache-entries"},
    reserve_list{YType::str, "reserve-list"},
    warning_threshold{YType::uint8, "warning-threshold"}
{

    yang_name = "map-cache-limit"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::Ipv6::MapCacheLimit::~MapCacheLimit()
{
}

bool Native::Router::Lisp::Ipv6::MapCacheLimit::has_data() const
{
    return max_map_cache_entries.is_set
	|| reserve_list.is_set
	|| warning_threshold.is_set;
}

bool Native::Router::Lisp::Ipv6::MapCacheLimit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_map_cache_entries.yfilter)
	|| ydk::is_set(reserve_list.yfilter)
	|| ydk::is_set(warning_threshold.yfilter);
}

std::string Native::Router::Lisp::Ipv6::MapCacheLimit::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/ipv6/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Ipv6::MapCacheLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-cache-limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Ipv6::MapCacheLimit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_map_cache_entries.is_set || is_set(max_map_cache_entries.yfilter)) leaf_name_data.push_back(max_map_cache_entries.get_name_leafdata());
    if (reserve_list.is_set || is_set(reserve_list.yfilter)) leaf_name_data.push_back(reserve_list.get_name_leafdata());
    if (warning_threshold.is_set || is_set(warning_threshold.yfilter)) leaf_name_data.push_back(warning_threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Ipv6::MapCacheLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Ipv6::MapCacheLimit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Ipv6::MapCacheLimit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-map-cache-entries")
    {
        max_map_cache_entries = value;
        max_map_cache_entries.value_namespace = name_space;
        max_map_cache_entries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reserve-list")
    {
        reserve_list = value;
        reserve_list.value_namespace = name_space;
        reserve_list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold = value;
        warning_threshold.value_namespace = name_space;
        warning_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Ipv6::MapCacheLimit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-map-cache-entries")
    {
        max_map_cache_entries.yfilter = yfilter;
    }
    if(value_path == "reserve-list")
    {
        reserve_list.yfilter = yfilter;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Ipv6::MapCacheLimit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-map-cache-entries" || name == "reserve-list" || name == "warning-threshold")
        return true;
    return false;
}

Native::Router::Lisp::Ipv6::MapCachePersistent::MapCachePersistent()
    :
    interval{YType::uint16, "interval"}
{

    yang_name = "map-cache-persistent"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::Ipv6::MapCachePersistent::~MapCachePersistent()
{
}

bool Native::Router::Lisp::Ipv6::MapCachePersistent::has_data() const
{
    return interval.is_set;
}

bool Native::Router::Lisp::Ipv6::MapCachePersistent::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interval.yfilter);
}

std::string Native::Router::Lisp::Ipv6::MapCachePersistent::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/ipv6/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Ipv6::MapCachePersistent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-cache-persistent";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Ipv6::MapCachePersistent::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Ipv6::MapCachePersistent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Ipv6::MapCachePersistent::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Ipv6::MapCachePersistent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Ipv6::MapCachePersistent::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Ipv6::MapCachePersistent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interval")
        return true;
    return false;
}

Native::Router::Lisp::Ipv6::MapResolver::MapResolver()
    :
    map_request(std::make_shared<Native::Router::Lisp::Ipv6::MapResolver::MapRequest>())
{
    map_request->parent = this;

    yang_name = "map-resolver"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::Ipv6::MapResolver::~MapResolver()
{
}

bool Native::Router::Lisp::Ipv6::MapResolver::has_data() const
{
    return (map_request !=  nullptr && map_request->has_data());
}

bool Native::Router::Lisp::Ipv6::MapResolver::has_operation() const
{
    return is_set(yfilter)
	|| (map_request !=  nullptr && map_request->has_operation());
}

std::string Native::Router::Lisp::Ipv6::MapResolver::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/ipv6/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Ipv6::MapResolver::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-resolver";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Ipv6::MapResolver::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Ipv6::MapResolver::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "map-request")
    {
        if(map_request == nullptr)
        {
            map_request = std::make_shared<Native::Router::Lisp::Ipv6::MapResolver::MapRequest>();
        }
        return map_request;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Ipv6::MapResolver::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(map_request != nullptr)
    {
        children["map-request"] = map_request;
    }

    return children;
}

void Native::Router::Lisp::Ipv6::MapResolver::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Lisp::Ipv6::MapResolver::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Lisp::Ipv6::MapResolver::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "map-request")
        return true;
    return false;
}

Native::Router::Lisp::Ipv6::MapResolver::MapRequest::MapRequest()
    :
    validate(std::make_shared<Native::Router::Lisp::Ipv6::MapResolver::MapRequest::Validate>())
{
    validate->parent = this;

    yang_name = "map-request"; yang_parent_name = "map-resolver"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::Ipv6::MapResolver::MapRequest::~MapRequest()
{
}

bool Native::Router::Lisp::Ipv6::MapResolver::MapRequest::has_data() const
{
    return (validate !=  nullptr && validate->has_data());
}

bool Native::Router::Lisp::Ipv6::MapResolver::MapRequest::has_operation() const
{
    return is_set(yfilter)
	|| (validate !=  nullptr && validate->has_operation());
}

std::string Native::Router::Lisp::Ipv6::MapResolver::MapRequest::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/ipv6/map-resolver/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Ipv6::MapResolver::MapRequest::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-request";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Ipv6::MapResolver::MapRequest::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Ipv6::MapResolver::MapRequest::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "validate")
    {
        if(validate == nullptr)
        {
            validate = std::make_shared<Native::Router::Lisp::Ipv6::MapResolver::MapRequest::Validate>();
        }
        return validate;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Ipv6::MapResolver::MapRequest::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(validate != nullptr)
    {
        children["validate"] = validate;
    }

    return children;
}

void Native::Router::Lisp::Ipv6::MapResolver::MapRequest::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Lisp::Ipv6::MapResolver::MapRequest::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Lisp::Ipv6::MapResolver::MapRequest::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "validate")
        return true;
    return false;
}

Native::Router::Lisp::Ipv6::MapResolver::MapRequest::Validate::Validate()
    :
    source(std::make_shared<Native::Router::Lisp::Ipv6::MapResolver::MapRequest::Validate::Source>())
{
    source->parent = this;

    yang_name = "validate"; yang_parent_name = "map-request"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::Ipv6::MapResolver::MapRequest::Validate::~Validate()
{
}

bool Native::Router::Lisp::Ipv6::MapResolver::MapRequest::Validate::has_data() const
{
    return (source !=  nullptr && source->has_data());
}

bool Native::Router::Lisp::Ipv6::MapResolver::MapRequest::Validate::has_operation() const
{
    return is_set(yfilter)
	|| (source !=  nullptr && source->has_operation());
}

std::string Native::Router::Lisp::Ipv6::MapResolver::MapRequest::Validate::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/ipv6/map-resolver/map-request/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Ipv6::MapResolver::MapRequest::Validate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "validate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Ipv6::MapResolver::MapRequest::Validate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Ipv6::MapResolver::MapRequest::Validate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "source")
    {
        if(source == nullptr)
        {
            source = std::make_shared<Native::Router::Lisp::Ipv6::MapResolver::MapRequest::Validate::Source>();
        }
        return source;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Ipv6::MapResolver::MapRequest::Validate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(source != nullptr)
    {
        children["source"] = source;
    }

    return children;
}

void Native::Router::Lisp::Ipv6::MapResolver::MapRequest::Validate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Lisp::Ipv6::MapResolver::MapRequest::Validate::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Lisp::Ipv6::MapResolver::MapRequest::Validate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source")
        return true;
    return false;
}

Native::Router::Lisp::Ipv6::MapResolver::MapRequest::Validate::Source::Source()
    :
    list{YType::empty, "list"},
    registered{YType::empty, "registered"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "source"; yang_parent_name = "validate"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::Ipv6::MapResolver::MapRequest::Validate::Source::~Source()
{
}

bool Native::Router::Lisp::Ipv6::MapResolver::MapRequest::Validate::Source::has_data() const
{
    return list.is_set
	|| registered.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool Native::Router::Lisp::Ipv6::MapResolver::MapRequest::Validate::Source::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(list.yfilter)
	|| ydk::is_set(registered.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string Native::Router::Lisp::Ipv6::MapResolver::MapRequest::Validate::Source::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/ipv6/map-resolver/map-request/validate/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Ipv6::MapResolver::MapRequest::Validate::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Ipv6::MapResolver::MapRequest::Validate::Source::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (list.is_set || is_set(list.yfilter)) leaf_name_data.push_back(list.get_name_leafdata());
    if (registered.is_set || is_set(registered.yfilter)) leaf_name_data.push_back(registered.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Ipv6::MapResolver::MapRequest::Validate::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Ipv6::MapResolver::MapRequest::Validate::Source::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Ipv6::MapResolver::MapRequest::Validate::Source::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "list")
    {
        list = value;
        list.value_namespace = name_space;
        list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "registered")
    {
        registered = value;
        registered.value_namespace = name_space;
        registered.value_namespace_prefix = name_space_prefix;
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

void Native::Router::Lisp::Ipv6::MapResolver::MapRequest::Validate::Source::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "list")
    {
        list.yfilter = yfilter;
    }
    if(value_path == "registered")
    {
        registered.yfilter = yfilter;
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

bool Native::Router::Lisp::Ipv6::MapResolver::MapRequest::Validate::Source::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "list" || name == "registered" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Native::Router::Lisp::Ipv6::MapServer::MapServer()
    :
    map_register(std::make_shared<Native::Router::Lisp::Ipv6::MapServer::MapRegister>())
{
    map_register->parent = this;

    yang_name = "map-server"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::Ipv6::MapServer::~MapServer()
{
}

bool Native::Router::Lisp::Ipv6::MapServer::has_data() const
{
    return (map_register !=  nullptr && map_register->has_data());
}

bool Native::Router::Lisp::Ipv6::MapServer::has_operation() const
{
    return is_set(yfilter)
	|| (map_register !=  nullptr && map_register->has_operation());
}

std::string Native::Router::Lisp::Ipv6::MapServer::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/ipv6/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Ipv6::MapServer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-server";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Ipv6::MapServer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Ipv6::MapServer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "map-register")
    {
        if(map_register == nullptr)
        {
            map_register = std::make_shared<Native::Router::Lisp::Ipv6::MapServer::MapRegister>();
        }
        return map_register;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Ipv6::MapServer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(map_register != nullptr)
    {
        children["map-register"] = map_register;
    }

    return children;
}

void Native::Router::Lisp::Ipv6::MapServer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Lisp::Ipv6::MapServer::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Lisp::Ipv6::MapServer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "map-register")
        return true;
    return false;
}

Native::Router::Lisp::Ipv6::MapServer::MapRegister::MapRegister()
    :
    validate(std::make_shared<Native::Router::Lisp::Ipv6::MapServer::MapRegister::Validate>())
{
    validate->parent = this;

    yang_name = "map-register"; yang_parent_name = "map-server"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::Ipv6::MapServer::MapRegister::~MapRegister()
{
}

bool Native::Router::Lisp::Ipv6::MapServer::MapRegister::has_data() const
{
    return (validate !=  nullptr && validate->has_data());
}

bool Native::Router::Lisp::Ipv6::MapServer::MapRegister::has_operation() const
{
    return is_set(yfilter)
	|| (validate !=  nullptr && validate->has_operation());
}

std::string Native::Router::Lisp::Ipv6::MapServer::MapRegister::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/ipv6/map-server/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Ipv6::MapServer::MapRegister::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-register";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Ipv6::MapServer::MapRegister::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Ipv6::MapServer::MapRegister::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "validate")
    {
        if(validate == nullptr)
        {
            validate = std::make_shared<Native::Router::Lisp::Ipv6::MapServer::MapRegister::Validate>();
        }
        return validate;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Ipv6::MapServer::MapRegister::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(validate != nullptr)
    {
        children["validate"] = validate;
    }

    return children;
}

void Native::Router::Lisp::Ipv6::MapServer::MapRegister::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Lisp::Ipv6::MapServer::MapRegister::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Lisp::Ipv6::MapServer::MapRegister::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "validate")
        return true;
    return false;
}

Native::Router::Lisp::Ipv6::MapServer::MapRegister::Validate::Validate()
    :
    source(std::make_shared<Native::Router::Lisp::Ipv6::MapServer::MapRegister::Validate::Source>())
{
    source->parent = this;

    yang_name = "validate"; yang_parent_name = "map-register"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::Ipv6::MapServer::MapRegister::Validate::~Validate()
{
}

bool Native::Router::Lisp::Ipv6::MapServer::MapRegister::Validate::has_data() const
{
    return (source !=  nullptr && source->has_data());
}

bool Native::Router::Lisp::Ipv6::MapServer::MapRegister::Validate::has_operation() const
{
    return is_set(yfilter)
	|| (source !=  nullptr && source->has_operation());
}

std::string Native::Router::Lisp::Ipv6::MapServer::MapRegister::Validate::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/ipv6/map-server/map-register/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Ipv6::MapServer::MapRegister::Validate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "validate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Ipv6::MapServer::MapRegister::Validate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Ipv6::MapServer::MapRegister::Validate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "source")
    {
        if(source == nullptr)
        {
            source = std::make_shared<Native::Router::Lisp::Ipv6::MapServer::MapRegister::Validate::Source>();
        }
        return source;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Ipv6::MapServer::MapRegister::Validate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(source != nullptr)
    {
        children["source"] = source;
    }

    return children;
}

void Native::Router::Lisp::Ipv6::MapServer::MapRegister::Validate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Lisp::Ipv6::MapServer::MapRegister::Validate::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Lisp::Ipv6::MapServer::MapRegister::Validate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source")
        return true;
    return false;
}

Native::Router::Lisp::Ipv6::MapServer::MapRegister::Validate::Source::Source()
    :
    allowed_locator{YType::empty, "allowed-locator"}
{

    yang_name = "source"; yang_parent_name = "validate"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::Ipv6::MapServer::MapRegister::Validate::Source::~Source()
{
}

bool Native::Router::Lisp::Ipv6::MapServer::MapRegister::Validate::Source::has_data() const
{
    return allowed_locator.is_set;
}

bool Native::Router::Lisp::Ipv6::MapServer::MapRegister::Validate::Source::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(allowed_locator.yfilter);
}

std::string Native::Router::Lisp::Ipv6::MapServer::MapRegister::Validate::Source::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/ipv6/map-server/map-register/validate/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Ipv6::MapServer::MapRegister::Validate::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Ipv6::MapServer::MapRegister::Validate::Source::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (allowed_locator.is_set || is_set(allowed_locator.yfilter)) leaf_name_data.push_back(allowed_locator.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Ipv6::MapServer::MapRegister::Validate::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Ipv6::MapServer::MapRegister::Validate::Source::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Ipv6::MapServer::MapRegister::Validate::Source::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "allowed-locator")
    {
        allowed_locator = value;
        allowed_locator.value_namespace = name_space;
        allowed_locator.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Ipv6::MapServer::MapRegister::Validate::Source::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "allowed-locator")
    {
        allowed_locator.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Ipv6::MapServer::MapRegister::Validate::Source::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "allowed-locator")
        return true;
    return false;
}

Native::Router::Lisp::Ipv6::PathMtuDiscovery::PathMtuDiscovery()
    :
    max{YType::uint16, "max"},
    min{YType::uint16, "min"}
{

    yang_name = "path-mtu-discovery"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::Ipv6::PathMtuDiscovery::~PathMtuDiscovery()
{
}

bool Native::Router::Lisp::Ipv6::PathMtuDiscovery::has_data() const
{
    return max.is_set
	|| min.is_set;
}

bool Native::Router::Lisp::Ipv6::PathMtuDiscovery::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max.yfilter)
	|| ydk::is_set(min.yfilter);
}

std::string Native::Router::Lisp::Ipv6::PathMtuDiscovery::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/ipv6/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Ipv6::PathMtuDiscovery::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-mtu-discovery";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Ipv6::PathMtuDiscovery::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());
    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Ipv6::PathMtuDiscovery::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Ipv6::PathMtuDiscovery::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Ipv6::PathMtuDiscovery::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min")
    {
        min = value;
        min.value_namespace = name_space;
        min.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Ipv6::PathMtuDiscovery::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
    if(value_path == "min")
    {
        min.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Ipv6::PathMtuDiscovery::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max" || name == "min")
        return true;
    return false;
}

Native::Router::Lisp::Ipv6::RouteExport::RouteExport()
    :
    site_registrations{YType::empty, "site-registrations"},
    away_eids{YType::empty, "away-eids"}
{

    yang_name = "route-export"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::Ipv6::RouteExport::~RouteExport()
{
}

bool Native::Router::Lisp::Ipv6::RouteExport::has_data() const
{
    return site_registrations.is_set
	|| away_eids.is_set;
}

bool Native::Router::Lisp::Ipv6::RouteExport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(site_registrations.yfilter)
	|| ydk::is_set(away_eids.yfilter);
}

std::string Native::Router::Lisp::Ipv6::RouteExport::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/ipv6/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Ipv6::RouteExport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-export";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Ipv6::RouteExport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (site_registrations.is_set || is_set(site_registrations.yfilter)) leaf_name_data.push_back(site_registrations.get_name_leafdata());
    if (away_eids.is_set || is_set(away_eids.yfilter)) leaf_name_data.push_back(away_eids.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Ipv6::RouteExport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Ipv6::RouteExport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Ipv6::RouteExport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "site-registrations")
    {
        site_registrations = value;
        site_registrations.value_namespace = name_space;
        site_registrations.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "away-eids")
    {
        away_eids = value;
        away_eids.value_namespace = name_space;
        away_eids.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Ipv6::RouteExport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "site-registrations")
    {
        site_registrations.yfilter = yfilter;
    }
    if(value_path == "away-eids")
    {
        away_eids.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Ipv6::RouteExport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "site-registrations" || name == "away-eids")
        return true;
    return false;
}

Native::Router::Lisp::Ipv6::RouteImport::RouteImport()
    :
    database(std::make_shared<Native::Router::Lisp::Ipv6::RouteImport::Database>())
	,map_cache(std::make_shared<Native::Router::Lisp::Ipv6::RouteImport::MapCache>())
{
    database->parent = this;
    map_cache->parent = this;

    yang_name = "route-import"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::Ipv6::RouteImport::~RouteImport()
{
}

bool Native::Router::Lisp::Ipv6::RouteImport::has_data() const
{
    return (database !=  nullptr && database->has_data())
	|| (map_cache !=  nullptr && map_cache->has_data());
}

bool Native::Router::Lisp::Ipv6::RouteImport::has_operation() const
{
    return is_set(yfilter)
	|| (database !=  nullptr && database->has_operation())
	|| (map_cache !=  nullptr && map_cache->has_operation());
}

std::string Native::Router::Lisp::Ipv6::RouteImport::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/ipv6/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Ipv6::RouteImport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-import";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Ipv6::RouteImport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Ipv6::RouteImport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "database")
    {
        if(database == nullptr)
        {
            database = std::make_shared<Native::Router::Lisp::Ipv6::RouteImport::Database>();
        }
        return database;
    }

    if(child_yang_name == "map-cache")
    {
        if(map_cache == nullptr)
        {
            map_cache = std::make_shared<Native::Router::Lisp::Ipv6::RouteImport::MapCache>();
        }
        return map_cache;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Ipv6::RouteImport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(database != nullptr)
    {
        children["database"] = database;
    }

    if(map_cache != nullptr)
    {
        children["map-cache"] = map_cache;
    }

    return children;
}

void Native::Router::Lisp::Ipv6::RouteImport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Lisp::Ipv6::RouteImport::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Lisp::Ipv6::RouteImport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "database" || name == "map-cache")
        return true;
    return false;
}

Native::Router::Lisp::Ipv6::RouteImport::Database::Database()
    :
    connected(std::make_shared<Native::Router::Lisp::Ipv6::RouteImport::Database::Connected>())
	,maximum_prefix(std::make_shared<Native::Router::Lisp::Ipv6::RouteImport::Database::MaximumPrefix>())
	,rip(std::make_shared<Native::Router::Lisp::Ipv6::RouteImport::Database::Rip>())
	,static_(std::make_shared<Native::Router::Lisp::Ipv6::RouteImport::Database::Static_>())
{
    connected->parent = this;
    maximum_prefix->parent = this;
    rip->parent = this;
    static_->parent = this;

    yang_name = "database"; yang_parent_name = "route-import"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::Ipv6::RouteImport::Database::~Database()
{
}

bool Native::Router::Lisp::Ipv6::RouteImport::Database::has_data() const
{
    for (std::size_t index=0; index<bgp.size(); index++)
    {
        if(bgp[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<eigrp.size(); index++)
    {
        if(eigrp[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<isis.size(); index++)
    {
        if(isis[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ospf.size(); index++)
    {
        if(ospf[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ospfv3.size(); index++)
    {
        if(ospfv3[index]->has_data())
            return true;
    }
    return (connected !=  nullptr && connected->has_data())
	|| (maximum_prefix !=  nullptr && maximum_prefix->has_data())
	|| (rip !=  nullptr && rip->has_data())
	|| (static_ !=  nullptr && static_->has_data());
}

bool Native::Router::Lisp::Ipv6::RouteImport::Database::has_operation() const
{
    for (std::size_t index=0; index<bgp.size(); index++)
    {
        if(bgp[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<eigrp.size(); index++)
    {
        if(eigrp[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<isis.size(); index++)
    {
        if(isis[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ospf.size(); index++)
    {
        if(ospf[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ospfv3.size(); index++)
    {
        if(ospfv3[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (connected !=  nullptr && connected->has_operation())
	|| (maximum_prefix !=  nullptr && maximum_prefix->has_operation())
	|| (rip !=  nullptr && rip->has_operation())
	|| (static_ !=  nullptr && static_->has_operation());
}

std::string Native::Router::Lisp::Ipv6::RouteImport::Database::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/ipv6/route-import/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Ipv6::RouteImport::Database::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Ipv6::RouteImport::Database::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Ipv6::RouteImport::Database::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bgp")
    {
        for(auto const & c : bgp)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Lisp::Ipv6::RouteImport::Database::Bgp>();
        c->parent = this;
        bgp.push_back(c);
        return c;
    }

    if(child_yang_name == "connected")
    {
        if(connected == nullptr)
        {
            connected = std::make_shared<Native::Router::Lisp::Ipv6::RouteImport::Database::Connected>();
        }
        return connected;
    }

    if(child_yang_name == "eigrp")
    {
        for(auto const & c : eigrp)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Lisp::Ipv6::RouteImport::Database::Eigrp>();
        c->parent = this;
        eigrp.push_back(c);
        return c;
    }

    if(child_yang_name == "isis")
    {
        for(auto const & c : isis)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Lisp::Ipv6::RouteImport::Database::Isis>();
        c->parent = this;
        isis.push_back(c);
        return c;
    }

    if(child_yang_name == "maximum-prefix")
    {
        if(maximum_prefix == nullptr)
        {
            maximum_prefix = std::make_shared<Native::Router::Lisp::Ipv6::RouteImport::Database::MaximumPrefix>();
        }
        return maximum_prefix;
    }

    if(child_yang_name == "ospf")
    {
        for(auto const & c : ospf)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Lisp::Ipv6::RouteImport::Database::Ospf>();
        c->parent = this;
        ospf.push_back(c);
        return c;
    }

    if(child_yang_name == "ospfv3")
    {
        for(auto const & c : ospfv3)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Lisp::Ipv6::RouteImport::Database::Ospfv3>();
        c->parent = this;
        ospfv3.push_back(c);
        return c;
    }

    if(child_yang_name == "rip")
    {
        if(rip == nullptr)
        {
            rip = std::make_shared<Native::Router::Lisp::Ipv6::RouteImport::Database::Rip>();
        }
        return rip;
    }

    if(child_yang_name == "static")
    {
        if(static_ == nullptr)
        {
            static_ = std::make_shared<Native::Router::Lisp::Ipv6::RouteImport::Database::Static_>();
        }
        return static_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Ipv6::RouteImport::Database::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bgp)
    {
        children[c->get_segment_path()] = c;
    }

    if(connected != nullptr)
    {
        children["connected"] = connected;
    }

    for (auto const & c : eigrp)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : isis)
    {
        children[c->get_segment_path()] = c;
    }

    if(maximum_prefix != nullptr)
    {
        children["maximum-prefix"] = maximum_prefix;
    }

    for (auto const & c : ospf)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : ospfv3)
    {
        children[c->get_segment_path()] = c;
    }

    if(rip != nullptr)
    {
        children["rip"] = rip;
    }

    if(static_ != nullptr)
    {
        children["static"] = static_;
    }

    return children;
}

void Native::Router::Lisp::Ipv6::RouteImport::Database::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Lisp::Ipv6::RouteImport::Database::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Lisp::Ipv6::RouteImport::Database::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp" || name == "connected" || name == "eigrp" || name == "isis" || name == "maximum-prefix" || name == "ospf" || name == "ospfv3" || name == "rip" || name == "static")
        return true;
    return false;
}

Native::Router::Lisp::Ipv6::RouteImport::Database::Bgp::Bgp()
    :
    id{YType::str, "id"}
    	,
    lisp_ip_route_import(std::make_shared<Native::Router::Lisp::Ipv6::RouteImport::Database::Bgp::LispIpRouteImport>())
{
    lisp_ip_route_import->parent = this;

    yang_name = "bgp"; yang_parent_name = "database"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::Ipv6::RouteImport::Database::Bgp::~Bgp()
{
}

bool Native::Router::Lisp::Ipv6::RouteImport::Database::Bgp::has_data() const
{
    return id.is_set
	|| (lisp_ip_route_import !=  nullptr && lisp_ip_route_import->has_data());
}

bool Native::Router::Lisp::Ipv6::RouteImport::Database::Bgp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| (lisp_ip_route_import !=  nullptr && lisp_ip_route_import->has_operation());
}

std::string Native::Router::Lisp::Ipv6::RouteImport::Database::Bgp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/ipv6/route-import/database/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Ipv6::RouteImport::Database::Bgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Ipv6::RouteImport::Database::Bgp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Ipv6::RouteImport::Database::Bgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lisp-ip-route-import")
    {
        if(lisp_ip_route_import == nullptr)
        {
            lisp_ip_route_import = std::make_shared<Native::Router::Lisp::Ipv6::RouteImport::Database::Bgp::LispIpRouteImport>();
        }
        return lisp_ip_route_import;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Ipv6::RouteImport::Database::Bgp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(lisp_ip_route_import != nullptr)
    {
        children["lisp-ip-route-import"] = lisp_ip_route_import;
    }

    return children;
}

void Native::Router::Lisp::Ipv6::RouteImport::Database::Bgp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Ipv6::RouteImport::Database::Bgp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Ipv6::RouteImport::Database::Bgp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lisp-ip-route-import" || name == "id")
        return true;
    return false;
}

Native::Router::Lisp::Ipv6::RouteImport::Database::Bgp::LispIpRouteImport::LispIpRouteImport()
    :
    route_map{YType::str, "route-map"},
    locator_set{YType::str, "locator-set"}
{

    yang_name = "lisp-ip-route-import"; yang_parent_name = "bgp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Lisp::Ipv6::RouteImport::Database::Bgp::LispIpRouteImport::~LispIpRouteImport()
{
}

bool Native::Router::Lisp::Ipv6::RouteImport::Database::Bgp::LispIpRouteImport::has_data() const
{
    return route_map.is_set
	|| locator_set.is_set;
}

bool Native::Router::Lisp::Ipv6::RouteImport::Database::Bgp::LispIpRouteImport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(locator_set.yfilter);
}

std::string Native::Router::Lisp::Ipv6::RouteImport::Database::Bgp::LispIpRouteImport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lisp-ip-route-import";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Ipv6::RouteImport::Database::Bgp::LispIpRouteImport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (locator_set.is_set || is_set(locator_set.yfilter)) leaf_name_data.push_back(locator_set.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Ipv6::RouteImport::Database::Bgp::LispIpRouteImport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Ipv6::RouteImport::Database::Bgp::LispIpRouteImport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Ipv6::RouteImport::Database::Bgp::LispIpRouteImport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locator-set")
    {
        locator_set = value;
        locator_set.value_namespace = name_space;
        locator_set.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Ipv6::RouteImport::Database::Bgp::LispIpRouteImport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "locator-set")
    {
        locator_set.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Ipv6::RouteImport::Database::Bgp::LispIpRouteImport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-map" || name == "locator-set")
        return true;
    return false;
}

Native::Router::Lisp::Ipv6::RouteImport::Database::Connected::Connected()
    :
    lisp_ip_route_import(std::make_shared<Native::Router::Lisp::Ipv6::RouteImport::Database::Connected::LispIpRouteImport>())
{
    lisp_ip_route_import->parent = this;

    yang_name = "connected"; yang_parent_name = "database"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::Ipv6::RouteImport::Database::Connected::~Connected()
{
}

bool Native::Router::Lisp::Ipv6::RouteImport::Database::Connected::has_data() const
{
    return (lisp_ip_route_import !=  nullptr && lisp_ip_route_import->has_data());
}

bool Native::Router::Lisp::Ipv6::RouteImport::Database::Connected::has_operation() const
{
    return is_set(yfilter)
	|| (lisp_ip_route_import !=  nullptr && lisp_ip_route_import->has_operation());
}

std::string Native::Router::Lisp::Ipv6::RouteImport::Database::Connected::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/ipv6/route-import/database/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Ipv6::RouteImport::Database::Connected::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connected";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Ipv6::RouteImport::Database::Connected::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Ipv6::RouteImport::Database::Connected::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lisp-ip-route-import")
    {
        if(lisp_ip_route_import == nullptr)
        {
            lisp_ip_route_import = std::make_shared<Native::Router::Lisp::Ipv6::RouteImport::Database::Connected::LispIpRouteImport>();
        }
        return lisp_ip_route_import;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Ipv6::RouteImport::Database::Connected::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(lisp_ip_route_import != nullptr)
    {
        children["lisp-ip-route-import"] = lisp_ip_route_import;
    }

    return children;
}

void Native::Router::Lisp::Ipv6::RouteImport::Database::Connected::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Lisp::Ipv6::RouteImport::Database::Connected::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Lisp::Ipv6::RouteImport::Database::Connected::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lisp-ip-route-import")
        return true;
    return false;
}

Native::Router::Lisp::Ipv6::RouteImport::Database::Connected::LispIpRouteImport::LispIpRouteImport()
    :
    route_map{YType::str, "route-map"},
    locator_set{YType::str, "locator-set"}
{

    yang_name = "lisp-ip-route-import"; yang_parent_name = "connected"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::Ipv6::RouteImport::Database::Connected::LispIpRouteImport::~LispIpRouteImport()
{
}

bool Native::Router::Lisp::Ipv6::RouteImport::Database::Connected::LispIpRouteImport::has_data() const
{
    return route_map.is_set
	|| locator_set.is_set;
}

bool Native::Router::Lisp::Ipv6::RouteImport::Database::Connected::LispIpRouteImport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(locator_set.yfilter);
}

std::string Native::Router::Lisp::Ipv6::RouteImport::Database::Connected::LispIpRouteImport::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/ipv6/route-import/database/connected/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Ipv6::RouteImport::Database::Connected::LispIpRouteImport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lisp-ip-route-import";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Ipv6::RouteImport::Database::Connected::LispIpRouteImport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (locator_set.is_set || is_set(locator_set.yfilter)) leaf_name_data.push_back(locator_set.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Ipv6::RouteImport::Database::Connected::LispIpRouteImport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Ipv6::RouteImport::Database::Connected::LispIpRouteImport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Ipv6::RouteImport::Database::Connected::LispIpRouteImport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locator-set")
    {
        locator_set = value;
        locator_set.value_namespace = name_space;
        locator_set.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Ipv6::RouteImport::Database::Connected::LispIpRouteImport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "locator-set")
    {
        locator_set.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Ipv6::RouteImport::Database::Connected::LispIpRouteImport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-map" || name == "locator-set")
        return true;
    return false;
}

Native::Router::Lisp::Ipv6::RouteImport::Database::Eigrp::Eigrp()
    :
    id{YType::uint16, "id"}
    	,
    lisp_ip_route_import(std::make_shared<Native::Router::Lisp::Ipv6::RouteImport::Database::Eigrp::LispIpRouteImport>())
{
    lisp_ip_route_import->parent = this;

    yang_name = "eigrp"; yang_parent_name = "database"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::Ipv6::RouteImport::Database::Eigrp::~Eigrp()
{
}

bool Native::Router::Lisp::Ipv6::RouteImport::Database::Eigrp::has_data() const
{
    return id.is_set
	|| (lisp_ip_route_import !=  nullptr && lisp_ip_route_import->has_data());
}

bool Native::Router::Lisp::Ipv6::RouteImport::Database::Eigrp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| (lisp_ip_route_import !=  nullptr && lisp_ip_route_import->has_operation());
}

std::string Native::Router::Lisp::Ipv6::RouteImport::Database::Eigrp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/ipv6/route-import/database/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Ipv6::RouteImport::Database::Eigrp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eigrp" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Ipv6::RouteImport::Database::Eigrp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Ipv6::RouteImport::Database::Eigrp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lisp-ip-route-import")
    {
        if(lisp_ip_route_import == nullptr)
        {
            lisp_ip_route_import = std::make_shared<Native::Router::Lisp::Ipv6::RouteImport::Database::Eigrp::LispIpRouteImport>();
        }
        return lisp_ip_route_import;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Ipv6::RouteImport::Database::Eigrp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(lisp_ip_route_import != nullptr)
    {
        children["lisp-ip-route-import"] = lisp_ip_route_import;
    }

    return children;
}

void Native::Router::Lisp::Ipv6::RouteImport::Database::Eigrp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Ipv6::RouteImport::Database::Eigrp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Ipv6::RouteImport::Database::Eigrp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lisp-ip-route-import" || name == "id")
        return true;
    return false;
}

Native::Router::Lisp::Ipv6::RouteImport::Database::Eigrp::LispIpRouteImport::LispIpRouteImport()
    :
    route_map{YType::str, "route-map"},
    locator_set{YType::str, "locator-set"}
{

    yang_name = "lisp-ip-route-import"; yang_parent_name = "eigrp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Lisp::Ipv6::RouteImport::Database::Eigrp::LispIpRouteImport::~LispIpRouteImport()
{
}

bool Native::Router::Lisp::Ipv6::RouteImport::Database::Eigrp::LispIpRouteImport::has_data() const
{
    return route_map.is_set
	|| locator_set.is_set;
}

bool Native::Router::Lisp::Ipv6::RouteImport::Database::Eigrp::LispIpRouteImport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(locator_set.yfilter);
}

std::string Native::Router::Lisp::Ipv6::RouteImport::Database::Eigrp::LispIpRouteImport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lisp-ip-route-import";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Ipv6::RouteImport::Database::Eigrp::LispIpRouteImport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (locator_set.is_set || is_set(locator_set.yfilter)) leaf_name_data.push_back(locator_set.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Ipv6::RouteImport::Database::Eigrp::LispIpRouteImport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Ipv6::RouteImport::Database::Eigrp::LispIpRouteImport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Ipv6::RouteImport::Database::Eigrp::LispIpRouteImport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locator-set")
    {
        locator_set = value;
        locator_set.value_namespace = name_space;
        locator_set.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Ipv6::RouteImport::Database::Eigrp::LispIpRouteImport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "locator-set")
    {
        locator_set.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Ipv6::RouteImport::Database::Eigrp::LispIpRouteImport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-map" || name == "locator-set")
        return true;
    return false;
}

Native::Router::Lisp::Ipv6::RouteImport::Database::Isis::Isis()
    :
    id{YType::str, "id"}
    	,
    lisp_ip_route_import(std::make_shared<Native::Router::Lisp::Ipv6::RouteImport::Database::Isis::LispIpRouteImport>())
{
    lisp_ip_route_import->parent = this;

    yang_name = "isis"; yang_parent_name = "database"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::Ipv6::RouteImport::Database::Isis::~Isis()
{
}

bool Native::Router::Lisp::Ipv6::RouteImport::Database::Isis::has_data() const
{
    return id.is_set
	|| (lisp_ip_route_import !=  nullptr && lisp_ip_route_import->has_data());
}

bool Native::Router::Lisp::Ipv6::RouteImport::Database::Isis::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| (lisp_ip_route_import !=  nullptr && lisp_ip_route_import->has_operation());
}

std::string Native::Router::Lisp::Ipv6::RouteImport::Database::Isis::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/ipv6/route-import/database/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Ipv6::RouteImport::Database::Isis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Ipv6::RouteImport::Database::Isis::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Ipv6::RouteImport::Database::Isis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lisp-ip-route-import")
    {
        if(lisp_ip_route_import == nullptr)
        {
            lisp_ip_route_import = std::make_shared<Native::Router::Lisp::Ipv6::RouteImport::Database::Isis::LispIpRouteImport>();
        }
        return lisp_ip_route_import;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Ipv6::RouteImport::Database::Isis::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(lisp_ip_route_import != nullptr)
    {
        children["lisp-ip-route-import"] = lisp_ip_route_import;
    }

    return children;
}

void Native::Router::Lisp::Ipv6::RouteImport::Database::Isis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Ipv6::RouteImport::Database::Isis::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Ipv6::RouteImport::Database::Isis::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lisp-ip-route-import" || name == "id")
        return true;
    return false;
}

Native::Router::Lisp::Ipv6::RouteImport::Database::Isis::LispIpRouteImport::LispIpRouteImport()
    :
    route_map{YType::str, "route-map"},
    locator_set{YType::str, "locator-set"}
{

    yang_name = "lisp-ip-route-import"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Lisp::Ipv6::RouteImport::Database::Isis::LispIpRouteImport::~LispIpRouteImport()
{
}

bool Native::Router::Lisp::Ipv6::RouteImport::Database::Isis::LispIpRouteImport::has_data() const
{
    return route_map.is_set
	|| locator_set.is_set;
}

bool Native::Router::Lisp::Ipv6::RouteImport::Database::Isis::LispIpRouteImport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(locator_set.yfilter);
}

std::string Native::Router::Lisp::Ipv6::RouteImport::Database::Isis::LispIpRouteImport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lisp-ip-route-import";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Ipv6::RouteImport::Database::Isis::LispIpRouteImport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (locator_set.is_set || is_set(locator_set.yfilter)) leaf_name_data.push_back(locator_set.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Ipv6::RouteImport::Database::Isis::LispIpRouteImport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Ipv6::RouteImport::Database::Isis::LispIpRouteImport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Ipv6::RouteImport::Database::Isis::LispIpRouteImport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locator-set")
    {
        locator_set = value;
        locator_set.value_namespace = name_space;
        locator_set.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Ipv6::RouteImport::Database::Isis::LispIpRouteImport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "locator-set")
    {
        locator_set.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Ipv6::RouteImport::Database::Isis::LispIpRouteImport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-map" || name == "locator-set")
        return true;
    return false;
}

Native::Router::Lisp::Ipv6::RouteImport::Database::MaximumPrefix::MaximumPrefix()
    :
    number{YType::int32, "number"},
    warning_only{YType::empty, "warning-only"},
    threshold{YType::uint8, "threshold"},
    threshold1{YType::uint8, "threshold1"},
    warning_only1{YType::empty, "warning-only1"}
{

    yang_name = "maximum-prefix"; yang_parent_name = "database"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::Ipv6::RouteImport::Database::MaximumPrefix::~MaximumPrefix()
{
}

bool Native::Router::Lisp::Ipv6::RouteImport::Database::MaximumPrefix::has_data() const
{
    return number.is_set
	|| warning_only.is_set
	|| threshold.is_set
	|| threshold1.is_set
	|| warning_only1.is_set;
}

bool Native::Router::Lisp::Ipv6::RouteImport::Database::MaximumPrefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(warning_only.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(threshold1.yfilter)
	|| ydk::is_set(warning_only1.yfilter);
}

std::string Native::Router::Lisp::Ipv6::RouteImport::Database::MaximumPrefix::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/ipv6/route-import/database/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Ipv6::RouteImport::Database::MaximumPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maximum-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Ipv6::RouteImport::Database::MaximumPrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (warning_only.is_set || is_set(warning_only.yfilter)) leaf_name_data.push_back(warning_only.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (threshold1.is_set || is_set(threshold1.yfilter)) leaf_name_data.push_back(threshold1.get_name_leafdata());
    if (warning_only1.is_set || is_set(warning_only1.yfilter)) leaf_name_data.push_back(warning_only1.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Ipv6::RouteImport::Database::MaximumPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Ipv6::RouteImport::Database::MaximumPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Ipv6::RouteImport::Database::MaximumPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "warning-only")
    {
        warning_only = value;
        warning_only.value_namespace = name_space;
        warning_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold1")
    {
        threshold1 = value;
        threshold1.value_namespace = name_space;
        threshold1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "warning-only1")
    {
        warning_only1 = value;
        warning_only1.value_namespace = name_space;
        warning_only1.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Ipv6::RouteImport::Database::MaximumPrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "warning-only")
    {
        warning_only.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "threshold1")
    {
        threshold1.yfilter = yfilter;
    }
    if(value_path == "warning-only1")
    {
        warning_only1.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Ipv6::RouteImport::Database::MaximumPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number" || name == "warning-only" || name == "threshold" || name == "threshold1" || name == "warning-only1")
        return true;
    return false;
}

Native::Router::Lisp::Ipv6::RouteImport::Database::Ospf::Ospf()
    :
    id{YType::uint16, "id"}
    	,
    lisp_ip_route_import(std::make_shared<Native::Router::Lisp::Ipv6::RouteImport::Database::Ospf::LispIpRouteImport>())
{
    lisp_ip_route_import->parent = this;

    yang_name = "ospf"; yang_parent_name = "database"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::Ipv6::RouteImport::Database::Ospf::~Ospf()
{
}

bool Native::Router::Lisp::Ipv6::RouteImport::Database::Ospf::has_data() const
{
    return id.is_set
	|| (lisp_ip_route_import !=  nullptr && lisp_ip_route_import->has_data());
}

bool Native::Router::Lisp::Ipv6::RouteImport::Database::Ospf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| (lisp_ip_route_import !=  nullptr && lisp_ip_route_import->has_operation());
}

std::string Native::Router::Lisp::Ipv6::RouteImport::Database::Ospf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/ipv6/route-import/database/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Ipv6::RouteImport::Database::Ospf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospf" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Ipv6::RouteImport::Database::Ospf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Ipv6::RouteImport::Database::Ospf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lisp-ip-route-import")
    {
        if(lisp_ip_route_import == nullptr)
        {
            lisp_ip_route_import = std::make_shared<Native::Router::Lisp::Ipv6::RouteImport::Database::Ospf::LispIpRouteImport>();
        }
        return lisp_ip_route_import;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Ipv6::RouteImport::Database::Ospf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(lisp_ip_route_import != nullptr)
    {
        children["lisp-ip-route-import"] = lisp_ip_route_import;
    }

    return children;
}

void Native::Router::Lisp::Ipv6::RouteImport::Database::Ospf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Ipv6::RouteImport::Database::Ospf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Ipv6::RouteImport::Database::Ospf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lisp-ip-route-import" || name == "id")
        return true;
    return false;
}

Native::Router::Lisp::Ipv6::RouteImport::Database::Ospf::LispIpRouteImport::LispIpRouteImport()
    :
    route_map{YType::str, "route-map"},
    locator_set{YType::str, "locator-set"}
{

    yang_name = "lisp-ip-route-import"; yang_parent_name = "ospf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Lisp::Ipv6::RouteImport::Database::Ospf::LispIpRouteImport::~LispIpRouteImport()
{
}

bool Native::Router::Lisp::Ipv6::RouteImport::Database::Ospf::LispIpRouteImport::has_data() const
{
    return route_map.is_set
	|| locator_set.is_set;
}

bool Native::Router::Lisp::Ipv6::RouteImport::Database::Ospf::LispIpRouteImport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(locator_set.yfilter);
}

std::string Native::Router::Lisp::Ipv6::RouteImport::Database::Ospf::LispIpRouteImport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lisp-ip-route-import";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Ipv6::RouteImport::Database::Ospf::LispIpRouteImport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (locator_set.is_set || is_set(locator_set.yfilter)) leaf_name_data.push_back(locator_set.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Ipv6::RouteImport::Database::Ospf::LispIpRouteImport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Ipv6::RouteImport::Database::Ospf::LispIpRouteImport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Ipv6::RouteImport::Database::Ospf::LispIpRouteImport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locator-set")
    {
        locator_set = value;
        locator_set.value_namespace = name_space;
        locator_set.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Ipv6::RouteImport::Database::Ospf::LispIpRouteImport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "locator-set")
    {
        locator_set.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Ipv6::RouteImport::Database::Ospf::LispIpRouteImport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-map" || name == "locator-set")
        return true;
    return false;
}

Native::Router::Lisp::Ipv6::RouteImport::Database::Ospfv3::Ospfv3()
    :
    id{YType::uint16, "id"}
    	,
    lisp_ip_route_import(std::make_shared<Native::Router::Lisp::Ipv6::RouteImport::Database::Ospfv3::LispIpRouteImport>())
{
    lisp_ip_route_import->parent = this;

    yang_name = "ospfv3"; yang_parent_name = "database"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::Ipv6::RouteImport::Database::Ospfv3::~Ospfv3()
{
}

bool Native::Router::Lisp::Ipv6::RouteImport::Database::Ospfv3::has_data() const
{
    return id.is_set
	|| (lisp_ip_route_import !=  nullptr && lisp_ip_route_import->has_data());
}

bool Native::Router::Lisp::Ipv6::RouteImport::Database::Ospfv3::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| (lisp_ip_route_import !=  nullptr && lisp_ip_route_import->has_operation());
}

std::string Native::Router::Lisp::Ipv6::RouteImport::Database::Ospfv3::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/ipv6/route-import/database/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Ipv6::RouteImport::Database::Ospfv3::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfv3" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Ipv6::RouteImport::Database::Ospfv3::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Ipv6::RouteImport::Database::Ospfv3::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lisp-ip-route-import")
    {
        if(lisp_ip_route_import == nullptr)
        {
            lisp_ip_route_import = std::make_shared<Native::Router::Lisp::Ipv6::RouteImport::Database::Ospfv3::LispIpRouteImport>();
        }
        return lisp_ip_route_import;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Ipv6::RouteImport::Database::Ospfv3::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(lisp_ip_route_import != nullptr)
    {
        children["lisp-ip-route-import"] = lisp_ip_route_import;
    }

    return children;
}

void Native::Router::Lisp::Ipv6::RouteImport::Database::Ospfv3::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Ipv6::RouteImport::Database::Ospfv3::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Ipv6::RouteImport::Database::Ospfv3::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lisp-ip-route-import" || name == "id")
        return true;
    return false;
}

Native::Router::Lisp::Ipv6::RouteImport::Database::Ospfv3::LispIpRouteImport::LispIpRouteImport()
    :
    route_map{YType::str, "route-map"},
    locator_set{YType::str, "locator-set"}
{

    yang_name = "lisp-ip-route-import"; yang_parent_name = "ospfv3"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Lisp::Ipv6::RouteImport::Database::Ospfv3::LispIpRouteImport::~LispIpRouteImport()
{
}

bool Native::Router::Lisp::Ipv6::RouteImport::Database::Ospfv3::LispIpRouteImport::has_data() const
{
    return route_map.is_set
	|| locator_set.is_set;
}

bool Native::Router::Lisp::Ipv6::RouteImport::Database::Ospfv3::LispIpRouteImport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(locator_set.yfilter);
}

std::string Native::Router::Lisp::Ipv6::RouteImport::Database::Ospfv3::LispIpRouteImport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lisp-ip-route-import";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Ipv6::RouteImport::Database::Ospfv3::LispIpRouteImport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (locator_set.is_set || is_set(locator_set.yfilter)) leaf_name_data.push_back(locator_set.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Ipv6::RouteImport::Database::Ospfv3::LispIpRouteImport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Ipv6::RouteImport::Database::Ospfv3::LispIpRouteImport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Ipv6::RouteImport::Database::Ospfv3::LispIpRouteImport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locator-set")
    {
        locator_set = value;
        locator_set.value_namespace = name_space;
        locator_set.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Ipv6::RouteImport::Database::Ospfv3::LispIpRouteImport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "locator-set")
    {
        locator_set.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Ipv6::RouteImport::Database::Ospfv3::LispIpRouteImport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-map" || name == "locator-set")
        return true;
    return false;
}

Native::Router::Lisp::Ipv6::RouteImport::Database::Rip::Rip()
    :
    lisp_ip_route_import(std::make_shared<Native::Router::Lisp::Ipv6::RouteImport::Database::Rip::LispIpRouteImport>())
{
    lisp_ip_route_import->parent = this;

    yang_name = "rip"; yang_parent_name = "database"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::Ipv6::RouteImport::Database::Rip::~Rip()
{
}

bool Native::Router::Lisp::Ipv6::RouteImport::Database::Rip::has_data() const
{
    return (lisp_ip_route_import !=  nullptr && lisp_ip_route_import->has_data());
}

bool Native::Router::Lisp::Ipv6::RouteImport::Database::Rip::has_operation() const
{
    return is_set(yfilter)
	|| (lisp_ip_route_import !=  nullptr && lisp_ip_route_import->has_operation());
}

std::string Native::Router::Lisp::Ipv6::RouteImport::Database::Rip::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/ipv6/route-import/database/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Ipv6::RouteImport::Database::Rip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Ipv6::RouteImport::Database::Rip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Ipv6::RouteImport::Database::Rip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lisp-ip-route-import")
    {
        if(lisp_ip_route_import == nullptr)
        {
            lisp_ip_route_import = std::make_shared<Native::Router::Lisp::Ipv6::RouteImport::Database::Rip::LispIpRouteImport>();
        }
        return lisp_ip_route_import;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Ipv6::RouteImport::Database::Rip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(lisp_ip_route_import != nullptr)
    {
        children["lisp-ip-route-import"] = lisp_ip_route_import;
    }

    return children;
}

void Native::Router::Lisp::Ipv6::RouteImport::Database::Rip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Lisp::Ipv6::RouteImport::Database::Rip::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Lisp::Ipv6::RouteImport::Database::Rip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lisp-ip-route-import")
        return true;
    return false;
}

Native::Router::Lisp::Ipv6::RouteImport::Database::Rip::LispIpRouteImport::LispIpRouteImport()
    :
    route_map{YType::str, "route-map"},
    locator_set{YType::str, "locator-set"}
{

    yang_name = "lisp-ip-route-import"; yang_parent_name = "rip"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::Ipv6::RouteImport::Database::Rip::LispIpRouteImport::~LispIpRouteImport()
{
}

bool Native::Router::Lisp::Ipv6::RouteImport::Database::Rip::LispIpRouteImport::has_data() const
{
    return route_map.is_set
	|| locator_set.is_set;
}

bool Native::Router::Lisp::Ipv6::RouteImport::Database::Rip::LispIpRouteImport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(locator_set.yfilter);
}

std::string Native::Router::Lisp::Ipv6::RouteImport::Database::Rip::LispIpRouteImport::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/ipv6/route-import/database/rip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Ipv6::RouteImport::Database::Rip::LispIpRouteImport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lisp-ip-route-import";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Ipv6::RouteImport::Database::Rip::LispIpRouteImport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (locator_set.is_set || is_set(locator_set.yfilter)) leaf_name_data.push_back(locator_set.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Ipv6::RouteImport::Database::Rip::LispIpRouteImport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Ipv6::RouteImport::Database::Rip::LispIpRouteImport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Ipv6::RouteImport::Database::Rip::LispIpRouteImport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locator-set")
    {
        locator_set = value;
        locator_set.value_namespace = name_space;
        locator_set.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Ipv6::RouteImport::Database::Rip::LispIpRouteImport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "locator-set")
    {
        locator_set.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Ipv6::RouteImport::Database::Rip::LispIpRouteImport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-map" || name == "locator-set")
        return true;
    return false;
}

Native::Router::Lisp::Ipv6::RouteImport::Database::Static_::Static_()
    :
    lisp_ip_route_import(std::make_shared<Native::Router::Lisp::Ipv6::RouteImport::Database::Static_::LispIpRouteImport>())
{
    lisp_ip_route_import->parent = this;

    yang_name = "static"; yang_parent_name = "database"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::Ipv6::RouteImport::Database::Static_::~Static_()
{
}

bool Native::Router::Lisp::Ipv6::RouteImport::Database::Static_::has_data() const
{
    return (lisp_ip_route_import !=  nullptr && lisp_ip_route_import->has_data());
}

bool Native::Router::Lisp::Ipv6::RouteImport::Database::Static_::has_operation() const
{
    return is_set(yfilter)
	|| (lisp_ip_route_import !=  nullptr && lisp_ip_route_import->has_operation());
}

std::string Native::Router::Lisp::Ipv6::RouteImport::Database::Static_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/ipv6/route-import/database/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Ipv6::RouteImport::Database::Static_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Ipv6::RouteImport::Database::Static_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Ipv6::RouteImport::Database::Static_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lisp-ip-route-import")
    {
        if(lisp_ip_route_import == nullptr)
        {
            lisp_ip_route_import = std::make_shared<Native::Router::Lisp::Ipv6::RouteImport::Database::Static_::LispIpRouteImport>();
        }
        return lisp_ip_route_import;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Ipv6::RouteImport::Database::Static_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(lisp_ip_route_import != nullptr)
    {
        children["lisp-ip-route-import"] = lisp_ip_route_import;
    }

    return children;
}

void Native::Router::Lisp::Ipv6::RouteImport::Database::Static_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Lisp::Ipv6::RouteImport::Database::Static_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Lisp::Ipv6::RouteImport::Database::Static_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lisp-ip-route-import")
        return true;
    return false;
}

Native::Router::Lisp::Ipv6::RouteImport::Database::Static_::LispIpRouteImport::LispIpRouteImport()
    :
    route_map{YType::str, "route-map"},
    locator_set{YType::str, "locator-set"}
{

    yang_name = "lisp-ip-route-import"; yang_parent_name = "static"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::Ipv6::RouteImport::Database::Static_::LispIpRouteImport::~LispIpRouteImport()
{
}

bool Native::Router::Lisp::Ipv6::RouteImport::Database::Static_::LispIpRouteImport::has_data() const
{
    return route_map.is_set
	|| locator_set.is_set;
}

bool Native::Router::Lisp::Ipv6::RouteImport::Database::Static_::LispIpRouteImport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(locator_set.yfilter);
}

std::string Native::Router::Lisp::Ipv6::RouteImport::Database::Static_::LispIpRouteImport::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/ipv6/route-import/database/static/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Ipv6::RouteImport::Database::Static_::LispIpRouteImport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lisp-ip-route-import";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Ipv6::RouteImport::Database::Static_::LispIpRouteImport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (locator_set.is_set || is_set(locator_set.yfilter)) leaf_name_data.push_back(locator_set.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Ipv6::RouteImport::Database::Static_::LispIpRouteImport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Ipv6::RouteImport::Database::Static_::LispIpRouteImport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Ipv6::RouteImport::Database::Static_::LispIpRouteImport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locator-set")
    {
        locator_set = value;
        locator_set.value_namespace = name_space;
        locator_set.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Ipv6::RouteImport::Database::Static_::LispIpRouteImport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "locator-set")
    {
        locator_set.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Ipv6::RouteImport::Database::Static_::LispIpRouteImport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-map" || name == "locator-set")
        return true;
    return false;
}

Native::Router::Lisp::Ipv6::RouteImport::MapCache::MapCache()
    :
    connected(nullptr) // presence node
	,maximum_prefix(std::make_shared<Native::Router::Lisp::Ipv6::RouteImport::MapCache::MaximumPrefix>())
	,rip(nullptr) // presence node
	,static_(nullptr) // presence node
{
    maximum_prefix->parent = this;

    yang_name = "map-cache"; yang_parent_name = "route-import"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::Ipv6::RouteImport::MapCache::~MapCache()
{
}

bool Native::Router::Lisp::Ipv6::RouteImport::MapCache::has_data() const
{
    for (std::size_t index=0; index<bgp.size(); index++)
    {
        if(bgp[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<eigrp.size(); index++)
    {
        if(eigrp[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<isis.size(); index++)
    {
        if(isis[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ospf.size(); index++)
    {
        if(ospf[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ospfv3.size(); index++)
    {
        if(ospfv3[index]->has_data())
            return true;
    }
    return (connected !=  nullptr && connected->has_data())
	|| (maximum_prefix !=  nullptr && maximum_prefix->has_data())
	|| (rip !=  nullptr && rip->has_data())
	|| (static_ !=  nullptr && static_->has_data());
}

bool Native::Router::Lisp::Ipv6::RouteImport::MapCache::has_operation() const
{
    for (std::size_t index=0; index<bgp.size(); index++)
    {
        if(bgp[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<eigrp.size(); index++)
    {
        if(eigrp[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<isis.size(); index++)
    {
        if(isis[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ospf.size(); index++)
    {
        if(ospf[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ospfv3.size(); index++)
    {
        if(ospfv3[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (connected !=  nullptr && connected->has_operation())
	|| (maximum_prefix !=  nullptr && maximum_prefix->has_operation())
	|| (rip !=  nullptr && rip->has_operation())
	|| (static_ !=  nullptr && static_->has_operation());
}

std::string Native::Router::Lisp::Ipv6::RouteImport::MapCache::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/ipv6/route-import/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Ipv6::RouteImport::MapCache::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-cache";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Ipv6::RouteImport::MapCache::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Ipv6::RouteImport::MapCache::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bgp")
    {
        for(auto const & c : bgp)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Lisp::Ipv6::RouteImport::MapCache::Bgp>();
        c->parent = this;
        bgp.push_back(c);
        return c;
    }

    if(child_yang_name == "connected")
    {
        if(connected == nullptr)
        {
            connected = std::make_shared<Native::Router::Lisp::Ipv6::RouteImport::MapCache::Connected>();
        }
        return connected;
    }

    if(child_yang_name == "eigrp")
    {
        for(auto const & c : eigrp)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Lisp::Ipv6::RouteImport::MapCache::Eigrp>();
        c->parent = this;
        eigrp.push_back(c);
        return c;
    }

    if(child_yang_name == "isis")
    {
        for(auto const & c : isis)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Lisp::Ipv6::RouteImport::MapCache::Isis>();
        c->parent = this;
        isis.push_back(c);
        return c;
    }

    if(child_yang_name == "maximum-prefix")
    {
        if(maximum_prefix == nullptr)
        {
            maximum_prefix = std::make_shared<Native::Router::Lisp::Ipv6::RouteImport::MapCache::MaximumPrefix>();
        }
        return maximum_prefix;
    }

    if(child_yang_name == "ospf")
    {
        for(auto const & c : ospf)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Lisp::Ipv6::RouteImport::MapCache::Ospf>();
        c->parent = this;
        ospf.push_back(c);
        return c;
    }

    if(child_yang_name == "ospfv3")
    {
        for(auto const & c : ospfv3)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Lisp::Ipv6::RouteImport::MapCache::Ospfv3>();
        c->parent = this;
        ospfv3.push_back(c);
        return c;
    }

    if(child_yang_name == "rip")
    {
        if(rip == nullptr)
        {
            rip = std::make_shared<Native::Router::Lisp::Ipv6::RouteImport::MapCache::Rip>();
        }
        return rip;
    }

    if(child_yang_name == "static")
    {
        if(static_ == nullptr)
        {
            static_ = std::make_shared<Native::Router::Lisp::Ipv6::RouteImport::MapCache::Static_>();
        }
        return static_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Ipv6::RouteImport::MapCache::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bgp)
    {
        children[c->get_segment_path()] = c;
    }

    if(connected != nullptr)
    {
        children["connected"] = connected;
    }

    for (auto const & c : eigrp)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : isis)
    {
        children[c->get_segment_path()] = c;
    }

    if(maximum_prefix != nullptr)
    {
        children["maximum-prefix"] = maximum_prefix;
    }

    for (auto const & c : ospf)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : ospfv3)
    {
        children[c->get_segment_path()] = c;
    }

    if(rip != nullptr)
    {
        children["rip"] = rip;
    }

    if(static_ != nullptr)
    {
        children["static"] = static_;
    }

    return children;
}

void Native::Router::Lisp::Ipv6::RouteImport::MapCache::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Lisp::Ipv6::RouteImport::MapCache::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Lisp::Ipv6::RouteImport::MapCache::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp" || name == "connected" || name == "eigrp" || name == "isis" || name == "maximum-prefix" || name == "ospf" || name == "ospfv3" || name == "rip" || name == "static")
        return true;
    return false;
}

Native::Router::Lisp::Ipv6::RouteImport::MapCache::Bgp::Bgp()
    :
    id{YType::str, "id"}
    	,
    map_cache_container(nullptr) // presence node
{

    yang_name = "bgp"; yang_parent_name = "map-cache"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::Ipv6::RouteImport::MapCache::Bgp::~Bgp()
{
}

bool Native::Router::Lisp::Ipv6::RouteImport::MapCache::Bgp::has_data() const
{
    return id.is_set
	|| (map_cache_container !=  nullptr && map_cache_container->has_data());
}

bool Native::Router::Lisp::Ipv6::RouteImport::MapCache::Bgp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| (map_cache_container !=  nullptr && map_cache_container->has_operation());
}

std::string Native::Router::Lisp::Ipv6::RouteImport::MapCache::Bgp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/ipv6/route-import/map-cache/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Ipv6::RouteImport::MapCache::Bgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Ipv6::RouteImport::MapCache::Bgp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Ipv6::RouteImport::MapCache::Bgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "map-cache-container")
    {
        if(map_cache_container == nullptr)
        {
            map_cache_container = std::make_shared<Native::Router::Lisp::Ipv6::RouteImport::MapCache::Bgp::MapCacheContainer>();
        }
        return map_cache_container;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Ipv6::RouteImport::MapCache::Bgp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(map_cache_container != nullptr)
    {
        children["map-cache-container"] = map_cache_container;
    }

    return children;
}

void Native::Router::Lisp::Ipv6::RouteImport::MapCache::Bgp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Ipv6::RouteImport::MapCache::Bgp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Ipv6::RouteImport::MapCache::Bgp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "map-cache-container" || name == "id")
        return true;
    return false;
}

Native::Router::Lisp::Ipv6::RouteImport::MapCache::Bgp::MapCacheContainer::MapCacheContainer()
    :
    route_map{YType::str, "route-map"}
{

    yang_name = "map-cache-container"; yang_parent_name = "bgp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Lisp::Ipv6::RouteImport::MapCache::Bgp::MapCacheContainer::~MapCacheContainer()
{
}

bool Native::Router::Lisp::Ipv6::RouteImport::MapCache::Bgp::MapCacheContainer::has_data() const
{
    return route_map.is_set;
}

bool Native::Router::Lisp::Ipv6::RouteImport::MapCache::Bgp::MapCacheContainer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Lisp::Ipv6::RouteImport::MapCache::Bgp::MapCacheContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-cache-container";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Ipv6::RouteImport::MapCache::Bgp::MapCacheContainer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Ipv6::RouteImport::MapCache::Bgp::MapCacheContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Ipv6::RouteImport::MapCache::Bgp::MapCacheContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Ipv6::RouteImport::MapCache::Bgp::MapCacheContainer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Ipv6::RouteImport::MapCache::Bgp::MapCacheContainer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Ipv6::RouteImport::MapCache::Bgp::MapCacheContainer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-map")
        return true;
    return false;
}

Native::Router::Lisp::Ipv6::RouteImport::MapCache::Connected::Connected()
    :
    map_cache_container(nullptr) // presence node
{

    yang_name = "connected"; yang_parent_name = "map-cache"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::Ipv6::RouteImport::MapCache::Connected::~Connected()
{
}

bool Native::Router::Lisp::Ipv6::RouteImport::MapCache::Connected::has_data() const
{
    return (map_cache_container !=  nullptr && map_cache_container->has_data());
}

bool Native::Router::Lisp::Ipv6::RouteImport::MapCache::Connected::has_operation() const
{
    return is_set(yfilter)
	|| (map_cache_container !=  nullptr && map_cache_container->has_operation());
}

std::string Native::Router::Lisp::Ipv6::RouteImport::MapCache::Connected::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/ipv6/route-import/map-cache/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Ipv6::RouteImport::MapCache::Connected::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connected";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Ipv6::RouteImport::MapCache::Connected::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Ipv6::RouteImport::MapCache::Connected::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "map-cache-container")
    {
        if(map_cache_container == nullptr)
        {
            map_cache_container = std::make_shared<Native::Router::Lisp::Ipv6::RouteImport::MapCache::Connected::MapCacheContainer>();
        }
        return map_cache_container;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Ipv6::RouteImport::MapCache::Connected::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(map_cache_container != nullptr)
    {
        children["map-cache-container"] = map_cache_container;
    }

    return children;
}

void Native::Router::Lisp::Ipv6::RouteImport::MapCache::Connected::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Lisp::Ipv6::RouteImport::MapCache::Connected::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Lisp::Ipv6::RouteImport::MapCache::Connected::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "map-cache-container")
        return true;
    return false;
}

Native::Router::Lisp::Ipv6::RouteImport::MapCache::Connected::MapCacheContainer::MapCacheContainer()
    :
    route_map{YType::str, "route-map"}
{

    yang_name = "map-cache-container"; yang_parent_name = "connected"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::Ipv6::RouteImport::MapCache::Connected::MapCacheContainer::~MapCacheContainer()
{
}

bool Native::Router::Lisp::Ipv6::RouteImport::MapCache::Connected::MapCacheContainer::has_data() const
{
    return route_map.is_set;
}

bool Native::Router::Lisp::Ipv6::RouteImport::MapCache::Connected::MapCacheContainer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Lisp::Ipv6::RouteImport::MapCache::Connected::MapCacheContainer::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/ipv6/route-import/map-cache/connected/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Ipv6::RouteImport::MapCache::Connected::MapCacheContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-cache-container";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Ipv6::RouteImport::MapCache::Connected::MapCacheContainer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Ipv6::RouteImport::MapCache::Connected::MapCacheContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Ipv6::RouteImport::MapCache::Connected::MapCacheContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Ipv6::RouteImport::MapCache::Connected::MapCacheContainer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Ipv6::RouteImport::MapCache::Connected::MapCacheContainer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Ipv6::RouteImport::MapCache::Connected::MapCacheContainer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-map")
        return true;
    return false;
}

Native::Router::Lisp::Ipv6::RouteImport::MapCache::Eigrp::Eigrp()
    :
    id{YType::uint16, "id"}
    	,
    map_cache_container(nullptr) // presence node
{

    yang_name = "eigrp"; yang_parent_name = "map-cache"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::Ipv6::RouteImport::MapCache::Eigrp::~Eigrp()
{
}

bool Native::Router::Lisp::Ipv6::RouteImport::MapCache::Eigrp::has_data() const
{
    return id.is_set
	|| (map_cache_container !=  nullptr && map_cache_container->has_data());
}

bool Native::Router::Lisp::Ipv6::RouteImport::MapCache::Eigrp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| (map_cache_container !=  nullptr && map_cache_container->has_operation());
}

std::string Native::Router::Lisp::Ipv6::RouteImport::MapCache::Eigrp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/ipv6/route-import/map-cache/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Ipv6::RouteImport::MapCache::Eigrp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eigrp" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Ipv6::RouteImport::MapCache::Eigrp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Ipv6::RouteImport::MapCache::Eigrp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "map-cache-container")
    {
        if(map_cache_container == nullptr)
        {
            map_cache_container = std::make_shared<Native::Router::Lisp::Ipv6::RouteImport::MapCache::Eigrp::MapCacheContainer>();
        }
        return map_cache_container;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Ipv6::RouteImport::MapCache::Eigrp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(map_cache_container != nullptr)
    {
        children["map-cache-container"] = map_cache_container;
    }

    return children;
}

void Native::Router::Lisp::Ipv6::RouteImport::MapCache::Eigrp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Ipv6::RouteImport::MapCache::Eigrp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Ipv6::RouteImport::MapCache::Eigrp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "map-cache-container" || name == "id")
        return true;
    return false;
}

Native::Router::Lisp::Ipv6::RouteImport::MapCache::Eigrp::MapCacheContainer::MapCacheContainer()
    :
    route_map{YType::str, "route-map"}
{

    yang_name = "map-cache-container"; yang_parent_name = "eigrp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Lisp::Ipv6::RouteImport::MapCache::Eigrp::MapCacheContainer::~MapCacheContainer()
{
}

bool Native::Router::Lisp::Ipv6::RouteImport::MapCache::Eigrp::MapCacheContainer::has_data() const
{
    return route_map.is_set;
}

bool Native::Router::Lisp::Ipv6::RouteImport::MapCache::Eigrp::MapCacheContainer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Lisp::Ipv6::RouteImport::MapCache::Eigrp::MapCacheContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-cache-container";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Ipv6::RouteImport::MapCache::Eigrp::MapCacheContainer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Ipv6::RouteImport::MapCache::Eigrp::MapCacheContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Ipv6::RouteImport::MapCache::Eigrp::MapCacheContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Ipv6::RouteImport::MapCache::Eigrp::MapCacheContainer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Ipv6::RouteImport::MapCache::Eigrp::MapCacheContainer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Ipv6::RouteImport::MapCache::Eigrp::MapCacheContainer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-map")
        return true;
    return false;
}

Native::Router::Lisp::Ipv6::RouteImport::MapCache::Isis::Isis()
    :
    id{YType::str, "id"}
    	,
    map_cache_container(nullptr) // presence node
{

    yang_name = "isis"; yang_parent_name = "map-cache"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::Ipv6::RouteImport::MapCache::Isis::~Isis()
{
}

bool Native::Router::Lisp::Ipv6::RouteImport::MapCache::Isis::has_data() const
{
    return id.is_set
	|| (map_cache_container !=  nullptr && map_cache_container->has_data());
}

bool Native::Router::Lisp::Ipv6::RouteImport::MapCache::Isis::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| (map_cache_container !=  nullptr && map_cache_container->has_operation());
}

std::string Native::Router::Lisp::Ipv6::RouteImport::MapCache::Isis::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/ipv6/route-import/map-cache/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Ipv6::RouteImport::MapCache::Isis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Ipv6::RouteImport::MapCache::Isis::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Ipv6::RouteImport::MapCache::Isis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "map-cache-container")
    {
        if(map_cache_container == nullptr)
        {
            map_cache_container = std::make_shared<Native::Router::Lisp::Ipv6::RouteImport::MapCache::Isis::MapCacheContainer>();
        }
        return map_cache_container;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Ipv6::RouteImport::MapCache::Isis::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(map_cache_container != nullptr)
    {
        children["map-cache-container"] = map_cache_container;
    }

    return children;
}

void Native::Router::Lisp::Ipv6::RouteImport::MapCache::Isis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Ipv6::RouteImport::MapCache::Isis::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Ipv6::RouteImport::MapCache::Isis::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "map-cache-container" || name == "id")
        return true;
    return false;
}

Native::Router::Lisp::Ipv6::RouteImport::MapCache::Isis::MapCacheContainer::MapCacheContainer()
    :
    route_map{YType::str, "route-map"}
{

    yang_name = "map-cache-container"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Lisp::Ipv6::RouteImport::MapCache::Isis::MapCacheContainer::~MapCacheContainer()
{
}

bool Native::Router::Lisp::Ipv6::RouteImport::MapCache::Isis::MapCacheContainer::has_data() const
{
    return route_map.is_set;
}

bool Native::Router::Lisp::Ipv6::RouteImport::MapCache::Isis::MapCacheContainer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Lisp::Ipv6::RouteImport::MapCache::Isis::MapCacheContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-cache-container";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Ipv6::RouteImport::MapCache::Isis::MapCacheContainer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Ipv6::RouteImport::MapCache::Isis::MapCacheContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Ipv6::RouteImport::MapCache::Isis::MapCacheContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Ipv6::RouteImport::MapCache::Isis::MapCacheContainer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Ipv6::RouteImport::MapCache::Isis::MapCacheContainer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Ipv6::RouteImport::MapCache::Isis::MapCacheContainer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-map")
        return true;
    return false;
}

Native::Router::Lisp::Ipv6::RouteImport::MapCache::MaximumPrefix::MaximumPrefix()
    :
    number{YType::int32, "number"},
    warning_only{YType::empty, "warning-only"},
    threshold{YType::uint8, "threshold"},
    threshold1{YType::uint8, "threshold1"},
    warning_only1{YType::empty, "warning-only1"}
{

    yang_name = "maximum-prefix"; yang_parent_name = "map-cache"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::Ipv6::RouteImport::MapCache::MaximumPrefix::~MaximumPrefix()
{
}

bool Native::Router::Lisp::Ipv6::RouteImport::MapCache::MaximumPrefix::has_data() const
{
    return number.is_set
	|| warning_only.is_set
	|| threshold.is_set
	|| threshold1.is_set
	|| warning_only1.is_set;
}

bool Native::Router::Lisp::Ipv6::RouteImport::MapCache::MaximumPrefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(warning_only.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(threshold1.yfilter)
	|| ydk::is_set(warning_only1.yfilter);
}

std::string Native::Router::Lisp::Ipv6::RouteImport::MapCache::MaximumPrefix::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/ipv6/route-import/map-cache/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Ipv6::RouteImport::MapCache::MaximumPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maximum-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Ipv6::RouteImport::MapCache::MaximumPrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (warning_only.is_set || is_set(warning_only.yfilter)) leaf_name_data.push_back(warning_only.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (threshold1.is_set || is_set(threshold1.yfilter)) leaf_name_data.push_back(threshold1.get_name_leafdata());
    if (warning_only1.is_set || is_set(warning_only1.yfilter)) leaf_name_data.push_back(warning_only1.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Ipv6::RouteImport::MapCache::MaximumPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Ipv6::RouteImport::MapCache::MaximumPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Ipv6::RouteImport::MapCache::MaximumPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "warning-only")
    {
        warning_only = value;
        warning_only.value_namespace = name_space;
        warning_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold1")
    {
        threshold1 = value;
        threshold1.value_namespace = name_space;
        threshold1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "warning-only1")
    {
        warning_only1 = value;
        warning_only1.value_namespace = name_space;
        warning_only1.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Ipv6::RouteImport::MapCache::MaximumPrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "warning-only")
    {
        warning_only.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "threshold1")
    {
        threshold1.yfilter = yfilter;
    }
    if(value_path == "warning-only1")
    {
        warning_only1.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Ipv6::RouteImport::MapCache::MaximumPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number" || name == "warning-only" || name == "threshold" || name == "threshold1" || name == "warning-only1")
        return true;
    return false;
}

Native::Router::Lisp::Ipv6::RouteImport::MapCache::Ospf::Ospf()
    :
    id{YType::uint16, "id"}
    	,
    map_cache_container(nullptr) // presence node
{

    yang_name = "ospf"; yang_parent_name = "map-cache"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::Ipv6::RouteImport::MapCache::Ospf::~Ospf()
{
}

bool Native::Router::Lisp::Ipv6::RouteImport::MapCache::Ospf::has_data() const
{
    return id.is_set
	|| (map_cache_container !=  nullptr && map_cache_container->has_data());
}

bool Native::Router::Lisp::Ipv6::RouteImport::MapCache::Ospf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| (map_cache_container !=  nullptr && map_cache_container->has_operation());
}

std::string Native::Router::Lisp::Ipv6::RouteImport::MapCache::Ospf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/ipv6/route-import/map-cache/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Ipv6::RouteImport::MapCache::Ospf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospf" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Ipv6::RouteImport::MapCache::Ospf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Ipv6::RouteImport::MapCache::Ospf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "map-cache-container")
    {
        if(map_cache_container == nullptr)
        {
            map_cache_container = std::make_shared<Native::Router::Lisp::Ipv6::RouteImport::MapCache::Ospf::MapCacheContainer>();
        }
        return map_cache_container;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Ipv6::RouteImport::MapCache::Ospf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(map_cache_container != nullptr)
    {
        children["map-cache-container"] = map_cache_container;
    }

    return children;
}

void Native::Router::Lisp::Ipv6::RouteImport::MapCache::Ospf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Ipv6::RouteImport::MapCache::Ospf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Ipv6::RouteImport::MapCache::Ospf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "map-cache-container" || name == "id")
        return true;
    return false;
}

Native::Router::Lisp::Ipv6::RouteImport::MapCache::Ospf::MapCacheContainer::MapCacheContainer()
    :
    route_map{YType::str, "route-map"}
{

    yang_name = "map-cache-container"; yang_parent_name = "ospf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Lisp::Ipv6::RouteImport::MapCache::Ospf::MapCacheContainer::~MapCacheContainer()
{
}

bool Native::Router::Lisp::Ipv6::RouteImport::MapCache::Ospf::MapCacheContainer::has_data() const
{
    return route_map.is_set;
}

bool Native::Router::Lisp::Ipv6::RouteImport::MapCache::Ospf::MapCacheContainer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Lisp::Ipv6::RouteImport::MapCache::Ospf::MapCacheContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-cache-container";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Ipv6::RouteImport::MapCache::Ospf::MapCacheContainer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Ipv6::RouteImport::MapCache::Ospf::MapCacheContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Ipv6::RouteImport::MapCache::Ospf::MapCacheContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Ipv6::RouteImport::MapCache::Ospf::MapCacheContainer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Ipv6::RouteImport::MapCache::Ospf::MapCacheContainer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Ipv6::RouteImport::MapCache::Ospf::MapCacheContainer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-map")
        return true;
    return false;
}

Native::Router::Lisp::Ipv6::RouteImport::MapCache::Ospfv3::Ospfv3()
    :
    id{YType::uint16, "id"}
    	,
    map_cache_container(nullptr) // presence node
{

    yang_name = "ospfv3"; yang_parent_name = "map-cache"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::Ipv6::RouteImport::MapCache::Ospfv3::~Ospfv3()
{
}

bool Native::Router::Lisp::Ipv6::RouteImport::MapCache::Ospfv3::has_data() const
{
    return id.is_set
	|| (map_cache_container !=  nullptr && map_cache_container->has_data());
}

bool Native::Router::Lisp::Ipv6::RouteImport::MapCache::Ospfv3::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| (map_cache_container !=  nullptr && map_cache_container->has_operation());
}

std::string Native::Router::Lisp::Ipv6::RouteImport::MapCache::Ospfv3::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/ipv6/route-import/map-cache/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Ipv6::RouteImport::MapCache::Ospfv3::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfv3" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Ipv6::RouteImport::MapCache::Ospfv3::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Ipv6::RouteImport::MapCache::Ospfv3::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "map-cache-container")
    {
        if(map_cache_container == nullptr)
        {
            map_cache_container = std::make_shared<Native::Router::Lisp::Ipv6::RouteImport::MapCache::Ospfv3::MapCacheContainer>();
        }
        return map_cache_container;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Ipv6::RouteImport::MapCache::Ospfv3::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(map_cache_container != nullptr)
    {
        children["map-cache-container"] = map_cache_container;
    }

    return children;
}

void Native::Router::Lisp::Ipv6::RouteImport::MapCache::Ospfv3::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Ipv6::RouteImport::MapCache::Ospfv3::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Ipv6::RouteImport::MapCache::Ospfv3::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "map-cache-container" || name == "id")
        return true;
    return false;
}

Native::Router::Lisp::Ipv6::RouteImport::MapCache::Ospfv3::MapCacheContainer::MapCacheContainer()
    :
    route_map{YType::str, "route-map"}
{

    yang_name = "map-cache-container"; yang_parent_name = "ospfv3"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Lisp::Ipv6::RouteImport::MapCache::Ospfv3::MapCacheContainer::~MapCacheContainer()
{
}

bool Native::Router::Lisp::Ipv6::RouteImport::MapCache::Ospfv3::MapCacheContainer::has_data() const
{
    return route_map.is_set;
}

bool Native::Router::Lisp::Ipv6::RouteImport::MapCache::Ospfv3::MapCacheContainer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Lisp::Ipv6::RouteImport::MapCache::Ospfv3::MapCacheContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-cache-container";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Ipv6::RouteImport::MapCache::Ospfv3::MapCacheContainer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Ipv6::RouteImport::MapCache::Ospfv3::MapCacheContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Ipv6::RouteImport::MapCache::Ospfv3::MapCacheContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Ipv6::RouteImport::MapCache::Ospfv3::MapCacheContainer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Ipv6::RouteImport::MapCache::Ospfv3::MapCacheContainer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Ipv6::RouteImport::MapCache::Ospfv3::MapCacheContainer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-map")
        return true;
    return false;
}

Native::Router::Lisp::Ipv6::RouteImport::MapCache::Rip::Rip()
    :
    map_cache_container(nullptr) // presence node
{

    yang_name = "rip"; yang_parent_name = "map-cache"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::Ipv6::RouteImport::MapCache::Rip::~Rip()
{
}

bool Native::Router::Lisp::Ipv6::RouteImport::MapCache::Rip::has_data() const
{
    return (map_cache_container !=  nullptr && map_cache_container->has_data());
}

bool Native::Router::Lisp::Ipv6::RouteImport::MapCache::Rip::has_operation() const
{
    return is_set(yfilter)
	|| (map_cache_container !=  nullptr && map_cache_container->has_operation());
}

std::string Native::Router::Lisp::Ipv6::RouteImport::MapCache::Rip::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/ipv6/route-import/map-cache/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Ipv6::RouteImport::MapCache::Rip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Ipv6::RouteImport::MapCache::Rip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Ipv6::RouteImport::MapCache::Rip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "map-cache-container")
    {
        if(map_cache_container == nullptr)
        {
            map_cache_container = std::make_shared<Native::Router::Lisp::Ipv6::RouteImport::MapCache::Rip::MapCacheContainer>();
        }
        return map_cache_container;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Ipv6::RouteImport::MapCache::Rip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(map_cache_container != nullptr)
    {
        children["map-cache-container"] = map_cache_container;
    }

    return children;
}

void Native::Router::Lisp::Ipv6::RouteImport::MapCache::Rip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Lisp::Ipv6::RouteImport::MapCache::Rip::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Lisp::Ipv6::RouteImport::MapCache::Rip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "map-cache-container")
        return true;
    return false;
}

Native::Router::Lisp::Ipv6::RouteImport::MapCache::Rip::MapCacheContainer::MapCacheContainer()
    :
    route_map{YType::str, "route-map"}
{

    yang_name = "map-cache-container"; yang_parent_name = "rip"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::Ipv6::RouteImport::MapCache::Rip::MapCacheContainer::~MapCacheContainer()
{
}

bool Native::Router::Lisp::Ipv6::RouteImport::MapCache::Rip::MapCacheContainer::has_data() const
{
    return route_map.is_set;
}

bool Native::Router::Lisp::Ipv6::RouteImport::MapCache::Rip::MapCacheContainer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Lisp::Ipv6::RouteImport::MapCache::Rip::MapCacheContainer::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/ipv6/route-import/map-cache/rip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Ipv6::RouteImport::MapCache::Rip::MapCacheContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-cache-container";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Ipv6::RouteImport::MapCache::Rip::MapCacheContainer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Ipv6::RouteImport::MapCache::Rip::MapCacheContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Ipv6::RouteImport::MapCache::Rip::MapCacheContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Ipv6::RouteImport::MapCache::Rip::MapCacheContainer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Ipv6::RouteImport::MapCache::Rip::MapCacheContainer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Ipv6::RouteImport::MapCache::Rip::MapCacheContainer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-map")
        return true;
    return false;
}

Native::Router::Lisp::Ipv6::RouteImport::MapCache::Static_::Static_()
    :
    map_cache_container(nullptr) // presence node
{

    yang_name = "static"; yang_parent_name = "map-cache"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::Ipv6::RouteImport::MapCache::Static_::~Static_()
{
}

bool Native::Router::Lisp::Ipv6::RouteImport::MapCache::Static_::has_data() const
{
    return (map_cache_container !=  nullptr && map_cache_container->has_data());
}

bool Native::Router::Lisp::Ipv6::RouteImport::MapCache::Static_::has_operation() const
{
    return is_set(yfilter)
	|| (map_cache_container !=  nullptr && map_cache_container->has_operation());
}

std::string Native::Router::Lisp::Ipv6::RouteImport::MapCache::Static_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/ipv6/route-import/map-cache/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Ipv6::RouteImport::MapCache::Static_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Ipv6::RouteImport::MapCache::Static_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Ipv6::RouteImport::MapCache::Static_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "map-cache-container")
    {
        if(map_cache_container == nullptr)
        {
            map_cache_container = std::make_shared<Native::Router::Lisp::Ipv6::RouteImport::MapCache::Static_::MapCacheContainer>();
        }
        return map_cache_container;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Ipv6::RouteImport::MapCache::Static_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(map_cache_container != nullptr)
    {
        children["map-cache-container"] = map_cache_container;
    }

    return children;
}

void Native::Router::Lisp::Ipv6::RouteImport::MapCache::Static_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Lisp::Ipv6::RouteImport::MapCache::Static_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Lisp::Ipv6::RouteImport::MapCache::Static_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "map-cache-container")
        return true;
    return false;
}

Native::Router::Lisp::Ipv6::RouteImport::MapCache::Static_::MapCacheContainer::MapCacheContainer()
    :
    route_map{YType::str, "route-map"}
{

    yang_name = "map-cache-container"; yang_parent_name = "static"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::Ipv6::RouteImport::MapCache::Static_::MapCacheContainer::~MapCacheContainer()
{
}

bool Native::Router::Lisp::Ipv6::RouteImport::MapCache::Static_::MapCacheContainer::has_data() const
{
    return route_map.is_set;
}

bool Native::Router::Lisp::Ipv6::RouteImport::MapCache::Static_::MapCacheContainer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Lisp::Ipv6::RouteImport::MapCache::Static_::MapCacheContainer::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/ipv6/route-import/map-cache/static/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Ipv6::RouteImport::MapCache::Static_::MapCacheContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-cache-container";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Ipv6::RouteImport::MapCache::Static_::MapCacheContainer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Ipv6::RouteImport::MapCache::Static_::MapCacheContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Ipv6::RouteImport::MapCache::Static_::MapCacheContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Ipv6::RouteImport::MapCache::Static_::MapCacheContainer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Ipv6::RouteImport::MapCache::Static_::MapCacheContainer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Ipv6::RouteImport::MapCache::Static_::MapCacheContainer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-map")
        return true;
    return false;
}

Native::Router::Lisp::Ipv6::SiteRegistration::SiteRegistration()
    :
    limit{YType::uint32, "limit"},
    warning_threshold{YType::uint8, "warning-threshold"}
{

    yang_name = "site-registration"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::Ipv6::SiteRegistration::~SiteRegistration()
{
}

bool Native::Router::Lisp::Ipv6::SiteRegistration::has_data() const
{
    return limit.is_set
	|| warning_threshold.is_set;
}

bool Native::Router::Lisp::Ipv6::SiteRegistration::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(limit.yfilter)
	|| ydk::is_set(warning_threshold.yfilter);
}

std::string Native::Router::Lisp::Ipv6::SiteRegistration::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/ipv6/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Ipv6::SiteRegistration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "site-registration";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Ipv6::SiteRegistration::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (limit.is_set || is_set(limit.yfilter)) leaf_name_data.push_back(limit.get_name_leafdata());
    if (warning_threshold.is_set || is_set(warning_threshold.yfilter)) leaf_name_data.push_back(warning_threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Ipv6::SiteRegistration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Ipv6::SiteRegistration::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Ipv6::SiteRegistration::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "limit")
    {
        limit = value;
        limit.value_namespace = name_space;
        limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold = value;
        warning_threshold.value_namespace = name_space;
        warning_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Ipv6::SiteRegistration::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "limit")
    {
        limit.yfilter = yfilter;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Ipv6::SiteRegistration::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "limit" || name == "warning-threshold")
        return true;
    return false;
}

Native::Router::Lisp::Ipv6::SolicitMapRequest::SolicitMapRequest()
    :
    ignore{YType::empty, "ignore"},
    max_per_entry{YType::uint8, "max-per-entry"},
    suppression_time{YType::uint16, "suppression-time"}
{

    yang_name = "solicit-map-request"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::Ipv6::SolicitMapRequest::~SolicitMapRequest()
{
}

bool Native::Router::Lisp::Ipv6::SolicitMapRequest::has_data() const
{
    return ignore.is_set
	|| max_per_entry.is_set
	|| suppression_time.is_set;
}

bool Native::Router::Lisp::Ipv6::SolicitMapRequest::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ignore.yfilter)
	|| ydk::is_set(max_per_entry.yfilter)
	|| ydk::is_set(suppression_time.yfilter);
}

std::string Native::Router::Lisp::Ipv6::SolicitMapRequest::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/ipv6/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Ipv6::SolicitMapRequest::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "solicit-map-request";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Ipv6::SolicitMapRequest::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ignore.is_set || is_set(ignore.yfilter)) leaf_name_data.push_back(ignore.get_name_leafdata());
    if (max_per_entry.is_set || is_set(max_per_entry.yfilter)) leaf_name_data.push_back(max_per_entry.get_name_leafdata());
    if (suppression_time.is_set || is_set(suppression_time.yfilter)) leaf_name_data.push_back(suppression_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Ipv6::SolicitMapRequest::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Ipv6::SolicitMapRequest::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Ipv6::SolicitMapRequest::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ignore")
    {
        ignore = value;
        ignore.value_namespace = name_space;
        ignore.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-per-entry")
    {
        max_per_entry = value;
        max_per_entry.value_namespace = name_space;
        max_per_entry.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suppression-time")
    {
        suppression_time = value;
        suppression_time.value_namespace = name_space;
        suppression_time.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Ipv6::SolicitMapRequest::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ignore")
    {
        ignore.yfilter = yfilter;
    }
    if(value_path == "max-per-entry")
    {
        max_per_entry.yfilter = yfilter;
    }
    if(value_path == "suppression-time")
    {
        suppression_time.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Ipv6::SolicitMapRequest::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ignore" || name == "max-per-entry" || name == "suppression-time")
        return true;
    return false;
}

Native::Router::Lisp::Ipv6::UsePetr::UsePetr()
    :
    locator_address{YType::str, "locator-address"},
    priority{YType::uint8, "priority"},
    weight{YType::uint8, "weight"}
{

    yang_name = "use-petr"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::Ipv6::UsePetr::~UsePetr()
{
}

bool Native::Router::Lisp::Ipv6::UsePetr::has_data() const
{
    return locator_address.is_set
	|| priority.is_set
	|| weight.is_set;
}

bool Native::Router::Lisp::Ipv6::UsePetr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(locator_address.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(weight.yfilter);
}

std::string Native::Router::Lisp::Ipv6::UsePetr::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/ipv6/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Ipv6::UsePetr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "use-petr" <<"[locator-address='" <<locator_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Ipv6::UsePetr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (locator_address.is_set || is_set(locator_address.yfilter)) leaf_name_data.push_back(locator_address.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::Ipv6::UsePetr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Ipv6::UsePetr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Ipv6::UsePetr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "locator-address")
    {
        locator_address = value;
        locator_address.value_namespace = name_space;
        locator_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "weight")
    {
        weight = value;
        weight.value_namespace = name_space;
        weight.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Ipv6::UsePetr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "locator-address")
    {
        locator_address.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "weight")
    {
        weight.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Ipv6::UsePetr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "locator-address" || name == "priority" || name == "weight")
        return true;
    return false;
}

Native::Router::Lisp::LocReachAlgorithm::LocReachAlgorithm()
    :
    rloc_probing{YType::empty, "rloc-probing"}
    	,
    lsb_reports(std::make_shared<Native::Router::Lisp::LocReachAlgorithm::LsbReports>())
{
    lsb_reports->parent = this;

    yang_name = "loc-reach-algorithm"; yang_parent_name = "lisp"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::LocReachAlgorithm::~LocReachAlgorithm()
{
}

bool Native::Router::Lisp::LocReachAlgorithm::has_data() const
{
    return rloc_probing.is_set
	|| (lsb_reports !=  nullptr && lsb_reports->has_data());
}

bool Native::Router::Lisp::LocReachAlgorithm::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rloc_probing.yfilter)
	|| (lsb_reports !=  nullptr && lsb_reports->has_operation());
}

std::string Native::Router::Lisp::LocReachAlgorithm::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::LocReachAlgorithm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "loc-reach-algorithm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::LocReachAlgorithm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rloc_probing.is_set || is_set(rloc_probing.yfilter)) leaf_name_data.push_back(rloc_probing.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::LocReachAlgorithm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsb-reports")
    {
        if(lsb_reports == nullptr)
        {
            lsb_reports = std::make_shared<Native::Router::Lisp::LocReachAlgorithm::LsbReports>();
        }
        return lsb_reports;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::LocReachAlgorithm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(lsb_reports != nullptr)
    {
        children["lsb-reports"] = lsb_reports;
    }

    return children;
}

void Native::Router::Lisp::LocReachAlgorithm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rloc-probing")
    {
        rloc_probing = value;
        rloc_probing.value_namespace = name_space;
        rloc_probing.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::LocReachAlgorithm::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rloc-probing")
    {
        rloc_probing.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::LocReachAlgorithm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsb-reports" || name == "rloc-probing")
        return true;
    return false;
}

Native::Router::Lisp::LocReachAlgorithm::LsbReports::LsbReports()
    :
    do_not_transmit{YType::empty, "do-not-transmit"},
    ignore{YType::empty, "ignore"}
{

    yang_name = "lsb-reports"; yang_parent_name = "loc-reach-algorithm"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::LocReachAlgorithm::LsbReports::~LsbReports()
{
}

bool Native::Router::Lisp::LocReachAlgorithm::LsbReports::has_data() const
{
    return do_not_transmit.is_set
	|| ignore.is_set;
}

bool Native::Router::Lisp::LocReachAlgorithm::LsbReports::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(do_not_transmit.yfilter)
	|| ydk::is_set(ignore.yfilter);
}

std::string Native::Router::Lisp::LocReachAlgorithm::LsbReports::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/loc-reach-algorithm/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::LocReachAlgorithm::LsbReports::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsb-reports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::LocReachAlgorithm::LsbReports::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (do_not_transmit.is_set || is_set(do_not_transmit.yfilter)) leaf_name_data.push_back(do_not_transmit.get_name_leafdata());
    if (ignore.is_set || is_set(ignore.yfilter)) leaf_name_data.push_back(ignore.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::LocReachAlgorithm::LsbReports::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::LocReachAlgorithm::LsbReports::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::LocReachAlgorithm::LsbReports::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "do-not-transmit")
    {
        do_not_transmit = value;
        do_not_transmit.value_namespace = name_space;
        do_not_transmit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ignore")
    {
        ignore = value;
        ignore.value_namespace = name_space;
        ignore.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::LocReachAlgorithm::LsbReports::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "do-not-transmit")
    {
        do_not_transmit.yfilter = yfilter;
    }
    if(value_path == "ignore")
    {
        ignore.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::LocReachAlgorithm::LsbReports::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "do-not-transmit" || name == "ignore")
        return true;
    return false;
}

Native::Router::Lisp::LocatorDown::LocatorDown()
    :
    address{YType::str, "address"},
    ipv4_interface{YType::str, "IPv4-interface"},
    ipv6_interface{YType::str, "IPv6-interface"}
{

    yang_name = "locator-down"; yang_parent_name = "lisp"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::LocatorDown::~LocatorDown()
{
}

bool Native::Router::Lisp::LocatorDown::has_data() const
{
    return address.is_set
	|| ipv4_interface.is_set
	|| ipv6_interface.is_set;
}

bool Native::Router::Lisp::LocatorDown::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(ipv4_interface.yfilter)
	|| ydk::is_set(ipv6_interface.yfilter);
}

std::string Native::Router::Lisp::LocatorDown::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::LocatorDown::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "locator-down";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::LocatorDown::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (ipv4_interface.is_set || is_set(ipv4_interface.yfilter)) leaf_name_data.push_back(ipv4_interface.get_name_leafdata());
    if (ipv6_interface.is_set || is_set(ipv6_interface.yfilter)) leaf_name_data.push_back(ipv6_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::LocatorDown::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::LocatorDown::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::LocatorDown::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "IPv4-interface")
    {
        ipv4_interface = value;
        ipv4_interface.value_namespace = name_space;
        ipv4_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "IPv6-interface")
    {
        ipv6_interface = value;
        ipv6_interface.value_namespace = name_space;
        ipv6_interface.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::LocatorDown::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "IPv4-interface")
    {
        ipv4_interface.yfilter = yfilter;
    }
    if(value_path == "IPv6-interface")
    {
        ipv6_interface.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::LocatorDown::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "IPv4-interface" || name == "IPv6-interface")
        return true;
    return false;
}

Native::Router::Lisp::LocatorTable::LocatorTable()
    :
    vrf_name{YType::str, "vrf-name"},
    default_{YType::empty, "default"},
    vrf{YType::str, "vrf"}
{

    yang_name = "locator-table"; yang_parent_name = "lisp"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::LocatorTable::~LocatorTable()
{
}

bool Native::Router::Lisp::LocatorTable::has_data() const
{
    return vrf_name.is_set
	|| default_.is_set
	|| vrf.is_set;
}

bool Native::Router::Lisp::LocatorTable::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(default_.yfilter)
	|| ydk::is_set(vrf.yfilter);
}

std::string Native::Router::Lisp::LocatorTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::LocatorTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "locator-table";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::LocatorTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (default_.is_set || is_set(default_.yfilter)) leaf_name_data.push_back(default_.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::LocatorTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::LocatorTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::LocatorTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default")
    {
        default_ = value;
        default_.value_namespace = name_space;
        default_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::LocatorTable::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
    if(value_path == "default")
    {
        default_.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::LocatorTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-name" || name == "default" || name == "vrf")
        return true;
    return false;
}

Native::Router::Lisp::MapRequest::MapRequest()
    :
    itr_rlocs{YType::str, "itr-rlocs"}
{

    yang_name = "map-request"; yang_parent_name = "lisp"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::MapRequest::~MapRequest()
{
}

bool Native::Router::Lisp::MapRequest::has_data() const
{
    return itr_rlocs.is_set;
}

bool Native::Router::Lisp::MapRequest::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(itr_rlocs.yfilter);
}

std::string Native::Router::Lisp::MapRequest::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::MapRequest::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-request";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::MapRequest::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (itr_rlocs.is_set || is_set(itr_rlocs.yfilter)) leaf_name_data.push_back(itr_rlocs.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::MapRequest::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::MapRequest::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::MapRequest::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "itr-rlocs")
    {
        itr_rlocs = value;
        itr_rlocs.value_namespace = name_space;
        itr_rlocs.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::MapRequest::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "itr-rlocs")
    {
        itr_rlocs.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::MapRequest::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "itr-rlocs")
        return true;
    return false;
}

Native::Router::Lisp::MapServer::MapServer()
    :
    rloc(std::make_shared<Native::Router::Lisp::MapServer::Rloc>())
	,site_registration(std::make_shared<Native::Router::Lisp::MapServer::SiteRegistration>())
{
    rloc->parent = this;
    site_registration->parent = this;

    yang_name = "map-server"; yang_parent_name = "lisp"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::MapServer::~MapServer()
{
}

bool Native::Router::Lisp::MapServer::has_data() const
{
    return (rloc !=  nullptr && rloc->has_data())
	|| (site_registration !=  nullptr && site_registration->has_data());
}

bool Native::Router::Lisp::MapServer::has_operation() const
{
    return is_set(yfilter)
	|| (rloc !=  nullptr && rloc->has_operation())
	|| (site_registration !=  nullptr && site_registration->has_operation());
}

std::string Native::Router::Lisp::MapServer::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::MapServer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-server";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::MapServer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::MapServer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rloc")
    {
        if(rloc == nullptr)
        {
            rloc = std::make_shared<Native::Router::Lisp::MapServer::Rloc>();
        }
        return rloc;
    }

    if(child_yang_name == "site-registration")
    {
        if(site_registration == nullptr)
        {
            site_registration = std::make_shared<Native::Router::Lisp::MapServer::SiteRegistration>();
        }
        return site_registration;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::MapServer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rloc != nullptr)
    {
        children["rloc"] = rloc;
    }

    if(site_registration != nullptr)
    {
        children["site-registration"] = site_registration;
    }

    return children;
}

void Native::Router::Lisp::MapServer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Lisp::MapServer::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Lisp::MapServer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rloc" || name == "site-registration")
        return true;
    return false;
}

Native::Router::Lisp::MapServer::Rloc::Rloc()
    :
    members(std::make_shared<Native::Router::Lisp::MapServer::Rloc::Members>())
{
    members->parent = this;

    yang_name = "rloc"; yang_parent_name = "map-server"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::MapServer::Rloc::~Rloc()
{
}

bool Native::Router::Lisp::MapServer::Rloc::has_data() const
{
    return (members !=  nullptr && members->has_data());
}

bool Native::Router::Lisp::MapServer::Rloc::has_operation() const
{
    return is_set(yfilter)
	|| (members !=  nullptr && members->has_operation());
}

std::string Native::Router::Lisp::MapServer::Rloc::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/map-server/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::MapServer::Rloc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rloc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::MapServer::Rloc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::MapServer::Rloc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "members")
    {
        if(members == nullptr)
        {
            members = std::make_shared<Native::Router::Lisp::MapServer::Rloc::Members>();
        }
        return members;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::MapServer::Rloc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(members != nullptr)
    {
        children["members"] = members;
    }

    return children;
}

void Native::Router::Lisp::MapServer::Rloc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Lisp::MapServer::Rloc::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Lisp::MapServer::Rloc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "members")
        return true;
    return false;
}

Native::Router::Lisp::MapServer::Rloc::Members::Members()
    :
    distribute{YType::empty, "distribute"}
    	,
    modify_discovered(std::make_shared<Native::Router::Lisp::MapServer::Rloc::Members::ModifyDiscovered>())
{
    modify_discovered->parent = this;

    yang_name = "members"; yang_parent_name = "rloc"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::MapServer::Rloc::Members::~Members()
{
}

bool Native::Router::Lisp::MapServer::Rloc::Members::has_data() const
{
    return distribute.is_set
	|| (modify_discovered !=  nullptr && modify_discovered->has_data());
}

bool Native::Router::Lisp::MapServer::Rloc::Members::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(distribute.yfilter)
	|| (modify_discovered !=  nullptr && modify_discovered->has_operation());
}

std::string Native::Router::Lisp::MapServer::Rloc::Members::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/map-server/rloc/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::MapServer::Rloc::Members::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "members";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::MapServer::Rloc::Members::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (distribute.is_set || is_set(distribute.yfilter)) leaf_name_data.push_back(distribute.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::MapServer::Rloc::Members::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "modify-discovered")
    {
        if(modify_discovered == nullptr)
        {
            modify_discovered = std::make_shared<Native::Router::Lisp::MapServer::Rloc::Members::ModifyDiscovered>();
        }
        return modify_discovered;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::MapServer::Rloc::Members::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(modify_discovered != nullptr)
    {
        children["modify-discovered"] = modify_discovered;
    }

    return children;
}

void Native::Router::Lisp::MapServer::Rloc::Members::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "distribute")
    {
        distribute = value;
        distribute.value_namespace = name_space;
        distribute.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::MapServer::Rloc::Members::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "distribute")
    {
        distribute.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::MapServer::Rloc::Members::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "modify-discovered" || name == "distribute")
        return true;
    return false;
}

Native::Router::Lisp::MapServer::Rloc::Members::ModifyDiscovered::ModifyDiscovered()
    :
    operator_{YType::enumeration, "operator"},
    locator_set{YType::str, "locator-set"}
{

    yang_name = "modify-discovered"; yang_parent_name = "members"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::MapServer::Rloc::Members::ModifyDiscovered::~ModifyDiscovered()
{
}

bool Native::Router::Lisp::MapServer::Rloc::Members::ModifyDiscovered::has_data() const
{
    return operator_.is_set
	|| locator_set.is_set;
}

bool Native::Router::Lisp::MapServer::Rloc::Members::ModifyDiscovered::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(operator_.yfilter)
	|| ydk::is_set(locator_set.yfilter);
}

std::string Native::Router::Lisp::MapServer::Rloc::Members::ModifyDiscovered::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/map-server/rloc/members/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::MapServer::Rloc::Members::ModifyDiscovered::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "modify-discovered";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::MapServer::Rloc::Members::ModifyDiscovered::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (operator_.is_set || is_set(operator_.yfilter)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (locator_set.is_set || is_set(locator_set.yfilter)) leaf_name_data.push_back(locator_set.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::MapServer::Rloc::Members::ModifyDiscovered::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::MapServer::Rloc::Members::ModifyDiscovered::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::MapServer::Rloc::Members::ModifyDiscovered::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "operator")
    {
        operator_ = value;
        operator_.value_namespace = name_space;
        operator_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locator-set")
    {
        locator_set = value;
        locator_set.value_namespace = name_space;
        locator_set.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::MapServer::Rloc::Members::ModifyDiscovered::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "operator")
    {
        operator_.yfilter = yfilter;
    }
    if(value_path == "locator-set")
    {
        locator_set.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::MapServer::Rloc::Members::ModifyDiscovered::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "operator" || name == "locator-set")
        return true;
    return false;
}

Native::Router::Lisp::MapServer::SiteRegistration::SiteRegistration()
    :
    limit{YType::uint32, "limit"},
    warning_threshold{YType::uint8, "warning-threshold"}
{

    yang_name = "site-registration"; yang_parent_name = "map-server"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::MapServer::SiteRegistration::~SiteRegistration()
{
}

bool Native::Router::Lisp::MapServer::SiteRegistration::has_data() const
{
    return limit.is_set
	|| warning_threshold.is_set;
}

bool Native::Router::Lisp::MapServer::SiteRegistration::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(limit.yfilter)
	|| ydk::is_set(warning_threshold.yfilter);
}

std::string Native::Router::Lisp::MapServer::SiteRegistration::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/map-server/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::MapServer::SiteRegistration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "site-registration";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::MapServer::SiteRegistration::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (limit.is_set || is_set(limit.yfilter)) leaf_name_data.push_back(limit.get_name_leafdata());
    if (warning_threshold.is_set || is_set(warning_threshold.yfilter)) leaf_name_data.push_back(warning_threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::MapServer::SiteRegistration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::MapServer::SiteRegistration::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::MapServer::SiteRegistration::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "limit")
    {
        limit = value;
        limit.value_namespace = name_space;
        limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold = value;
        warning_threshold.value_namespace = name_space;
        warning_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::MapServer::SiteRegistration::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "limit")
    {
        limit.yfilter = yfilter;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::MapServer::SiteRegistration::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "limit" || name == "warning-threshold")
        return true;
    return false;
}

Native::Router::Lisp::OtherXtrProbe::OtherXtrProbe()
    :
    period{YType::uint16, "period"}
{

    yang_name = "other-xtr-probe"; yang_parent_name = "lisp"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::OtherXtrProbe::~OtherXtrProbe()
{
}

bool Native::Router::Lisp::OtherXtrProbe::has_data() const
{
    return period.is_set;
}

bool Native::Router::Lisp::OtherXtrProbe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(period.yfilter);
}

std::string Native::Router::Lisp::OtherXtrProbe::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::OtherXtrProbe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "other-xtr-probe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::OtherXtrProbe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (period.is_set || is_set(period.yfilter)) leaf_name_data.push_back(period.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::OtherXtrProbe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::OtherXtrProbe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::OtherXtrProbe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "period")
    {
        period = value;
        period.value_namespace = name_space;
        period.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::OtherXtrProbe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "period")
    {
        period.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::OtherXtrProbe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "period")
        return true;
    return false;
}

Native::Router::Lisp::RemoteRlocProbe::RemoteRlocProbe()
    :
    on_membership_change{YType::empty, "on-membership-change"},
    on_route_change{YType::empty, "on-route-change"}
{

    yang_name = "remote-rloc-probe"; yang_parent_name = "lisp"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::RemoteRlocProbe::~RemoteRlocProbe()
{
}

bool Native::Router::Lisp::RemoteRlocProbe::has_data() const
{
    return on_membership_change.is_set
	|| on_route_change.is_set;
}

bool Native::Router::Lisp::RemoteRlocProbe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(on_membership_change.yfilter)
	|| ydk::is_set(on_route_change.yfilter);
}

std::string Native::Router::Lisp::RemoteRlocProbe::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::RemoteRlocProbe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-rloc-probe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::RemoteRlocProbe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (on_membership_change.is_set || is_set(on_membership_change.yfilter)) leaf_name_data.push_back(on_membership_change.get_name_leafdata());
    if (on_route_change.is_set || is_set(on_route_change.yfilter)) leaf_name_data.push_back(on_route_change.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::RemoteRlocProbe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::RemoteRlocProbe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::RemoteRlocProbe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "on-membership-change")
    {
        on_membership_change = value;
        on_membership_change.value_namespace = name_space;
        on_membership_change.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "on-route-change")
    {
        on_route_change = value;
        on_route_change.value_namespace = name_space;
        on_route_change.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::RemoteRlocProbe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "on-membership-change")
    {
        on_membership_change.yfilter = yfilter;
    }
    if(value_path == "on-route-change")
    {
        on_route_change.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::RemoteRlocProbe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "on-membership-change" || name == "on-route-change")
        return true;
    return false;
}

Native::Router::Lisp::EidTable::EidTable()
{

    yang_name = "eid-table"; yang_parent_name = "lisp"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::EidTable::~EidTable()
{
}

bool Native::Router::Lisp::EidTable::has_data() const
{
    for (std::size_t index=0; index<instance_list.size(); index++)
    {
        if(instance_list[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::Lisp::EidTable::has_operation() const
{
    for (std::size_t index=0; index<instance_list.size(); index++)
    {
        if(instance_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Router::Lisp::EidTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::EidTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eid-table";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::EidTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::EidTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "instance-list")
    {
        for(auto const & c : instance_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Lisp::EidTable::InstanceList>();
        c->parent = this;
        instance_list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::EidTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : instance_list)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Lisp::EidTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Lisp::EidTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Lisp::EidTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-list")
        return true;
    return false;
}

Native::Router::Lisp::EidTable::InstanceList::InstanceList()
    :
    instance_id{YType::uint32, "instance-id"},
    vrf_name{YType::str, "vrf-name"},
    default_{YType::empty, "default"},
    vrf{YType::str, "vrf"},
    disable_ttl_propagate{YType::empty, "disable-ttl-propagate"}
    	,
    alt(std::make_shared<Native::Router::Lisp::EidTable::InstanceList::Alt>())
	,control_packet(std::make_shared<Native::Router::Lisp::EidTable::InstanceList::ControlPacket>())
	,ddt(nullptr) // presence node
	,decapsulation(std::make_shared<Native::Router::Lisp::EidTable::InstanceList::Decapsulation>())
	,etr(std::make_shared<Native::Router::Lisp::EidTable::InstanceList::Etr>())
	,ipv4(std::make_shared<Native::Router::Lisp::EidTable::InstanceList::Ipv4>())
	,ipv6(std::make_shared<Native::Router::Lisp::EidTable::InstanceList::Ipv6>())
	,loc_reach_algorithm(std::make_shared<Native::Router::Lisp::EidTable::InstanceList::LocReachAlgorithm>())
	,locator_down(std::make_shared<Native::Router::Lisp::EidTable::InstanceList::LocatorDown>())
	,locator_table(std::make_shared<Native::Router::Lisp::EidTable::InstanceList::LocatorTable>())
	,map_request(std::make_shared<Native::Router::Lisp::EidTable::InstanceList::MapRequest>())
	,map_server(std::make_shared<Native::Router::Lisp::EidTable::InstanceList::MapServer>())
	,other_xtr_probe(std::make_shared<Native::Router::Lisp::EidTable::InstanceList::OtherXtrProbe>())
	,remote_rloc_probe(std::make_shared<Native::Router::Lisp::EidTable::InstanceList::RemoteRlocProbe>())
{
    alt->parent = this;
    control_packet->parent = this;
    decapsulation->parent = this;
    etr->parent = this;
    ipv4->parent = this;
    ipv6->parent = this;
    loc_reach_algorithm->parent = this;
    locator_down->parent = this;
    locator_table->parent = this;
    map_request->parent = this;
    map_server->parent = this;
    other_xtr_probe->parent = this;
    remote_rloc_probe->parent = this;

    yang_name = "instance-list"; yang_parent_name = "eid-table"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Router::Lisp::EidTable::InstanceList::~InstanceList()
{
}

bool Native::Router::Lisp::EidTable::InstanceList::has_data() const
{
    for (std::size_t index=0; index<database_mapping.size(); index++)
    {
        if(database_mapping[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<dynamic_eid.size(); index++)
    {
        if(dynamic_eid[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<map_cache.size(); index++)
    {
        if(map_cache[index]->has_data())
            return true;
    }
    return instance_id.is_set
	|| vrf_name.is_set
	|| default_.is_set
	|| vrf.is_set
	|| disable_ttl_propagate.is_set
	|| (alt !=  nullptr && alt->has_data())
	|| (control_packet !=  nullptr && control_packet->has_data())
	|| (ddt !=  nullptr && ddt->has_data())
	|| (decapsulation !=  nullptr && decapsulation->has_data())
	|| (etr !=  nullptr && etr->has_data())
	|| (ipv4 !=  nullptr && ipv4->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data())
	|| (loc_reach_algorithm !=  nullptr && loc_reach_algorithm->has_data())
	|| (locator_down !=  nullptr && locator_down->has_data())
	|| (locator_table !=  nullptr && locator_table->has_data())
	|| (map_request !=  nullptr && map_request->has_data())
	|| (map_server !=  nullptr && map_server->has_data())
	|| (other_xtr_probe !=  nullptr && other_xtr_probe->has_data())
	|| (remote_rloc_probe !=  nullptr && remote_rloc_probe->has_data());
}

bool Native::Router::Lisp::EidTable::InstanceList::has_operation() const
{
    for (std::size_t index=0; index<database_mapping.size(); index++)
    {
        if(database_mapping[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<dynamic_eid.size(); index++)
    {
        if(dynamic_eid[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<map_cache.size(); index++)
    {
        if(map_cache[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(instance_id.yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(default_.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| ydk::is_set(disable_ttl_propagate.yfilter)
	|| (alt !=  nullptr && alt->has_operation())
	|| (control_packet !=  nullptr && control_packet->has_operation())
	|| (ddt !=  nullptr && ddt->has_operation())
	|| (decapsulation !=  nullptr && decapsulation->has_operation())
	|| (etr !=  nullptr && etr->has_operation())
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation())
	|| (loc_reach_algorithm !=  nullptr && loc_reach_algorithm->has_operation())
	|| (locator_down !=  nullptr && locator_down->has_operation())
	|| (locator_table !=  nullptr && locator_table->has_operation())
	|| (map_request !=  nullptr && map_request->has_operation())
	|| (map_server !=  nullptr && map_server->has_operation())
	|| (other_xtr_probe !=  nullptr && other_xtr_probe->has_operation())
	|| (remote_rloc_probe !=  nullptr && remote_rloc_probe->has_operation());
}

std::string Native::Router::Lisp::EidTable::InstanceList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/eid-table/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::EidTable::InstanceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instance-list" <<"[instance-id='" <<instance_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::EidTable::InstanceList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_id.is_set || is_set(instance_id.yfilter)) leaf_name_data.push_back(instance_id.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (default_.is_set || is_set(default_.yfilter)) leaf_name_data.push_back(default_.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());
    if (disable_ttl_propagate.is_set || is_set(disable_ttl_propagate.yfilter)) leaf_name_data.push_back(disable_ttl_propagate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Lisp::EidTable::InstanceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "database-mapping")
    {
        for(auto const & c : database_mapping)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Lisp::EidTable::InstanceList::DatabaseMapping>();
        c->parent = this;
        database_mapping.push_back(c);
        return c;
    }

    if(child_yang_name == "dynamic-eid")
    {
        for(auto const & c : dynamic_eid)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Lisp::EidTable::InstanceList::DynamicEid>();
        c->parent = this;
        dynamic_eid.push_back(c);
        return c;
    }

    if(child_yang_name == "alt")
    {
        if(alt == nullptr)
        {
            alt = std::make_shared<Native::Router::Lisp::EidTable::InstanceList::Alt>();
        }
        return alt;
    }

    if(child_yang_name == "control-packet")
    {
        if(control_packet == nullptr)
        {
            control_packet = std::make_shared<Native::Router::Lisp::EidTable::InstanceList::ControlPacket>();
        }
        return control_packet;
    }

    if(child_yang_name == "ddt")
    {
        if(ddt == nullptr)
        {
            ddt = std::make_shared<Native::Router::Lisp::EidTable::InstanceList::Ddt>();
        }
        return ddt;
    }

    if(child_yang_name == "decapsulation")
    {
        if(decapsulation == nullptr)
        {
            decapsulation = std::make_shared<Native::Router::Lisp::EidTable::InstanceList::Decapsulation>();
        }
        return decapsulation;
    }

    if(child_yang_name == "etr")
    {
        if(etr == nullptr)
        {
            etr = std::make_shared<Native::Router::Lisp::EidTable::InstanceList::Etr>();
        }
        return etr;
    }

    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<Native::Router::Lisp::EidTable::InstanceList::Ipv4>();
        }
        return ipv4;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Native::Router::Lisp::EidTable::InstanceList::Ipv6>();
        }
        return ipv6;
    }

    if(child_yang_name == "loc-reach-algorithm")
    {
        if(loc_reach_algorithm == nullptr)
        {
            loc_reach_algorithm = std::make_shared<Native::Router::Lisp::EidTable::InstanceList::LocReachAlgorithm>();
        }
        return loc_reach_algorithm;
    }

    if(child_yang_name == "locator-down")
    {
        if(locator_down == nullptr)
        {
            locator_down = std::make_shared<Native::Router::Lisp::EidTable::InstanceList::LocatorDown>();
        }
        return locator_down;
    }

    if(child_yang_name == "locator-table")
    {
        if(locator_table == nullptr)
        {
            locator_table = std::make_shared<Native::Router::Lisp::EidTable::InstanceList::LocatorTable>();
        }
        return locator_table;
    }

    if(child_yang_name == "map-request")
    {
        if(map_request == nullptr)
        {
            map_request = std::make_shared<Native::Router::Lisp::EidTable::InstanceList::MapRequest>();
        }
        return map_request;
    }

    if(child_yang_name == "map-server")
    {
        if(map_server == nullptr)
        {
            map_server = std::make_shared<Native::Router::Lisp::EidTable::InstanceList::MapServer>();
        }
        return map_server;
    }

    if(child_yang_name == "other-xtr-probe")
    {
        if(other_xtr_probe == nullptr)
        {
            other_xtr_probe = std::make_shared<Native::Router::Lisp::EidTable::InstanceList::OtherXtrProbe>();
        }
        return other_xtr_probe;
    }

    if(child_yang_name == "remote-rloc-probe")
    {
        if(remote_rloc_probe == nullptr)
        {
            remote_rloc_probe = std::make_shared<Native::Router::Lisp::EidTable::InstanceList::RemoteRlocProbe>();
        }
        return remote_rloc_probe;
    }

    if(child_yang_name == "map-cache")
    {
        for(auto const & c : map_cache)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Lisp::EidTable::InstanceList::MapCache>();
        c->parent = this;
        map_cache.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::EidTable::InstanceList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : database_mapping)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : dynamic_eid)
    {
        children[c->get_segment_path()] = c;
    }

    if(alt != nullptr)
    {
        children["alt"] = alt;
    }

    if(control_packet != nullptr)
    {
        children["control-packet"] = control_packet;
    }

    if(ddt != nullptr)
    {
        children["ddt"] = ddt;
    }

    if(decapsulation != nullptr)
    {
        children["decapsulation"] = decapsulation;
    }

    if(etr != nullptr)
    {
        children["etr"] = etr;
    }

    if(ipv4 != nullptr)
    {
        children["ipv4"] = ipv4;
    }

    if(ipv6 != nullptr)
    {
        children["ipv6"] = ipv6;
    }

    if(loc_reach_algorithm != nullptr)
    {
        children["loc-reach-algorithm"] = loc_reach_algorithm;
    }

    if(locator_down != nullptr)
    {
        children["locator-down"] = locator_down;
    }

    if(locator_table != nullptr)
    {
        children["locator-table"] = locator_table;
    }

    if(map_request != nullptr)
    {
        children["map-request"] = map_request;
    }

    if(map_server != nullptr)
    {
        children["map-server"] = map_server;
    }

    if(other_xtr_probe != nullptr)
    {
        children["other-xtr-probe"] = other_xtr_probe;
    }

    if(remote_rloc_probe != nullptr)
    {
        children["remote-rloc-probe"] = remote_rloc_probe;
    }

    for (auto const & c : map_cache)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Lisp::EidTable::InstanceList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-id")
    {
        instance_id = value;
        instance_id.value_namespace = name_space;
        instance_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default")
    {
        default_ = value;
        default_.value_namespace = name_space;
        default_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disable-ttl-propagate")
    {
        disable_ttl_propagate = value;
        disable_ttl_propagate.value_namespace = name_space;
        disable_ttl_propagate.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::EidTable::InstanceList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-id")
    {
        instance_id.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
    if(value_path == "default")
    {
        default_.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
    if(value_path == "disable-ttl-propagate")
    {
        disable_ttl_propagate.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::EidTable::InstanceList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "database-mapping" || name == "dynamic-eid" || name == "alt" || name == "control-packet" || name == "ddt" || name == "decapsulation" || name == "etr" || name == "ipv4" || name == "ipv6" || name == "loc-reach-algorithm" || name == "locator-down" || name == "locator-table" || name == "map-request" || name == "map-server" || name == "other-xtr-probe" || name == "remote-rloc-probe" || name == "map-cache" || name == "instance-id" || name == "vrf-name" || name == "default" || name == "vrf" || name == "disable-ttl-propagate")
        return true;
    return false;
}

const Enum::YLeaf Native::Router::Lisp::MapServer::Rloc::Members::ModifyDiscovered::Operator_::add {0, "add"};
const Enum::YLeaf Native::Router::Lisp::MapServer::Rloc::Members::ModifyDiscovered::Operator_::override {1, "override"};


}
}

