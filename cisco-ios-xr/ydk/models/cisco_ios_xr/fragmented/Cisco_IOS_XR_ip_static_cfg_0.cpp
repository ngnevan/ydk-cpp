
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ip_static_cfg_0.hpp"
#include "Cisco_IOS_XR_ip_static_cfg_2.hpp"
#include "Cisco_IOS_XR_ip_static_cfg_4.hpp"
#include "Cisco_IOS_XR_ip_static_cfg_1.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ip_static_cfg {

RouterStatic::RouterStatic()
    :
    default_vrf(std::make_shared<RouterStatic::DefaultVrf>())
	,maximum_routes(std::make_shared<RouterStatic::MaximumRoutes>())
	,vrfs(std::make_shared<RouterStatic::Vrfs>())
{
    default_vrf->parent = this;
    children["default-vrf"] = default_vrf;

    maximum_routes->parent = this;
    children["maximum-routes"] = maximum_routes;

    vrfs->parent = this;
    children["vrfs"] = vrfs;

    yang_name = "router-static"; yang_parent_name = "Cisco-IOS-XR-ip-static-cfg";
}

RouterStatic::~RouterStatic()
{
}

bool RouterStatic::has_data() const
{
    return (default_vrf !=  nullptr && default_vrf->has_data())
	|| (maximum_routes !=  nullptr && maximum_routes->has_data())
	|| (vrfs !=  nullptr && vrfs->has_data());
}

bool RouterStatic::has_operation() const
{
    return is_set(operation)
	|| (default_vrf !=  nullptr && default_vrf->has_operation())
	|| (maximum_routes !=  nullptr && maximum_routes->has_operation())
	|| (vrfs !=  nullptr && vrfs->has_operation());
}

std::string RouterStatic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-static-cfg:router-static";

    return path_buffer.str();

}

EntityPath RouterStatic::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RouterStatic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "default-vrf")
    {
        if(default_vrf != nullptr)
        {
            children["default-vrf"] = default_vrf;
        }
        else
        {
            default_vrf = std::make_shared<RouterStatic::DefaultVrf>();
            default_vrf->parent = this;
            children["default-vrf"] = default_vrf;
        }
        return children.at("default-vrf");
    }

    if(child_yang_name == "maximum-routes")
    {
        if(maximum_routes != nullptr)
        {
            children["maximum-routes"] = maximum_routes;
        }
        else
        {
            maximum_routes = std::make_shared<RouterStatic::MaximumRoutes>();
            maximum_routes->parent = this;
            children["maximum-routes"] = maximum_routes;
        }
        return children.at("maximum-routes");
    }

    if(child_yang_name == "vrfs")
    {
        if(vrfs != nullptr)
        {
            children["vrfs"] = vrfs;
        }
        else
        {
            vrfs = std::make_shared<RouterStatic::Vrfs>();
            vrfs->parent = this;
            children["vrfs"] = vrfs;
        }
        return children.at("vrfs");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RouterStatic::get_children()
{
    if(children.find("default-vrf") == children.end())
    {
        if(default_vrf != nullptr)
        {
            children["default-vrf"] = default_vrf;
        }
    }

    if(children.find("maximum-routes") == children.end())
    {
        if(maximum_routes != nullptr)
        {
            children["maximum-routes"] = maximum_routes;
        }
    }

    if(children.find("vrfs") == children.end())
    {
        if(vrfs != nullptr)
        {
            children["vrfs"] = vrfs;
        }
    }

    return children;
}

void RouterStatic::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> RouterStatic::clone_ptr() const
{
    return std::make_shared<RouterStatic>();
}

std::string RouterStatic::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string RouterStatic::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function RouterStatic::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

RouterStatic::Vrfs::Vrfs()
{
    yang_name = "vrfs"; yang_parent_name = "router-static";
}

RouterStatic::Vrfs::~Vrfs()
{
}

bool RouterStatic::Vrfs::has_data() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return false;
}

bool RouterStatic::Vrfs::has_operation() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string RouterStatic::Vrfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrfs";

    return path_buffer.str();

}

EntityPath RouterStatic::Vrfs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-static-cfg:router-static/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RouterStatic::Vrfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "vrf")
    {
        for(auto const & c : vrf)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<RouterStatic::Vrfs::Vrf>();
        c->parent = this;
        vrf.push_back(std::move(c));
        children[segment_path] = vrf.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RouterStatic::Vrfs::get_children()
{
    for (auto const & c : vrf)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void RouterStatic::Vrfs::set_value(const std::string & value_path, std::string value)
{
}

RouterStatic::Vrfs::Vrf::Vrf()
    :
    vrf_name{YType::str, "vrf-name"}
    	,
    address_family(std::make_shared<RouterStatic::Vrfs::Vrf::AddressFamily>())
{
    address_family->parent = this;
    children["address-family"] = address_family;

    yang_name = "vrf"; yang_parent_name = "vrfs";
}

RouterStatic::Vrfs::Vrf::~Vrf()
{
}

bool RouterStatic::Vrfs::Vrf::has_data() const
{
    return vrf_name.is_set
	|| (address_family !=  nullptr && address_family->has_data());
}

bool RouterStatic::Vrfs::Vrf::has_operation() const
{
    return is_set(operation)
	|| is_set(vrf_name.operation)
	|| (address_family !=  nullptr && address_family->has_operation());
}

std::string RouterStatic::Vrfs::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf" <<"[vrf-name='" <<vrf_name <<"']";

    return path_buffer.str();

}

EntityPath RouterStatic::Vrfs::Vrf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-static-cfg:router-static/vrfs/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RouterStatic::Vrfs::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "address-family")
    {
        if(address_family != nullptr)
        {
            children["address-family"] = address_family;
        }
        else
        {
            address_family = std::make_shared<RouterStatic::Vrfs::Vrf::AddressFamily>();
            address_family->parent = this;
            children["address-family"] = address_family;
        }
        return children.at("address-family");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RouterStatic::Vrfs::Vrf::get_children()
{
    if(children.find("address-family") == children.end())
    {
        if(address_family != nullptr)
        {
            children["address-family"] = address_family;
        }
    }

    return children;
}

void RouterStatic::Vrfs::Vrf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

RouterStatic::Vrfs::Vrf::AddressFamily::AddressFamily()
    :
    vrfipv4(std::make_shared<RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4>())
	,vrfipv6(std::make_shared<RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6>())
{
    vrfipv4->parent = this;
    children["vrfipv4"] = vrfipv4;

    vrfipv6->parent = this;
    children["vrfipv6"] = vrfipv6;

    yang_name = "address-family"; yang_parent_name = "vrf";
}

RouterStatic::Vrfs::Vrf::AddressFamily::~AddressFamily()
{
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::has_data() const
{
    return (vrfipv4 !=  nullptr && vrfipv4->has_data())
	|| (vrfipv6 !=  nullptr && vrfipv6->has_data());
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::has_operation() const
{
    return is_set(operation)
	|| (vrfipv4 !=  nullptr && vrfipv4->has_operation())
	|| (vrfipv6 !=  nullptr && vrfipv6->has_operation());
}

std::string RouterStatic::Vrfs::Vrf::AddressFamily::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address-family";

    return path_buffer.str();

}

EntityPath RouterStatic::Vrfs::Vrf::AddressFamily::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AddressFamily' in Cisco_IOS_XR_ip_static_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RouterStatic::Vrfs::Vrf::AddressFamily::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "vrfipv4")
    {
        if(vrfipv4 != nullptr)
        {
            children["vrfipv4"] = vrfipv4;
        }
        else
        {
            vrfipv4 = std::make_shared<RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4>();
            vrfipv4->parent = this;
            children["vrfipv4"] = vrfipv4;
        }
        return children.at("vrfipv4");
    }

    if(child_yang_name == "vrfipv6")
    {
        if(vrfipv6 != nullptr)
        {
            children["vrfipv6"] = vrfipv6;
        }
        else
        {
            vrfipv6 = std::make_shared<RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6>();
            vrfipv6->parent = this;
            children["vrfipv6"] = vrfipv6;
        }
        return children.at("vrfipv6");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RouterStatic::Vrfs::Vrf::AddressFamily::get_children()
{
    if(children.find("vrfipv4") == children.end())
    {
        if(vrfipv4 != nullptr)
        {
            children["vrfipv4"] = vrfipv4;
        }
    }

    if(children.find("vrfipv6") == children.end())
    {
        if(vrfipv6 != nullptr)
        {
            children["vrfipv6"] = vrfipv6;
        }
    }

    return children;
}

void RouterStatic::Vrfs::Vrf::AddressFamily::set_value(const std::string & value_path, std::string value)
{
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::Vrfipv4()
    :
    vrf_multicast(std::make_shared<RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast>())
	,vrf_unicast(std::make_shared<RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast>())
{
    vrf_multicast->parent = this;
    children["vrf-multicast"] = vrf_multicast;

    vrf_unicast->parent = this;
    children["vrf-unicast"] = vrf_unicast;

    yang_name = "vrfipv4"; yang_parent_name = "address-family";
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::~Vrfipv4()
{
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::has_data() const
{
    return (vrf_multicast !=  nullptr && vrf_multicast->has_data())
	|| (vrf_unicast !=  nullptr && vrf_unicast->has_data());
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::has_operation() const
{
    return is_set(operation)
	|| (vrf_multicast !=  nullptr && vrf_multicast->has_operation())
	|| (vrf_unicast !=  nullptr && vrf_unicast->has_operation());
}

std::string RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrfipv4";

    return path_buffer.str();

}

EntityPath RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Vrfipv4' in Cisco_IOS_XR_ip_static_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "vrf-multicast")
    {
        if(vrf_multicast != nullptr)
        {
            children["vrf-multicast"] = vrf_multicast;
        }
        else
        {
            vrf_multicast = std::make_shared<RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast>();
            vrf_multicast->parent = this;
            children["vrf-multicast"] = vrf_multicast;
        }
        return children.at("vrf-multicast");
    }

    if(child_yang_name == "vrf-unicast")
    {
        if(vrf_unicast != nullptr)
        {
            children["vrf-unicast"] = vrf_unicast;
        }
        else
        {
            vrf_unicast = std::make_shared<RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast>();
            vrf_unicast->parent = this;
            children["vrf-unicast"] = vrf_unicast;
        }
        return children.at("vrf-unicast");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::get_children()
{
    if(children.find("vrf-multicast") == children.end())
    {
        if(vrf_multicast != nullptr)
        {
            children["vrf-multicast"] = vrf_multicast;
        }
    }

    if(children.find("vrf-unicast") == children.end())
    {
        if(vrf_unicast != nullptr)
        {
            children["vrf-unicast"] = vrf_unicast;
        }
    }

    return children;
}

void RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::set_value(const std::string & value_path, std::string value)
{
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfUnicast()
    :
    default_topology(std::make_shared<RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology>())
	,topologies(std::make_shared<RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies>())
	,vrf_prefixes(std::make_shared<RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes>())
{
    default_topology->parent = this;
    children["default-topology"] = default_topology;

    topologies->parent = this;
    children["topologies"] = topologies;

    vrf_prefixes->parent = this;
    children["vrf-prefixes"] = vrf_prefixes;

    yang_name = "vrf-unicast"; yang_parent_name = "vrfipv4";
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::~VrfUnicast()
{
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::has_data() const
{
    return (default_topology !=  nullptr && default_topology->has_data())
	|| (topologies !=  nullptr && topologies->has_data())
	|| (vrf_prefixes !=  nullptr && vrf_prefixes->has_data());
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::has_operation() const
{
    return is_set(operation)
	|| (default_topology !=  nullptr && default_topology->has_operation())
	|| (topologies !=  nullptr && topologies->has_operation())
	|| (vrf_prefixes !=  nullptr && vrf_prefixes->has_operation());
}

std::string RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-unicast";

    return path_buffer.str();

}

EntityPath RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VrfUnicast' in Cisco_IOS_XR_ip_static_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "default-topology")
    {
        if(default_topology != nullptr)
        {
            children["default-topology"] = default_topology;
        }
        else
        {
            default_topology = std::make_shared<RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology>();
            default_topology->parent = this;
            children["default-topology"] = default_topology;
        }
        return children.at("default-topology");
    }

    if(child_yang_name == "topologies")
    {
        if(topologies != nullptr)
        {
            children["topologies"] = topologies;
        }
        else
        {
            topologies = std::make_shared<RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies>();
            topologies->parent = this;
            children["topologies"] = topologies;
        }
        return children.at("topologies");
    }

    if(child_yang_name == "vrf-prefixes")
    {
        if(vrf_prefixes != nullptr)
        {
            children["vrf-prefixes"] = vrf_prefixes;
        }
        else
        {
            vrf_prefixes = std::make_shared<RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes>();
            vrf_prefixes->parent = this;
            children["vrf-prefixes"] = vrf_prefixes;
        }
        return children.at("vrf-prefixes");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::get_children()
{
    if(children.find("default-topology") == children.end())
    {
        if(default_topology != nullptr)
        {
            children["default-topology"] = default_topology;
        }
    }

    if(children.find("topologies") == children.end())
    {
        if(topologies != nullptr)
        {
            children["topologies"] = topologies;
        }
    }

    if(children.find("vrf-prefixes") == children.end())
    {
        if(vrf_prefixes != nullptr)
        {
            children["vrf-prefixes"] = vrf_prefixes;
        }
    }

    return children;
}

void RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::set_value(const std::string & value_path, std::string value)
{
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topologies()
{
    yang_name = "topologies"; yang_parent_name = "vrf-unicast";
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::~Topologies()
{
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::has_data() const
{
    for (std::size_t index=0; index<topology.size(); index++)
    {
        if(topology[index]->has_data())
            return true;
    }
    return false;
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::has_operation() const
{
    for (std::size_t index=0; index<topology.size(); index++)
    {
        if(topology[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topologies";

    return path_buffer.str();

}

EntityPath RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Topologies' in Cisco_IOS_XR_ip_static_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "topology")
    {
        for(auto const & c : topology)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology>();
        c->parent = this;
        topology.push_back(std::move(c));
        children[segment_path] = topology.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::get_children()
{
    for (auto const & c : topology)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::set_value(const std::string & value_path, std::string value)
{
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::Topology()
    :
    topology_name{YType::str, "topology-name"}
    	,
    vrf_prefix_topologies(std::make_shared<RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies>())
{
    vrf_prefix_topologies->parent = this;
    children["vrf-prefix-topologies"] = vrf_prefix_topologies;

    yang_name = "topology"; yang_parent_name = "topologies";
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::~Topology()
{
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::has_data() const
{
    return topology_name.is_set
	|| (vrf_prefix_topologies !=  nullptr && vrf_prefix_topologies->has_data());
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::has_operation() const
{
    return is_set(operation)
	|| is_set(topology_name.operation)
	|| (vrf_prefix_topologies !=  nullptr && vrf_prefix_topologies->has_operation());
}

std::string RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology" <<"[topology-name='" <<topology_name <<"']";

    return path_buffer.str();

}

EntityPath RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Topology' in Cisco_IOS_XR_ip_static_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (topology_name.is_set || is_set(topology_name.operation)) leaf_name_data.push_back(topology_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "vrf-prefix-topologies")
    {
        if(vrf_prefix_topologies != nullptr)
        {
            children["vrf-prefix-topologies"] = vrf_prefix_topologies;
        }
        else
        {
            vrf_prefix_topologies = std::make_shared<RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies>();
            vrf_prefix_topologies->parent = this;
            children["vrf-prefix-topologies"] = vrf_prefix_topologies;
        }
        return children.at("vrf-prefix-topologies");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::get_children()
{
    if(children.find("vrf-prefix-topologies") == children.end())
    {
        if(vrf_prefix_topologies != nullptr)
        {
            children["vrf-prefix-topologies"] = vrf_prefix_topologies;
        }
    }

    return children;
}

void RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "topology-name")
    {
        topology_name = value;
    }
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopologies()
{
    yang_name = "vrf-prefix-topologies"; yang_parent_name = "topology";
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::~VrfPrefixTopologies()
{
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::has_data() const
{
    for (std::size_t index=0; index<vrf_prefix_topology.size(); index++)
    {
        if(vrf_prefix_topology[index]->has_data())
            return true;
    }
    return false;
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::has_operation() const
{
    for (std::size_t index=0; index<vrf_prefix_topology.size(); index++)
    {
        if(vrf_prefix_topology[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-prefix-topologies";

    return path_buffer.str();

}

EntityPath RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VrfPrefixTopologies' in Cisco_IOS_XR_ip_static_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "vrf-prefix-topology")
    {
        for(auto const & c : vrf_prefix_topology)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology>();
        c->parent = this;
        vrf_prefix_topology.push_back(std::move(c));
        children[segment_path] = vrf_prefix_topology.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::get_children()
{
    for (auto const & c : vrf_prefix_topology)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::set_value(const std::string & value_path, std::string value)
{
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfPrefixTopology()
    :
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint32, "prefix-length"}
    	,
    vrf_recurse_routes(std::make_shared<RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes>())
	,vrf_route(std::make_shared<RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute>())
	,vrf_seg_route(std::make_shared<RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute>())
{
    vrf_recurse_routes->parent = this;
    children["vrf-recurse-routes"] = vrf_recurse_routes;

    vrf_route->parent = this;
    children["vrf-route"] = vrf_route;

    vrf_seg_route->parent = this;
    children["vrf-seg-route"] = vrf_seg_route;

    yang_name = "vrf-prefix-topology"; yang_parent_name = "vrf-prefix-topologies";
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::~VrfPrefixTopology()
{
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::has_data() const
{
    return prefix.is_set
	|| prefix_length.is_set
	|| (vrf_recurse_routes !=  nullptr && vrf_recurse_routes->has_data())
	|| (vrf_route !=  nullptr && vrf_route->has_data())
	|| (vrf_seg_route !=  nullptr && vrf_seg_route->has_data());
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::has_operation() const
{
    return is_set(operation)
	|| is_set(prefix.operation)
	|| is_set(prefix_length.operation)
	|| (vrf_recurse_routes !=  nullptr && vrf_recurse_routes->has_operation())
	|| (vrf_route !=  nullptr && vrf_route->has_operation())
	|| (vrf_seg_route !=  nullptr && vrf_seg_route->has_operation());
}

std::string RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-prefix-topology" <<"[prefix='" <<prefix <<"']" <<"[prefix-length='" <<prefix_length <<"']";

    return path_buffer.str();

}

EntityPath RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VrfPrefixTopology' in Cisco_IOS_XR_ip_static_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "vrf-recurse-routes")
    {
        if(vrf_recurse_routes != nullptr)
        {
            children["vrf-recurse-routes"] = vrf_recurse_routes;
        }
        else
        {
            vrf_recurse_routes = std::make_shared<RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes>();
            vrf_recurse_routes->parent = this;
            children["vrf-recurse-routes"] = vrf_recurse_routes;
        }
        return children.at("vrf-recurse-routes");
    }

    if(child_yang_name == "vrf-route")
    {
        if(vrf_route != nullptr)
        {
            children["vrf-route"] = vrf_route;
        }
        else
        {
            vrf_route = std::make_shared<RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute>();
            vrf_route->parent = this;
            children["vrf-route"] = vrf_route;
        }
        return children.at("vrf-route");
    }

    if(child_yang_name == "vrf-seg-route")
    {
        if(vrf_seg_route != nullptr)
        {
            children["vrf-seg-route"] = vrf_seg_route;
        }
        else
        {
            vrf_seg_route = std::make_shared<RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute>();
            vrf_seg_route->parent = this;
            children["vrf-seg-route"] = vrf_seg_route;
        }
        return children.at("vrf-seg-route");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::get_children()
{
    if(children.find("vrf-recurse-routes") == children.end())
    {
        if(vrf_recurse_routes != nullptr)
        {
            children["vrf-recurse-routes"] = vrf_recurse_routes;
        }
    }

    if(children.find("vrf-route") == children.end())
    {
        if(vrf_route != nullptr)
        {
            children["vrf-route"] = vrf_route;
        }
    }

    if(children.find("vrf-seg-route") == children.end())
    {
        if(vrf_seg_route != nullptr)
        {
            children["vrf-seg-route"] = vrf_seg_route;
        }
    }

    return children;
}

void RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "prefix")
    {
        prefix = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfRoute()
    :
    vrf_next_hop_table(std::make_shared<RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable>())
{
    vrf_next_hop_table->parent = this;
    children["vrf-next-hop-table"] = vrf_next_hop_table;

    yang_name = "vrf-route"; yang_parent_name = "vrf-prefix-topology";
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::~VrfRoute()
{
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::has_data() const
{
    return (vrf_next_hop_table !=  nullptr && vrf_next_hop_table->has_data());
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::has_operation() const
{
    return is_set(operation)
	|| (vrf_next_hop_table !=  nullptr && vrf_next_hop_table->has_operation());
}

std::string RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-route";

    return path_buffer.str();

}

EntityPath RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VrfRoute' in Cisco_IOS_XR_ip_static_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "vrf-next-hop-table")
    {
        if(vrf_next_hop_table != nullptr)
        {
            children["vrf-next-hop-table"] = vrf_next_hop_table;
        }
        else
        {
            vrf_next_hop_table = std::make_shared<RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable>();
            vrf_next_hop_table->parent = this;
            children["vrf-next-hop-table"] = vrf_next_hop_table;
        }
        return children.at("vrf-next-hop-table");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::get_children()
{
    if(children.find("vrf-next-hop-table") == children.end())
    {
        if(vrf_next_hop_table != nullptr)
        {
            children["vrf-next-hop-table"] = vrf_next_hop_table;
        }
    }

    return children;
}

void RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::set_value(const std::string & value_path, std::string value)
{
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopTable()
{
    yang_name = "vrf-next-hop-table"; yang_parent_name = "vrf-route";
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::~VrfNextHopTable()
{
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::has_data() const
{
    for (std::size_t index=0; index<vrf_next_hop_explicit_path_name.size(); index++)
    {
        if(vrf_next_hop_explicit_path_name[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_interface_name.size(); index++)
    {
        if(vrf_next_hop_interface_name[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_interface_name_next_hop_address.size(); index++)
    {
        if(vrf_next_hop_interface_name_next_hop_address[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_next_hop_address.size(); index++)
    {
        if(vrf_next_hop_next_hop_address[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_next_hop_address_explicit_path_name.size(); index++)
    {
        if(vrf_next_hop_next_hop_address_explicit_path_name[index]->has_data())
            return true;
    }
    return false;
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::has_operation() const
{
    for (std::size_t index=0; index<vrf_next_hop_explicit_path_name.size(); index++)
    {
        if(vrf_next_hop_explicit_path_name[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_interface_name.size(); index++)
    {
        if(vrf_next_hop_interface_name[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_interface_name_next_hop_address.size(); index++)
    {
        if(vrf_next_hop_interface_name_next_hop_address[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_next_hop_address.size(); index++)
    {
        if(vrf_next_hop_next_hop_address[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_next_hop_address_explicit_path_name.size(); index++)
    {
        if(vrf_next_hop_next_hop_address_explicit_path_name[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-next-hop-table";

    return path_buffer.str();

}

EntityPath RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VrfNextHopTable' in Cisco_IOS_XR_ip_static_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "vrf-next-hop-explicit-path-name")
    {
        for(auto const & c : vrf_next_hop_explicit_path_name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopExplicitPathName>();
        c->parent = this;
        vrf_next_hop_explicit_path_name.push_back(std::move(c));
        children[segment_path] = vrf_next_hop_explicit_path_name.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "vrf-next-hop-interface-name")
    {
        for(auto const & c : vrf_next_hop_interface_name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceName>();
        c->parent = this;
        vrf_next_hop_interface_name.push_back(std::move(c));
        children[segment_path] = vrf_next_hop_interface_name.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "vrf-next-hop-interface-name-next-hop-address")
    {
        for(auto const & c : vrf_next_hop_interface_name_next_hop_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceNameNextHopAddress>();
        c->parent = this;
        vrf_next_hop_interface_name_next_hop_address.push_back(std::move(c));
        children[segment_path] = vrf_next_hop_interface_name_next_hop_address.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "vrf-next-hop-next-hop-address")
    {
        for(auto const & c : vrf_next_hop_next_hop_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddress>();
        c->parent = this;
        vrf_next_hop_next_hop_address.push_back(std::move(c));
        children[segment_path] = vrf_next_hop_next_hop_address.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "vrf-next-hop-next-hop-address-explicit-path-name")
    {
        for(auto const & c : vrf_next_hop_next_hop_address_explicit_path_name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddressExplicitPathName>();
        c->parent = this;
        vrf_next_hop_next_hop_address_explicit_path_name.push_back(std::move(c));
        children[segment_path] = vrf_next_hop_next_hop_address_explicit_path_name.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::get_children()
{
    for (auto const & c : vrf_next_hop_explicit_path_name)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : vrf_next_hop_interface_name)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : vrf_next_hop_interface_name_next_hop_address)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : vrf_next_hop_next_hop_address)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : vrf_next_hop_next_hop_address_explicit_path_name)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::set_value(const std::string & value_path, std::string value)
{
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceName::VrfNextHopInterfaceName()
    :
    interface_name{YType::str, "interface-name"},
    bfd_fast_detect{YType::boolean, "bfd-fast-detect"},
    description{YType::str, "description"},
    detect_multiplier{YType::uint32, "detect-multiplier"},
    index_{YType::str, "index"},
    load_metric{YType::uint32, "load-metric"},
    metric{YType::uint32, "metric"},
    minimum_interval{YType::uint32, "minimum-interval"},
    object_name{YType::str, "object-name"},
    permanent{YType::boolean, "permanent"},
    tag{YType::uint32, "tag"},
    tunnel_id{YType::uint32, "tunnel-id"},
    vrf_lable{YType::uint32, "vrf-lable"}
{
    yang_name = "vrf-next-hop-interface-name"; yang_parent_name = "vrf-next-hop-table";
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceName::~VrfNextHopInterfaceName()
{
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceName::has_data() const
{
    return interface_name.is_set
	|| bfd_fast_detect.is_set
	|| description.is_set
	|| detect_multiplier.is_set
	|| index_.is_set
	|| load_metric.is_set
	|| metric.is_set
	|| minimum_interval.is_set
	|| object_name.is_set
	|| permanent.is_set
	|| tag.is_set
	|| tunnel_id.is_set
	|| vrf_lable.is_set;
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceName::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(bfd_fast_detect.operation)
	|| is_set(description.operation)
	|| is_set(detect_multiplier.operation)
	|| is_set(index_.operation)
	|| is_set(load_metric.operation)
	|| is_set(metric.operation)
	|| is_set(minimum_interval.operation)
	|| is_set(object_name.operation)
	|| is_set(permanent.operation)
	|| is_set(tag.operation)
	|| is_set(tunnel_id.operation)
	|| is_set(vrf_lable.operation);
}

std::string RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-next-hop-interface-name" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

EntityPath RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceName::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VrfNextHopInterfaceName' in Cisco_IOS_XR_ip_static_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (bfd_fast_detect.is_set || is_set(bfd_fast_detect.operation)) leaf_name_data.push_back(bfd_fast_detect.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (detect_multiplier.is_set || is_set(detect_multiplier.operation)) leaf_name_data.push_back(detect_multiplier.get_name_leafdata());
    if (index_.is_set || is_set(index_.operation)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.operation)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (minimum_interval.is_set || is_set(minimum_interval.operation)) leaf_name_data.push_back(minimum_interval.get_name_leafdata());
    if (object_name.is_set || is_set(object_name.operation)) leaf_name_data.push_back(object_name.get_name_leafdata());
    if (permanent.is_set || is_set(permanent.operation)) leaf_name_data.push_back(permanent.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (vrf_lable.is_set || is_set(vrf_lable.operation)) leaf_name_data.push_back(vrf_lable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceName::get_children()
{
    return children;
}

void RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceName::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "bfd-fast-detect")
    {
        bfd_fast_detect = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier = value;
    }
    if(value_path == "index")
    {
        index_ = value;
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "minimum-interval")
    {
        minimum_interval = value;
    }
    if(value_path == "object-name")
    {
        object_name = value;
    }
    if(value_path == "permanent")
    {
        permanent = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable = value;
    }
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceNameNextHopAddress::VrfNextHopInterfaceNameNextHopAddress()
    :
    interface_name{YType::str, "interface-name"},
    next_hop_address{YType::str, "next-hop-address"},
    bfd_fast_detect{YType::boolean, "bfd-fast-detect"},
    description{YType::str, "description"},
    detect_multiplier{YType::uint32, "detect-multiplier"},
    index_{YType::str, "index"},
    load_metric{YType::uint32, "load-metric"},
    metric{YType::uint32, "metric"},
    minimum_interval{YType::uint32, "minimum-interval"},
    object_name{YType::str, "object-name"},
    permanent{YType::boolean, "permanent"},
    tag{YType::uint32, "tag"},
    tunnel_id{YType::uint32, "tunnel-id"},
    vrf_lable{YType::uint32, "vrf-lable"}
{
    yang_name = "vrf-next-hop-interface-name-next-hop-address"; yang_parent_name = "vrf-next-hop-table";
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceNameNextHopAddress::~VrfNextHopInterfaceNameNextHopAddress()
{
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceNameNextHopAddress::has_data() const
{
    return interface_name.is_set
	|| next_hop_address.is_set
	|| bfd_fast_detect.is_set
	|| description.is_set
	|| detect_multiplier.is_set
	|| index_.is_set
	|| load_metric.is_set
	|| metric.is_set
	|| minimum_interval.is_set
	|| object_name.is_set
	|| permanent.is_set
	|| tag.is_set
	|| tunnel_id.is_set
	|| vrf_lable.is_set;
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceNameNextHopAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(next_hop_address.operation)
	|| is_set(bfd_fast_detect.operation)
	|| is_set(description.operation)
	|| is_set(detect_multiplier.operation)
	|| is_set(index_.operation)
	|| is_set(load_metric.operation)
	|| is_set(metric.operation)
	|| is_set(minimum_interval.operation)
	|| is_set(object_name.operation)
	|| is_set(permanent.operation)
	|| is_set(tag.operation)
	|| is_set(tunnel_id.operation)
	|| is_set(vrf_lable.operation);
}

std::string RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceNameNextHopAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-next-hop-interface-name-next-hop-address" <<"[interface-name='" <<interface_name <<"']" <<"[next-hop-address='" <<next_hop_address <<"']";

    return path_buffer.str();

}

EntityPath RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceNameNextHopAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VrfNextHopInterfaceNameNextHopAddress' in Cisco_IOS_XR_ip_static_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.operation)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (bfd_fast_detect.is_set || is_set(bfd_fast_detect.operation)) leaf_name_data.push_back(bfd_fast_detect.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (detect_multiplier.is_set || is_set(detect_multiplier.operation)) leaf_name_data.push_back(detect_multiplier.get_name_leafdata());
    if (index_.is_set || is_set(index_.operation)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.operation)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (minimum_interval.is_set || is_set(minimum_interval.operation)) leaf_name_data.push_back(minimum_interval.get_name_leafdata());
    if (object_name.is_set || is_set(object_name.operation)) leaf_name_data.push_back(object_name.get_name_leafdata());
    if (permanent.is_set || is_set(permanent.operation)) leaf_name_data.push_back(permanent.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (vrf_lable.is_set || is_set(vrf_lable.operation)) leaf_name_data.push_back(vrf_lable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceNameNextHopAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceNameNextHopAddress::get_children()
{
    return children;
}

void RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceNameNextHopAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
    }
    if(value_path == "bfd-fast-detect")
    {
        bfd_fast_detect = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier = value;
    }
    if(value_path == "index")
    {
        index_ = value;
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "minimum-interval")
    {
        minimum_interval = value;
    }
    if(value_path == "object-name")
    {
        object_name = value;
    }
    if(value_path == "permanent")
    {
        permanent = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable = value;
    }
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddress::VrfNextHopNextHopAddress()
    :
    next_hop_address{YType::str, "next-hop-address"},
    bfd_fast_detect{YType::boolean, "bfd-fast-detect"},
    description{YType::str, "description"},
    detect_multiplier{YType::uint32, "detect-multiplier"},
    index_{YType::str, "index"},
    load_metric{YType::uint32, "load-metric"},
    metric{YType::uint32, "metric"},
    minimum_interval{YType::uint32, "minimum-interval"},
    object_name{YType::str, "object-name"},
    permanent{YType::boolean, "permanent"},
    tag{YType::uint32, "tag"},
    tunnel_id{YType::uint32, "tunnel-id"},
    vrf_lable{YType::uint32, "vrf-lable"}
{
    yang_name = "vrf-next-hop-next-hop-address"; yang_parent_name = "vrf-next-hop-table";
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddress::~VrfNextHopNextHopAddress()
{
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddress::has_data() const
{
    return next_hop_address.is_set
	|| bfd_fast_detect.is_set
	|| description.is_set
	|| detect_multiplier.is_set
	|| index_.is_set
	|| load_metric.is_set
	|| metric.is_set
	|| minimum_interval.is_set
	|| object_name.is_set
	|| permanent.is_set
	|| tag.is_set
	|| tunnel_id.is_set
	|| vrf_lable.is_set;
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(next_hop_address.operation)
	|| is_set(bfd_fast_detect.operation)
	|| is_set(description.operation)
	|| is_set(detect_multiplier.operation)
	|| is_set(index_.operation)
	|| is_set(load_metric.operation)
	|| is_set(metric.operation)
	|| is_set(minimum_interval.operation)
	|| is_set(object_name.operation)
	|| is_set(permanent.operation)
	|| is_set(tag.operation)
	|| is_set(tunnel_id.operation)
	|| is_set(vrf_lable.operation);
}

std::string RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-next-hop-next-hop-address" <<"[next-hop-address='" <<next_hop_address <<"']";

    return path_buffer.str();

}

EntityPath RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VrfNextHopNextHopAddress' in Cisco_IOS_XR_ip_static_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop_address.is_set || is_set(next_hop_address.operation)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (bfd_fast_detect.is_set || is_set(bfd_fast_detect.operation)) leaf_name_data.push_back(bfd_fast_detect.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (detect_multiplier.is_set || is_set(detect_multiplier.operation)) leaf_name_data.push_back(detect_multiplier.get_name_leafdata());
    if (index_.is_set || is_set(index_.operation)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.operation)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (minimum_interval.is_set || is_set(minimum_interval.operation)) leaf_name_data.push_back(minimum_interval.get_name_leafdata());
    if (object_name.is_set || is_set(object_name.operation)) leaf_name_data.push_back(object_name.get_name_leafdata());
    if (permanent.is_set || is_set(permanent.operation)) leaf_name_data.push_back(permanent.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (vrf_lable.is_set || is_set(vrf_lable.operation)) leaf_name_data.push_back(vrf_lable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddress::get_children()
{
    return children;
}

void RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
    }
    if(value_path == "bfd-fast-detect")
    {
        bfd_fast_detect = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier = value;
    }
    if(value_path == "index")
    {
        index_ = value;
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "minimum-interval")
    {
        minimum_interval = value;
    }
    if(value_path == "object-name")
    {
        object_name = value;
    }
    if(value_path == "permanent")
    {
        permanent = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable = value;
    }
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddressExplicitPathName::VrfNextHopNextHopAddressExplicitPathName()
    :
    explicit_path_name{YType::str, "explicit-path-name"},
    next_hop_address{YType::str, "next-hop-address"},
    bfd_fast_detect{YType::boolean, "bfd-fast-detect"},
    description{YType::str, "description"},
    detect_multiplier{YType::uint32, "detect-multiplier"},
    index_{YType::str, "index"},
    load_metric{YType::uint32, "load-metric"},
    metric{YType::uint32, "metric"},
    minimum_interval{YType::uint32, "minimum-interval"},
    object_name{YType::str, "object-name"},
    permanent{YType::boolean, "permanent"},
    tag{YType::uint32, "tag"},
    tunnel_id{YType::uint32, "tunnel-id"},
    vrf_lable{YType::uint32, "vrf-lable"}
{
    yang_name = "vrf-next-hop-next-hop-address-explicit-path-name"; yang_parent_name = "vrf-next-hop-table";
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddressExplicitPathName::~VrfNextHopNextHopAddressExplicitPathName()
{
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddressExplicitPathName::has_data() const
{
    return explicit_path_name.is_set
	|| next_hop_address.is_set
	|| bfd_fast_detect.is_set
	|| description.is_set
	|| detect_multiplier.is_set
	|| index_.is_set
	|| load_metric.is_set
	|| metric.is_set
	|| minimum_interval.is_set
	|| object_name.is_set
	|| permanent.is_set
	|| tag.is_set
	|| tunnel_id.is_set
	|| vrf_lable.is_set;
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddressExplicitPathName::has_operation() const
{
    return is_set(operation)
	|| is_set(explicit_path_name.operation)
	|| is_set(next_hop_address.operation)
	|| is_set(bfd_fast_detect.operation)
	|| is_set(description.operation)
	|| is_set(detect_multiplier.operation)
	|| is_set(index_.operation)
	|| is_set(load_metric.operation)
	|| is_set(metric.operation)
	|| is_set(minimum_interval.operation)
	|| is_set(object_name.operation)
	|| is_set(permanent.operation)
	|| is_set(tag.operation)
	|| is_set(tunnel_id.operation)
	|| is_set(vrf_lable.operation);
}

std::string RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddressExplicitPathName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-next-hop-next-hop-address-explicit-path-name" <<"[explicit-path-name='" <<explicit_path_name <<"']" <<"[next-hop-address='" <<next_hop_address <<"']";

    return path_buffer.str();

}

EntityPath RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddressExplicitPathName::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VrfNextHopNextHopAddressExplicitPathName' in Cisco_IOS_XR_ip_static_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (explicit_path_name.is_set || is_set(explicit_path_name.operation)) leaf_name_data.push_back(explicit_path_name.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.operation)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (bfd_fast_detect.is_set || is_set(bfd_fast_detect.operation)) leaf_name_data.push_back(bfd_fast_detect.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (detect_multiplier.is_set || is_set(detect_multiplier.operation)) leaf_name_data.push_back(detect_multiplier.get_name_leafdata());
    if (index_.is_set || is_set(index_.operation)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.operation)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (minimum_interval.is_set || is_set(minimum_interval.operation)) leaf_name_data.push_back(minimum_interval.get_name_leafdata());
    if (object_name.is_set || is_set(object_name.operation)) leaf_name_data.push_back(object_name.get_name_leafdata());
    if (permanent.is_set || is_set(permanent.operation)) leaf_name_data.push_back(permanent.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (vrf_lable.is_set || is_set(vrf_lable.operation)) leaf_name_data.push_back(vrf_lable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddressExplicitPathName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddressExplicitPathName::get_children()
{
    return children;
}

void RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddressExplicitPathName::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "explicit-path-name")
    {
        explicit_path_name = value;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
    }
    if(value_path == "bfd-fast-detect")
    {
        bfd_fast_detect = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier = value;
    }
    if(value_path == "index")
    {
        index_ = value;
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "minimum-interval")
    {
        minimum_interval = value;
    }
    if(value_path == "object-name")
    {
        object_name = value;
    }
    if(value_path == "permanent")
    {
        permanent = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable = value;
    }
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopExplicitPathName::VrfNextHopExplicitPathName()
    :
    explicit_path_name{YType::str, "explicit-path-name"},
    bfd_fast_detect{YType::boolean, "bfd-fast-detect"},
    description{YType::str, "description"},
    detect_multiplier{YType::uint32, "detect-multiplier"},
    index_{YType::str, "index"},
    load_metric{YType::uint32, "load-metric"},
    metric{YType::uint32, "metric"},
    minimum_interval{YType::uint32, "minimum-interval"},
    object_name{YType::str, "object-name"},
    permanent{YType::boolean, "permanent"},
    tag{YType::uint32, "tag"},
    tunnel_id{YType::uint32, "tunnel-id"},
    vrf_lable{YType::uint32, "vrf-lable"}
{
    yang_name = "vrf-next-hop-explicit-path-name"; yang_parent_name = "vrf-next-hop-table";
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopExplicitPathName::~VrfNextHopExplicitPathName()
{
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopExplicitPathName::has_data() const
{
    return explicit_path_name.is_set
	|| bfd_fast_detect.is_set
	|| description.is_set
	|| detect_multiplier.is_set
	|| index_.is_set
	|| load_metric.is_set
	|| metric.is_set
	|| minimum_interval.is_set
	|| object_name.is_set
	|| permanent.is_set
	|| tag.is_set
	|| tunnel_id.is_set
	|| vrf_lable.is_set;
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopExplicitPathName::has_operation() const
{
    return is_set(operation)
	|| is_set(explicit_path_name.operation)
	|| is_set(bfd_fast_detect.operation)
	|| is_set(description.operation)
	|| is_set(detect_multiplier.operation)
	|| is_set(index_.operation)
	|| is_set(load_metric.operation)
	|| is_set(metric.operation)
	|| is_set(minimum_interval.operation)
	|| is_set(object_name.operation)
	|| is_set(permanent.operation)
	|| is_set(tag.operation)
	|| is_set(tunnel_id.operation)
	|| is_set(vrf_lable.operation);
}

std::string RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopExplicitPathName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-next-hop-explicit-path-name" <<"[explicit-path-name='" <<explicit_path_name <<"']";

    return path_buffer.str();

}

EntityPath RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopExplicitPathName::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VrfNextHopExplicitPathName' in Cisco_IOS_XR_ip_static_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (explicit_path_name.is_set || is_set(explicit_path_name.operation)) leaf_name_data.push_back(explicit_path_name.get_name_leafdata());
    if (bfd_fast_detect.is_set || is_set(bfd_fast_detect.operation)) leaf_name_data.push_back(bfd_fast_detect.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (detect_multiplier.is_set || is_set(detect_multiplier.operation)) leaf_name_data.push_back(detect_multiplier.get_name_leafdata());
    if (index_.is_set || is_set(index_.operation)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.operation)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (minimum_interval.is_set || is_set(minimum_interval.operation)) leaf_name_data.push_back(minimum_interval.get_name_leafdata());
    if (object_name.is_set || is_set(object_name.operation)) leaf_name_data.push_back(object_name.get_name_leafdata());
    if (permanent.is_set || is_set(permanent.operation)) leaf_name_data.push_back(permanent.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (vrf_lable.is_set || is_set(vrf_lable.operation)) leaf_name_data.push_back(vrf_lable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopExplicitPathName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopExplicitPathName::get_children()
{
    return children;
}

void RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopExplicitPathName::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "explicit-path-name")
    {
        explicit_path_name = value;
    }
    if(value_path == "bfd-fast-detect")
    {
        bfd_fast_detect = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier = value;
    }
    if(value_path == "index")
    {
        index_ = value;
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "minimum-interval")
    {
        minimum_interval = value;
    }
    if(value_path == "object-name")
    {
        object_name = value;
    }
    if(value_path == "permanent")
    {
        permanent = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable = value;
    }
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoutes()
{
    yang_name = "vrf-recurse-routes"; yang_parent_name = "vrf-prefix-topology";
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::~VrfRecurseRoutes()
{
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::has_data() const
{
    for (std::size_t index=0; index<vrf_recurse_route.size(); index++)
    {
        if(vrf_recurse_route[index]->has_data())
            return true;
    }
    return false;
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::has_operation() const
{
    for (std::size_t index=0; index<vrf_recurse_route.size(); index++)
    {
        if(vrf_recurse_route[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-recurse-routes";

    return path_buffer.str();

}

EntityPath RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VrfRecurseRoutes' in Cisco_IOS_XR_ip_static_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "vrf-recurse-route")
    {
        for(auto const & c : vrf_recurse_route)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute>();
        c->parent = this;
        vrf_recurse_route.push_back(std::move(c));
        children[segment_path] = vrf_recurse_route.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::get_children()
{
    for (auto const & c : vrf_recurse_route)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::set_value(const std::string & value_path, std::string value)
{
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecurseRoute()
    :
    vrf_name{YType::str, "vrf-name"}
    	,
    vrf_recursive_next_hop_table(std::make_shared<RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable>())
{
    vrf_recursive_next_hop_table->parent = this;
    children["vrf-recursive-next-hop-table"] = vrf_recursive_next_hop_table;

    yang_name = "vrf-recurse-route"; yang_parent_name = "vrf-recurse-routes";
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::~VrfRecurseRoute()
{
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::has_data() const
{
    return vrf_name.is_set
	|| (vrf_recursive_next_hop_table !=  nullptr && vrf_recursive_next_hop_table->has_data());
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::has_operation() const
{
    return is_set(operation)
	|| is_set(vrf_name.operation)
	|| (vrf_recursive_next_hop_table !=  nullptr && vrf_recursive_next_hop_table->has_operation());
}

std::string RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-recurse-route" <<"[vrf-name='" <<vrf_name <<"']";

    return path_buffer.str();

}

EntityPath RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VrfRecurseRoute' in Cisco_IOS_XR_ip_static_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "vrf-recursive-next-hop-table")
    {
        if(vrf_recursive_next_hop_table != nullptr)
        {
            children["vrf-recursive-next-hop-table"] = vrf_recursive_next_hop_table;
        }
        else
        {
            vrf_recursive_next_hop_table = std::make_shared<RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable>();
            vrf_recursive_next_hop_table->parent = this;
            children["vrf-recursive-next-hop-table"] = vrf_recursive_next_hop_table;
        }
        return children.at("vrf-recursive-next-hop-table");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::get_children()
{
    if(children.find("vrf-recursive-next-hop-table") == children.end())
    {
        if(vrf_recursive_next_hop_table != nullptr)
        {
            children["vrf-recursive-next-hop-table"] = vrf_recursive_next_hop_table;
        }
    }

    return children;
}

void RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfRecursiveNextHopTable()
{
    yang_name = "vrf-recursive-next-hop-table"; yang_parent_name = "vrf-recurse-route";
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::~VrfRecursiveNextHopTable()
{
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::has_data() const
{
    for (std::size_t index=0; index<vrf_next_hop_explicit_path_name.size(); index++)
    {
        if(vrf_next_hop_explicit_path_name[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_interface_name.size(); index++)
    {
        if(vrf_next_hop_interface_name[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_interface_name_next_hop_address.size(); index++)
    {
        if(vrf_next_hop_interface_name_next_hop_address[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_next_hop_address.size(); index++)
    {
        if(vrf_next_hop_next_hop_address[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_next_hop_address_explicit_path_name.size(); index++)
    {
        if(vrf_next_hop_next_hop_address_explicit_path_name[index]->has_data())
            return true;
    }
    return false;
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::has_operation() const
{
    for (std::size_t index=0; index<vrf_next_hop_explicit_path_name.size(); index++)
    {
        if(vrf_next_hop_explicit_path_name[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_interface_name.size(); index++)
    {
        if(vrf_next_hop_interface_name[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_interface_name_next_hop_address.size(); index++)
    {
        if(vrf_next_hop_interface_name_next_hop_address[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_next_hop_address.size(); index++)
    {
        if(vrf_next_hop_next_hop_address[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_next_hop_address_explicit_path_name.size(); index++)
    {
        if(vrf_next_hop_next_hop_address_explicit_path_name[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-recursive-next-hop-table";

    return path_buffer.str();

}

EntityPath RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VrfRecursiveNextHopTable' in Cisco_IOS_XR_ip_static_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "vrf-next-hop-explicit-path-name")
    {
        for(auto const & c : vrf_next_hop_explicit_path_name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopExplicitPathName>();
        c->parent = this;
        vrf_next_hop_explicit_path_name.push_back(std::move(c));
        children[segment_path] = vrf_next_hop_explicit_path_name.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "vrf-next-hop-interface-name")
    {
        for(auto const & c : vrf_next_hop_interface_name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceName>();
        c->parent = this;
        vrf_next_hop_interface_name.push_back(std::move(c));
        children[segment_path] = vrf_next_hop_interface_name.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "vrf-next-hop-interface-name-next-hop-address")
    {
        for(auto const & c : vrf_next_hop_interface_name_next_hop_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceNameNextHopAddress>();
        c->parent = this;
        vrf_next_hop_interface_name_next_hop_address.push_back(std::move(c));
        children[segment_path] = vrf_next_hop_interface_name_next_hop_address.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "vrf-next-hop-next-hop-address")
    {
        for(auto const & c : vrf_next_hop_next_hop_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddress>();
        c->parent = this;
        vrf_next_hop_next_hop_address.push_back(std::move(c));
        children[segment_path] = vrf_next_hop_next_hop_address.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "vrf-next-hop-next-hop-address-explicit-path-name")
    {
        for(auto const & c : vrf_next_hop_next_hop_address_explicit_path_name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddressExplicitPathName>();
        c->parent = this;
        vrf_next_hop_next_hop_address_explicit_path_name.push_back(std::move(c));
        children[segment_path] = vrf_next_hop_next_hop_address_explicit_path_name.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::get_children()
{
    for (auto const & c : vrf_next_hop_explicit_path_name)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : vrf_next_hop_interface_name)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : vrf_next_hop_interface_name_next_hop_address)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : vrf_next_hop_next_hop_address)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : vrf_next_hop_next_hop_address_explicit_path_name)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::set_value(const std::string & value_path, std::string value)
{
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceName::VrfNextHopInterfaceName()
    :
    interface_name{YType::str, "interface-name"},
    bfd_fast_detect{YType::boolean, "bfd-fast-detect"},
    description{YType::str, "description"},
    detect_multiplier{YType::uint32, "detect-multiplier"},
    index_{YType::str, "index"},
    load_metric{YType::uint32, "load-metric"},
    metric{YType::uint32, "metric"},
    minimum_interval{YType::uint32, "minimum-interval"},
    object_name{YType::str, "object-name"},
    permanent{YType::boolean, "permanent"},
    tag{YType::uint32, "tag"},
    tunnel_id{YType::uint32, "tunnel-id"},
    vrf_lable{YType::uint32, "vrf-lable"}
{
    yang_name = "vrf-next-hop-interface-name"; yang_parent_name = "vrf-recursive-next-hop-table";
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceName::~VrfNextHopInterfaceName()
{
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceName::has_data() const
{
    return interface_name.is_set
	|| bfd_fast_detect.is_set
	|| description.is_set
	|| detect_multiplier.is_set
	|| index_.is_set
	|| load_metric.is_set
	|| metric.is_set
	|| minimum_interval.is_set
	|| object_name.is_set
	|| permanent.is_set
	|| tag.is_set
	|| tunnel_id.is_set
	|| vrf_lable.is_set;
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceName::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(bfd_fast_detect.operation)
	|| is_set(description.operation)
	|| is_set(detect_multiplier.operation)
	|| is_set(index_.operation)
	|| is_set(load_metric.operation)
	|| is_set(metric.operation)
	|| is_set(minimum_interval.operation)
	|| is_set(object_name.operation)
	|| is_set(permanent.operation)
	|| is_set(tag.operation)
	|| is_set(tunnel_id.operation)
	|| is_set(vrf_lable.operation);
}

std::string RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-next-hop-interface-name" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

EntityPath RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceName::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VrfNextHopInterfaceName' in Cisco_IOS_XR_ip_static_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (bfd_fast_detect.is_set || is_set(bfd_fast_detect.operation)) leaf_name_data.push_back(bfd_fast_detect.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (detect_multiplier.is_set || is_set(detect_multiplier.operation)) leaf_name_data.push_back(detect_multiplier.get_name_leafdata());
    if (index_.is_set || is_set(index_.operation)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.operation)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (minimum_interval.is_set || is_set(minimum_interval.operation)) leaf_name_data.push_back(minimum_interval.get_name_leafdata());
    if (object_name.is_set || is_set(object_name.operation)) leaf_name_data.push_back(object_name.get_name_leafdata());
    if (permanent.is_set || is_set(permanent.operation)) leaf_name_data.push_back(permanent.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (vrf_lable.is_set || is_set(vrf_lable.operation)) leaf_name_data.push_back(vrf_lable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceName::get_children()
{
    return children;
}

void RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceName::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "bfd-fast-detect")
    {
        bfd_fast_detect = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier = value;
    }
    if(value_path == "index")
    {
        index_ = value;
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "minimum-interval")
    {
        minimum_interval = value;
    }
    if(value_path == "object-name")
    {
        object_name = value;
    }
    if(value_path == "permanent")
    {
        permanent = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable = value;
    }
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceNameNextHopAddress::VrfNextHopInterfaceNameNextHopAddress()
    :
    interface_name{YType::str, "interface-name"},
    next_hop_address{YType::str, "next-hop-address"},
    bfd_fast_detect{YType::boolean, "bfd-fast-detect"},
    description{YType::str, "description"},
    detect_multiplier{YType::uint32, "detect-multiplier"},
    index_{YType::str, "index"},
    load_metric{YType::uint32, "load-metric"},
    metric{YType::uint32, "metric"},
    minimum_interval{YType::uint32, "minimum-interval"},
    object_name{YType::str, "object-name"},
    permanent{YType::boolean, "permanent"},
    tag{YType::uint32, "tag"},
    tunnel_id{YType::uint32, "tunnel-id"},
    vrf_lable{YType::uint32, "vrf-lable"}
{
    yang_name = "vrf-next-hop-interface-name-next-hop-address"; yang_parent_name = "vrf-recursive-next-hop-table";
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceNameNextHopAddress::~VrfNextHopInterfaceNameNextHopAddress()
{
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceNameNextHopAddress::has_data() const
{
    return interface_name.is_set
	|| next_hop_address.is_set
	|| bfd_fast_detect.is_set
	|| description.is_set
	|| detect_multiplier.is_set
	|| index_.is_set
	|| load_metric.is_set
	|| metric.is_set
	|| minimum_interval.is_set
	|| object_name.is_set
	|| permanent.is_set
	|| tag.is_set
	|| tunnel_id.is_set
	|| vrf_lable.is_set;
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceNameNextHopAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(next_hop_address.operation)
	|| is_set(bfd_fast_detect.operation)
	|| is_set(description.operation)
	|| is_set(detect_multiplier.operation)
	|| is_set(index_.operation)
	|| is_set(load_metric.operation)
	|| is_set(metric.operation)
	|| is_set(minimum_interval.operation)
	|| is_set(object_name.operation)
	|| is_set(permanent.operation)
	|| is_set(tag.operation)
	|| is_set(tunnel_id.operation)
	|| is_set(vrf_lable.operation);
}

std::string RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceNameNextHopAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-next-hop-interface-name-next-hop-address" <<"[interface-name='" <<interface_name <<"']" <<"[next-hop-address='" <<next_hop_address <<"']";

    return path_buffer.str();

}

EntityPath RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceNameNextHopAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VrfNextHopInterfaceNameNextHopAddress' in Cisco_IOS_XR_ip_static_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.operation)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (bfd_fast_detect.is_set || is_set(bfd_fast_detect.operation)) leaf_name_data.push_back(bfd_fast_detect.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (detect_multiplier.is_set || is_set(detect_multiplier.operation)) leaf_name_data.push_back(detect_multiplier.get_name_leafdata());
    if (index_.is_set || is_set(index_.operation)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.operation)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (minimum_interval.is_set || is_set(minimum_interval.operation)) leaf_name_data.push_back(minimum_interval.get_name_leafdata());
    if (object_name.is_set || is_set(object_name.operation)) leaf_name_data.push_back(object_name.get_name_leafdata());
    if (permanent.is_set || is_set(permanent.operation)) leaf_name_data.push_back(permanent.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (vrf_lable.is_set || is_set(vrf_lable.operation)) leaf_name_data.push_back(vrf_lable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceNameNextHopAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceNameNextHopAddress::get_children()
{
    return children;
}

void RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceNameNextHopAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
    }
    if(value_path == "bfd-fast-detect")
    {
        bfd_fast_detect = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier = value;
    }
    if(value_path == "index")
    {
        index_ = value;
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "minimum-interval")
    {
        minimum_interval = value;
    }
    if(value_path == "object-name")
    {
        object_name = value;
    }
    if(value_path == "permanent")
    {
        permanent = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable = value;
    }
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddress::VrfNextHopNextHopAddress()
    :
    next_hop_address{YType::str, "next-hop-address"},
    bfd_fast_detect{YType::boolean, "bfd-fast-detect"},
    description{YType::str, "description"},
    detect_multiplier{YType::uint32, "detect-multiplier"},
    index_{YType::str, "index"},
    load_metric{YType::uint32, "load-metric"},
    metric{YType::uint32, "metric"},
    minimum_interval{YType::uint32, "minimum-interval"},
    object_name{YType::str, "object-name"},
    permanent{YType::boolean, "permanent"},
    tag{YType::uint32, "tag"},
    tunnel_id{YType::uint32, "tunnel-id"},
    vrf_lable{YType::uint32, "vrf-lable"}
{
    yang_name = "vrf-next-hop-next-hop-address"; yang_parent_name = "vrf-recursive-next-hop-table";
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddress::~VrfNextHopNextHopAddress()
{
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddress::has_data() const
{
    return next_hop_address.is_set
	|| bfd_fast_detect.is_set
	|| description.is_set
	|| detect_multiplier.is_set
	|| index_.is_set
	|| load_metric.is_set
	|| metric.is_set
	|| minimum_interval.is_set
	|| object_name.is_set
	|| permanent.is_set
	|| tag.is_set
	|| tunnel_id.is_set
	|| vrf_lable.is_set;
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(next_hop_address.operation)
	|| is_set(bfd_fast_detect.operation)
	|| is_set(description.operation)
	|| is_set(detect_multiplier.operation)
	|| is_set(index_.operation)
	|| is_set(load_metric.operation)
	|| is_set(metric.operation)
	|| is_set(minimum_interval.operation)
	|| is_set(object_name.operation)
	|| is_set(permanent.operation)
	|| is_set(tag.operation)
	|| is_set(tunnel_id.operation)
	|| is_set(vrf_lable.operation);
}

std::string RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-next-hop-next-hop-address" <<"[next-hop-address='" <<next_hop_address <<"']";

    return path_buffer.str();

}

EntityPath RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VrfNextHopNextHopAddress' in Cisco_IOS_XR_ip_static_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop_address.is_set || is_set(next_hop_address.operation)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (bfd_fast_detect.is_set || is_set(bfd_fast_detect.operation)) leaf_name_data.push_back(bfd_fast_detect.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (detect_multiplier.is_set || is_set(detect_multiplier.operation)) leaf_name_data.push_back(detect_multiplier.get_name_leafdata());
    if (index_.is_set || is_set(index_.operation)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.operation)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (minimum_interval.is_set || is_set(minimum_interval.operation)) leaf_name_data.push_back(minimum_interval.get_name_leafdata());
    if (object_name.is_set || is_set(object_name.operation)) leaf_name_data.push_back(object_name.get_name_leafdata());
    if (permanent.is_set || is_set(permanent.operation)) leaf_name_data.push_back(permanent.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (vrf_lable.is_set || is_set(vrf_lable.operation)) leaf_name_data.push_back(vrf_lable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddress::get_children()
{
    return children;
}

void RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
    }
    if(value_path == "bfd-fast-detect")
    {
        bfd_fast_detect = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier = value;
    }
    if(value_path == "index")
    {
        index_ = value;
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "minimum-interval")
    {
        minimum_interval = value;
    }
    if(value_path == "object-name")
    {
        object_name = value;
    }
    if(value_path == "permanent")
    {
        permanent = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable = value;
    }
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddressExplicitPathName::VrfNextHopNextHopAddressExplicitPathName()
    :
    explicit_path_name{YType::str, "explicit-path-name"},
    next_hop_address{YType::str, "next-hop-address"},
    bfd_fast_detect{YType::boolean, "bfd-fast-detect"},
    description{YType::str, "description"},
    detect_multiplier{YType::uint32, "detect-multiplier"},
    index_{YType::str, "index"},
    load_metric{YType::uint32, "load-metric"},
    metric{YType::uint32, "metric"},
    minimum_interval{YType::uint32, "minimum-interval"},
    object_name{YType::str, "object-name"},
    permanent{YType::boolean, "permanent"},
    tag{YType::uint32, "tag"},
    tunnel_id{YType::uint32, "tunnel-id"},
    vrf_lable{YType::uint32, "vrf-lable"}
{
    yang_name = "vrf-next-hop-next-hop-address-explicit-path-name"; yang_parent_name = "vrf-recursive-next-hop-table";
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddressExplicitPathName::~VrfNextHopNextHopAddressExplicitPathName()
{
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddressExplicitPathName::has_data() const
{
    return explicit_path_name.is_set
	|| next_hop_address.is_set
	|| bfd_fast_detect.is_set
	|| description.is_set
	|| detect_multiplier.is_set
	|| index_.is_set
	|| load_metric.is_set
	|| metric.is_set
	|| minimum_interval.is_set
	|| object_name.is_set
	|| permanent.is_set
	|| tag.is_set
	|| tunnel_id.is_set
	|| vrf_lable.is_set;
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddressExplicitPathName::has_operation() const
{
    return is_set(operation)
	|| is_set(explicit_path_name.operation)
	|| is_set(next_hop_address.operation)
	|| is_set(bfd_fast_detect.operation)
	|| is_set(description.operation)
	|| is_set(detect_multiplier.operation)
	|| is_set(index_.operation)
	|| is_set(load_metric.operation)
	|| is_set(metric.operation)
	|| is_set(minimum_interval.operation)
	|| is_set(object_name.operation)
	|| is_set(permanent.operation)
	|| is_set(tag.operation)
	|| is_set(tunnel_id.operation)
	|| is_set(vrf_lable.operation);
}

std::string RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddressExplicitPathName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-next-hop-next-hop-address-explicit-path-name" <<"[explicit-path-name='" <<explicit_path_name <<"']" <<"[next-hop-address='" <<next_hop_address <<"']";

    return path_buffer.str();

}

EntityPath RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddressExplicitPathName::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VrfNextHopNextHopAddressExplicitPathName' in Cisco_IOS_XR_ip_static_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (explicit_path_name.is_set || is_set(explicit_path_name.operation)) leaf_name_data.push_back(explicit_path_name.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.operation)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (bfd_fast_detect.is_set || is_set(bfd_fast_detect.operation)) leaf_name_data.push_back(bfd_fast_detect.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (detect_multiplier.is_set || is_set(detect_multiplier.operation)) leaf_name_data.push_back(detect_multiplier.get_name_leafdata());
    if (index_.is_set || is_set(index_.operation)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.operation)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (minimum_interval.is_set || is_set(minimum_interval.operation)) leaf_name_data.push_back(minimum_interval.get_name_leafdata());
    if (object_name.is_set || is_set(object_name.operation)) leaf_name_data.push_back(object_name.get_name_leafdata());
    if (permanent.is_set || is_set(permanent.operation)) leaf_name_data.push_back(permanent.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (vrf_lable.is_set || is_set(vrf_lable.operation)) leaf_name_data.push_back(vrf_lable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddressExplicitPathName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddressExplicitPathName::get_children()
{
    return children;
}

void RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddressExplicitPathName::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "explicit-path-name")
    {
        explicit_path_name = value;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
    }
    if(value_path == "bfd-fast-detect")
    {
        bfd_fast_detect = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier = value;
    }
    if(value_path == "index")
    {
        index_ = value;
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "minimum-interval")
    {
        minimum_interval = value;
    }
    if(value_path == "object-name")
    {
        object_name = value;
    }
    if(value_path == "permanent")
    {
        permanent = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable = value;
    }
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopExplicitPathName::VrfNextHopExplicitPathName()
    :
    explicit_path_name{YType::str, "explicit-path-name"},
    bfd_fast_detect{YType::boolean, "bfd-fast-detect"},
    description{YType::str, "description"},
    detect_multiplier{YType::uint32, "detect-multiplier"},
    index_{YType::str, "index"},
    load_metric{YType::uint32, "load-metric"},
    metric{YType::uint32, "metric"},
    minimum_interval{YType::uint32, "minimum-interval"},
    object_name{YType::str, "object-name"},
    permanent{YType::boolean, "permanent"},
    tag{YType::uint32, "tag"},
    tunnel_id{YType::uint32, "tunnel-id"},
    vrf_lable{YType::uint32, "vrf-lable"}
{
    yang_name = "vrf-next-hop-explicit-path-name"; yang_parent_name = "vrf-recursive-next-hop-table";
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopExplicitPathName::~VrfNextHopExplicitPathName()
{
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopExplicitPathName::has_data() const
{
    return explicit_path_name.is_set
	|| bfd_fast_detect.is_set
	|| description.is_set
	|| detect_multiplier.is_set
	|| index_.is_set
	|| load_metric.is_set
	|| metric.is_set
	|| minimum_interval.is_set
	|| object_name.is_set
	|| permanent.is_set
	|| tag.is_set
	|| tunnel_id.is_set
	|| vrf_lable.is_set;
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopExplicitPathName::has_operation() const
{
    return is_set(operation)
	|| is_set(explicit_path_name.operation)
	|| is_set(bfd_fast_detect.operation)
	|| is_set(description.operation)
	|| is_set(detect_multiplier.operation)
	|| is_set(index_.operation)
	|| is_set(load_metric.operation)
	|| is_set(metric.operation)
	|| is_set(minimum_interval.operation)
	|| is_set(object_name.operation)
	|| is_set(permanent.operation)
	|| is_set(tag.operation)
	|| is_set(tunnel_id.operation)
	|| is_set(vrf_lable.operation);
}

std::string RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopExplicitPathName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-next-hop-explicit-path-name" <<"[explicit-path-name='" <<explicit_path_name <<"']";

    return path_buffer.str();

}

EntityPath RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopExplicitPathName::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VrfNextHopExplicitPathName' in Cisco_IOS_XR_ip_static_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (explicit_path_name.is_set || is_set(explicit_path_name.operation)) leaf_name_data.push_back(explicit_path_name.get_name_leafdata());
    if (bfd_fast_detect.is_set || is_set(bfd_fast_detect.operation)) leaf_name_data.push_back(bfd_fast_detect.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (detect_multiplier.is_set || is_set(detect_multiplier.operation)) leaf_name_data.push_back(detect_multiplier.get_name_leafdata());
    if (index_.is_set || is_set(index_.operation)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.operation)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (minimum_interval.is_set || is_set(minimum_interval.operation)) leaf_name_data.push_back(minimum_interval.get_name_leafdata());
    if (object_name.is_set || is_set(object_name.operation)) leaf_name_data.push_back(object_name.get_name_leafdata());
    if (permanent.is_set || is_set(permanent.operation)) leaf_name_data.push_back(permanent.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (vrf_lable.is_set || is_set(vrf_lable.operation)) leaf_name_data.push_back(vrf_lable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopExplicitPathName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopExplicitPathName::get_children()
{
    return children;
}

void RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopExplicitPathName::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "explicit-path-name")
    {
        explicit_path_name = value;
    }
    if(value_path == "bfd-fast-detect")
    {
        bfd_fast_detect = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier = value;
    }
    if(value_path == "index")
    {
        index_ = value;
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "minimum-interval")
    {
        minimum_interval = value;
    }
    if(value_path == "object-name")
    {
        object_name = value;
    }
    if(value_path == "permanent")
    {
        permanent = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable = value;
    }
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::VrfSegRoute()
    :
    segment_route_next_hop_table(std::make_shared<RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable>())
{
    segment_route_next_hop_table->parent = this;
    children["segment-route-next-hop-table"] = segment_route_next_hop_table;

    yang_name = "vrf-seg-route"; yang_parent_name = "vrf-prefix-topology";
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::~VrfSegRoute()
{
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::has_data() const
{
    return (segment_route_next_hop_table !=  nullptr && segment_route_next_hop_table->has_data());
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::has_operation() const
{
    return is_set(operation)
	|| (segment_route_next_hop_table !=  nullptr && segment_route_next_hop_table->has_operation());
}

std::string RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-seg-route";

    return path_buffer.str();

}

EntityPath RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VrfSegRoute' in Cisco_IOS_XR_ip_static_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "segment-route-next-hop-table")
    {
        if(segment_route_next_hop_table != nullptr)
        {
            children["segment-route-next-hop-table"] = segment_route_next_hop_table;
        }
        else
        {
            segment_route_next_hop_table = std::make_shared<RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable>();
            segment_route_next_hop_table->parent = this;
            children["segment-route-next-hop-table"] = segment_route_next_hop_table;
        }
        return children.at("segment-route-next-hop-table");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::get_children()
{
    if(children.find("segment-route-next-hop-table") == children.end())
    {
        if(segment_route_next_hop_table != nullptr)
        {
            children["segment-route-next-hop-table"] = segment_route_next_hop_table;
        }
    }

    return children;
}

void RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::set_value(const std::string & value_path, std::string value)
{
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::SegmentRouteNextHopTable()
{
    yang_name = "segment-route-next-hop-table"; yang_parent_name = "vrf-seg-route";
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::~SegmentRouteNextHopTable()
{
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::has_data() const
{
    for (std::size_t index=0; index<vrf_next_hop_explicit_path_name.size(); index++)
    {
        if(vrf_next_hop_explicit_path_name[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_interface_name.size(); index++)
    {
        if(vrf_next_hop_interface_name[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_interface_name_next_hop_address.size(); index++)
    {
        if(vrf_next_hop_interface_name_next_hop_address[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_next_hop_address.size(); index++)
    {
        if(vrf_next_hop_next_hop_address[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_next_hop_address_explicit_path_name.size(); index++)
    {
        if(vrf_next_hop_next_hop_address_explicit_path_name[index]->has_data())
            return true;
    }
    return false;
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::has_operation() const
{
    for (std::size_t index=0; index<vrf_next_hop_explicit_path_name.size(); index++)
    {
        if(vrf_next_hop_explicit_path_name[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_interface_name.size(); index++)
    {
        if(vrf_next_hop_interface_name[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_interface_name_next_hop_address.size(); index++)
    {
        if(vrf_next_hop_interface_name_next_hop_address[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_next_hop_address.size(); index++)
    {
        if(vrf_next_hop_next_hop_address[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_next_hop_address_explicit_path_name.size(); index++)
    {
        if(vrf_next_hop_next_hop_address_explicit_path_name[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "segment-route-next-hop-table";

    return path_buffer.str();

}

EntityPath RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SegmentRouteNextHopTable' in Cisco_IOS_XR_ip_static_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "vrf-next-hop-explicit-path-name")
    {
        for(auto const & c : vrf_next_hop_explicit_path_name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopExplicitPathName>();
        c->parent = this;
        vrf_next_hop_explicit_path_name.push_back(std::move(c));
        children[segment_path] = vrf_next_hop_explicit_path_name.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "vrf-next-hop-interface-name")
    {
        for(auto const & c : vrf_next_hop_interface_name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceName>();
        c->parent = this;
        vrf_next_hop_interface_name.push_back(std::move(c));
        children[segment_path] = vrf_next_hop_interface_name.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "vrf-next-hop-interface-name-next-hop-address")
    {
        for(auto const & c : vrf_next_hop_interface_name_next_hop_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceNameNextHopAddress>();
        c->parent = this;
        vrf_next_hop_interface_name_next_hop_address.push_back(std::move(c));
        children[segment_path] = vrf_next_hop_interface_name_next_hop_address.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "vrf-next-hop-next-hop-address")
    {
        for(auto const & c : vrf_next_hop_next_hop_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddress>();
        c->parent = this;
        vrf_next_hop_next_hop_address.push_back(std::move(c));
        children[segment_path] = vrf_next_hop_next_hop_address.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "vrf-next-hop-next-hop-address-explicit-path-name")
    {
        for(auto const & c : vrf_next_hop_next_hop_address_explicit_path_name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddressExplicitPathName>();
        c->parent = this;
        vrf_next_hop_next_hop_address_explicit_path_name.push_back(std::move(c));
        children[segment_path] = vrf_next_hop_next_hop_address_explicit_path_name.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::get_children()
{
    for (auto const & c : vrf_next_hop_explicit_path_name)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : vrf_next_hop_interface_name)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : vrf_next_hop_interface_name_next_hop_address)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : vrf_next_hop_next_hop_address)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : vrf_next_hop_next_hop_address_explicit_path_name)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::set_value(const std::string & value_path, std::string value)
{
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceName::VrfNextHopInterfaceName()
    :
    interface_name{YType::str, "interface-name"},
    bfd_fast_detect{YType::boolean, "bfd-fast-detect"},
    description{YType::str, "description"},
    detect_multiplier{YType::uint32, "detect-multiplier"},
    index_{YType::str, "index"},
    load_metric{YType::uint32, "load-metric"},
    metric{YType::uint32, "metric"},
    minimum_interval{YType::uint32, "minimum-interval"},
    object_name{YType::str, "object-name"},
    permanent{YType::boolean, "permanent"},
    tag{YType::uint32, "tag"},
    tunnel_id{YType::uint32, "tunnel-id"},
    vrf_lable{YType::uint32, "vrf-lable"}
{
    yang_name = "vrf-next-hop-interface-name"; yang_parent_name = "segment-route-next-hop-table";
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceName::~VrfNextHopInterfaceName()
{
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceName::has_data() const
{
    return interface_name.is_set
	|| bfd_fast_detect.is_set
	|| description.is_set
	|| detect_multiplier.is_set
	|| index_.is_set
	|| load_metric.is_set
	|| metric.is_set
	|| minimum_interval.is_set
	|| object_name.is_set
	|| permanent.is_set
	|| tag.is_set
	|| tunnel_id.is_set
	|| vrf_lable.is_set;
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceName::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(bfd_fast_detect.operation)
	|| is_set(description.operation)
	|| is_set(detect_multiplier.operation)
	|| is_set(index_.operation)
	|| is_set(load_metric.operation)
	|| is_set(metric.operation)
	|| is_set(minimum_interval.operation)
	|| is_set(object_name.operation)
	|| is_set(permanent.operation)
	|| is_set(tag.operation)
	|| is_set(tunnel_id.operation)
	|| is_set(vrf_lable.operation);
}

std::string RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-next-hop-interface-name" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

EntityPath RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceName::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VrfNextHopInterfaceName' in Cisco_IOS_XR_ip_static_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (bfd_fast_detect.is_set || is_set(bfd_fast_detect.operation)) leaf_name_data.push_back(bfd_fast_detect.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (detect_multiplier.is_set || is_set(detect_multiplier.operation)) leaf_name_data.push_back(detect_multiplier.get_name_leafdata());
    if (index_.is_set || is_set(index_.operation)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.operation)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (minimum_interval.is_set || is_set(minimum_interval.operation)) leaf_name_data.push_back(minimum_interval.get_name_leafdata());
    if (object_name.is_set || is_set(object_name.operation)) leaf_name_data.push_back(object_name.get_name_leafdata());
    if (permanent.is_set || is_set(permanent.operation)) leaf_name_data.push_back(permanent.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (vrf_lable.is_set || is_set(vrf_lable.operation)) leaf_name_data.push_back(vrf_lable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceName::get_children()
{
    return children;
}

void RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceName::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "bfd-fast-detect")
    {
        bfd_fast_detect = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier = value;
    }
    if(value_path == "index")
    {
        index_ = value;
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "minimum-interval")
    {
        minimum_interval = value;
    }
    if(value_path == "object-name")
    {
        object_name = value;
    }
    if(value_path == "permanent")
    {
        permanent = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable = value;
    }
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceNameNextHopAddress::VrfNextHopInterfaceNameNextHopAddress()
    :
    interface_name{YType::str, "interface-name"},
    next_hop_address{YType::str, "next-hop-address"},
    bfd_fast_detect{YType::boolean, "bfd-fast-detect"},
    description{YType::str, "description"},
    detect_multiplier{YType::uint32, "detect-multiplier"},
    index_{YType::str, "index"},
    load_metric{YType::uint32, "load-metric"},
    metric{YType::uint32, "metric"},
    minimum_interval{YType::uint32, "minimum-interval"},
    object_name{YType::str, "object-name"},
    permanent{YType::boolean, "permanent"},
    tag{YType::uint32, "tag"},
    tunnel_id{YType::uint32, "tunnel-id"},
    vrf_lable{YType::uint32, "vrf-lable"}
{
    yang_name = "vrf-next-hop-interface-name-next-hop-address"; yang_parent_name = "segment-route-next-hop-table";
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceNameNextHopAddress::~VrfNextHopInterfaceNameNextHopAddress()
{
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceNameNextHopAddress::has_data() const
{
    return interface_name.is_set
	|| next_hop_address.is_set
	|| bfd_fast_detect.is_set
	|| description.is_set
	|| detect_multiplier.is_set
	|| index_.is_set
	|| load_metric.is_set
	|| metric.is_set
	|| minimum_interval.is_set
	|| object_name.is_set
	|| permanent.is_set
	|| tag.is_set
	|| tunnel_id.is_set
	|| vrf_lable.is_set;
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceNameNextHopAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(next_hop_address.operation)
	|| is_set(bfd_fast_detect.operation)
	|| is_set(description.operation)
	|| is_set(detect_multiplier.operation)
	|| is_set(index_.operation)
	|| is_set(load_metric.operation)
	|| is_set(metric.operation)
	|| is_set(minimum_interval.operation)
	|| is_set(object_name.operation)
	|| is_set(permanent.operation)
	|| is_set(tag.operation)
	|| is_set(tunnel_id.operation)
	|| is_set(vrf_lable.operation);
}

std::string RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceNameNextHopAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-next-hop-interface-name-next-hop-address" <<"[interface-name='" <<interface_name <<"']" <<"[next-hop-address='" <<next_hop_address <<"']";

    return path_buffer.str();

}

EntityPath RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceNameNextHopAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VrfNextHopInterfaceNameNextHopAddress' in Cisco_IOS_XR_ip_static_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.operation)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (bfd_fast_detect.is_set || is_set(bfd_fast_detect.operation)) leaf_name_data.push_back(bfd_fast_detect.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (detect_multiplier.is_set || is_set(detect_multiplier.operation)) leaf_name_data.push_back(detect_multiplier.get_name_leafdata());
    if (index_.is_set || is_set(index_.operation)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.operation)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (minimum_interval.is_set || is_set(minimum_interval.operation)) leaf_name_data.push_back(minimum_interval.get_name_leafdata());
    if (object_name.is_set || is_set(object_name.operation)) leaf_name_data.push_back(object_name.get_name_leafdata());
    if (permanent.is_set || is_set(permanent.operation)) leaf_name_data.push_back(permanent.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (vrf_lable.is_set || is_set(vrf_lable.operation)) leaf_name_data.push_back(vrf_lable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceNameNextHopAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceNameNextHopAddress::get_children()
{
    return children;
}

void RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceNameNextHopAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
    }
    if(value_path == "bfd-fast-detect")
    {
        bfd_fast_detect = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier = value;
    }
    if(value_path == "index")
    {
        index_ = value;
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "minimum-interval")
    {
        minimum_interval = value;
    }
    if(value_path == "object-name")
    {
        object_name = value;
    }
    if(value_path == "permanent")
    {
        permanent = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable = value;
    }
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddress::VrfNextHopNextHopAddress()
    :
    next_hop_address{YType::str, "next-hop-address"},
    bfd_fast_detect{YType::boolean, "bfd-fast-detect"},
    description{YType::str, "description"},
    detect_multiplier{YType::uint32, "detect-multiplier"},
    index_{YType::str, "index"},
    load_metric{YType::uint32, "load-metric"},
    metric{YType::uint32, "metric"},
    minimum_interval{YType::uint32, "minimum-interval"},
    object_name{YType::str, "object-name"},
    permanent{YType::boolean, "permanent"},
    tag{YType::uint32, "tag"},
    tunnel_id{YType::uint32, "tunnel-id"},
    vrf_lable{YType::uint32, "vrf-lable"}
{
    yang_name = "vrf-next-hop-next-hop-address"; yang_parent_name = "segment-route-next-hop-table";
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddress::~VrfNextHopNextHopAddress()
{
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddress::has_data() const
{
    return next_hop_address.is_set
	|| bfd_fast_detect.is_set
	|| description.is_set
	|| detect_multiplier.is_set
	|| index_.is_set
	|| load_metric.is_set
	|| metric.is_set
	|| minimum_interval.is_set
	|| object_name.is_set
	|| permanent.is_set
	|| tag.is_set
	|| tunnel_id.is_set
	|| vrf_lable.is_set;
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(next_hop_address.operation)
	|| is_set(bfd_fast_detect.operation)
	|| is_set(description.operation)
	|| is_set(detect_multiplier.operation)
	|| is_set(index_.operation)
	|| is_set(load_metric.operation)
	|| is_set(metric.operation)
	|| is_set(minimum_interval.operation)
	|| is_set(object_name.operation)
	|| is_set(permanent.operation)
	|| is_set(tag.operation)
	|| is_set(tunnel_id.operation)
	|| is_set(vrf_lable.operation);
}

std::string RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-next-hop-next-hop-address" <<"[next-hop-address='" <<next_hop_address <<"']";

    return path_buffer.str();

}

EntityPath RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VrfNextHopNextHopAddress' in Cisco_IOS_XR_ip_static_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop_address.is_set || is_set(next_hop_address.operation)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (bfd_fast_detect.is_set || is_set(bfd_fast_detect.operation)) leaf_name_data.push_back(bfd_fast_detect.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (detect_multiplier.is_set || is_set(detect_multiplier.operation)) leaf_name_data.push_back(detect_multiplier.get_name_leafdata());
    if (index_.is_set || is_set(index_.operation)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.operation)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (minimum_interval.is_set || is_set(minimum_interval.operation)) leaf_name_data.push_back(minimum_interval.get_name_leafdata());
    if (object_name.is_set || is_set(object_name.operation)) leaf_name_data.push_back(object_name.get_name_leafdata());
    if (permanent.is_set || is_set(permanent.operation)) leaf_name_data.push_back(permanent.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (vrf_lable.is_set || is_set(vrf_lable.operation)) leaf_name_data.push_back(vrf_lable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddress::get_children()
{
    return children;
}

void RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
    }
    if(value_path == "bfd-fast-detect")
    {
        bfd_fast_detect = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier = value;
    }
    if(value_path == "index")
    {
        index_ = value;
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "minimum-interval")
    {
        minimum_interval = value;
    }
    if(value_path == "object-name")
    {
        object_name = value;
    }
    if(value_path == "permanent")
    {
        permanent = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable = value;
    }
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddressExplicitPathName::VrfNextHopNextHopAddressExplicitPathName()
    :
    explicit_path_name{YType::str, "explicit-path-name"},
    next_hop_address{YType::str, "next-hop-address"},
    bfd_fast_detect{YType::boolean, "bfd-fast-detect"},
    description{YType::str, "description"},
    detect_multiplier{YType::uint32, "detect-multiplier"},
    index_{YType::str, "index"},
    load_metric{YType::uint32, "load-metric"},
    metric{YType::uint32, "metric"},
    minimum_interval{YType::uint32, "minimum-interval"},
    object_name{YType::str, "object-name"},
    permanent{YType::boolean, "permanent"},
    tag{YType::uint32, "tag"},
    tunnel_id{YType::uint32, "tunnel-id"},
    vrf_lable{YType::uint32, "vrf-lable"}
{
    yang_name = "vrf-next-hop-next-hop-address-explicit-path-name"; yang_parent_name = "segment-route-next-hop-table";
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddressExplicitPathName::~VrfNextHopNextHopAddressExplicitPathName()
{
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddressExplicitPathName::has_data() const
{
    return explicit_path_name.is_set
	|| next_hop_address.is_set
	|| bfd_fast_detect.is_set
	|| description.is_set
	|| detect_multiplier.is_set
	|| index_.is_set
	|| load_metric.is_set
	|| metric.is_set
	|| minimum_interval.is_set
	|| object_name.is_set
	|| permanent.is_set
	|| tag.is_set
	|| tunnel_id.is_set
	|| vrf_lable.is_set;
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddressExplicitPathName::has_operation() const
{
    return is_set(operation)
	|| is_set(explicit_path_name.operation)
	|| is_set(next_hop_address.operation)
	|| is_set(bfd_fast_detect.operation)
	|| is_set(description.operation)
	|| is_set(detect_multiplier.operation)
	|| is_set(index_.operation)
	|| is_set(load_metric.operation)
	|| is_set(metric.operation)
	|| is_set(minimum_interval.operation)
	|| is_set(object_name.operation)
	|| is_set(permanent.operation)
	|| is_set(tag.operation)
	|| is_set(tunnel_id.operation)
	|| is_set(vrf_lable.operation);
}

std::string RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddressExplicitPathName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-next-hop-next-hop-address-explicit-path-name" <<"[explicit-path-name='" <<explicit_path_name <<"']" <<"[next-hop-address='" <<next_hop_address <<"']";

    return path_buffer.str();

}

EntityPath RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddressExplicitPathName::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VrfNextHopNextHopAddressExplicitPathName' in Cisco_IOS_XR_ip_static_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (explicit_path_name.is_set || is_set(explicit_path_name.operation)) leaf_name_data.push_back(explicit_path_name.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.operation)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (bfd_fast_detect.is_set || is_set(bfd_fast_detect.operation)) leaf_name_data.push_back(bfd_fast_detect.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (detect_multiplier.is_set || is_set(detect_multiplier.operation)) leaf_name_data.push_back(detect_multiplier.get_name_leafdata());
    if (index_.is_set || is_set(index_.operation)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.operation)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (minimum_interval.is_set || is_set(minimum_interval.operation)) leaf_name_data.push_back(minimum_interval.get_name_leafdata());
    if (object_name.is_set || is_set(object_name.operation)) leaf_name_data.push_back(object_name.get_name_leafdata());
    if (permanent.is_set || is_set(permanent.operation)) leaf_name_data.push_back(permanent.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (vrf_lable.is_set || is_set(vrf_lable.operation)) leaf_name_data.push_back(vrf_lable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddressExplicitPathName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddressExplicitPathName::get_children()
{
    return children;
}

void RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddressExplicitPathName::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "explicit-path-name")
    {
        explicit_path_name = value;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
    }
    if(value_path == "bfd-fast-detect")
    {
        bfd_fast_detect = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier = value;
    }
    if(value_path == "index")
    {
        index_ = value;
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "minimum-interval")
    {
        minimum_interval = value;
    }
    if(value_path == "object-name")
    {
        object_name = value;
    }
    if(value_path == "permanent")
    {
        permanent = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable = value;
    }
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopExplicitPathName::VrfNextHopExplicitPathName()
    :
    explicit_path_name{YType::str, "explicit-path-name"},
    bfd_fast_detect{YType::boolean, "bfd-fast-detect"},
    description{YType::str, "description"},
    detect_multiplier{YType::uint32, "detect-multiplier"},
    index_{YType::str, "index"},
    load_metric{YType::uint32, "load-metric"},
    metric{YType::uint32, "metric"},
    minimum_interval{YType::uint32, "minimum-interval"},
    object_name{YType::str, "object-name"},
    permanent{YType::boolean, "permanent"},
    tag{YType::uint32, "tag"},
    tunnel_id{YType::uint32, "tunnel-id"},
    vrf_lable{YType::uint32, "vrf-lable"}
{
    yang_name = "vrf-next-hop-explicit-path-name"; yang_parent_name = "segment-route-next-hop-table";
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopExplicitPathName::~VrfNextHopExplicitPathName()
{
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopExplicitPathName::has_data() const
{
    return explicit_path_name.is_set
	|| bfd_fast_detect.is_set
	|| description.is_set
	|| detect_multiplier.is_set
	|| index_.is_set
	|| load_metric.is_set
	|| metric.is_set
	|| minimum_interval.is_set
	|| object_name.is_set
	|| permanent.is_set
	|| tag.is_set
	|| tunnel_id.is_set
	|| vrf_lable.is_set;
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopExplicitPathName::has_operation() const
{
    return is_set(operation)
	|| is_set(explicit_path_name.operation)
	|| is_set(bfd_fast_detect.operation)
	|| is_set(description.operation)
	|| is_set(detect_multiplier.operation)
	|| is_set(index_.operation)
	|| is_set(load_metric.operation)
	|| is_set(metric.operation)
	|| is_set(minimum_interval.operation)
	|| is_set(object_name.operation)
	|| is_set(permanent.operation)
	|| is_set(tag.operation)
	|| is_set(tunnel_id.operation)
	|| is_set(vrf_lable.operation);
}

std::string RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopExplicitPathName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-next-hop-explicit-path-name" <<"[explicit-path-name='" <<explicit_path_name <<"']";

    return path_buffer.str();

}

EntityPath RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopExplicitPathName::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VrfNextHopExplicitPathName' in Cisco_IOS_XR_ip_static_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (explicit_path_name.is_set || is_set(explicit_path_name.operation)) leaf_name_data.push_back(explicit_path_name.get_name_leafdata());
    if (bfd_fast_detect.is_set || is_set(bfd_fast_detect.operation)) leaf_name_data.push_back(bfd_fast_detect.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (detect_multiplier.is_set || is_set(detect_multiplier.operation)) leaf_name_data.push_back(detect_multiplier.get_name_leafdata());
    if (index_.is_set || is_set(index_.operation)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.operation)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (minimum_interval.is_set || is_set(minimum_interval.operation)) leaf_name_data.push_back(minimum_interval.get_name_leafdata());
    if (object_name.is_set || is_set(object_name.operation)) leaf_name_data.push_back(object_name.get_name_leafdata());
    if (permanent.is_set || is_set(permanent.operation)) leaf_name_data.push_back(permanent.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (vrf_lable.is_set || is_set(vrf_lable.operation)) leaf_name_data.push_back(vrf_lable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopExplicitPathName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopExplicitPathName::get_children()
{
    return children;
}

void RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopExplicitPathName::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "explicit-path-name")
    {
        explicit_path_name = value;
    }
    if(value_path == "bfd-fast-detect")
    {
        bfd_fast_detect = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier = value;
    }
    if(value_path == "index")
    {
        index_ = value;
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "minimum-interval")
    {
        minimum_interval = value;
    }
    if(value_path == "object-name")
    {
        object_name = value;
    }
    if(value_path == "permanent")
    {
        permanent = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable = value;
    }
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefixes()
{
    yang_name = "vrf-prefixes"; yang_parent_name = "vrf-unicast";
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::~VrfPrefixes()
{
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::has_data() const
{
    for (std::size_t index=0; index<vrf_prefix.size(); index++)
    {
        if(vrf_prefix[index]->has_data())
            return true;
    }
    return false;
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::has_operation() const
{
    for (std::size_t index=0; index<vrf_prefix.size(); index++)
    {
        if(vrf_prefix[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-prefixes";

    return path_buffer.str();

}

EntityPath RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VrfPrefixes' in Cisco_IOS_XR_ip_static_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "vrf-prefix")
    {
        for(auto const & c : vrf_prefix)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix>();
        c->parent = this;
        vrf_prefix.push_back(std::move(c));
        children[segment_path] = vrf_prefix.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::get_children()
{
    for (auto const & c : vrf_prefix)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::set_value(const std::string & value_path, std::string value)
{
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfPrefix()
    :
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint32, "prefix-length"}
    	,
    vrf_recurse_routes(std::make_shared<RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes>())
	,vrf_route(std::make_shared<RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRoute>())
	,vrf_seg_route(std::make_shared<RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfSegRoute>())
{
    vrf_recurse_routes->parent = this;
    children["vrf-recurse-routes"] = vrf_recurse_routes;

    vrf_route->parent = this;
    children["vrf-route"] = vrf_route;

    vrf_seg_route->parent = this;
    children["vrf-seg-route"] = vrf_seg_route;

    yang_name = "vrf-prefix"; yang_parent_name = "vrf-prefixes";
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::~VrfPrefix()
{
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::has_data() const
{
    return prefix.is_set
	|| prefix_length.is_set
	|| (vrf_recurse_routes !=  nullptr && vrf_recurse_routes->has_data())
	|| (vrf_route !=  nullptr && vrf_route->has_data())
	|| (vrf_seg_route !=  nullptr && vrf_seg_route->has_data());
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::has_operation() const
{
    return is_set(operation)
	|| is_set(prefix.operation)
	|| is_set(prefix_length.operation)
	|| (vrf_recurse_routes !=  nullptr && vrf_recurse_routes->has_operation())
	|| (vrf_route !=  nullptr && vrf_route->has_operation())
	|| (vrf_seg_route !=  nullptr && vrf_seg_route->has_operation());
}

std::string RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-prefix" <<"[prefix='" <<prefix <<"']" <<"[prefix-length='" <<prefix_length <<"']";

    return path_buffer.str();

}

EntityPath RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VrfPrefix' in Cisco_IOS_XR_ip_static_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "vrf-recurse-routes")
    {
        if(vrf_recurse_routes != nullptr)
        {
            children["vrf-recurse-routes"] = vrf_recurse_routes;
        }
        else
        {
            vrf_recurse_routes = std::make_shared<RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes>();
            vrf_recurse_routes->parent = this;
            children["vrf-recurse-routes"] = vrf_recurse_routes;
        }
        return children.at("vrf-recurse-routes");
    }

    if(child_yang_name == "vrf-route")
    {
        if(vrf_route != nullptr)
        {
            children["vrf-route"] = vrf_route;
        }
        else
        {
            vrf_route = std::make_shared<RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRoute>();
            vrf_route->parent = this;
            children["vrf-route"] = vrf_route;
        }
        return children.at("vrf-route");
    }

    if(child_yang_name == "vrf-seg-route")
    {
        if(vrf_seg_route != nullptr)
        {
            children["vrf-seg-route"] = vrf_seg_route;
        }
        else
        {
            vrf_seg_route = std::make_shared<RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfSegRoute>();
            vrf_seg_route->parent = this;
            children["vrf-seg-route"] = vrf_seg_route;
        }
        return children.at("vrf-seg-route");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::get_children()
{
    if(children.find("vrf-recurse-routes") == children.end())
    {
        if(vrf_recurse_routes != nullptr)
        {
            children["vrf-recurse-routes"] = vrf_recurse_routes;
        }
    }

    if(children.find("vrf-route") == children.end())
    {
        if(vrf_route != nullptr)
        {
            children["vrf-route"] = vrf_route;
        }
    }

    if(children.find("vrf-seg-route") == children.end())
    {
        if(vrf_seg_route != nullptr)
        {
            children["vrf-seg-route"] = vrf_seg_route;
        }
    }

    return children;
}

void RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "prefix")
    {
        prefix = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRoute::VrfRoute()
    :
    vrf_next_hop_table(std::make_shared<RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable>())
{
    vrf_next_hop_table->parent = this;
    children["vrf-next-hop-table"] = vrf_next_hop_table;

    yang_name = "vrf-route"; yang_parent_name = "vrf-prefix";
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRoute::~VrfRoute()
{
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRoute::has_data() const
{
    return (vrf_next_hop_table !=  nullptr && vrf_next_hop_table->has_data());
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRoute::has_operation() const
{
    return is_set(operation)
	|| (vrf_next_hop_table !=  nullptr && vrf_next_hop_table->has_operation());
}

std::string RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-route";

    return path_buffer.str();

}

EntityPath RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRoute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VrfRoute' in Cisco_IOS_XR_ip_static_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "vrf-next-hop-table")
    {
        if(vrf_next_hop_table != nullptr)
        {
            children["vrf-next-hop-table"] = vrf_next_hop_table;
        }
        else
        {
            vrf_next_hop_table = std::make_shared<RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable>();
            vrf_next_hop_table->parent = this;
            children["vrf-next-hop-table"] = vrf_next_hop_table;
        }
        return children.at("vrf-next-hop-table");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRoute::get_children()
{
    if(children.find("vrf-next-hop-table") == children.end())
    {
        if(vrf_next_hop_table != nullptr)
        {
            children["vrf-next-hop-table"] = vrf_next_hop_table;
        }
    }

    return children;
}

void RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRoute::set_value(const std::string & value_path, std::string value)
{
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopTable()
{
    yang_name = "vrf-next-hop-table"; yang_parent_name = "vrf-route";
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::~VrfNextHopTable()
{
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::has_data() const
{
    for (std::size_t index=0; index<vrf_next_hop_explicit_path_name.size(); index++)
    {
        if(vrf_next_hop_explicit_path_name[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_interface_name.size(); index++)
    {
        if(vrf_next_hop_interface_name[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_interface_name_next_hop_address.size(); index++)
    {
        if(vrf_next_hop_interface_name_next_hop_address[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_next_hop_address.size(); index++)
    {
        if(vrf_next_hop_next_hop_address[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_next_hop_address_explicit_path_name.size(); index++)
    {
        if(vrf_next_hop_next_hop_address_explicit_path_name[index]->has_data())
            return true;
    }
    return false;
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::has_operation() const
{
    for (std::size_t index=0; index<vrf_next_hop_explicit_path_name.size(); index++)
    {
        if(vrf_next_hop_explicit_path_name[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_interface_name.size(); index++)
    {
        if(vrf_next_hop_interface_name[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_interface_name_next_hop_address.size(); index++)
    {
        if(vrf_next_hop_interface_name_next_hop_address[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_next_hop_address.size(); index++)
    {
        if(vrf_next_hop_next_hop_address[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_next_hop_address_explicit_path_name.size(); index++)
    {
        if(vrf_next_hop_next_hop_address_explicit_path_name[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-next-hop-table";

    return path_buffer.str();

}

EntityPath RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VrfNextHopTable' in Cisco_IOS_XR_ip_static_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "vrf-next-hop-explicit-path-name")
    {
        for(auto const & c : vrf_next_hop_explicit_path_name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopExplicitPathName>();
        c->parent = this;
        vrf_next_hop_explicit_path_name.push_back(std::move(c));
        children[segment_path] = vrf_next_hop_explicit_path_name.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "vrf-next-hop-interface-name")
    {
        for(auto const & c : vrf_next_hop_interface_name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceName>();
        c->parent = this;
        vrf_next_hop_interface_name.push_back(std::move(c));
        children[segment_path] = vrf_next_hop_interface_name.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "vrf-next-hop-interface-name-next-hop-address")
    {
        for(auto const & c : vrf_next_hop_interface_name_next_hop_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceNameNextHopAddress>();
        c->parent = this;
        vrf_next_hop_interface_name_next_hop_address.push_back(std::move(c));
        children[segment_path] = vrf_next_hop_interface_name_next_hop_address.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "vrf-next-hop-next-hop-address")
    {
        for(auto const & c : vrf_next_hop_next_hop_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddress>();
        c->parent = this;
        vrf_next_hop_next_hop_address.push_back(std::move(c));
        children[segment_path] = vrf_next_hop_next_hop_address.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "vrf-next-hop-next-hop-address-explicit-path-name")
    {
        for(auto const & c : vrf_next_hop_next_hop_address_explicit_path_name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddressExplicitPathName>();
        c->parent = this;
        vrf_next_hop_next_hop_address_explicit_path_name.push_back(std::move(c));
        children[segment_path] = vrf_next_hop_next_hop_address_explicit_path_name.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::get_children()
{
    for (auto const & c : vrf_next_hop_explicit_path_name)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : vrf_next_hop_interface_name)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : vrf_next_hop_interface_name_next_hop_address)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : vrf_next_hop_next_hop_address)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : vrf_next_hop_next_hop_address_explicit_path_name)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::set_value(const std::string & value_path, std::string value)
{
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceName::VrfNextHopInterfaceName()
    :
    interface_name{YType::str, "interface-name"},
    bfd_fast_detect{YType::boolean, "bfd-fast-detect"},
    description{YType::str, "description"},
    detect_multiplier{YType::uint32, "detect-multiplier"},
    index_{YType::str, "index"},
    load_metric{YType::uint32, "load-metric"},
    metric{YType::uint32, "metric"},
    minimum_interval{YType::uint32, "minimum-interval"},
    object_name{YType::str, "object-name"},
    permanent{YType::boolean, "permanent"},
    tag{YType::uint32, "tag"},
    tunnel_id{YType::uint32, "tunnel-id"},
    vrf_lable{YType::uint32, "vrf-lable"}
{
    yang_name = "vrf-next-hop-interface-name"; yang_parent_name = "vrf-next-hop-table";
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceName::~VrfNextHopInterfaceName()
{
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceName::has_data() const
{
    return interface_name.is_set
	|| bfd_fast_detect.is_set
	|| description.is_set
	|| detect_multiplier.is_set
	|| index_.is_set
	|| load_metric.is_set
	|| metric.is_set
	|| minimum_interval.is_set
	|| object_name.is_set
	|| permanent.is_set
	|| tag.is_set
	|| tunnel_id.is_set
	|| vrf_lable.is_set;
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceName::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(bfd_fast_detect.operation)
	|| is_set(description.operation)
	|| is_set(detect_multiplier.operation)
	|| is_set(index_.operation)
	|| is_set(load_metric.operation)
	|| is_set(metric.operation)
	|| is_set(minimum_interval.operation)
	|| is_set(object_name.operation)
	|| is_set(permanent.operation)
	|| is_set(tag.operation)
	|| is_set(tunnel_id.operation)
	|| is_set(vrf_lable.operation);
}

std::string RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-next-hop-interface-name" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

EntityPath RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceName::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VrfNextHopInterfaceName' in Cisco_IOS_XR_ip_static_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (bfd_fast_detect.is_set || is_set(bfd_fast_detect.operation)) leaf_name_data.push_back(bfd_fast_detect.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (detect_multiplier.is_set || is_set(detect_multiplier.operation)) leaf_name_data.push_back(detect_multiplier.get_name_leafdata());
    if (index_.is_set || is_set(index_.operation)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.operation)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (minimum_interval.is_set || is_set(minimum_interval.operation)) leaf_name_data.push_back(minimum_interval.get_name_leafdata());
    if (object_name.is_set || is_set(object_name.operation)) leaf_name_data.push_back(object_name.get_name_leafdata());
    if (permanent.is_set || is_set(permanent.operation)) leaf_name_data.push_back(permanent.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (vrf_lable.is_set || is_set(vrf_lable.operation)) leaf_name_data.push_back(vrf_lable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceName::get_children()
{
    return children;
}

void RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceName::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "bfd-fast-detect")
    {
        bfd_fast_detect = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier = value;
    }
    if(value_path == "index")
    {
        index_ = value;
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "minimum-interval")
    {
        minimum_interval = value;
    }
    if(value_path == "object-name")
    {
        object_name = value;
    }
    if(value_path == "permanent")
    {
        permanent = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable = value;
    }
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceNameNextHopAddress::VrfNextHopInterfaceNameNextHopAddress()
    :
    interface_name{YType::str, "interface-name"},
    next_hop_address{YType::str, "next-hop-address"},
    bfd_fast_detect{YType::boolean, "bfd-fast-detect"},
    description{YType::str, "description"},
    detect_multiplier{YType::uint32, "detect-multiplier"},
    index_{YType::str, "index"},
    load_metric{YType::uint32, "load-metric"},
    metric{YType::uint32, "metric"},
    minimum_interval{YType::uint32, "minimum-interval"},
    object_name{YType::str, "object-name"},
    permanent{YType::boolean, "permanent"},
    tag{YType::uint32, "tag"},
    tunnel_id{YType::uint32, "tunnel-id"},
    vrf_lable{YType::uint32, "vrf-lable"}
{
    yang_name = "vrf-next-hop-interface-name-next-hop-address"; yang_parent_name = "vrf-next-hop-table";
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceNameNextHopAddress::~VrfNextHopInterfaceNameNextHopAddress()
{
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceNameNextHopAddress::has_data() const
{
    return interface_name.is_set
	|| next_hop_address.is_set
	|| bfd_fast_detect.is_set
	|| description.is_set
	|| detect_multiplier.is_set
	|| index_.is_set
	|| load_metric.is_set
	|| metric.is_set
	|| minimum_interval.is_set
	|| object_name.is_set
	|| permanent.is_set
	|| tag.is_set
	|| tunnel_id.is_set
	|| vrf_lable.is_set;
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceNameNextHopAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(next_hop_address.operation)
	|| is_set(bfd_fast_detect.operation)
	|| is_set(description.operation)
	|| is_set(detect_multiplier.operation)
	|| is_set(index_.operation)
	|| is_set(load_metric.operation)
	|| is_set(metric.operation)
	|| is_set(minimum_interval.operation)
	|| is_set(object_name.operation)
	|| is_set(permanent.operation)
	|| is_set(tag.operation)
	|| is_set(tunnel_id.operation)
	|| is_set(vrf_lable.operation);
}

std::string RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceNameNextHopAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-next-hop-interface-name-next-hop-address" <<"[interface-name='" <<interface_name <<"']" <<"[next-hop-address='" <<next_hop_address <<"']";

    return path_buffer.str();

}

EntityPath RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceNameNextHopAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VrfNextHopInterfaceNameNextHopAddress' in Cisco_IOS_XR_ip_static_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.operation)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (bfd_fast_detect.is_set || is_set(bfd_fast_detect.operation)) leaf_name_data.push_back(bfd_fast_detect.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (detect_multiplier.is_set || is_set(detect_multiplier.operation)) leaf_name_data.push_back(detect_multiplier.get_name_leafdata());
    if (index_.is_set || is_set(index_.operation)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.operation)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (minimum_interval.is_set || is_set(minimum_interval.operation)) leaf_name_data.push_back(minimum_interval.get_name_leafdata());
    if (object_name.is_set || is_set(object_name.operation)) leaf_name_data.push_back(object_name.get_name_leafdata());
    if (permanent.is_set || is_set(permanent.operation)) leaf_name_data.push_back(permanent.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (vrf_lable.is_set || is_set(vrf_lable.operation)) leaf_name_data.push_back(vrf_lable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceNameNextHopAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceNameNextHopAddress::get_children()
{
    return children;
}

void RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceNameNextHopAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
    }
    if(value_path == "bfd-fast-detect")
    {
        bfd_fast_detect = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier = value;
    }
    if(value_path == "index")
    {
        index_ = value;
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "minimum-interval")
    {
        minimum_interval = value;
    }
    if(value_path == "object-name")
    {
        object_name = value;
    }
    if(value_path == "permanent")
    {
        permanent = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable = value;
    }
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddress::VrfNextHopNextHopAddress()
    :
    next_hop_address{YType::str, "next-hop-address"},
    bfd_fast_detect{YType::boolean, "bfd-fast-detect"},
    description{YType::str, "description"},
    detect_multiplier{YType::uint32, "detect-multiplier"},
    index_{YType::str, "index"},
    load_metric{YType::uint32, "load-metric"},
    metric{YType::uint32, "metric"},
    minimum_interval{YType::uint32, "minimum-interval"},
    object_name{YType::str, "object-name"},
    permanent{YType::boolean, "permanent"},
    tag{YType::uint32, "tag"},
    tunnel_id{YType::uint32, "tunnel-id"},
    vrf_lable{YType::uint32, "vrf-lable"}
{
    yang_name = "vrf-next-hop-next-hop-address"; yang_parent_name = "vrf-next-hop-table";
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddress::~VrfNextHopNextHopAddress()
{
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddress::has_data() const
{
    return next_hop_address.is_set
	|| bfd_fast_detect.is_set
	|| description.is_set
	|| detect_multiplier.is_set
	|| index_.is_set
	|| load_metric.is_set
	|| metric.is_set
	|| minimum_interval.is_set
	|| object_name.is_set
	|| permanent.is_set
	|| tag.is_set
	|| tunnel_id.is_set
	|| vrf_lable.is_set;
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(next_hop_address.operation)
	|| is_set(bfd_fast_detect.operation)
	|| is_set(description.operation)
	|| is_set(detect_multiplier.operation)
	|| is_set(index_.operation)
	|| is_set(load_metric.operation)
	|| is_set(metric.operation)
	|| is_set(minimum_interval.operation)
	|| is_set(object_name.operation)
	|| is_set(permanent.operation)
	|| is_set(tag.operation)
	|| is_set(tunnel_id.operation)
	|| is_set(vrf_lable.operation);
}

std::string RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-next-hop-next-hop-address" <<"[next-hop-address='" <<next_hop_address <<"']";

    return path_buffer.str();

}

EntityPath RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VrfNextHopNextHopAddress' in Cisco_IOS_XR_ip_static_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop_address.is_set || is_set(next_hop_address.operation)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (bfd_fast_detect.is_set || is_set(bfd_fast_detect.operation)) leaf_name_data.push_back(bfd_fast_detect.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (detect_multiplier.is_set || is_set(detect_multiplier.operation)) leaf_name_data.push_back(detect_multiplier.get_name_leafdata());
    if (index_.is_set || is_set(index_.operation)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.operation)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (minimum_interval.is_set || is_set(minimum_interval.operation)) leaf_name_data.push_back(minimum_interval.get_name_leafdata());
    if (object_name.is_set || is_set(object_name.operation)) leaf_name_data.push_back(object_name.get_name_leafdata());
    if (permanent.is_set || is_set(permanent.operation)) leaf_name_data.push_back(permanent.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (vrf_lable.is_set || is_set(vrf_lable.operation)) leaf_name_data.push_back(vrf_lable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddress::get_children()
{
    return children;
}

void RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
    }
    if(value_path == "bfd-fast-detect")
    {
        bfd_fast_detect = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier = value;
    }
    if(value_path == "index")
    {
        index_ = value;
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "minimum-interval")
    {
        minimum_interval = value;
    }
    if(value_path == "object-name")
    {
        object_name = value;
    }
    if(value_path == "permanent")
    {
        permanent = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable = value;
    }
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddressExplicitPathName::VrfNextHopNextHopAddressExplicitPathName()
    :
    explicit_path_name{YType::str, "explicit-path-name"},
    next_hop_address{YType::str, "next-hop-address"},
    bfd_fast_detect{YType::boolean, "bfd-fast-detect"},
    description{YType::str, "description"},
    detect_multiplier{YType::uint32, "detect-multiplier"},
    index_{YType::str, "index"},
    load_metric{YType::uint32, "load-metric"},
    metric{YType::uint32, "metric"},
    minimum_interval{YType::uint32, "minimum-interval"},
    object_name{YType::str, "object-name"},
    permanent{YType::boolean, "permanent"},
    tag{YType::uint32, "tag"},
    tunnel_id{YType::uint32, "tunnel-id"},
    vrf_lable{YType::uint32, "vrf-lable"}
{
    yang_name = "vrf-next-hop-next-hop-address-explicit-path-name"; yang_parent_name = "vrf-next-hop-table";
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddressExplicitPathName::~VrfNextHopNextHopAddressExplicitPathName()
{
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddressExplicitPathName::has_data() const
{
    return explicit_path_name.is_set
	|| next_hop_address.is_set
	|| bfd_fast_detect.is_set
	|| description.is_set
	|| detect_multiplier.is_set
	|| index_.is_set
	|| load_metric.is_set
	|| metric.is_set
	|| minimum_interval.is_set
	|| object_name.is_set
	|| permanent.is_set
	|| tag.is_set
	|| tunnel_id.is_set
	|| vrf_lable.is_set;
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddressExplicitPathName::has_operation() const
{
    return is_set(operation)
	|| is_set(explicit_path_name.operation)
	|| is_set(next_hop_address.operation)
	|| is_set(bfd_fast_detect.operation)
	|| is_set(description.operation)
	|| is_set(detect_multiplier.operation)
	|| is_set(index_.operation)
	|| is_set(load_metric.operation)
	|| is_set(metric.operation)
	|| is_set(minimum_interval.operation)
	|| is_set(object_name.operation)
	|| is_set(permanent.operation)
	|| is_set(tag.operation)
	|| is_set(tunnel_id.operation)
	|| is_set(vrf_lable.operation);
}

std::string RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddressExplicitPathName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-next-hop-next-hop-address-explicit-path-name" <<"[explicit-path-name='" <<explicit_path_name <<"']" <<"[next-hop-address='" <<next_hop_address <<"']";

    return path_buffer.str();

}

EntityPath RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddressExplicitPathName::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VrfNextHopNextHopAddressExplicitPathName' in Cisco_IOS_XR_ip_static_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (explicit_path_name.is_set || is_set(explicit_path_name.operation)) leaf_name_data.push_back(explicit_path_name.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.operation)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (bfd_fast_detect.is_set || is_set(bfd_fast_detect.operation)) leaf_name_data.push_back(bfd_fast_detect.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (detect_multiplier.is_set || is_set(detect_multiplier.operation)) leaf_name_data.push_back(detect_multiplier.get_name_leafdata());
    if (index_.is_set || is_set(index_.operation)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.operation)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (minimum_interval.is_set || is_set(minimum_interval.operation)) leaf_name_data.push_back(minimum_interval.get_name_leafdata());
    if (object_name.is_set || is_set(object_name.operation)) leaf_name_data.push_back(object_name.get_name_leafdata());
    if (permanent.is_set || is_set(permanent.operation)) leaf_name_data.push_back(permanent.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (vrf_lable.is_set || is_set(vrf_lable.operation)) leaf_name_data.push_back(vrf_lable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddressExplicitPathName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddressExplicitPathName::get_children()
{
    return children;
}

void RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddressExplicitPathName::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "explicit-path-name")
    {
        explicit_path_name = value;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
    }
    if(value_path == "bfd-fast-detect")
    {
        bfd_fast_detect = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier = value;
    }
    if(value_path == "index")
    {
        index_ = value;
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "minimum-interval")
    {
        minimum_interval = value;
    }
    if(value_path == "object-name")
    {
        object_name = value;
    }
    if(value_path == "permanent")
    {
        permanent = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable = value;
    }
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopExplicitPathName::VrfNextHopExplicitPathName()
    :
    explicit_path_name{YType::str, "explicit-path-name"},
    bfd_fast_detect{YType::boolean, "bfd-fast-detect"},
    description{YType::str, "description"},
    detect_multiplier{YType::uint32, "detect-multiplier"},
    index_{YType::str, "index"},
    load_metric{YType::uint32, "load-metric"},
    metric{YType::uint32, "metric"},
    minimum_interval{YType::uint32, "minimum-interval"},
    object_name{YType::str, "object-name"},
    permanent{YType::boolean, "permanent"},
    tag{YType::uint32, "tag"},
    tunnel_id{YType::uint32, "tunnel-id"},
    vrf_lable{YType::uint32, "vrf-lable"}
{
    yang_name = "vrf-next-hop-explicit-path-name"; yang_parent_name = "vrf-next-hop-table";
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopExplicitPathName::~VrfNextHopExplicitPathName()
{
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopExplicitPathName::has_data() const
{
    return explicit_path_name.is_set
	|| bfd_fast_detect.is_set
	|| description.is_set
	|| detect_multiplier.is_set
	|| index_.is_set
	|| load_metric.is_set
	|| metric.is_set
	|| minimum_interval.is_set
	|| object_name.is_set
	|| permanent.is_set
	|| tag.is_set
	|| tunnel_id.is_set
	|| vrf_lable.is_set;
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopExplicitPathName::has_operation() const
{
    return is_set(operation)
	|| is_set(explicit_path_name.operation)
	|| is_set(bfd_fast_detect.operation)
	|| is_set(description.operation)
	|| is_set(detect_multiplier.operation)
	|| is_set(index_.operation)
	|| is_set(load_metric.operation)
	|| is_set(metric.operation)
	|| is_set(minimum_interval.operation)
	|| is_set(object_name.operation)
	|| is_set(permanent.operation)
	|| is_set(tag.operation)
	|| is_set(tunnel_id.operation)
	|| is_set(vrf_lable.operation);
}

std::string RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopExplicitPathName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-next-hop-explicit-path-name" <<"[explicit-path-name='" <<explicit_path_name <<"']";

    return path_buffer.str();

}

EntityPath RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopExplicitPathName::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VrfNextHopExplicitPathName' in Cisco_IOS_XR_ip_static_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (explicit_path_name.is_set || is_set(explicit_path_name.operation)) leaf_name_data.push_back(explicit_path_name.get_name_leafdata());
    if (bfd_fast_detect.is_set || is_set(bfd_fast_detect.operation)) leaf_name_data.push_back(bfd_fast_detect.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (detect_multiplier.is_set || is_set(detect_multiplier.operation)) leaf_name_data.push_back(detect_multiplier.get_name_leafdata());
    if (index_.is_set || is_set(index_.operation)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.operation)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (minimum_interval.is_set || is_set(minimum_interval.operation)) leaf_name_data.push_back(minimum_interval.get_name_leafdata());
    if (object_name.is_set || is_set(object_name.operation)) leaf_name_data.push_back(object_name.get_name_leafdata());
    if (permanent.is_set || is_set(permanent.operation)) leaf_name_data.push_back(permanent.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (vrf_lable.is_set || is_set(vrf_lable.operation)) leaf_name_data.push_back(vrf_lable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopExplicitPathName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopExplicitPathName::get_children()
{
    return children;
}

void RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopExplicitPathName::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "explicit-path-name")
    {
        explicit_path_name = value;
    }
    if(value_path == "bfd-fast-detect")
    {
        bfd_fast_detect = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier = value;
    }
    if(value_path == "index")
    {
        index_ = value;
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "minimum-interval")
    {
        minimum_interval = value;
    }
    if(value_path == "object-name")
    {
        object_name = value;
    }
    if(value_path == "permanent")
    {
        permanent = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable = value;
    }
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoutes()
{
    yang_name = "vrf-recurse-routes"; yang_parent_name = "vrf-prefix";
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::~VrfRecurseRoutes()
{
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::has_data() const
{
    for (std::size_t index=0; index<vrf_recurse_route.size(); index++)
    {
        if(vrf_recurse_route[index]->has_data())
            return true;
    }
    return false;
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::has_operation() const
{
    for (std::size_t index=0; index<vrf_recurse_route.size(); index++)
    {
        if(vrf_recurse_route[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-recurse-routes";

    return path_buffer.str();

}

EntityPath RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VrfRecurseRoutes' in Cisco_IOS_XR_ip_static_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "vrf-recurse-route")
    {
        for(auto const & c : vrf_recurse_route)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute>();
        c->parent = this;
        vrf_recurse_route.push_back(std::move(c));
        children[segment_path] = vrf_recurse_route.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::get_children()
{
    for (auto const & c : vrf_recurse_route)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::set_value(const std::string & value_path, std::string value)
{
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecurseRoute()
    :
    vrf_name{YType::str, "vrf-name"}
    	,
    vrf_recursive_next_hop_table(std::make_shared<RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable>())
{
    vrf_recursive_next_hop_table->parent = this;
    children["vrf-recursive-next-hop-table"] = vrf_recursive_next_hop_table;

    yang_name = "vrf-recurse-route"; yang_parent_name = "vrf-recurse-routes";
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::~VrfRecurseRoute()
{
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::has_data() const
{
    return vrf_name.is_set
	|| (vrf_recursive_next_hop_table !=  nullptr && vrf_recursive_next_hop_table->has_data());
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::has_operation() const
{
    return is_set(operation)
	|| is_set(vrf_name.operation)
	|| (vrf_recursive_next_hop_table !=  nullptr && vrf_recursive_next_hop_table->has_operation());
}

std::string RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-recurse-route" <<"[vrf-name='" <<vrf_name <<"']";

    return path_buffer.str();

}

EntityPath RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VrfRecurseRoute' in Cisco_IOS_XR_ip_static_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "vrf-recursive-next-hop-table")
    {
        if(vrf_recursive_next_hop_table != nullptr)
        {
            children["vrf-recursive-next-hop-table"] = vrf_recursive_next_hop_table;
        }
        else
        {
            vrf_recursive_next_hop_table = std::make_shared<RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable>();
            vrf_recursive_next_hop_table->parent = this;
            children["vrf-recursive-next-hop-table"] = vrf_recursive_next_hop_table;
        }
        return children.at("vrf-recursive-next-hop-table");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::get_children()
{
    if(children.find("vrf-recursive-next-hop-table") == children.end())
    {
        if(vrf_recursive_next_hop_table != nullptr)
        {
            children["vrf-recursive-next-hop-table"] = vrf_recursive_next_hop_table;
        }
    }

    return children;
}

void RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfRecursiveNextHopTable()
{
    yang_name = "vrf-recursive-next-hop-table"; yang_parent_name = "vrf-recurse-route";
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::~VrfRecursiveNextHopTable()
{
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::has_data() const
{
    for (std::size_t index=0; index<vrf_next_hop_explicit_path_name.size(); index++)
    {
        if(vrf_next_hop_explicit_path_name[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_interface_name.size(); index++)
    {
        if(vrf_next_hop_interface_name[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_interface_name_next_hop_address.size(); index++)
    {
        if(vrf_next_hop_interface_name_next_hop_address[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_next_hop_address.size(); index++)
    {
        if(vrf_next_hop_next_hop_address[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_next_hop_address_explicit_path_name.size(); index++)
    {
        if(vrf_next_hop_next_hop_address_explicit_path_name[index]->has_data())
            return true;
    }
    return false;
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::has_operation() const
{
    for (std::size_t index=0; index<vrf_next_hop_explicit_path_name.size(); index++)
    {
        if(vrf_next_hop_explicit_path_name[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_interface_name.size(); index++)
    {
        if(vrf_next_hop_interface_name[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_interface_name_next_hop_address.size(); index++)
    {
        if(vrf_next_hop_interface_name_next_hop_address[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_next_hop_address.size(); index++)
    {
        if(vrf_next_hop_next_hop_address[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_next_hop_address_explicit_path_name.size(); index++)
    {
        if(vrf_next_hop_next_hop_address_explicit_path_name[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-recursive-next-hop-table";

    return path_buffer.str();

}

EntityPath RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VrfRecursiveNextHopTable' in Cisco_IOS_XR_ip_static_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "vrf-next-hop-explicit-path-name")
    {
        for(auto const & c : vrf_next_hop_explicit_path_name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopExplicitPathName>();
        c->parent = this;
        vrf_next_hop_explicit_path_name.push_back(std::move(c));
        children[segment_path] = vrf_next_hop_explicit_path_name.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "vrf-next-hop-interface-name")
    {
        for(auto const & c : vrf_next_hop_interface_name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceName>();
        c->parent = this;
        vrf_next_hop_interface_name.push_back(std::move(c));
        children[segment_path] = vrf_next_hop_interface_name.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "vrf-next-hop-interface-name-next-hop-address")
    {
        for(auto const & c : vrf_next_hop_interface_name_next_hop_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceNameNextHopAddress>();
        c->parent = this;
        vrf_next_hop_interface_name_next_hop_address.push_back(std::move(c));
        children[segment_path] = vrf_next_hop_interface_name_next_hop_address.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "vrf-next-hop-next-hop-address")
    {
        for(auto const & c : vrf_next_hop_next_hop_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddress>();
        c->parent = this;
        vrf_next_hop_next_hop_address.push_back(std::move(c));
        children[segment_path] = vrf_next_hop_next_hop_address.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "vrf-next-hop-next-hop-address-explicit-path-name")
    {
        for(auto const & c : vrf_next_hop_next_hop_address_explicit_path_name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddressExplicitPathName>();
        c->parent = this;
        vrf_next_hop_next_hop_address_explicit_path_name.push_back(std::move(c));
        children[segment_path] = vrf_next_hop_next_hop_address_explicit_path_name.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::get_children()
{
    for (auto const & c : vrf_next_hop_explicit_path_name)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : vrf_next_hop_interface_name)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : vrf_next_hop_interface_name_next_hop_address)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : vrf_next_hop_next_hop_address)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : vrf_next_hop_next_hop_address_explicit_path_name)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::set_value(const std::string & value_path, std::string value)
{
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceName::VrfNextHopInterfaceName()
    :
    interface_name{YType::str, "interface-name"},
    bfd_fast_detect{YType::boolean, "bfd-fast-detect"},
    description{YType::str, "description"},
    detect_multiplier{YType::uint32, "detect-multiplier"},
    index_{YType::str, "index"},
    load_metric{YType::uint32, "load-metric"},
    metric{YType::uint32, "metric"},
    minimum_interval{YType::uint32, "minimum-interval"},
    object_name{YType::str, "object-name"},
    permanent{YType::boolean, "permanent"},
    tag{YType::uint32, "tag"},
    tunnel_id{YType::uint32, "tunnel-id"},
    vrf_lable{YType::uint32, "vrf-lable"}
{
    yang_name = "vrf-next-hop-interface-name"; yang_parent_name = "vrf-recursive-next-hop-table";
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceName::~VrfNextHopInterfaceName()
{
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceName::has_data() const
{
    return interface_name.is_set
	|| bfd_fast_detect.is_set
	|| description.is_set
	|| detect_multiplier.is_set
	|| index_.is_set
	|| load_metric.is_set
	|| metric.is_set
	|| minimum_interval.is_set
	|| object_name.is_set
	|| permanent.is_set
	|| tag.is_set
	|| tunnel_id.is_set
	|| vrf_lable.is_set;
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceName::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(bfd_fast_detect.operation)
	|| is_set(description.operation)
	|| is_set(detect_multiplier.operation)
	|| is_set(index_.operation)
	|| is_set(load_metric.operation)
	|| is_set(metric.operation)
	|| is_set(minimum_interval.operation)
	|| is_set(object_name.operation)
	|| is_set(permanent.operation)
	|| is_set(tag.operation)
	|| is_set(tunnel_id.operation)
	|| is_set(vrf_lable.operation);
}

std::string RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-next-hop-interface-name" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

EntityPath RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceName::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VrfNextHopInterfaceName' in Cisco_IOS_XR_ip_static_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (bfd_fast_detect.is_set || is_set(bfd_fast_detect.operation)) leaf_name_data.push_back(bfd_fast_detect.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (detect_multiplier.is_set || is_set(detect_multiplier.operation)) leaf_name_data.push_back(detect_multiplier.get_name_leafdata());
    if (index_.is_set || is_set(index_.operation)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.operation)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (minimum_interval.is_set || is_set(minimum_interval.operation)) leaf_name_data.push_back(minimum_interval.get_name_leafdata());
    if (object_name.is_set || is_set(object_name.operation)) leaf_name_data.push_back(object_name.get_name_leafdata());
    if (permanent.is_set || is_set(permanent.operation)) leaf_name_data.push_back(permanent.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (vrf_lable.is_set || is_set(vrf_lable.operation)) leaf_name_data.push_back(vrf_lable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceName::get_children()
{
    return children;
}

void RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceName::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "bfd-fast-detect")
    {
        bfd_fast_detect = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier = value;
    }
    if(value_path == "index")
    {
        index_ = value;
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "minimum-interval")
    {
        minimum_interval = value;
    }
    if(value_path == "object-name")
    {
        object_name = value;
    }
    if(value_path == "permanent")
    {
        permanent = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable = value;
    }
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceNameNextHopAddress::VrfNextHopInterfaceNameNextHopAddress()
    :
    interface_name{YType::str, "interface-name"},
    next_hop_address{YType::str, "next-hop-address"},
    bfd_fast_detect{YType::boolean, "bfd-fast-detect"},
    description{YType::str, "description"},
    detect_multiplier{YType::uint32, "detect-multiplier"},
    index_{YType::str, "index"},
    load_metric{YType::uint32, "load-metric"},
    metric{YType::uint32, "metric"},
    minimum_interval{YType::uint32, "minimum-interval"},
    object_name{YType::str, "object-name"},
    permanent{YType::boolean, "permanent"},
    tag{YType::uint32, "tag"},
    tunnel_id{YType::uint32, "tunnel-id"},
    vrf_lable{YType::uint32, "vrf-lable"}
{
    yang_name = "vrf-next-hop-interface-name-next-hop-address"; yang_parent_name = "vrf-recursive-next-hop-table";
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceNameNextHopAddress::~VrfNextHopInterfaceNameNextHopAddress()
{
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceNameNextHopAddress::has_data() const
{
    return interface_name.is_set
	|| next_hop_address.is_set
	|| bfd_fast_detect.is_set
	|| description.is_set
	|| detect_multiplier.is_set
	|| index_.is_set
	|| load_metric.is_set
	|| metric.is_set
	|| minimum_interval.is_set
	|| object_name.is_set
	|| permanent.is_set
	|| tag.is_set
	|| tunnel_id.is_set
	|| vrf_lable.is_set;
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceNameNextHopAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(next_hop_address.operation)
	|| is_set(bfd_fast_detect.operation)
	|| is_set(description.operation)
	|| is_set(detect_multiplier.operation)
	|| is_set(index_.operation)
	|| is_set(load_metric.operation)
	|| is_set(metric.operation)
	|| is_set(minimum_interval.operation)
	|| is_set(object_name.operation)
	|| is_set(permanent.operation)
	|| is_set(tag.operation)
	|| is_set(tunnel_id.operation)
	|| is_set(vrf_lable.operation);
}

std::string RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceNameNextHopAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-next-hop-interface-name-next-hop-address" <<"[interface-name='" <<interface_name <<"']" <<"[next-hop-address='" <<next_hop_address <<"']";

    return path_buffer.str();

}

EntityPath RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceNameNextHopAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VrfNextHopInterfaceNameNextHopAddress' in Cisco_IOS_XR_ip_static_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.operation)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (bfd_fast_detect.is_set || is_set(bfd_fast_detect.operation)) leaf_name_data.push_back(bfd_fast_detect.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (detect_multiplier.is_set || is_set(detect_multiplier.operation)) leaf_name_data.push_back(detect_multiplier.get_name_leafdata());
    if (index_.is_set || is_set(index_.operation)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.operation)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (minimum_interval.is_set || is_set(minimum_interval.operation)) leaf_name_data.push_back(minimum_interval.get_name_leafdata());
    if (object_name.is_set || is_set(object_name.operation)) leaf_name_data.push_back(object_name.get_name_leafdata());
    if (permanent.is_set || is_set(permanent.operation)) leaf_name_data.push_back(permanent.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (vrf_lable.is_set || is_set(vrf_lable.operation)) leaf_name_data.push_back(vrf_lable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceNameNextHopAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceNameNextHopAddress::get_children()
{
    return children;
}

void RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceNameNextHopAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
    }
    if(value_path == "bfd-fast-detect")
    {
        bfd_fast_detect = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier = value;
    }
    if(value_path == "index")
    {
        index_ = value;
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "minimum-interval")
    {
        minimum_interval = value;
    }
    if(value_path == "object-name")
    {
        object_name = value;
    }
    if(value_path == "permanent")
    {
        permanent = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable = value;
    }
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddress::VrfNextHopNextHopAddress()
    :
    next_hop_address{YType::str, "next-hop-address"},
    bfd_fast_detect{YType::boolean, "bfd-fast-detect"},
    description{YType::str, "description"},
    detect_multiplier{YType::uint32, "detect-multiplier"},
    index_{YType::str, "index"},
    load_metric{YType::uint32, "load-metric"},
    metric{YType::uint32, "metric"},
    minimum_interval{YType::uint32, "minimum-interval"},
    object_name{YType::str, "object-name"},
    permanent{YType::boolean, "permanent"},
    tag{YType::uint32, "tag"},
    tunnel_id{YType::uint32, "tunnel-id"},
    vrf_lable{YType::uint32, "vrf-lable"}
{
    yang_name = "vrf-next-hop-next-hop-address"; yang_parent_name = "vrf-recursive-next-hop-table";
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddress::~VrfNextHopNextHopAddress()
{
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddress::has_data() const
{
    return next_hop_address.is_set
	|| bfd_fast_detect.is_set
	|| description.is_set
	|| detect_multiplier.is_set
	|| index_.is_set
	|| load_metric.is_set
	|| metric.is_set
	|| minimum_interval.is_set
	|| object_name.is_set
	|| permanent.is_set
	|| tag.is_set
	|| tunnel_id.is_set
	|| vrf_lable.is_set;
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(next_hop_address.operation)
	|| is_set(bfd_fast_detect.operation)
	|| is_set(description.operation)
	|| is_set(detect_multiplier.operation)
	|| is_set(index_.operation)
	|| is_set(load_metric.operation)
	|| is_set(metric.operation)
	|| is_set(minimum_interval.operation)
	|| is_set(object_name.operation)
	|| is_set(permanent.operation)
	|| is_set(tag.operation)
	|| is_set(tunnel_id.operation)
	|| is_set(vrf_lable.operation);
}

std::string RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-next-hop-next-hop-address" <<"[next-hop-address='" <<next_hop_address <<"']";

    return path_buffer.str();

}

EntityPath RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VrfNextHopNextHopAddress' in Cisco_IOS_XR_ip_static_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop_address.is_set || is_set(next_hop_address.operation)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (bfd_fast_detect.is_set || is_set(bfd_fast_detect.operation)) leaf_name_data.push_back(bfd_fast_detect.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (detect_multiplier.is_set || is_set(detect_multiplier.operation)) leaf_name_data.push_back(detect_multiplier.get_name_leafdata());
    if (index_.is_set || is_set(index_.operation)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.operation)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (minimum_interval.is_set || is_set(minimum_interval.operation)) leaf_name_data.push_back(minimum_interval.get_name_leafdata());
    if (object_name.is_set || is_set(object_name.operation)) leaf_name_data.push_back(object_name.get_name_leafdata());
    if (permanent.is_set || is_set(permanent.operation)) leaf_name_data.push_back(permanent.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (vrf_lable.is_set || is_set(vrf_lable.operation)) leaf_name_data.push_back(vrf_lable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddress::get_children()
{
    return children;
}

void RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
    }
    if(value_path == "bfd-fast-detect")
    {
        bfd_fast_detect = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier = value;
    }
    if(value_path == "index")
    {
        index_ = value;
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "minimum-interval")
    {
        minimum_interval = value;
    }
    if(value_path == "object-name")
    {
        object_name = value;
    }
    if(value_path == "permanent")
    {
        permanent = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable = value;
    }
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddressExplicitPathName::VrfNextHopNextHopAddressExplicitPathName()
    :
    explicit_path_name{YType::str, "explicit-path-name"},
    next_hop_address{YType::str, "next-hop-address"},
    bfd_fast_detect{YType::boolean, "bfd-fast-detect"},
    description{YType::str, "description"},
    detect_multiplier{YType::uint32, "detect-multiplier"},
    index_{YType::str, "index"},
    load_metric{YType::uint32, "load-metric"},
    metric{YType::uint32, "metric"},
    minimum_interval{YType::uint32, "minimum-interval"},
    object_name{YType::str, "object-name"},
    permanent{YType::boolean, "permanent"},
    tag{YType::uint32, "tag"},
    tunnel_id{YType::uint32, "tunnel-id"},
    vrf_lable{YType::uint32, "vrf-lable"}
{
    yang_name = "vrf-next-hop-next-hop-address-explicit-path-name"; yang_parent_name = "vrf-recursive-next-hop-table";
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddressExplicitPathName::~VrfNextHopNextHopAddressExplicitPathName()
{
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddressExplicitPathName::has_data() const
{
    return explicit_path_name.is_set
	|| next_hop_address.is_set
	|| bfd_fast_detect.is_set
	|| description.is_set
	|| detect_multiplier.is_set
	|| index_.is_set
	|| load_metric.is_set
	|| metric.is_set
	|| minimum_interval.is_set
	|| object_name.is_set
	|| permanent.is_set
	|| tag.is_set
	|| tunnel_id.is_set
	|| vrf_lable.is_set;
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddressExplicitPathName::has_operation() const
{
    return is_set(operation)
	|| is_set(explicit_path_name.operation)
	|| is_set(next_hop_address.operation)
	|| is_set(bfd_fast_detect.operation)
	|| is_set(description.operation)
	|| is_set(detect_multiplier.operation)
	|| is_set(index_.operation)
	|| is_set(load_metric.operation)
	|| is_set(metric.operation)
	|| is_set(minimum_interval.operation)
	|| is_set(object_name.operation)
	|| is_set(permanent.operation)
	|| is_set(tag.operation)
	|| is_set(tunnel_id.operation)
	|| is_set(vrf_lable.operation);
}

std::string RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddressExplicitPathName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-next-hop-next-hop-address-explicit-path-name" <<"[explicit-path-name='" <<explicit_path_name <<"']" <<"[next-hop-address='" <<next_hop_address <<"']";

    return path_buffer.str();

}

EntityPath RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddressExplicitPathName::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VrfNextHopNextHopAddressExplicitPathName' in Cisco_IOS_XR_ip_static_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (explicit_path_name.is_set || is_set(explicit_path_name.operation)) leaf_name_data.push_back(explicit_path_name.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.operation)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (bfd_fast_detect.is_set || is_set(bfd_fast_detect.operation)) leaf_name_data.push_back(bfd_fast_detect.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (detect_multiplier.is_set || is_set(detect_multiplier.operation)) leaf_name_data.push_back(detect_multiplier.get_name_leafdata());
    if (index_.is_set || is_set(index_.operation)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.operation)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (minimum_interval.is_set || is_set(minimum_interval.operation)) leaf_name_data.push_back(minimum_interval.get_name_leafdata());
    if (object_name.is_set || is_set(object_name.operation)) leaf_name_data.push_back(object_name.get_name_leafdata());
    if (permanent.is_set || is_set(permanent.operation)) leaf_name_data.push_back(permanent.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (vrf_lable.is_set || is_set(vrf_lable.operation)) leaf_name_data.push_back(vrf_lable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddressExplicitPathName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddressExplicitPathName::get_children()
{
    return children;
}

void RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddressExplicitPathName::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "explicit-path-name")
    {
        explicit_path_name = value;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
    }
    if(value_path == "bfd-fast-detect")
    {
        bfd_fast_detect = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier = value;
    }
    if(value_path == "index")
    {
        index_ = value;
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "minimum-interval")
    {
        minimum_interval = value;
    }
    if(value_path == "object-name")
    {
        object_name = value;
    }
    if(value_path == "permanent")
    {
        permanent = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable = value;
    }
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopExplicitPathName::VrfNextHopExplicitPathName()
    :
    explicit_path_name{YType::str, "explicit-path-name"},
    bfd_fast_detect{YType::boolean, "bfd-fast-detect"},
    description{YType::str, "description"},
    detect_multiplier{YType::uint32, "detect-multiplier"},
    index_{YType::str, "index"},
    load_metric{YType::uint32, "load-metric"},
    metric{YType::uint32, "metric"},
    minimum_interval{YType::uint32, "minimum-interval"},
    object_name{YType::str, "object-name"},
    permanent{YType::boolean, "permanent"},
    tag{YType::uint32, "tag"},
    tunnel_id{YType::uint32, "tunnel-id"},
    vrf_lable{YType::uint32, "vrf-lable"}
{
    yang_name = "vrf-next-hop-explicit-path-name"; yang_parent_name = "vrf-recursive-next-hop-table";
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopExplicitPathName::~VrfNextHopExplicitPathName()
{
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopExplicitPathName::has_data() const
{
    return explicit_path_name.is_set
	|| bfd_fast_detect.is_set
	|| description.is_set
	|| detect_multiplier.is_set
	|| index_.is_set
	|| load_metric.is_set
	|| metric.is_set
	|| minimum_interval.is_set
	|| object_name.is_set
	|| permanent.is_set
	|| tag.is_set
	|| tunnel_id.is_set
	|| vrf_lable.is_set;
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopExplicitPathName::has_operation() const
{
    return is_set(operation)
	|| is_set(explicit_path_name.operation)
	|| is_set(bfd_fast_detect.operation)
	|| is_set(description.operation)
	|| is_set(detect_multiplier.operation)
	|| is_set(index_.operation)
	|| is_set(load_metric.operation)
	|| is_set(metric.operation)
	|| is_set(minimum_interval.operation)
	|| is_set(object_name.operation)
	|| is_set(permanent.operation)
	|| is_set(tag.operation)
	|| is_set(tunnel_id.operation)
	|| is_set(vrf_lable.operation);
}

std::string RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopExplicitPathName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-next-hop-explicit-path-name" <<"[explicit-path-name='" <<explicit_path_name <<"']";

    return path_buffer.str();

}

EntityPath RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopExplicitPathName::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VrfNextHopExplicitPathName' in Cisco_IOS_XR_ip_static_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (explicit_path_name.is_set || is_set(explicit_path_name.operation)) leaf_name_data.push_back(explicit_path_name.get_name_leafdata());
    if (bfd_fast_detect.is_set || is_set(bfd_fast_detect.operation)) leaf_name_data.push_back(bfd_fast_detect.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (detect_multiplier.is_set || is_set(detect_multiplier.operation)) leaf_name_data.push_back(detect_multiplier.get_name_leafdata());
    if (index_.is_set || is_set(index_.operation)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.operation)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (minimum_interval.is_set || is_set(minimum_interval.operation)) leaf_name_data.push_back(minimum_interval.get_name_leafdata());
    if (object_name.is_set || is_set(object_name.operation)) leaf_name_data.push_back(object_name.get_name_leafdata());
    if (permanent.is_set || is_set(permanent.operation)) leaf_name_data.push_back(permanent.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (vrf_lable.is_set || is_set(vrf_lable.operation)) leaf_name_data.push_back(vrf_lable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopExplicitPathName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopExplicitPathName::get_children()
{
    return children;
}

void RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopExplicitPathName::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "explicit-path-name")
    {
        explicit_path_name = value;
    }
    if(value_path == "bfd-fast-detect")
    {
        bfd_fast_detect = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier = value;
    }
    if(value_path == "index")
    {
        index_ = value;
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "minimum-interval")
    {
        minimum_interval = value;
    }
    if(value_path == "object-name")
    {
        object_name = value;
    }
    if(value_path == "permanent")
    {
        permanent = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable = value;
    }
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfSegRoute::VrfSegRoute()
    :
    segment_route_next_hop_table(std::make_shared<RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable>())
{
    segment_route_next_hop_table->parent = this;
    children["segment-route-next-hop-table"] = segment_route_next_hop_table;

    yang_name = "vrf-seg-route"; yang_parent_name = "vrf-prefix";
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfSegRoute::~VrfSegRoute()
{
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfSegRoute::has_data() const
{
    return (segment_route_next_hop_table !=  nullptr && segment_route_next_hop_table->has_data());
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfSegRoute::has_operation() const
{
    return is_set(operation)
	|| (segment_route_next_hop_table !=  nullptr && segment_route_next_hop_table->has_operation());
}

std::string RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfSegRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-seg-route";

    return path_buffer.str();

}

EntityPath RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfSegRoute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VrfSegRoute' in Cisco_IOS_XR_ip_static_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfSegRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "segment-route-next-hop-table")
    {
        if(segment_route_next_hop_table != nullptr)
        {
            children["segment-route-next-hop-table"] = segment_route_next_hop_table;
        }
        else
        {
            segment_route_next_hop_table = std::make_shared<RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable>();
            segment_route_next_hop_table->parent = this;
            children["segment-route-next-hop-table"] = segment_route_next_hop_table;
        }
        return children.at("segment-route-next-hop-table");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfSegRoute::get_children()
{
    if(children.find("segment-route-next-hop-table") == children.end())
    {
        if(segment_route_next_hop_table != nullptr)
        {
            children["segment-route-next-hop-table"] = segment_route_next_hop_table;
        }
    }

    return children;
}

void RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfSegRoute::set_value(const std::string & value_path, std::string value)
{
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::SegmentRouteNextHopTable()
{
    yang_name = "segment-route-next-hop-table"; yang_parent_name = "vrf-seg-route";
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::~SegmentRouteNextHopTable()
{
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::has_data() const
{
    for (std::size_t index=0; index<vrf_next_hop_explicit_path_name.size(); index++)
    {
        if(vrf_next_hop_explicit_path_name[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_interface_name.size(); index++)
    {
        if(vrf_next_hop_interface_name[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_interface_name_next_hop_address.size(); index++)
    {
        if(vrf_next_hop_interface_name_next_hop_address[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_next_hop_address.size(); index++)
    {
        if(vrf_next_hop_next_hop_address[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_next_hop_address_explicit_path_name.size(); index++)
    {
        if(vrf_next_hop_next_hop_address_explicit_path_name[index]->has_data())
            return true;
    }
    return false;
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::has_operation() const
{
    for (std::size_t index=0; index<vrf_next_hop_explicit_path_name.size(); index++)
    {
        if(vrf_next_hop_explicit_path_name[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_interface_name.size(); index++)
    {
        if(vrf_next_hop_interface_name[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_interface_name_next_hop_address.size(); index++)
    {
        if(vrf_next_hop_interface_name_next_hop_address[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_next_hop_address.size(); index++)
    {
        if(vrf_next_hop_next_hop_address[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_next_hop_address_explicit_path_name.size(); index++)
    {
        if(vrf_next_hop_next_hop_address_explicit_path_name[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "segment-route-next-hop-table";

    return path_buffer.str();

}

EntityPath RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SegmentRouteNextHopTable' in Cisco_IOS_XR_ip_static_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "vrf-next-hop-explicit-path-name")
    {
        for(auto const & c : vrf_next_hop_explicit_path_name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopExplicitPathName>();
        c->parent = this;
        vrf_next_hop_explicit_path_name.push_back(std::move(c));
        children[segment_path] = vrf_next_hop_explicit_path_name.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "vrf-next-hop-interface-name")
    {
        for(auto const & c : vrf_next_hop_interface_name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceName>();
        c->parent = this;
        vrf_next_hop_interface_name.push_back(std::move(c));
        children[segment_path] = vrf_next_hop_interface_name.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "vrf-next-hop-interface-name-next-hop-address")
    {
        for(auto const & c : vrf_next_hop_interface_name_next_hop_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceNameNextHopAddress>();
        c->parent = this;
        vrf_next_hop_interface_name_next_hop_address.push_back(std::move(c));
        children[segment_path] = vrf_next_hop_interface_name_next_hop_address.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "vrf-next-hop-next-hop-address")
    {
        for(auto const & c : vrf_next_hop_next_hop_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddress>();
        c->parent = this;
        vrf_next_hop_next_hop_address.push_back(std::move(c));
        children[segment_path] = vrf_next_hop_next_hop_address.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "vrf-next-hop-next-hop-address-explicit-path-name")
    {
        for(auto const & c : vrf_next_hop_next_hop_address_explicit_path_name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddressExplicitPathName>();
        c->parent = this;
        vrf_next_hop_next_hop_address_explicit_path_name.push_back(std::move(c));
        children[segment_path] = vrf_next_hop_next_hop_address_explicit_path_name.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::get_children()
{
    for (auto const & c : vrf_next_hop_explicit_path_name)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : vrf_next_hop_interface_name)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : vrf_next_hop_interface_name_next_hop_address)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : vrf_next_hop_next_hop_address)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : vrf_next_hop_next_hop_address_explicit_path_name)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::set_value(const std::string & value_path, std::string value)
{
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceName::VrfNextHopInterfaceName()
    :
    interface_name{YType::str, "interface-name"},
    bfd_fast_detect{YType::boolean, "bfd-fast-detect"},
    description{YType::str, "description"},
    detect_multiplier{YType::uint32, "detect-multiplier"},
    index_{YType::str, "index"},
    load_metric{YType::uint32, "load-metric"},
    metric{YType::uint32, "metric"},
    minimum_interval{YType::uint32, "minimum-interval"},
    object_name{YType::str, "object-name"},
    permanent{YType::boolean, "permanent"},
    tag{YType::uint32, "tag"},
    tunnel_id{YType::uint32, "tunnel-id"},
    vrf_lable{YType::uint32, "vrf-lable"}
{
    yang_name = "vrf-next-hop-interface-name"; yang_parent_name = "segment-route-next-hop-table";
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceName::~VrfNextHopInterfaceName()
{
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceName::has_data() const
{
    return interface_name.is_set
	|| bfd_fast_detect.is_set
	|| description.is_set
	|| detect_multiplier.is_set
	|| index_.is_set
	|| load_metric.is_set
	|| metric.is_set
	|| minimum_interval.is_set
	|| object_name.is_set
	|| permanent.is_set
	|| tag.is_set
	|| tunnel_id.is_set
	|| vrf_lable.is_set;
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceName::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(bfd_fast_detect.operation)
	|| is_set(description.operation)
	|| is_set(detect_multiplier.operation)
	|| is_set(index_.operation)
	|| is_set(load_metric.operation)
	|| is_set(metric.operation)
	|| is_set(minimum_interval.operation)
	|| is_set(object_name.operation)
	|| is_set(permanent.operation)
	|| is_set(tag.operation)
	|| is_set(tunnel_id.operation)
	|| is_set(vrf_lable.operation);
}

std::string RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-next-hop-interface-name" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

EntityPath RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceName::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VrfNextHopInterfaceName' in Cisco_IOS_XR_ip_static_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (bfd_fast_detect.is_set || is_set(bfd_fast_detect.operation)) leaf_name_data.push_back(bfd_fast_detect.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (detect_multiplier.is_set || is_set(detect_multiplier.operation)) leaf_name_data.push_back(detect_multiplier.get_name_leafdata());
    if (index_.is_set || is_set(index_.operation)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.operation)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (minimum_interval.is_set || is_set(minimum_interval.operation)) leaf_name_data.push_back(minimum_interval.get_name_leafdata());
    if (object_name.is_set || is_set(object_name.operation)) leaf_name_data.push_back(object_name.get_name_leafdata());
    if (permanent.is_set || is_set(permanent.operation)) leaf_name_data.push_back(permanent.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (vrf_lable.is_set || is_set(vrf_lable.operation)) leaf_name_data.push_back(vrf_lable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceName::get_children()
{
    return children;
}

void RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceName::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "bfd-fast-detect")
    {
        bfd_fast_detect = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier = value;
    }
    if(value_path == "index")
    {
        index_ = value;
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "minimum-interval")
    {
        minimum_interval = value;
    }
    if(value_path == "object-name")
    {
        object_name = value;
    }
    if(value_path == "permanent")
    {
        permanent = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable = value;
    }
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceNameNextHopAddress::VrfNextHopInterfaceNameNextHopAddress()
    :
    interface_name{YType::str, "interface-name"},
    next_hop_address{YType::str, "next-hop-address"},
    bfd_fast_detect{YType::boolean, "bfd-fast-detect"},
    description{YType::str, "description"},
    detect_multiplier{YType::uint32, "detect-multiplier"},
    index_{YType::str, "index"},
    load_metric{YType::uint32, "load-metric"},
    metric{YType::uint32, "metric"},
    minimum_interval{YType::uint32, "minimum-interval"},
    object_name{YType::str, "object-name"},
    permanent{YType::boolean, "permanent"},
    tag{YType::uint32, "tag"},
    tunnel_id{YType::uint32, "tunnel-id"},
    vrf_lable{YType::uint32, "vrf-lable"}
{
    yang_name = "vrf-next-hop-interface-name-next-hop-address"; yang_parent_name = "segment-route-next-hop-table";
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceNameNextHopAddress::~VrfNextHopInterfaceNameNextHopAddress()
{
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceNameNextHopAddress::has_data() const
{
    return interface_name.is_set
	|| next_hop_address.is_set
	|| bfd_fast_detect.is_set
	|| description.is_set
	|| detect_multiplier.is_set
	|| index_.is_set
	|| load_metric.is_set
	|| metric.is_set
	|| minimum_interval.is_set
	|| object_name.is_set
	|| permanent.is_set
	|| tag.is_set
	|| tunnel_id.is_set
	|| vrf_lable.is_set;
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceNameNextHopAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(next_hop_address.operation)
	|| is_set(bfd_fast_detect.operation)
	|| is_set(description.operation)
	|| is_set(detect_multiplier.operation)
	|| is_set(index_.operation)
	|| is_set(load_metric.operation)
	|| is_set(metric.operation)
	|| is_set(minimum_interval.operation)
	|| is_set(object_name.operation)
	|| is_set(permanent.operation)
	|| is_set(tag.operation)
	|| is_set(tunnel_id.operation)
	|| is_set(vrf_lable.operation);
}

std::string RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceNameNextHopAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-next-hop-interface-name-next-hop-address" <<"[interface-name='" <<interface_name <<"']" <<"[next-hop-address='" <<next_hop_address <<"']";

    return path_buffer.str();

}

EntityPath RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceNameNextHopAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VrfNextHopInterfaceNameNextHopAddress' in Cisco_IOS_XR_ip_static_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.operation)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (bfd_fast_detect.is_set || is_set(bfd_fast_detect.operation)) leaf_name_data.push_back(bfd_fast_detect.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (detect_multiplier.is_set || is_set(detect_multiplier.operation)) leaf_name_data.push_back(detect_multiplier.get_name_leafdata());
    if (index_.is_set || is_set(index_.operation)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.operation)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (minimum_interval.is_set || is_set(minimum_interval.operation)) leaf_name_data.push_back(minimum_interval.get_name_leafdata());
    if (object_name.is_set || is_set(object_name.operation)) leaf_name_data.push_back(object_name.get_name_leafdata());
    if (permanent.is_set || is_set(permanent.operation)) leaf_name_data.push_back(permanent.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (vrf_lable.is_set || is_set(vrf_lable.operation)) leaf_name_data.push_back(vrf_lable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceNameNextHopAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceNameNextHopAddress::get_children()
{
    return children;
}

void RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceNameNextHopAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
    }
    if(value_path == "bfd-fast-detect")
    {
        bfd_fast_detect = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier = value;
    }
    if(value_path == "index")
    {
        index_ = value;
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "minimum-interval")
    {
        minimum_interval = value;
    }
    if(value_path == "object-name")
    {
        object_name = value;
    }
    if(value_path == "permanent")
    {
        permanent = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable = value;
    }
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddress::VrfNextHopNextHopAddress()
    :
    next_hop_address{YType::str, "next-hop-address"},
    bfd_fast_detect{YType::boolean, "bfd-fast-detect"},
    description{YType::str, "description"},
    detect_multiplier{YType::uint32, "detect-multiplier"},
    index_{YType::str, "index"},
    load_metric{YType::uint32, "load-metric"},
    metric{YType::uint32, "metric"},
    minimum_interval{YType::uint32, "minimum-interval"},
    object_name{YType::str, "object-name"},
    permanent{YType::boolean, "permanent"},
    tag{YType::uint32, "tag"},
    tunnel_id{YType::uint32, "tunnel-id"},
    vrf_lable{YType::uint32, "vrf-lable"}
{
    yang_name = "vrf-next-hop-next-hop-address"; yang_parent_name = "segment-route-next-hop-table";
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddress::~VrfNextHopNextHopAddress()
{
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddress::has_data() const
{
    return next_hop_address.is_set
	|| bfd_fast_detect.is_set
	|| description.is_set
	|| detect_multiplier.is_set
	|| index_.is_set
	|| load_metric.is_set
	|| metric.is_set
	|| minimum_interval.is_set
	|| object_name.is_set
	|| permanent.is_set
	|| tag.is_set
	|| tunnel_id.is_set
	|| vrf_lable.is_set;
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(next_hop_address.operation)
	|| is_set(bfd_fast_detect.operation)
	|| is_set(description.operation)
	|| is_set(detect_multiplier.operation)
	|| is_set(index_.operation)
	|| is_set(load_metric.operation)
	|| is_set(metric.operation)
	|| is_set(minimum_interval.operation)
	|| is_set(object_name.operation)
	|| is_set(permanent.operation)
	|| is_set(tag.operation)
	|| is_set(tunnel_id.operation)
	|| is_set(vrf_lable.operation);
}

std::string RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-next-hop-next-hop-address" <<"[next-hop-address='" <<next_hop_address <<"']";

    return path_buffer.str();

}

EntityPath RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VrfNextHopNextHopAddress' in Cisco_IOS_XR_ip_static_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop_address.is_set || is_set(next_hop_address.operation)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (bfd_fast_detect.is_set || is_set(bfd_fast_detect.operation)) leaf_name_data.push_back(bfd_fast_detect.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (detect_multiplier.is_set || is_set(detect_multiplier.operation)) leaf_name_data.push_back(detect_multiplier.get_name_leafdata());
    if (index_.is_set || is_set(index_.operation)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.operation)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (minimum_interval.is_set || is_set(minimum_interval.operation)) leaf_name_data.push_back(minimum_interval.get_name_leafdata());
    if (object_name.is_set || is_set(object_name.operation)) leaf_name_data.push_back(object_name.get_name_leafdata());
    if (permanent.is_set || is_set(permanent.operation)) leaf_name_data.push_back(permanent.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (vrf_lable.is_set || is_set(vrf_lable.operation)) leaf_name_data.push_back(vrf_lable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddress::get_children()
{
    return children;
}

void RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
    }
    if(value_path == "bfd-fast-detect")
    {
        bfd_fast_detect = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier = value;
    }
    if(value_path == "index")
    {
        index_ = value;
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "minimum-interval")
    {
        minimum_interval = value;
    }
    if(value_path == "object-name")
    {
        object_name = value;
    }
    if(value_path == "permanent")
    {
        permanent = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable = value;
    }
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddressExplicitPathName::VrfNextHopNextHopAddressExplicitPathName()
    :
    explicit_path_name{YType::str, "explicit-path-name"},
    next_hop_address{YType::str, "next-hop-address"},
    bfd_fast_detect{YType::boolean, "bfd-fast-detect"},
    description{YType::str, "description"},
    detect_multiplier{YType::uint32, "detect-multiplier"},
    index_{YType::str, "index"},
    load_metric{YType::uint32, "load-metric"},
    metric{YType::uint32, "metric"},
    minimum_interval{YType::uint32, "minimum-interval"},
    object_name{YType::str, "object-name"},
    permanent{YType::boolean, "permanent"},
    tag{YType::uint32, "tag"},
    tunnel_id{YType::uint32, "tunnel-id"},
    vrf_lable{YType::uint32, "vrf-lable"}
{
    yang_name = "vrf-next-hop-next-hop-address-explicit-path-name"; yang_parent_name = "segment-route-next-hop-table";
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddressExplicitPathName::~VrfNextHopNextHopAddressExplicitPathName()
{
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddressExplicitPathName::has_data() const
{
    return explicit_path_name.is_set
	|| next_hop_address.is_set
	|| bfd_fast_detect.is_set
	|| description.is_set
	|| detect_multiplier.is_set
	|| index_.is_set
	|| load_metric.is_set
	|| metric.is_set
	|| minimum_interval.is_set
	|| object_name.is_set
	|| permanent.is_set
	|| tag.is_set
	|| tunnel_id.is_set
	|| vrf_lable.is_set;
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddressExplicitPathName::has_operation() const
{
    return is_set(operation)
	|| is_set(explicit_path_name.operation)
	|| is_set(next_hop_address.operation)
	|| is_set(bfd_fast_detect.operation)
	|| is_set(description.operation)
	|| is_set(detect_multiplier.operation)
	|| is_set(index_.operation)
	|| is_set(load_metric.operation)
	|| is_set(metric.operation)
	|| is_set(minimum_interval.operation)
	|| is_set(object_name.operation)
	|| is_set(permanent.operation)
	|| is_set(tag.operation)
	|| is_set(tunnel_id.operation)
	|| is_set(vrf_lable.operation);
}

std::string RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddressExplicitPathName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-next-hop-next-hop-address-explicit-path-name" <<"[explicit-path-name='" <<explicit_path_name <<"']" <<"[next-hop-address='" <<next_hop_address <<"']";

    return path_buffer.str();

}

EntityPath RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddressExplicitPathName::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VrfNextHopNextHopAddressExplicitPathName' in Cisco_IOS_XR_ip_static_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (explicit_path_name.is_set || is_set(explicit_path_name.operation)) leaf_name_data.push_back(explicit_path_name.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.operation)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (bfd_fast_detect.is_set || is_set(bfd_fast_detect.operation)) leaf_name_data.push_back(bfd_fast_detect.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (detect_multiplier.is_set || is_set(detect_multiplier.operation)) leaf_name_data.push_back(detect_multiplier.get_name_leafdata());
    if (index_.is_set || is_set(index_.operation)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.operation)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (minimum_interval.is_set || is_set(minimum_interval.operation)) leaf_name_data.push_back(minimum_interval.get_name_leafdata());
    if (object_name.is_set || is_set(object_name.operation)) leaf_name_data.push_back(object_name.get_name_leafdata());
    if (permanent.is_set || is_set(permanent.operation)) leaf_name_data.push_back(permanent.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (vrf_lable.is_set || is_set(vrf_lable.operation)) leaf_name_data.push_back(vrf_lable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddressExplicitPathName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddressExplicitPathName::get_children()
{
    return children;
}

void RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddressExplicitPathName::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "explicit-path-name")
    {
        explicit_path_name = value;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
    }
    if(value_path == "bfd-fast-detect")
    {
        bfd_fast_detect = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier = value;
    }
    if(value_path == "index")
    {
        index_ = value;
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "minimum-interval")
    {
        minimum_interval = value;
    }
    if(value_path == "object-name")
    {
        object_name = value;
    }
    if(value_path == "permanent")
    {
        permanent = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable = value;
    }
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopExplicitPathName::VrfNextHopExplicitPathName()
    :
    explicit_path_name{YType::str, "explicit-path-name"},
    bfd_fast_detect{YType::boolean, "bfd-fast-detect"},
    description{YType::str, "description"},
    detect_multiplier{YType::uint32, "detect-multiplier"},
    index_{YType::str, "index"},
    load_metric{YType::uint32, "load-metric"},
    metric{YType::uint32, "metric"},
    minimum_interval{YType::uint32, "minimum-interval"},
    object_name{YType::str, "object-name"},
    permanent{YType::boolean, "permanent"},
    tag{YType::uint32, "tag"},
    tunnel_id{YType::uint32, "tunnel-id"},
    vrf_lable{YType::uint32, "vrf-lable"}
{
    yang_name = "vrf-next-hop-explicit-path-name"; yang_parent_name = "segment-route-next-hop-table";
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopExplicitPathName::~VrfNextHopExplicitPathName()
{
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopExplicitPathName::has_data() const
{
    return explicit_path_name.is_set
	|| bfd_fast_detect.is_set
	|| description.is_set
	|| detect_multiplier.is_set
	|| index_.is_set
	|| load_metric.is_set
	|| metric.is_set
	|| minimum_interval.is_set
	|| object_name.is_set
	|| permanent.is_set
	|| tag.is_set
	|| tunnel_id.is_set
	|| vrf_lable.is_set;
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopExplicitPathName::has_operation() const
{
    return is_set(operation)
	|| is_set(explicit_path_name.operation)
	|| is_set(bfd_fast_detect.operation)
	|| is_set(description.operation)
	|| is_set(detect_multiplier.operation)
	|| is_set(index_.operation)
	|| is_set(load_metric.operation)
	|| is_set(metric.operation)
	|| is_set(minimum_interval.operation)
	|| is_set(object_name.operation)
	|| is_set(permanent.operation)
	|| is_set(tag.operation)
	|| is_set(tunnel_id.operation)
	|| is_set(vrf_lable.operation);
}

std::string RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopExplicitPathName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-next-hop-explicit-path-name" <<"[explicit-path-name='" <<explicit_path_name <<"']";

    return path_buffer.str();

}

EntityPath RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopExplicitPathName::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VrfNextHopExplicitPathName' in Cisco_IOS_XR_ip_static_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (explicit_path_name.is_set || is_set(explicit_path_name.operation)) leaf_name_data.push_back(explicit_path_name.get_name_leafdata());
    if (bfd_fast_detect.is_set || is_set(bfd_fast_detect.operation)) leaf_name_data.push_back(bfd_fast_detect.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (detect_multiplier.is_set || is_set(detect_multiplier.operation)) leaf_name_data.push_back(detect_multiplier.get_name_leafdata());
    if (index_.is_set || is_set(index_.operation)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.operation)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (minimum_interval.is_set || is_set(minimum_interval.operation)) leaf_name_data.push_back(minimum_interval.get_name_leafdata());
    if (object_name.is_set || is_set(object_name.operation)) leaf_name_data.push_back(object_name.get_name_leafdata());
    if (permanent.is_set || is_set(permanent.operation)) leaf_name_data.push_back(permanent.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (vrf_lable.is_set || is_set(vrf_lable.operation)) leaf_name_data.push_back(vrf_lable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopExplicitPathName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopExplicitPathName::get_children()
{
    return children;
}

void RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopExplicitPathName::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "explicit-path-name")
    {
        explicit_path_name = value;
    }
    if(value_path == "bfd-fast-detect")
    {
        bfd_fast_detect = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier = value;
    }
    if(value_path == "index")
    {
        index_ = value;
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "minimum-interval")
    {
        minimum_interval = value;
    }
    if(value_path == "object-name")
    {
        object_name = value;
    }
    if(value_path == "permanent")
    {
        permanent = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable = value;
    }
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::DefaultTopology()
    :
    vrf_prefix_topologies(std::make_shared<RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies>())
{
    vrf_prefix_topologies->parent = this;
    children["vrf-prefix-topologies"] = vrf_prefix_topologies;

    yang_name = "default-topology"; yang_parent_name = "vrf-unicast";
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::~DefaultTopology()
{
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::has_data() const
{
    return (vrf_prefix_topologies !=  nullptr && vrf_prefix_topologies->has_data());
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::has_operation() const
{
    return is_set(operation)
	|| (vrf_prefix_topologies !=  nullptr && vrf_prefix_topologies->has_operation());
}

std::string RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-topology";

    return path_buffer.str();

}

EntityPath RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DefaultTopology' in Cisco_IOS_XR_ip_static_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "vrf-prefix-topologies")
    {
        if(vrf_prefix_topologies != nullptr)
        {
            children["vrf-prefix-topologies"] = vrf_prefix_topologies;
        }
        else
        {
            vrf_prefix_topologies = std::make_shared<RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies>();
            vrf_prefix_topologies->parent = this;
            children["vrf-prefix-topologies"] = vrf_prefix_topologies;
        }
        return children.at("vrf-prefix-topologies");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::get_children()
{
    if(children.find("vrf-prefix-topologies") == children.end())
    {
        if(vrf_prefix_topologies != nullptr)
        {
            children["vrf-prefix-topologies"] = vrf_prefix_topologies;
        }
    }

    return children;
}

void RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::set_value(const std::string & value_path, std::string value)
{
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopologies()
{
    yang_name = "vrf-prefix-topologies"; yang_parent_name = "default-topology";
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::~VrfPrefixTopologies()
{
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::has_data() const
{
    for (std::size_t index=0; index<vrf_prefix_topology.size(); index++)
    {
        if(vrf_prefix_topology[index]->has_data())
            return true;
    }
    return false;
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::has_operation() const
{
    for (std::size_t index=0; index<vrf_prefix_topology.size(); index++)
    {
        if(vrf_prefix_topology[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-prefix-topologies";

    return path_buffer.str();

}

EntityPath RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VrfPrefixTopologies' in Cisco_IOS_XR_ip_static_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "vrf-prefix-topology")
    {
        for(auto const & c : vrf_prefix_topology)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology>();
        c->parent = this;
        vrf_prefix_topology.push_back(std::move(c));
        children[segment_path] = vrf_prefix_topology.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::get_children()
{
    for (auto const & c : vrf_prefix_topology)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::set_value(const std::string & value_path, std::string value)
{
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfPrefixTopology()
    :
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint32, "prefix-length"}
    	,
    vrf_recurse_routes(std::make_shared<RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes>())
	,vrf_route(std::make_shared<RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute>())
	,vrf_seg_route(std::make_shared<RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute>())
{
    vrf_recurse_routes->parent = this;
    children["vrf-recurse-routes"] = vrf_recurse_routes;

    vrf_route->parent = this;
    children["vrf-route"] = vrf_route;

    vrf_seg_route->parent = this;
    children["vrf-seg-route"] = vrf_seg_route;

    yang_name = "vrf-prefix-topology"; yang_parent_name = "vrf-prefix-topologies";
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::~VrfPrefixTopology()
{
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::has_data() const
{
    return prefix.is_set
	|| prefix_length.is_set
	|| (vrf_recurse_routes !=  nullptr && vrf_recurse_routes->has_data())
	|| (vrf_route !=  nullptr && vrf_route->has_data())
	|| (vrf_seg_route !=  nullptr && vrf_seg_route->has_data());
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::has_operation() const
{
    return is_set(operation)
	|| is_set(prefix.operation)
	|| is_set(prefix_length.operation)
	|| (vrf_recurse_routes !=  nullptr && vrf_recurse_routes->has_operation())
	|| (vrf_route !=  nullptr && vrf_route->has_operation())
	|| (vrf_seg_route !=  nullptr && vrf_seg_route->has_operation());
}

std::string RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-prefix-topology" <<"[prefix='" <<prefix <<"']" <<"[prefix-length='" <<prefix_length <<"']";

    return path_buffer.str();

}

EntityPath RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VrfPrefixTopology' in Cisco_IOS_XR_ip_static_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "vrf-recurse-routes")
    {
        if(vrf_recurse_routes != nullptr)
        {
            children["vrf-recurse-routes"] = vrf_recurse_routes;
        }
        else
        {
            vrf_recurse_routes = std::make_shared<RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes>();
            vrf_recurse_routes->parent = this;
            children["vrf-recurse-routes"] = vrf_recurse_routes;
        }
        return children.at("vrf-recurse-routes");
    }

    if(child_yang_name == "vrf-route")
    {
        if(vrf_route != nullptr)
        {
            children["vrf-route"] = vrf_route;
        }
        else
        {
            vrf_route = std::make_shared<RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute>();
            vrf_route->parent = this;
            children["vrf-route"] = vrf_route;
        }
        return children.at("vrf-route");
    }

    if(child_yang_name == "vrf-seg-route")
    {
        if(vrf_seg_route != nullptr)
        {
            children["vrf-seg-route"] = vrf_seg_route;
        }
        else
        {
            vrf_seg_route = std::make_shared<RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute>();
            vrf_seg_route->parent = this;
            children["vrf-seg-route"] = vrf_seg_route;
        }
        return children.at("vrf-seg-route");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::get_children()
{
    if(children.find("vrf-recurse-routes") == children.end())
    {
        if(vrf_recurse_routes != nullptr)
        {
            children["vrf-recurse-routes"] = vrf_recurse_routes;
        }
    }

    if(children.find("vrf-route") == children.end())
    {
        if(vrf_route != nullptr)
        {
            children["vrf-route"] = vrf_route;
        }
    }

    if(children.find("vrf-seg-route") == children.end())
    {
        if(vrf_seg_route != nullptr)
        {
            children["vrf-seg-route"] = vrf_seg_route;
        }
    }

    return children;
}

void RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "prefix")
    {
        prefix = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfRoute()
    :
    vrf_next_hop_table(std::make_shared<RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable>())
{
    vrf_next_hop_table->parent = this;
    children["vrf-next-hop-table"] = vrf_next_hop_table;

    yang_name = "vrf-route"; yang_parent_name = "vrf-prefix-topology";
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::~VrfRoute()
{
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::has_data() const
{
    return (vrf_next_hop_table !=  nullptr && vrf_next_hop_table->has_data());
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::has_operation() const
{
    return is_set(operation)
	|| (vrf_next_hop_table !=  nullptr && vrf_next_hop_table->has_operation());
}

std::string RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-route";

    return path_buffer.str();

}

EntityPath RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VrfRoute' in Cisco_IOS_XR_ip_static_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "vrf-next-hop-table")
    {
        if(vrf_next_hop_table != nullptr)
        {
            children["vrf-next-hop-table"] = vrf_next_hop_table;
        }
        else
        {
            vrf_next_hop_table = std::make_shared<RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable>();
            vrf_next_hop_table->parent = this;
            children["vrf-next-hop-table"] = vrf_next_hop_table;
        }
        return children.at("vrf-next-hop-table");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::get_children()
{
    if(children.find("vrf-next-hop-table") == children.end())
    {
        if(vrf_next_hop_table != nullptr)
        {
            children["vrf-next-hop-table"] = vrf_next_hop_table;
        }
    }

    return children;
}

void RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::set_value(const std::string & value_path, std::string value)
{
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopTable()
{
    yang_name = "vrf-next-hop-table"; yang_parent_name = "vrf-route";
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::~VrfNextHopTable()
{
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::has_data() const
{
    for (std::size_t index=0; index<vrf_next_hop_explicit_path_name.size(); index++)
    {
        if(vrf_next_hop_explicit_path_name[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_interface_name.size(); index++)
    {
        if(vrf_next_hop_interface_name[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_interface_name_next_hop_address.size(); index++)
    {
        if(vrf_next_hop_interface_name_next_hop_address[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_next_hop_address.size(); index++)
    {
        if(vrf_next_hop_next_hop_address[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_next_hop_address_explicit_path_name.size(); index++)
    {
        if(vrf_next_hop_next_hop_address_explicit_path_name[index]->has_data())
            return true;
    }
    return false;
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::has_operation() const
{
    for (std::size_t index=0; index<vrf_next_hop_explicit_path_name.size(); index++)
    {
        if(vrf_next_hop_explicit_path_name[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_interface_name.size(); index++)
    {
        if(vrf_next_hop_interface_name[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_interface_name_next_hop_address.size(); index++)
    {
        if(vrf_next_hop_interface_name_next_hop_address[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_next_hop_address.size(); index++)
    {
        if(vrf_next_hop_next_hop_address[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_next_hop_address_explicit_path_name.size(); index++)
    {
        if(vrf_next_hop_next_hop_address_explicit_path_name[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-next-hop-table";

    return path_buffer.str();

}

EntityPath RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VrfNextHopTable' in Cisco_IOS_XR_ip_static_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "vrf-next-hop-explicit-path-name")
    {
        for(auto const & c : vrf_next_hop_explicit_path_name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopExplicitPathName>();
        c->parent = this;
        vrf_next_hop_explicit_path_name.push_back(std::move(c));
        children[segment_path] = vrf_next_hop_explicit_path_name.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "vrf-next-hop-interface-name")
    {
        for(auto const & c : vrf_next_hop_interface_name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceName>();
        c->parent = this;
        vrf_next_hop_interface_name.push_back(std::move(c));
        children[segment_path] = vrf_next_hop_interface_name.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "vrf-next-hop-interface-name-next-hop-address")
    {
        for(auto const & c : vrf_next_hop_interface_name_next_hop_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceNameNextHopAddress>();
        c->parent = this;
        vrf_next_hop_interface_name_next_hop_address.push_back(std::move(c));
        children[segment_path] = vrf_next_hop_interface_name_next_hop_address.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "vrf-next-hop-next-hop-address")
    {
        for(auto const & c : vrf_next_hop_next_hop_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddress>();
        c->parent = this;
        vrf_next_hop_next_hop_address.push_back(std::move(c));
        children[segment_path] = vrf_next_hop_next_hop_address.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "vrf-next-hop-next-hop-address-explicit-path-name")
    {
        for(auto const & c : vrf_next_hop_next_hop_address_explicit_path_name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddressExplicitPathName>();
        c->parent = this;
        vrf_next_hop_next_hop_address_explicit_path_name.push_back(std::move(c));
        children[segment_path] = vrf_next_hop_next_hop_address_explicit_path_name.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::get_children()
{
    for (auto const & c : vrf_next_hop_explicit_path_name)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : vrf_next_hop_interface_name)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : vrf_next_hop_interface_name_next_hop_address)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : vrf_next_hop_next_hop_address)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : vrf_next_hop_next_hop_address_explicit_path_name)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::set_value(const std::string & value_path, std::string value)
{
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceName::VrfNextHopInterfaceName()
    :
    interface_name{YType::str, "interface-name"},
    bfd_fast_detect{YType::boolean, "bfd-fast-detect"},
    description{YType::str, "description"},
    detect_multiplier{YType::uint32, "detect-multiplier"},
    index_{YType::str, "index"},
    load_metric{YType::uint32, "load-metric"},
    metric{YType::uint32, "metric"},
    minimum_interval{YType::uint32, "minimum-interval"},
    object_name{YType::str, "object-name"},
    permanent{YType::boolean, "permanent"},
    tag{YType::uint32, "tag"},
    tunnel_id{YType::uint32, "tunnel-id"},
    vrf_lable{YType::uint32, "vrf-lable"}
{
    yang_name = "vrf-next-hop-interface-name"; yang_parent_name = "vrf-next-hop-table";
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceName::~VrfNextHopInterfaceName()
{
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceName::has_data() const
{
    return interface_name.is_set
	|| bfd_fast_detect.is_set
	|| description.is_set
	|| detect_multiplier.is_set
	|| index_.is_set
	|| load_metric.is_set
	|| metric.is_set
	|| minimum_interval.is_set
	|| object_name.is_set
	|| permanent.is_set
	|| tag.is_set
	|| tunnel_id.is_set
	|| vrf_lable.is_set;
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceName::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(bfd_fast_detect.operation)
	|| is_set(description.operation)
	|| is_set(detect_multiplier.operation)
	|| is_set(index_.operation)
	|| is_set(load_metric.operation)
	|| is_set(metric.operation)
	|| is_set(minimum_interval.operation)
	|| is_set(object_name.operation)
	|| is_set(permanent.operation)
	|| is_set(tag.operation)
	|| is_set(tunnel_id.operation)
	|| is_set(vrf_lable.operation);
}

std::string RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-next-hop-interface-name" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

EntityPath RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceName::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VrfNextHopInterfaceName' in Cisco_IOS_XR_ip_static_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (bfd_fast_detect.is_set || is_set(bfd_fast_detect.operation)) leaf_name_data.push_back(bfd_fast_detect.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (detect_multiplier.is_set || is_set(detect_multiplier.operation)) leaf_name_data.push_back(detect_multiplier.get_name_leafdata());
    if (index_.is_set || is_set(index_.operation)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.operation)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (minimum_interval.is_set || is_set(minimum_interval.operation)) leaf_name_data.push_back(minimum_interval.get_name_leafdata());
    if (object_name.is_set || is_set(object_name.operation)) leaf_name_data.push_back(object_name.get_name_leafdata());
    if (permanent.is_set || is_set(permanent.operation)) leaf_name_data.push_back(permanent.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (vrf_lable.is_set || is_set(vrf_lable.operation)) leaf_name_data.push_back(vrf_lable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceName::get_children()
{
    return children;
}

void RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceName::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "bfd-fast-detect")
    {
        bfd_fast_detect = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier = value;
    }
    if(value_path == "index")
    {
        index_ = value;
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "minimum-interval")
    {
        minimum_interval = value;
    }
    if(value_path == "object-name")
    {
        object_name = value;
    }
    if(value_path == "permanent")
    {
        permanent = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable = value;
    }
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceNameNextHopAddress::VrfNextHopInterfaceNameNextHopAddress()
    :
    interface_name{YType::str, "interface-name"},
    next_hop_address{YType::str, "next-hop-address"},
    bfd_fast_detect{YType::boolean, "bfd-fast-detect"},
    description{YType::str, "description"},
    detect_multiplier{YType::uint32, "detect-multiplier"},
    index_{YType::str, "index"},
    load_metric{YType::uint32, "load-metric"},
    metric{YType::uint32, "metric"},
    minimum_interval{YType::uint32, "minimum-interval"},
    object_name{YType::str, "object-name"},
    permanent{YType::boolean, "permanent"},
    tag{YType::uint32, "tag"},
    tunnel_id{YType::uint32, "tunnel-id"},
    vrf_lable{YType::uint32, "vrf-lable"}
{
    yang_name = "vrf-next-hop-interface-name-next-hop-address"; yang_parent_name = "vrf-next-hop-table";
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceNameNextHopAddress::~VrfNextHopInterfaceNameNextHopAddress()
{
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceNameNextHopAddress::has_data() const
{
    return interface_name.is_set
	|| next_hop_address.is_set
	|| bfd_fast_detect.is_set
	|| description.is_set
	|| detect_multiplier.is_set
	|| index_.is_set
	|| load_metric.is_set
	|| metric.is_set
	|| minimum_interval.is_set
	|| object_name.is_set
	|| permanent.is_set
	|| tag.is_set
	|| tunnel_id.is_set
	|| vrf_lable.is_set;
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceNameNextHopAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(next_hop_address.operation)
	|| is_set(bfd_fast_detect.operation)
	|| is_set(description.operation)
	|| is_set(detect_multiplier.operation)
	|| is_set(index_.operation)
	|| is_set(load_metric.operation)
	|| is_set(metric.operation)
	|| is_set(minimum_interval.operation)
	|| is_set(object_name.operation)
	|| is_set(permanent.operation)
	|| is_set(tag.operation)
	|| is_set(tunnel_id.operation)
	|| is_set(vrf_lable.operation);
}

std::string RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceNameNextHopAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-next-hop-interface-name-next-hop-address" <<"[interface-name='" <<interface_name <<"']" <<"[next-hop-address='" <<next_hop_address <<"']";

    return path_buffer.str();

}

EntityPath RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceNameNextHopAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VrfNextHopInterfaceNameNextHopAddress' in Cisco_IOS_XR_ip_static_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.operation)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (bfd_fast_detect.is_set || is_set(bfd_fast_detect.operation)) leaf_name_data.push_back(bfd_fast_detect.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (detect_multiplier.is_set || is_set(detect_multiplier.operation)) leaf_name_data.push_back(detect_multiplier.get_name_leafdata());
    if (index_.is_set || is_set(index_.operation)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.operation)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (minimum_interval.is_set || is_set(minimum_interval.operation)) leaf_name_data.push_back(minimum_interval.get_name_leafdata());
    if (object_name.is_set || is_set(object_name.operation)) leaf_name_data.push_back(object_name.get_name_leafdata());
    if (permanent.is_set || is_set(permanent.operation)) leaf_name_data.push_back(permanent.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (vrf_lable.is_set || is_set(vrf_lable.operation)) leaf_name_data.push_back(vrf_lable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceNameNextHopAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceNameNextHopAddress::get_children()
{
    return children;
}

void RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceNameNextHopAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
    }
    if(value_path == "bfd-fast-detect")
    {
        bfd_fast_detect = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier = value;
    }
    if(value_path == "index")
    {
        index_ = value;
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "minimum-interval")
    {
        minimum_interval = value;
    }
    if(value_path == "object-name")
    {
        object_name = value;
    }
    if(value_path == "permanent")
    {
        permanent = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable = value;
    }
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddress::VrfNextHopNextHopAddress()
    :
    next_hop_address{YType::str, "next-hop-address"},
    bfd_fast_detect{YType::boolean, "bfd-fast-detect"},
    description{YType::str, "description"},
    detect_multiplier{YType::uint32, "detect-multiplier"},
    index_{YType::str, "index"},
    load_metric{YType::uint32, "load-metric"},
    metric{YType::uint32, "metric"},
    minimum_interval{YType::uint32, "minimum-interval"},
    object_name{YType::str, "object-name"},
    permanent{YType::boolean, "permanent"},
    tag{YType::uint32, "tag"},
    tunnel_id{YType::uint32, "tunnel-id"},
    vrf_lable{YType::uint32, "vrf-lable"}
{
    yang_name = "vrf-next-hop-next-hop-address"; yang_parent_name = "vrf-next-hop-table";
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddress::~VrfNextHopNextHopAddress()
{
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddress::has_data() const
{
    return next_hop_address.is_set
	|| bfd_fast_detect.is_set
	|| description.is_set
	|| detect_multiplier.is_set
	|| index_.is_set
	|| load_metric.is_set
	|| metric.is_set
	|| minimum_interval.is_set
	|| object_name.is_set
	|| permanent.is_set
	|| tag.is_set
	|| tunnel_id.is_set
	|| vrf_lable.is_set;
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(next_hop_address.operation)
	|| is_set(bfd_fast_detect.operation)
	|| is_set(description.operation)
	|| is_set(detect_multiplier.operation)
	|| is_set(index_.operation)
	|| is_set(load_metric.operation)
	|| is_set(metric.operation)
	|| is_set(minimum_interval.operation)
	|| is_set(object_name.operation)
	|| is_set(permanent.operation)
	|| is_set(tag.operation)
	|| is_set(tunnel_id.operation)
	|| is_set(vrf_lable.operation);
}

std::string RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-next-hop-next-hop-address" <<"[next-hop-address='" <<next_hop_address <<"']";

    return path_buffer.str();

}

EntityPath RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VrfNextHopNextHopAddress' in Cisco_IOS_XR_ip_static_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop_address.is_set || is_set(next_hop_address.operation)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (bfd_fast_detect.is_set || is_set(bfd_fast_detect.operation)) leaf_name_data.push_back(bfd_fast_detect.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (detect_multiplier.is_set || is_set(detect_multiplier.operation)) leaf_name_data.push_back(detect_multiplier.get_name_leafdata());
    if (index_.is_set || is_set(index_.operation)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.operation)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (minimum_interval.is_set || is_set(minimum_interval.operation)) leaf_name_data.push_back(minimum_interval.get_name_leafdata());
    if (object_name.is_set || is_set(object_name.operation)) leaf_name_data.push_back(object_name.get_name_leafdata());
    if (permanent.is_set || is_set(permanent.operation)) leaf_name_data.push_back(permanent.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (vrf_lable.is_set || is_set(vrf_lable.operation)) leaf_name_data.push_back(vrf_lable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddress::get_children()
{
    return children;
}

void RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
    }
    if(value_path == "bfd-fast-detect")
    {
        bfd_fast_detect = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier = value;
    }
    if(value_path == "index")
    {
        index_ = value;
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "minimum-interval")
    {
        minimum_interval = value;
    }
    if(value_path == "object-name")
    {
        object_name = value;
    }
    if(value_path == "permanent")
    {
        permanent = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable = value;
    }
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddressExplicitPathName::VrfNextHopNextHopAddressExplicitPathName()
    :
    explicit_path_name{YType::str, "explicit-path-name"},
    next_hop_address{YType::str, "next-hop-address"},
    bfd_fast_detect{YType::boolean, "bfd-fast-detect"},
    description{YType::str, "description"},
    detect_multiplier{YType::uint32, "detect-multiplier"},
    index_{YType::str, "index"},
    load_metric{YType::uint32, "load-metric"},
    metric{YType::uint32, "metric"},
    minimum_interval{YType::uint32, "minimum-interval"},
    object_name{YType::str, "object-name"},
    permanent{YType::boolean, "permanent"},
    tag{YType::uint32, "tag"},
    tunnel_id{YType::uint32, "tunnel-id"},
    vrf_lable{YType::uint32, "vrf-lable"}
{
    yang_name = "vrf-next-hop-next-hop-address-explicit-path-name"; yang_parent_name = "vrf-next-hop-table";
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddressExplicitPathName::~VrfNextHopNextHopAddressExplicitPathName()
{
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddressExplicitPathName::has_data() const
{
    return explicit_path_name.is_set
	|| next_hop_address.is_set
	|| bfd_fast_detect.is_set
	|| description.is_set
	|| detect_multiplier.is_set
	|| index_.is_set
	|| load_metric.is_set
	|| metric.is_set
	|| minimum_interval.is_set
	|| object_name.is_set
	|| permanent.is_set
	|| tag.is_set
	|| tunnel_id.is_set
	|| vrf_lable.is_set;
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddressExplicitPathName::has_operation() const
{
    return is_set(operation)
	|| is_set(explicit_path_name.operation)
	|| is_set(next_hop_address.operation)
	|| is_set(bfd_fast_detect.operation)
	|| is_set(description.operation)
	|| is_set(detect_multiplier.operation)
	|| is_set(index_.operation)
	|| is_set(load_metric.operation)
	|| is_set(metric.operation)
	|| is_set(minimum_interval.operation)
	|| is_set(object_name.operation)
	|| is_set(permanent.operation)
	|| is_set(tag.operation)
	|| is_set(tunnel_id.operation)
	|| is_set(vrf_lable.operation);
}

std::string RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddressExplicitPathName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-next-hop-next-hop-address-explicit-path-name" <<"[explicit-path-name='" <<explicit_path_name <<"']" <<"[next-hop-address='" <<next_hop_address <<"']";

    return path_buffer.str();

}

EntityPath RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddressExplicitPathName::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VrfNextHopNextHopAddressExplicitPathName' in Cisco_IOS_XR_ip_static_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (explicit_path_name.is_set || is_set(explicit_path_name.operation)) leaf_name_data.push_back(explicit_path_name.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.operation)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (bfd_fast_detect.is_set || is_set(bfd_fast_detect.operation)) leaf_name_data.push_back(bfd_fast_detect.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (detect_multiplier.is_set || is_set(detect_multiplier.operation)) leaf_name_data.push_back(detect_multiplier.get_name_leafdata());
    if (index_.is_set || is_set(index_.operation)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.operation)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (minimum_interval.is_set || is_set(minimum_interval.operation)) leaf_name_data.push_back(minimum_interval.get_name_leafdata());
    if (object_name.is_set || is_set(object_name.operation)) leaf_name_data.push_back(object_name.get_name_leafdata());
    if (permanent.is_set || is_set(permanent.operation)) leaf_name_data.push_back(permanent.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (vrf_lable.is_set || is_set(vrf_lable.operation)) leaf_name_data.push_back(vrf_lable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddressExplicitPathName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddressExplicitPathName::get_children()
{
    return children;
}

void RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddressExplicitPathName::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "explicit-path-name")
    {
        explicit_path_name = value;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
    }
    if(value_path == "bfd-fast-detect")
    {
        bfd_fast_detect = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier = value;
    }
    if(value_path == "index")
    {
        index_ = value;
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "minimum-interval")
    {
        minimum_interval = value;
    }
    if(value_path == "object-name")
    {
        object_name = value;
    }
    if(value_path == "permanent")
    {
        permanent = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable = value;
    }
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopExplicitPathName::VrfNextHopExplicitPathName()
    :
    explicit_path_name{YType::str, "explicit-path-name"},
    bfd_fast_detect{YType::boolean, "bfd-fast-detect"},
    description{YType::str, "description"},
    detect_multiplier{YType::uint32, "detect-multiplier"},
    index_{YType::str, "index"},
    load_metric{YType::uint32, "load-metric"},
    metric{YType::uint32, "metric"},
    minimum_interval{YType::uint32, "minimum-interval"},
    object_name{YType::str, "object-name"},
    permanent{YType::boolean, "permanent"},
    tag{YType::uint32, "tag"},
    tunnel_id{YType::uint32, "tunnel-id"},
    vrf_lable{YType::uint32, "vrf-lable"}
{
    yang_name = "vrf-next-hop-explicit-path-name"; yang_parent_name = "vrf-next-hop-table";
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopExplicitPathName::~VrfNextHopExplicitPathName()
{
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopExplicitPathName::has_data() const
{
    return explicit_path_name.is_set
	|| bfd_fast_detect.is_set
	|| description.is_set
	|| detect_multiplier.is_set
	|| index_.is_set
	|| load_metric.is_set
	|| metric.is_set
	|| minimum_interval.is_set
	|| object_name.is_set
	|| permanent.is_set
	|| tag.is_set
	|| tunnel_id.is_set
	|| vrf_lable.is_set;
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopExplicitPathName::has_operation() const
{
    return is_set(operation)
	|| is_set(explicit_path_name.operation)
	|| is_set(bfd_fast_detect.operation)
	|| is_set(description.operation)
	|| is_set(detect_multiplier.operation)
	|| is_set(index_.operation)
	|| is_set(load_metric.operation)
	|| is_set(metric.operation)
	|| is_set(minimum_interval.operation)
	|| is_set(object_name.operation)
	|| is_set(permanent.operation)
	|| is_set(tag.operation)
	|| is_set(tunnel_id.operation)
	|| is_set(vrf_lable.operation);
}

std::string RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopExplicitPathName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-next-hop-explicit-path-name" <<"[explicit-path-name='" <<explicit_path_name <<"']";

    return path_buffer.str();

}

EntityPath RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopExplicitPathName::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VrfNextHopExplicitPathName' in Cisco_IOS_XR_ip_static_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (explicit_path_name.is_set || is_set(explicit_path_name.operation)) leaf_name_data.push_back(explicit_path_name.get_name_leafdata());
    if (bfd_fast_detect.is_set || is_set(bfd_fast_detect.operation)) leaf_name_data.push_back(bfd_fast_detect.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (detect_multiplier.is_set || is_set(detect_multiplier.operation)) leaf_name_data.push_back(detect_multiplier.get_name_leafdata());
    if (index_.is_set || is_set(index_.operation)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.operation)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (minimum_interval.is_set || is_set(minimum_interval.operation)) leaf_name_data.push_back(minimum_interval.get_name_leafdata());
    if (object_name.is_set || is_set(object_name.operation)) leaf_name_data.push_back(object_name.get_name_leafdata());
    if (permanent.is_set || is_set(permanent.operation)) leaf_name_data.push_back(permanent.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (vrf_lable.is_set || is_set(vrf_lable.operation)) leaf_name_data.push_back(vrf_lable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopExplicitPathName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopExplicitPathName::get_children()
{
    return children;
}

void RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopExplicitPathName::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "explicit-path-name")
    {
        explicit_path_name = value;
    }
    if(value_path == "bfd-fast-detect")
    {
        bfd_fast_detect = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier = value;
    }
    if(value_path == "index")
    {
        index_ = value;
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "minimum-interval")
    {
        minimum_interval = value;
    }
    if(value_path == "object-name")
    {
        object_name = value;
    }
    if(value_path == "permanent")
    {
        permanent = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable = value;
    }
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoutes()
{
    yang_name = "vrf-recurse-routes"; yang_parent_name = "vrf-prefix-topology";
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::~VrfRecurseRoutes()
{
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::has_data() const
{
    for (std::size_t index=0; index<vrf_recurse_route.size(); index++)
    {
        if(vrf_recurse_route[index]->has_data())
            return true;
    }
    return false;
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::has_operation() const
{
    for (std::size_t index=0; index<vrf_recurse_route.size(); index++)
    {
        if(vrf_recurse_route[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-recurse-routes";

    return path_buffer.str();

}

EntityPath RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VrfRecurseRoutes' in Cisco_IOS_XR_ip_static_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "vrf-recurse-route")
    {
        for(auto const & c : vrf_recurse_route)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute>();
        c->parent = this;
        vrf_recurse_route.push_back(std::move(c));
        children[segment_path] = vrf_recurse_route.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::get_children()
{
    for (auto const & c : vrf_recurse_route)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::set_value(const std::string & value_path, std::string value)
{
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecurseRoute()
    :
    vrf_name{YType::str, "vrf-name"}
    	,
    vrf_recursive_next_hop_table(std::make_shared<RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable>())
{
    vrf_recursive_next_hop_table->parent = this;
    children["vrf-recursive-next-hop-table"] = vrf_recursive_next_hop_table;

    yang_name = "vrf-recurse-route"; yang_parent_name = "vrf-recurse-routes";
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::~VrfRecurseRoute()
{
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::has_data() const
{
    return vrf_name.is_set
	|| (vrf_recursive_next_hop_table !=  nullptr && vrf_recursive_next_hop_table->has_data());
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::has_operation() const
{
    return is_set(operation)
	|| is_set(vrf_name.operation)
	|| (vrf_recursive_next_hop_table !=  nullptr && vrf_recursive_next_hop_table->has_operation());
}

std::string RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-recurse-route" <<"[vrf-name='" <<vrf_name <<"']";

    return path_buffer.str();

}

EntityPath RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VrfRecurseRoute' in Cisco_IOS_XR_ip_static_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "vrf-recursive-next-hop-table")
    {
        if(vrf_recursive_next_hop_table != nullptr)
        {
            children["vrf-recursive-next-hop-table"] = vrf_recursive_next_hop_table;
        }
        else
        {
            vrf_recursive_next_hop_table = std::make_shared<RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable>();
            vrf_recursive_next_hop_table->parent = this;
            children["vrf-recursive-next-hop-table"] = vrf_recursive_next_hop_table;
        }
        return children.at("vrf-recursive-next-hop-table");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::get_children()
{
    if(children.find("vrf-recursive-next-hop-table") == children.end())
    {
        if(vrf_recursive_next_hop_table != nullptr)
        {
            children["vrf-recursive-next-hop-table"] = vrf_recursive_next_hop_table;
        }
    }

    return children;
}

void RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfRecursiveNextHopTable()
{
    yang_name = "vrf-recursive-next-hop-table"; yang_parent_name = "vrf-recurse-route";
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::~VrfRecursiveNextHopTable()
{
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::has_data() const
{
    for (std::size_t index=0; index<vrf_next_hop_explicit_path_name.size(); index++)
    {
        if(vrf_next_hop_explicit_path_name[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_interface_name.size(); index++)
    {
        if(vrf_next_hop_interface_name[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_interface_name_next_hop_address.size(); index++)
    {
        if(vrf_next_hop_interface_name_next_hop_address[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_next_hop_address.size(); index++)
    {
        if(vrf_next_hop_next_hop_address[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_next_hop_address_explicit_path_name.size(); index++)
    {
        if(vrf_next_hop_next_hop_address_explicit_path_name[index]->has_data())
            return true;
    }
    return false;
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::has_operation() const
{
    for (std::size_t index=0; index<vrf_next_hop_explicit_path_name.size(); index++)
    {
        if(vrf_next_hop_explicit_path_name[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_interface_name.size(); index++)
    {
        if(vrf_next_hop_interface_name[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_interface_name_next_hop_address.size(); index++)
    {
        if(vrf_next_hop_interface_name_next_hop_address[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_next_hop_address.size(); index++)
    {
        if(vrf_next_hop_next_hop_address[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_next_hop_address_explicit_path_name.size(); index++)
    {
        if(vrf_next_hop_next_hop_address_explicit_path_name[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-recursive-next-hop-table";

    return path_buffer.str();

}

EntityPath RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VrfRecursiveNextHopTable' in Cisco_IOS_XR_ip_static_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "vrf-next-hop-explicit-path-name")
    {
        for(auto const & c : vrf_next_hop_explicit_path_name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopExplicitPathName>();
        c->parent = this;
        vrf_next_hop_explicit_path_name.push_back(std::move(c));
        children[segment_path] = vrf_next_hop_explicit_path_name.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "vrf-next-hop-interface-name")
    {
        for(auto const & c : vrf_next_hop_interface_name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceName>();
        c->parent = this;
        vrf_next_hop_interface_name.push_back(std::move(c));
        children[segment_path] = vrf_next_hop_interface_name.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "vrf-next-hop-interface-name-next-hop-address")
    {
        for(auto const & c : vrf_next_hop_interface_name_next_hop_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceNameNextHopAddress>();
        c->parent = this;
        vrf_next_hop_interface_name_next_hop_address.push_back(std::move(c));
        children[segment_path] = vrf_next_hop_interface_name_next_hop_address.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "vrf-next-hop-next-hop-address")
    {
        for(auto const & c : vrf_next_hop_next_hop_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddress>();
        c->parent = this;
        vrf_next_hop_next_hop_address.push_back(std::move(c));
        children[segment_path] = vrf_next_hop_next_hop_address.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "vrf-next-hop-next-hop-address-explicit-path-name")
    {
        for(auto const & c : vrf_next_hop_next_hop_address_explicit_path_name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddressExplicitPathName>();
        c->parent = this;
        vrf_next_hop_next_hop_address_explicit_path_name.push_back(std::move(c));
        children[segment_path] = vrf_next_hop_next_hop_address_explicit_path_name.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::get_children()
{
    for (auto const & c : vrf_next_hop_explicit_path_name)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : vrf_next_hop_interface_name)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : vrf_next_hop_interface_name_next_hop_address)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : vrf_next_hop_next_hop_address)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : vrf_next_hop_next_hop_address_explicit_path_name)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::set_value(const std::string & value_path, std::string value)
{
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceName::VrfNextHopInterfaceName()
    :
    interface_name{YType::str, "interface-name"},
    bfd_fast_detect{YType::boolean, "bfd-fast-detect"},
    description{YType::str, "description"},
    detect_multiplier{YType::uint32, "detect-multiplier"},
    index_{YType::str, "index"},
    load_metric{YType::uint32, "load-metric"},
    metric{YType::uint32, "metric"},
    minimum_interval{YType::uint32, "minimum-interval"},
    object_name{YType::str, "object-name"},
    permanent{YType::boolean, "permanent"},
    tag{YType::uint32, "tag"},
    tunnel_id{YType::uint32, "tunnel-id"},
    vrf_lable{YType::uint32, "vrf-lable"}
{
    yang_name = "vrf-next-hop-interface-name"; yang_parent_name = "vrf-recursive-next-hop-table";
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceName::~VrfNextHopInterfaceName()
{
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceName::has_data() const
{
    return interface_name.is_set
	|| bfd_fast_detect.is_set
	|| description.is_set
	|| detect_multiplier.is_set
	|| index_.is_set
	|| load_metric.is_set
	|| metric.is_set
	|| minimum_interval.is_set
	|| object_name.is_set
	|| permanent.is_set
	|| tag.is_set
	|| tunnel_id.is_set
	|| vrf_lable.is_set;
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceName::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(bfd_fast_detect.operation)
	|| is_set(description.operation)
	|| is_set(detect_multiplier.operation)
	|| is_set(index_.operation)
	|| is_set(load_metric.operation)
	|| is_set(metric.operation)
	|| is_set(minimum_interval.operation)
	|| is_set(object_name.operation)
	|| is_set(permanent.operation)
	|| is_set(tag.operation)
	|| is_set(tunnel_id.operation)
	|| is_set(vrf_lable.operation);
}

std::string RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-next-hop-interface-name" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

EntityPath RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceName::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VrfNextHopInterfaceName' in Cisco_IOS_XR_ip_static_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (bfd_fast_detect.is_set || is_set(bfd_fast_detect.operation)) leaf_name_data.push_back(bfd_fast_detect.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (detect_multiplier.is_set || is_set(detect_multiplier.operation)) leaf_name_data.push_back(detect_multiplier.get_name_leafdata());
    if (index_.is_set || is_set(index_.operation)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.operation)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (minimum_interval.is_set || is_set(minimum_interval.operation)) leaf_name_data.push_back(minimum_interval.get_name_leafdata());
    if (object_name.is_set || is_set(object_name.operation)) leaf_name_data.push_back(object_name.get_name_leafdata());
    if (permanent.is_set || is_set(permanent.operation)) leaf_name_data.push_back(permanent.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (vrf_lable.is_set || is_set(vrf_lable.operation)) leaf_name_data.push_back(vrf_lable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceName::get_children()
{
    return children;
}

void RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceName::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "bfd-fast-detect")
    {
        bfd_fast_detect = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier = value;
    }
    if(value_path == "index")
    {
        index_ = value;
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "minimum-interval")
    {
        minimum_interval = value;
    }
    if(value_path == "object-name")
    {
        object_name = value;
    }
    if(value_path == "permanent")
    {
        permanent = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable = value;
    }
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceNameNextHopAddress::VrfNextHopInterfaceNameNextHopAddress()
    :
    interface_name{YType::str, "interface-name"},
    next_hop_address{YType::str, "next-hop-address"},
    bfd_fast_detect{YType::boolean, "bfd-fast-detect"},
    description{YType::str, "description"},
    detect_multiplier{YType::uint32, "detect-multiplier"},
    index_{YType::str, "index"},
    load_metric{YType::uint32, "load-metric"},
    metric{YType::uint32, "metric"},
    minimum_interval{YType::uint32, "minimum-interval"},
    object_name{YType::str, "object-name"},
    permanent{YType::boolean, "permanent"},
    tag{YType::uint32, "tag"},
    tunnel_id{YType::uint32, "tunnel-id"},
    vrf_lable{YType::uint32, "vrf-lable"}
{
    yang_name = "vrf-next-hop-interface-name-next-hop-address"; yang_parent_name = "vrf-recursive-next-hop-table";
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceNameNextHopAddress::~VrfNextHopInterfaceNameNextHopAddress()
{
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceNameNextHopAddress::has_data() const
{
    return interface_name.is_set
	|| next_hop_address.is_set
	|| bfd_fast_detect.is_set
	|| description.is_set
	|| detect_multiplier.is_set
	|| index_.is_set
	|| load_metric.is_set
	|| metric.is_set
	|| minimum_interval.is_set
	|| object_name.is_set
	|| permanent.is_set
	|| tag.is_set
	|| tunnel_id.is_set
	|| vrf_lable.is_set;
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceNameNextHopAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(next_hop_address.operation)
	|| is_set(bfd_fast_detect.operation)
	|| is_set(description.operation)
	|| is_set(detect_multiplier.operation)
	|| is_set(index_.operation)
	|| is_set(load_metric.operation)
	|| is_set(metric.operation)
	|| is_set(minimum_interval.operation)
	|| is_set(object_name.operation)
	|| is_set(permanent.operation)
	|| is_set(tag.operation)
	|| is_set(tunnel_id.operation)
	|| is_set(vrf_lable.operation);
}

std::string RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceNameNextHopAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-next-hop-interface-name-next-hop-address" <<"[interface-name='" <<interface_name <<"']" <<"[next-hop-address='" <<next_hop_address <<"']";

    return path_buffer.str();

}

EntityPath RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceNameNextHopAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VrfNextHopInterfaceNameNextHopAddress' in Cisco_IOS_XR_ip_static_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.operation)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (bfd_fast_detect.is_set || is_set(bfd_fast_detect.operation)) leaf_name_data.push_back(bfd_fast_detect.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (detect_multiplier.is_set || is_set(detect_multiplier.operation)) leaf_name_data.push_back(detect_multiplier.get_name_leafdata());
    if (index_.is_set || is_set(index_.operation)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.operation)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (minimum_interval.is_set || is_set(minimum_interval.operation)) leaf_name_data.push_back(minimum_interval.get_name_leafdata());
    if (object_name.is_set || is_set(object_name.operation)) leaf_name_data.push_back(object_name.get_name_leafdata());
    if (permanent.is_set || is_set(permanent.operation)) leaf_name_data.push_back(permanent.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (vrf_lable.is_set || is_set(vrf_lable.operation)) leaf_name_data.push_back(vrf_lable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceNameNextHopAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceNameNextHopAddress::get_children()
{
    return children;
}

void RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceNameNextHopAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
    }
    if(value_path == "bfd-fast-detect")
    {
        bfd_fast_detect = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier = value;
    }
    if(value_path == "index")
    {
        index_ = value;
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "minimum-interval")
    {
        minimum_interval = value;
    }
    if(value_path == "object-name")
    {
        object_name = value;
    }
    if(value_path == "permanent")
    {
        permanent = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable = value;
    }
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddress::VrfNextHopNextHopAddress()
    :
    next_hop_address{YType::str, "next-hop-address"},
    bfd_fast_detect{YType::boolean, "bfd-fast-detect"},
    description{YType::str, "description"},
    detect_multiplier{YType::uint32, "detect-multiplier"},
    index_{YType::str, "index"},
    load_metric{YType::uint32, "load-metric"},
    metric{YType::uint32, "metric"},
    minimum_interval{YType::uint32, "minimum-interval"},
    object_name{YType::str, "object-name"},
    permanent{YType::boolean, "permanent"},
    tag{YType::uint32, "tag"},
    tunnel_id{YType::uint32, "tunnel-id"},
    vrf_lable{YType::uint32, "vrf-lable"}
{
    yang_name = "vrf-next-hop-next-hop-address"; yang_parent_name = "vrf-recursive-next-hop-table";
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddress::~VrfNextHopNextHopAddress()
{
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddress::has_data() const
{
    return next_hop_address.is_set
	|| bfd_fast_detect.is_set
	|| description.is_set
	|| detect_multiplier.is_set
	|| index_.is_set
	|| load_metric.is_set
	|| metric.is_set
	|| minimum_interval.is_set
	|| object_name.is_set
	|| permanent.is_set
	|| tag.is_set
	|| tunnel_id.is_set
	|| vrf_lable.is_set;
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(next_hop_address.operation)
	|| is_set(bfd_fast_detect.operation)
	|| is_set(description.operation)
	|| is_set(detect_multiplier.operation)
	|| is_set(index_.operation)
	|| is_set(load_metric.operation)
	|| is_set(metric.operation)
	|| is_set(minimum_interval.operation)
	|| is_set(object_name.operation)
	|| is_set(permanent.operation)
	|| is_set(tag.operation)
	|| is_set(tunnel_id.operation)
	|| is_set(vrf_lable.operation);
}

std::string RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-next-hop-next-hop-address" <<"[next-hop-address='" <<next_hop_address <<"']";

    return path_buffer.str();

}

EntityPath RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VrfNextHopNextHopAddress' in Cisco_IOS_XR_ip_static_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop_address.is_set || is_set(next_hop_address.operation)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (bfd_fast_detect.is_set || is_set(bfd_fast_detect.operation)) leaf_name_data.push_back(bfd_fast_detect.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (detect_multiplier.is_set || is_set(detect_multiplier.operation)) leaf_name_data.push_back(detect_multiplier.get_name_leafdata());
    if (index_.is_set || is_set(index_.operation)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.operation)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (minimum_interval.is_set || is_set(minimum_interval.operation)) leaf_name_data.push_back(minimum_interval.get_name_leafdata());
    if (object_name.is_set || is_set(object_name.operation)) leaf_name_data.push_back(object_name.get_name_leafdata());
    if (permanent.is_set || is_set(permanent.operation)) leaf_name_data.push_back(permanent.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (vrf_lable.is_set || is_set(vrf_lable.operation)) leaf_name_data.push_back(vrf_lable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddress::get_children()
{
    return children;
}

void RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
    }
    if(value_path == "bfd-fast-detect")
    {
        bfd_fast_detect = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier = value;
    }
    if(value_path == "index")
    {
        index_ = value;
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "minimum-interval")
    {
        minimum_interval = value;
    }
    if(value_path == "object-name")
    {
        object_name = value;
    }
    if(value_path == "permanent")
    {
        permanent = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable = value;
    }
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddressExplicitPathName::VrfNextHopNextHopAddressExplicitPathName()
    :
    explicit_path_name{YType::str, "explicit-path-name"},
    next_hop_address{YType::str, "next-hop-address"},
    bfd_fast_detect{YType::boolean, "bfd-fast-detect"},
    description{YType::str, "description"},
    detect_multiplier{YType::uint32, "detect-multiplier"},
    index_{YType::str, "index"},
    load_metric{YType::uint32, "load-metric"},
    metric{YType::uint32, "metric"},
    minimum_interval{YType::uint32, "minimum-interval"},
    object_name{YType::str, "object-name"},
    permanent{YType::boolean, "permanent"},
    tag{YType::uint32, "tag"},
    tunnel_id{YType::uint32, "tunnel-id"},
    vrf_lable{YType::uint32, "vrf-lable"}
{
    yang_name = "vrf-next-hop-next-hop-address-explicit-path-name"; yang_parent_name = "vrf-recursive-next-hop-table";
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddressExplicitPathName::~VrfNextHopNextHopAddressExplicitPathName()
{
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddressExplicitPathName::has_data() const
{
    return explicit_path_name.is_set
	|| next_hop_address.is_set
	|| bfd_fast_detect.is_set
	|| description.is_set
	|| detect_multiplier.is_set
	|| index_.is_set
	|| load_metric.is_set
	|| metric.is_set
	|| minimum_interval.is_set
	|| object_name.is_set
	|| permanent.is_set
	|| tag.is_set
	|| tunnel_id.is_set
	|| vrf_lable.is_set;
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddressExplicitPathName::has_operation() const
{
    return is_set(operation)
	|| is_set(explicit_path_name.operation)
	|| is_set(next_hop_address.operation)
	|| is_set(bfd_fast_detect.operation)
	|| is_set(description.operation)
	|| is_set(detect_multiplier.operation)
	|| is_set(index_.operation)
	|| is_set(load_metric.operation)
	|| is_set(metric.operation)
	|| is_set(minimum_interval.operation)
	|| is_set(object_name.operation)
	|| is_set(permanent.operation)
	|| is_set(tag.operation)
	|| is_set(tunnel_id.operation)
	|| is_set(vrf_lable.operation);
}

std::string RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddressExplicitPathName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-next-hop-next-hop-address-explicit-path-name" <<"[explicit-path-name='" <<explicit_path_name <<"']" <<"[next-hop-address='" <<next_hop_address <<"']";

    return path_buffer.str();

}

EntityPath RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddressExplicitPathName::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VrfNextHopNextHopAddressExplicitPathName' in Cisco_IOS_XR_ip_static_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (explicit_path_name.is_set || is_set(explicit_path_name.operation)) leaf_name_data.push_back(explicit_path_name.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.operation)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (bfd_fast_detect.is_set || is_set(bfd_fast_detect.operation)) leaf_name_data.push_back(bfd_fast_detect.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (detect_multiplier.is_set || is_set(detect_multiplier.operation)) leaf_name_data.push_back(detect_multiplier.get_name_leafdata());
    if (index_.is_set || is_set(index_.operation)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.operation)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (minimum_interval.is_set || is_set(minimum_interval.operation)) leaf_name_data.push_back(minimum_interval.get_name_leafdata());
    if (object_name.is_set || is_set(object_name.operation)) leaf_name_data.push_back(object_name.get_name_leafdata());
    if (permanent.is_set || is_set(permanent.operation)) leaf_name_data.push_back(permanent.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (vrf_lable.is_set || is_set(vrf_lable.operation)) leaf_name_data.push_back(vrf_lable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddressExplicitPathName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddressExplicitPathName::get_children()
{
    return children;
}

void RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddressExplicitPathName::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "explicit-path-name")
    {
        explicit_path_name = value;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
    }
    if(value_path == "bfd-fast-detect")
    {
        bfd_fast_detect = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier = value;
    }
    if(value_path == "index")
    {
        index_ = value;
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "minimum-interval")
    {
        minimum_interval = value;
    }
    if(value_path == "object-name")
    {
        object_name = value;
    }
    if(value_path == "permanent")
    {
        permanent = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable = value;
    }
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopExplicitPathName::VrfNextHopExplicitPathName()
    :
    explicit_path_name{YType::str, "explicit-path-name"},
    bfd_fast_detect{YType::boolean, "bfd-fast-detect"},
    description{YType::str, "description"},
    detect_multiplier{YType::uint32, "detect-multiplier"},
    index_{YType::str, "index"},
    load_metric{YType::uint32, "load-metric"},
    metric{YType::uint32, "metric"},
    minimum_interval{YType::uint32, "minimum-interval"},
    object_name{YType::str, "object-name"},
    permanent{YType::boolean, "permanent"},
    tag{YType::uint32, "tag"},
    tunnel_id{YType::uint32, "tunnel-id"},
    vrf_lable{YType::uint32, "vrf-lable"}
{
    yang_name = "vrf-next-hop-explicit-path-name"; yang_parent_name = "vrf-recursive-next-hop-table";
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopExplicitPathName::~VrfNextHopExplicitPathName()
{
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopExplicitPathName::has_data() const
{
    return explicit_path_name.is_set
	|| bfd_fast_detect.is_set
	|| description.is_set
	|| detect_multiplier.is_set
	|| index_.is_set
	|| load_metric.is_set
	|| metric.is_set
	|| minimum_interval.is_set
	|| object_name.is_set
	|| permanent.is_set
	|| tag.is_set
	|| tunnel_id.is_set
	|| vrf_lable.is_set;
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopExplicitPathName::has_operation() const
{
    return is_set(operation)
	|| is_set(explicit_path_name.operation)
	|| is_set(bfd_fast_detect.operation)
	|| is_set(description.operation)
	|| is_set(detect_multiplier.operation)
	|| is_set(index_.operation)
	|| is_set(load_metric.operation)
	|| is_set(metric.operation)
	|| is_set(minimum_interval.operation)
	|| is_set(object_name.operation)
	|| is_set(permanent.operation)
	|| is_set(tag.operation)
	|| is_set(tunnel_id.operation)
	|| is_set(vrf_lable.operation);
}

std::string RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopExplicitPathName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-next-hop-explicit-path-name" <<"[explicit-path-name='" <<explicit_path_name <<"']";

    return path_buffer.str();

}

EntityPath RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopExplicitPathName::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VrfNextHopExplicitPathName' in Cisco_IOS_XR_ip_static_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (explicit_path_name.is_set || is_set(explicit_path_name.operation)) leaf_name_data.push_back(explicit_path_name.get_name_leafdata());
    if (bfd_fast_detect.is_set || is_set(bfd_fast_detect.operation)) leaf_name_data.push_back(bfd_fast_detect.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (detect_multiplier.is_set || is_set(detect_multiplier.operation)) leaf_name_data.push_back(detect_multiplier.get_name_leafdata());
    if (index_.is_set || is_set(index_.operation)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.operation)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (minimum_interval.is_set || is_set(minimum_interval.operation)) leaf_name_data.push_back(minimum_interval.get_name_leafdata());
    if (object_name.is_set || is_set(object_name.operation)) leaf_name_data.push_back(object_name.get_name_leafdata());
    if (permanent.is_set || is_set(permanent.operation)) leaf_name_data.push_back(permanent.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (vrf_lable.is_set || is_set(vrf_lable.operation)) leaf_name_data.push_back(vrf_lable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopExplicitPathName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopExplicitPathName::get_children()
{
    return children;
}

void RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopExplicitPathName::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "explicit-path-name")
    {
        explicit_path_name = value;
    }
    if(value_path == "bfd-fast-detect")
    {
        bfd_fast_detect = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier = value;
    }
    if(value_path == "index")
    {
        index_ = value;
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "minimum-interval")
    {
        minimum_interval = value;
    }
    if(value_path == "object-name")
    {
        object_name = value;
    }
    if(value_path == "permanent")
    {
        permanent = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable = value;
    }
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::VrfSegRoute()
    :
    segment_route_next_hop_table(std::make_shared<RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable>())
{
    segment_route_next_hop_table->parent = this;
    children["segment-route-next-hop-table"] = segment_route_next_hop_table;

    yang_name = "vrf-seg-route"; yang_parent_name = "vrf-prefix-topology";
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::~VrfSegRoute()
{
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::has_data() const
{
    return (segment_route_next_hop_table !=  nullptr && segment_route_next_hop_table->has_data());
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::has_operation() const
{
    return is_set(operation)
	|| (segment_route_next_hop_table !=  nullptr && segment_route_next_hop_table->has_operation());
}

std::string RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-seg-route";

    return path_buffer.str();

}

EntityPath RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VrfSegRoute' in Cisco_IOS_XR_ip_static_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "segment-route-next-hop-table")
    {
        if(segment_route_next_hop_table != nullptr)
        {
            children["segment-route-next-hop-table"] = segment_route_next_hop_table;
        }
        else
        {
            segment_route_next_hop_table = std::make_shared<RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable>();
            segment_route_next_hop_table->parent = this;
            children["segment-route-next-hop-table"] = segment_route_next_hop_table;
        }
        return children.at("segment-route-next-hop-table");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::get_children()
{
    if(children.find("segment-route-next-hop-table") == children.end())
    {
        if(segment_route_next_hop_table != nullptr)
        {
            children["segment-route-next-hop-table"] = segment_route_next_hop_table;
        }
    }

    return children;
}

void RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::set_value(const std::string & value_path, std::string value)
{
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::SegmentRouteNextHopTable()
{
    yang_name = "segment-route-next-hop-table"; yang_parent_name = "vrf-seg-route";
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::~SegmentRouteNextHopTable()
{
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::has_data() const
{
    for (std::size_t index=0; index<vrf_next_hop_explicit_path_name.size(); index++)
    {
        if(vrf_next_hop_explicit_path_name[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_interface_name.size(); index++)
    {
        if(vrf_next_hop_interface_name[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_interface_name_next_hop_address.size(); index++)
    {
        if(vrf_next_hop_interface_name_next_hop_address[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_next_hop_address.size(); index++)
    {
        if(vrf_next_hop_next_hop_address[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_next_hop_address_explicit_path_name.size(); index++)
    {
        if(vrf_next_hop_next_hop_address_explicit_path_name[index]->has_data())
            return true;
    }
    return false;
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::has_operation() const
{
    for (std::size_t index=0; index<vrf_next_hop_explicit_path_name.size(); index++)
    {
        if(vrf_next_hop_explicit_path_name[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_interface_name.size(); index++)
    {
        if(vrf_next_hop_interface_name[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_interface_name_next_hop_address.size(); index++)
    {
        if(vrf_next_hop_interface_name_next_hop_address[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_next_hop_address.size(); index++)
    {
        if(vrf_next_hop_next_hop_address[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_next_hop_address_explicit_path_name.size(); index++)
    {
        if(vrf_next_hop_next_hop_address_explicit_path_name[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "segment-route-next-hop-table";

    return path_buffer.str();

}

EntityPath RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SegmentRouteNextHopTable' in Cisco_IOS_XR_ip_static_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "vrf-next-hop-explicit-path-name")
    {
        for(auto const & c : vrf_next_hop_explicit_path_name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopExplicitPathName>();
        c->parent = this;
        vrf_next_hop_explicit_path_name.push_back(std::move(c));
        children[segment_path] = vrf_next_hop_explicit_path_name.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "vrf-next-hop-interface-name")
    {
        for(auto const & c : vrf_next_hop_interface_name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceName>();
        c->parent = this;
        vrf_next_hop_interface_name.push_back(std::move(c));
        children[segment_path] = vrf_next_hop_interface_name.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "vrf-next-hop-interface-name-next-hop-address")
    {
        for(auto const & c : vrf_next_hop_interface_name_next_hop_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceNameNextHopAddress>();
        c->parent = this;
        vrf_next_hop_interface_name_next_hop_address.push_back(std::move(c));
        children[segment_path] = vrf_next_hop_interface_name_next_hop_address.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "vrf-next-hop-next-hop-address")
    {
        for(auto const & c : vrf_next_hop_next_hop_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddress>();
        c->parent = this;
        vrf_next_hop_next_hop_address.push_back(std::move(c));
        children[segment_path] = vrf_next_hop_next_hop_address.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "vrf-next-hop-next-hop-address-explicit-path-name")
    {
        for(auto const & c : vrf_next_hop_next_hop_address_explicit_path_name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddressExplicitPathName>();
        c->parent = this;
        vrf_next_hop_next_hop_address_explicit_path_name.push_back(std::move(c));
        children[segment_path] = vrf_next_hop_next_hop_address_explicit_path_name.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::get_children()
{
    for (auto const & c : vrf_next_hop_explicit_path_name)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : vrf_next_hop_interface_name)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : vrf_next_hop_interface_name_next_hop_address)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : vrf_next_hop_next_hop_address)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : vrf_next_hop_next_hop_address_explicit_path_name)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::set_value(const std::string & value_path, std::string value)
{
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceName::VrfNextHopInterfaceName()
    :
    interface_name{YType::str, "interface-name"},
    bfd_fast_detect{YType::boolean, "bfd-fast-detect"},
    description{YType::str, "description"},
    detect_multiplier{YType::uint32, "detect-multiplier"},
    index_{YType::str, "index"},
    load_metric{YType::uint32, "load-metric"},
    metric{YType::uint32, "metric"},
    minimum_interval{YType::uint32, "minimum-interval"},
    object_name{YType::str, "object-name"},
    permanent{YType::boolean, "permanent"},
    tag{YType::uint32, "tag"},
    tunnel_id{YType::uint32, "tunnel-id"},
    vrf_lable{YType::uint32, "vrf-lable"}
{
    yang_name = "vrf-next-hop-interface-name"; yang_parent_name = "segment-route-next-hop-table";
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceName::~VrfNextHopInterfaceName()
{
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceName::has_data() const
{
    return interface_name.is_set
	|| bfd_fast_detect.is_set
	|| description.is_set
	|| detect_multiplier.is_set
	|| index_.is_set
	|| load_metric.is_set
	|| metric.is_set
	|| minimum_interval.is_set
	|| object_name.is_set
	|| permanent.is_set
	|| tag.is_set
	|| tunnel_id.is_set
	|| vrf_lable.is_set;
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceName::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(bfd_fast_detect.operation)
	|| is_set(description.operation)
	|| is_set(detect_multiplier.operation)
	|| is_set(index_.operation)
	|| is_set(load_metric.operation)
	|| is_set(metric.operation)
	|| is_set(minimum_interval.operation)
	|| is_set(object_name.operation)
	|| is_set(permanent.operation)
	|| is_set(tag.operation)
	|| is_set(tunnel_id.operation)
	|| is_set(vrf_lable.operation);
}

std::string RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-next-hop-interface-name" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

EntityPath RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceName::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VrfNextHopInterfaceName' in Cisco_IOS_XR_ip_static_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (bfd_fast_detect.is_set || is_set(bfd_fast_detect.operation)) leaf_name_data.push_back(bfd_fast_detect.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (detect_multiplier.is_set || is_set(detect_multiplier.operation)) leaf_name_data.push_back(detect_multiplier.get_name_leafdata());
    if (index_.is_set || is_set(index_.operation)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.operation)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (minimum_interval.is_set || is_set(minimum_interval.operation)) leaf_name_data.push_back(minimum_interval.get_name_leafdata());
    if (object_name.is_set || is_set(object_name.operation)) leaf_name_data.push_back(object_name.get_name_leafdata());
    if (permanent.is_set || is_set(permanent.operation)) leaf_name_data.push_back(permanent.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (vrf_lable.is_set || is_set(vrf_lable.operation)) leaf_name_data.push_back(vrf_lable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceName::get_children()
{
    return children;
}

void RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceName::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "bfd-fast-detect")
    {
        bfd_fast_detect = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier = value;
    }
    if(value_path == "index")
    {
        index_ = value;
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "minimum-interval")
    {
        minimum_interval = value;
    }
    if(value_path == "object-name")
    {
        object_name = value;
    }
    if(value_path == "permanent")
    {
        permanent = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable = value;
    }
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceNameNextHopAddress::VrfNextHopInterfaceNameNextHopAddress()
    :
    interface_name{YType::str, "interface-name"},
    next_hop_address{YType::str, "next-hop-address"},
    bfd_fast_detect{YType::boolean, "bfd-fast-detect"},
    description{YType::str, "description"},
    detect_multiplier{YType::uint32, "detect-multiplier"},
    index_{YType::str, "index"},
    load_metric{YType::uint32, "load-metric"},
    metric{YType::uint32, "metric"},
    minimum_interval{YType::uint32, "minimum-interval"},
    object_name{YType::str, "object-name"},
    permanent{YType::boolean, "permanent"},
    tag{YType::uint32, "tag"},
    tunnel_id{YType::uint32, "tunnel-id"},
    vrf_lable{YType::uint32, "vrf-lable"}
{
    yang_name = "vrf-next-hop-interface-name-next-hop-address"; yang_parent_name = "segment-route-next-hop-table";
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceNameNextHopAddress::~VrfNextHopInterfaceNameNextHopAddress()
{
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceNameNextHopAddress::has_data() const
{
    return interface_name.is_set
	|| next_hop_address.is_set
	|| bfd_fast_detect.is_set
	|| description.is_set
	|| detect_multiplier.is_set
	|| index_.is_set
	|| load_metric.is_set
	|| metric.is_set
	|| minimum_interval.is_set
	|| object_name.is_set
	|| permanent.is_set
	|| tag.is_set
	|| tunnel_id.is_set
	|| vrf_lable.is_set;
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceNameNextHopAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(next_hop_address.operation)
	|| is_set(bfd_fast_detect.operation)
	|| is_set(description.operation)
	|| is_set(detect_multiplier.operation)
	|| is_set(index_.operation)
	|| is_set(load_metric.operation)
	|| is_set(metric.operation)
	|| is_set(minimum_interval.operation)
	|| is_set(object_name.operation)
	|| is_set(permanent.operation)
	|| is_set(tag.operation)
	|| is_set(tunnel_id.operation)
	|| is_set(vrf_lable.operation);
}

std::string RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceNameNextHopAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-next-hop-interface-name-next-hop-address" <<"[interface-name='" <<interface_name <<"']" <<"[next-hop-address='" <<next_hop_address <<"']";

    return path_buffer.str();

}

EntityPath RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceNameNextHopAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VrfNextHopInterfaceNameNextHopAddress' in Cisco_IOS_XR_ip_static_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.operation)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (bfd_fast_detect.is_set || is_set(bfd_fast_detect.operation)) leaf_name_data.push_back(bfd_fast_detect.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (detect_multiplier.is_set || is_set(detect_multiplier.operation)) leaf_name_data.push_back(detect_multiplier.get_name_leafdata());
    if (index_.is_set || is_set(index_.operation)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.operation)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (minimum_interval.is_set || is_set(minimum_interval.operation)) leaf_name_data.push_back(minimum_interval.get_name_leafdata());
    if (object_name.is_set || is_set(object_name.operation)) leaf_name_data.push_back(object_name.get_name_leafdata());
    if (permanent.is_set || is_set(permanent.operation)) leaf_name_data.push_back(permanent.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (vrf_lable.is_set || is_set(vrf_lable.operation)) leaf_name_data.push_back(vrf_lable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceNameNextHopAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceNameNextHopAddress::get_children()
{
    return children;
}

void RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceNameNextHopAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
    }
    if(value_path == "bfd-fast-detect")
    {
        bfd_fast_detect = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier = value;
    }
    if(value_path == "index")
    {
        index_ = value;
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "minimum-interval")
    {
        minimum_interval = value;
    }
    if(value_path == "object-name")
    {
        object_name = value;
    }
    if(value_path == "permanent")
    {
        permanent = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable = value;
    }
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddress::VrfNextHopNextHopAddress()
    :
    next_hop_address{YType::str, "next-hop-address"},
    bfd_fast_detect{YType::boolean, "bfd-fast-detect"},
    description{YType::str, "description"},
    detect_multiplier{YType::uint32, "detect-multiplier"},
    index_{YType::str, "index"},
    load_metric{YType::uint32, "load-metric"},
    metric{YType::uint32, "metric"},
    minimum_interval{YType::uint32, "minimum-interval"},
    object_name{YType::str, "object-name"},
    permanent{YType::boolean, "permanent"},
    tag{YType::uint32, "tag"},
    tunnel_id{YType::uint32, "tunnel-id"},
    vrf_lable{YType::uint32, "vrf-lable"}
{
    yang_name = "vrf-next-hop-next-hop-address"; yang_parent_name = "segment-route-next-hop-table";
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddress::~VrfNextHopNextHopAddress()
{
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddress::has_data() const
{
    return next_hop_address.is_set
	|| bfd_fast_detect.is_set
	|| description.is_set
	|| detect_multiplier.is_set
	|| index_.is_set
	|| load_metric.is_set
	|| metric.is_set
	|| minimum_interval.is_set
	|| object_name.is_set
	|| permanent.is_set
	|| tag.is_set
	|| tunnel_id.is_set
	|| vrf_lable.is_set;
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(next_hop_address.operation)
	|| is_set(bfd_fast_detect.operation)
	|| is_set(description.operation)
	|| is_set(detect_multiplier.operation)
	|| is_set(index_.operation)
	|| is_set(load_metric.operation)
	|| is_set(metric.operation)
	|| is_set(minimum_interval.operation)
	|| is_set(object_name.operation)
	|| is_set(permanent.operation)
	|| is_set(tag.operation)
	|| is_set(tunnel_id.operation)
	|| is_set(vrf_lable.operation);
}

std::string RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-next-hop-next-hop-address" <<"[next-hop-address='" <<next_hop_address <<"']";

    return path_buffer.str();

}

EntityPath RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VrfNextHopNextHopAddress' in Cisco_IOS_XR_ip_static_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop_address.is_set || is_set(next_hop_address.operation)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (bfd_fast_detect.is_set || is_set(bfd_fast_detect.operation)) leaf_name_data.push_back(bfd_fast_detect.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (detect_multiplier.is_set || is_set(detect_multiplier.operation)) leaf_name_data.push_back(detect_multiplier.get_name_leafdata());
    if (index_.is_set || is_set(index_.operation)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.operation)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (minimum_interval.is_set || is_set(minimum_interval.operation)) leaf_name_data.push_back(minimum_interval.get_name_leafdata());
    if (object_name.is_set || is_set(object_name.operation)) leaf_name_data.push_back(object_name.get_name_leafdata());
    if (permanent.is_set || is_set(permanent.operation)) leaf_name_data.push_back(permanent.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (vrf_lable.is_set || is_set(vrf_lable.operation)) leaf_name_data.push_back(vrf_lable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddress::get_children()
{
    return children;
}

void RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
    }
    if(value_path == "bfd-fast-detect")
    {
        bfd_fast_detect = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier = value;
    }
    if(value_path == "index")
    {
        index_ = value;
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "minimum-interval")
    {
        minimum_interval = value;
    }
    if(value_path == "object-name")
    {
        object_name = value;
    }
    if(value_path == "permanent")
    {
        permanent = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable = value;
    }
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddressExplicitPathName::VrfNextHopNextHopAddressExplicitPathName()
    :
    explicit_path_name{YType::str, "explicit-path-name"},
    next_hop_address{YType::str, "next-hop-address"},
    bfd_fast_detect{YType::boolean, "bfd-fast-detect"},
    description{YType::str, "description"},
    detect_multiplier{YType::uint32, "detect-multiplier"},
    index_{YType::str, "index"},
    load_metric{YType::uint32, "load-metric"},
    metric{YType::uint32, "metric"},
    minimum_interval{YType::uint32, "minimum-interval"},
    object_name{YType::str, "object-name"},
    permanent{YType::boolean, "permanent"},
    tag{YType::uint32, "tag"},
    tunnel_id{YType::uint32, "tunnel-id"},
    vrf_lable{YType::uint32, "vrf-lable"}
{
    yang_name = "vrf-next-hop-next-hop-address-explicit-path-name"; yang_parent_name = "segment-route-next-hop-table";
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddressExplicitPathName::~VrfNextHopNextHopAddressExplicitPathName()
{
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddressExplicitPathName::has_data() const
{
    return explicit_path_name.is_set
	|| next_hop_address.is_set
	|| bfd_fast_detect.is_set
	|| description.is_set
	|| detect_multiplier.is_set
	|| index_.is_set
	|| load_metric.is_set
	|| metric.is_set
	|| minimum_interval.is_set
	|| object_name.is_set
	|| permanent.is_set
	|| tag.is_set
	|| tunnel_id.is_set
	|| vrf_lable.is_set;
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddressExplicitPathName::has_operation() const
{
    return is_set(operation)
	|| is_set(explicit_path_name.operation)
	|| is_set(next_hop_address.operation)
	|| is_set(bfd_fast_detect.operation)
	|| is_set(description.operation)
	|| is_set(detect_multiplier.operation)
	|| is_set(index_.operation)
	|| is_set(load_metric.operation)
	|| is_set(metric.operation)
	|| is_set(minimum_interval.operation)
	|| is_set(object_name.operation)
	|| is_set(permanent.operation)
	|| is_set(tag.operation)
	|| is_set(tunnel_id.operation)
	|| is_set(vrf_lable.operation);
}

std::string RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddressExplicitPathName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-next-hop-next-hop-address-explicit-path-name" <<"[explicit-path-name='" <<explicit_path_name <<"']" <<"[next-hop-address='" <<next_hop_address <<"']";

    return path_buffer.str();

}

EntityPath RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddressExplicitPathName::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VrfNextHopNextHopAddressExplicitPathName' in Cisco_IOS_XR_ip_static_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (explicit_path_name.is_set || is_set(explicit_path_name.operation)) leaf_name_data.push_back(explicit_path_name.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.operation)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (bfd_fast_detect.is_set || is_set(bfd_fast_detect.operation)) leaf_name_data.push_back(bfd_fast_detect.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (detect_multiplier.is_set || is_set(detect_multiplier.operation)) leaf_name_data.push_back(detect_multiplier.get_name_leafdata());
    if (index_.is_set || is_set(index_.operation)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.operation)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (minimum_interval.is_set || is_set(minimum_interval.operation)) leaf_name_data.push_back(minimum_interval.get_name_leafdata());
    if (object_name.is_set || is_set(object_name.operation)) leaf_name_data.push_back(object_name.get_name_leafdata());
    if (permanent.is_set || is_set(permanent.operation)) leaf_name_data.push_back(permanent.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (vrf_lable.is_set || is_set(vrf_lable.operation)) leaf_name_data.push_back(vrf_lable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddressExplicitPathName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddressExplicitPathName::get_children()
{
    return children;
}

void RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddressExplicitPathName::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "explicit-path-name")
    {
        explicit_path_name = value;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
    }
    if(value_path == "bfd-fast-detect")
    {
        bfd_fast_detect = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier = value;
    }
    if(value_path == "index")
    {
        index_ = value;
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "minimum-interval")
    {
        minimum_interval = value;
    }
    if(value_path == "object-name")
    {
        object_name = value;
    }
    if(value_path == "permanent")
    {
        permanent = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable = value;
    }
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopExplicitPathName::VrfNextHopExplicitPathName()
    :
    explicit_path_name{YType::str, "explicit-path-name"},
    bfd_fast_detect{YType::boolean, "bfd-fast-detect"},
    description{YType::str, "description"},
    detect_multiplier{YType::uint32, "detect-multiplier"},
    index_{YType::str, "index"},
    load_metric{YType::uint32, "load-metric"},
    metric{YType::uint32, "metric"},
    minimum_interval{YType::uint32, "minimum-interval"},
    object_name{YType::str, "object-name"},
    permanent{YType::boolean, "permanent"},
    tag{YType::uint32, "tag"},
    tunnel_id{YType::uint32, "tunnel-id"},
    vrf_lable{YType::uint32, "vrf-lable"}
{
    yang_name = "vrf-next-hop-explicit-path-name"; yang_parent_name = "segment-route-next-hop-table";
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopExplicitPathName::~VrfNextHopExplicitPathName()
{
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopExplicitPathName::has_data() const
{
    return explicit_path_name.is_set
	|| bfd_fast_detect.is_set
	|| description.is_set
	|| detect_multiplier.is_set
	|| index_.is_set
	|| load_metric.is_set
	|| metric.is_set
	|| minimum_interval.is_set
	|| object_name.is_set
	|| permanent.is_set
	|| tag.is_set
	|| tunnel_id.is_set
	|| vrf_lable.is_set;
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopExplicitPathName::has_operation() const
{
    return is_set(operation)
	|| is_set(explicit_path_name.operation)
	|| is_set(bfd_fast_detect.operation)
	|| is_set(description.operation)
	|| is_set(detect_multiplier.operation)
	|| is_set(index_.operation)
	|| is_set(load_metric.operation)
	|| is_set(metric.operation)
	|| is_set(minimum_interval.operation)
	|| is_set(object_name.operation)
	|| is_set(permanent.operation)
	|| is_set(tag.operation)
	|| is_set(tunnel_id.operation)
	|| is_set(vrf_lable.operation);
}

std::string RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopExplicitPathName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-next-hop-explicit-path-name" <<"[explicit-path-name='" <<explicit_path_name <<"']";

    return path_buffer.str();

}

EntityPath RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopExplicitPathName::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VrfNextHopExplicitPathName' in Cisco_IOS_XR_ip_static_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (explicit_path_name.is_set || is_set(explicit_path_name.operation)) leaf_name_data.push_back(explicit_path_name.get_name_leafdata());
    if (bfd_fast_detect.is_set || is_set(bfd_fast_detect.operation)) leaf_name_data.push_back(bfd_fast_detect.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (detect_multiplier.is_set || is_set(detect_multiplier.operation)) leaf_name_data.push_back(detect_multiplier.get_name_leafdata());
    if (index_.is_set || is_set(index_.operation)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.operation)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (minimum_interval.is_set || is_set(minimum_interval.operation)) leaf_name_data.push_back(minimum_interval.get_name_leafdata());
    if (object_name.is_set || is_set(object_name.operation)) leaf_name_data.push_back(object_name.get_name_leafdata());
    if (permanent.is_set || is_set(permanent.operation)) leaf_name_data.push_back(permanent.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (vrf_lable.is_set || is_set(vrf_lable.operation)) leaf_name_data.push_back(vrf_lable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopExplicitPathName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopExplicitPathName::get_children()
{
    return children;
}

void RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopExplicitPathName::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "explicit-path-name")
    {
        explicit_path_name = value;
    }
    if(value_path == "bfd-fast-detect")
    {
        bfd_fast_detect = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier = value;
    }
    if(value_path == "index")
    {
        index_ = value;
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "minimum-interval")
    {
        minimum_interval = value;
    }
    if(value_path == "object-name")
    {
        object_name = value;
    }
    if(value_path == "permanent")
    {
        permanent = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable = value;
    }
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfMulticast()
    :
    default_topology(std::make_shared<RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology>())
	,topologies(std::make_shared<RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies>())
	,vrf_prefixes(std::make_shared<RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes>())
{
    default_topology->parent = this;
    children["default-topology"] = default_topology;

    topologies->parent = this;
    children["topologies"] = topologies;

    vrf_prefixes->parent = this;
    children["vrf-prefixes"] = vrf_prefixes;

    yang_name = "vrf-multicast"; yang_parent_name = "vrfipv4";
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::~VrfMulticast()
{
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::has_data() const
{
    return (default_topology !=  nullptr && default_topology->has_data())
	|| (topologies !=  nullptr && topologies->has_data())
	|| (vrf_prefixes !=  nullptr && vrf_prefixes->has_data());
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::has_operation() const
{
    return is_set(operation)
	|| (default_topology !=  nullptr && default_topology->has_operation())
	|| (topologies !=  nullptr && topologies->has_operation())
	|| (vrf_prefixes !=  nullptr && vrf_prefixes->has_operation());
}

std::string RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-multicast";

    return path_buffer.str();

}

EntityPath RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VrfMulticast' in Cisco_IOS_XR_ip_static_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "default-topology")
    {
        if(default_topology != nullptr)
        {
            children["default-topology"] = default_topology;
        }
        else
        {
            default_topology = std::make_shared<RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology>();
            default_topology->parent = this;
            children["default-topology"] = default_topology;
        }
        return children.at("default-topology");
    }

    if(child_yang_name == "topologies")
    {
        if(topologies != nullptr)
        {
            children["topologies"] = topologies;
        }
        else
        {
            topologies = std::make_shared<RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies>();
            topologies->parent = this;
            children["topologies"] = topologies;
        }
        return children.at("topologies");
    }

    if(child_yang_name == "vrf-prefixes")
    {
        if(vrf_prefixes != nullptr)
        {
            children["vrf-prefixes"] = vrf_prefixes;
        }
        else
        {
            vrf_prefixes = std::make_shared<RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes>();
            vrf_prefixes->parent = this;
            children["vrf-prefixes"] = vrf_prefixes;
        }
        return children.at("vrf-prefixes");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::get_children()
{
    if(children.find("default-topology") == children.end())
    {
        if(default_topology != nullptr)
        {
            children["default-topology"] = default_topology;
        }
    }

    if(children.find("topologies") == children.end())
    {
        if(topologies != nullptr)
        {
            children["topologies"] = topologies;
        }
    }

    if(children.find("vrf-prefixes") == children.end())
    {
        if(vrf_prefixes != nullptr)
        {
            children["vrf-prefixes"] = vrf_prefixes;
        }
    }

    return children;
}

void RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::set_value(const std::string & value_path, std::string value)
{
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topologies()
{
    yang_name = "topologies"; yang_parent_name = "vrf-multicast";
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::~Topologies()
{
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::has_data() const
{
    for (std::size_t index=0; index<topology.size(); index++)
    {
        if(topology[index]->has_data())
            return true;
    }
    return false;
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::has_operation() const
{
    for (std::size_t index=0; index<topology.size(); index++)
    {
        if(topology[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topologies";

    return path_buffer.str();

}

EntityPath RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Topologies' in Cisco_IOS_XR_ip_static_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "topology")
    {
        for(auto const & c : topology)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology>();
        c->parent = this;
        topology.push_back(std::move(c));
        children[segment_path] = topology.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::get_children()
{
    for (auto const & c : topology)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::set_value(const std::string & value_path, std::string value)
{
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::Topology()
    :
    topology_name{YType::str, "topology-name"}
    	,
    vrf_prefix_topologies(std::make_shared<RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies>())
{
    vrf_prefix_topologies->parent = this;
    children["vrf-prefix-topologies"] = vrf_prefix_topologies;

    yang_name = "topology"; yang_parent_name = "topologies";
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::~Topology()
{
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::has_data() const
{
    return topology_name.is_set
	|| (vrf_prefix_topologies !=  nullptr && vrf_prefix_topologies->has_data());
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::has_operation() const
{
    return is_set(operation)
	|| is_set(topology_name.operation)
	|| (vrf_prefix_topologies !=  nullptr && vrf_prefix_topologies->has_operation());
}

std::string RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology" <<"[topology-name='" <<topology_name <<"']";

    return path_buffer.str();

}

EntityPath RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Topology' in Cisco_IOS_XR_ip_static_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (topology_name.is_set || is_set(topology_name.operation)) leaf_name_data.push_back(topology_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "vrf-prefix-topologies")
    {
        if(vrf_prefix_topologies != nullptr)
        {
            children["vrf-prefix-topologies"] = vrf_prefix_topologies;
        }
        else
        {
            vrf_prefix_topologies = std::make_shared<RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies>();
            vrf_prefix_topologies->parent = this;
            children["vrf-prefix-topologies"] = vrf_prefix_topologies;
        }
        return children.at("vrf-prefix-topologies");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::get_children()
{
    if(children.find("vrf-prefix-topologies") == children.end())
    {
        if(vrf_prefix_topologies != nullptr)
        {
            children["vrf-prefix-topologies"] = vrf_prefix_topologies;
        }
    }

    return children;
}

void RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "topology-name")
    {
        topology_name = value;
    }
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopologies()
{
    yang_name = "vrf-prefix-topologies"; yang_parent_name = "topology";
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::~VrfPrefixTopologies()
{
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::has_data() const
{
    for (std::size_t index=0; index<vrf_prefix_topology.size(); index++)
    {
        if(vrf_prefix_topology[index]->has_data())
            return true;
    }
    return false;
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::has_operation() const
{
    for (std::size_t index=0; index<vrf_prefix_topology.size(); index++)
    {
        if(vrf_prefix_topology[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-prefix-topologies";

    return path_buffer.str();

}

EntityPath RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VrfPrefixTopologies' in Cisco_IOS_XR_ip_static_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "vrf-prefix-topology")
    {
        for(auto const & c : vrf_prefix_topology)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology>();
        c->parent = this;
        vrf_prefix_topology.push_back(std::move(c));
        children[segment_path] = vrf_prefix_topology.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::get_children()
{
    for (auto const & c : vrf_prefix_topology)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::set_value(const std::string & value_path, std::string value)
{
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfPrefixTopology()
    :
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint32, "prefix-length"}
    	,
    vrf_recurse_routes(std::make_shared<RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes>())
	,vrf_route(std::make_shared<RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute>())
	,vrf_seg_route(std::make_shared<RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute>())
{
    vrf_recurse_routes->parent = this;
    children["vrf-recurse-routes"] = vrf_recurse_routes;

    vrf_route->parent = this;
    children["vrf-route"] = vrf_route;

    vrf_seg_route->parent = this;
    children["vrf-seg-route"] = vrf_seg_route;

    yang_name = "vrf-prefix-topology"; yang_parent_name = "vrf-prefix-topologies";
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::~VrfPrefixTopology()
{
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::has_data() const
{
    return prefix.is_set
	|| prefix_length.is_set
	|| (vrf_recurse_routes !=  nullptr && vrf_recurse_routes->has_data())
	|| (vrf_route !=  nullptr && vrf_route->has_data())
	|| (vrf_seg_route !=  nullptr && vrf_seg_route->has_data());
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::has_operation() const
{
    return is_set(operation)
	|| is_set(prefix.operation)
	|| is_set(prefix_length.operation)
	|| (vrf_recurse_routes !=  nullptr && vrf_recurse_routes->has_operation())
	|| (vrf_route !=  nullptr && vrf_route->has_operation())
	|| (vrf_seg_route !=  nullptr && vrf_seg_route->has_operation());
}

std::string RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-prefix-topology" <<"[prefix='" <<prefix <<"']" <<"[prefix-length='" <<prefix_length <<"']";

    return path_buffer.str();

}

EntityPath RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VrfPrefixTopology' in Cisco_IOS_XR_ip_static_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "vrf-recurse-routes")
    {
        if(vrf_recurse_routes != nullptr)
        {
            children["vrf-recurse-routes"] = vrf_recurse_routes;
        }
        else
        {
            vrf_recurse_routes = std::make_shared<RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes>();
            vrf_recurse_routes->parent = this;
            children["vrf-recurse-routes"] = vrf_recurse_routes;
        }
        return children.at("vrf-recurse-routes");
    }

    if(child_yang_name == "vrf-route")
    {
        if(vrf_route != nullptr)
        {
            children["vrf-route"] = vrf_route;
        }
        else
        {
            vrf_route = std::make_shared<RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute>();
            vrf_route->parent = this;
            children["vrf-route"] = vrf_route;
        }
        return children.at("vrf-route");
    }

    if(child_yang_name == "vrf-seg-route")
    {
        if(vrf_seg_route != nullptr)
        {
            children["vrf-seg-route"] = vrf_seg_route;
        }
        else
        {
            vrf_seg_route = std::make_shared<RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute>();
            vrf_seg_route->parent = this;
            children["vrf-seg-route"] = vrf_seg_route;
        }
        return children.at("vrf-seg-route");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::get_children()
{
    if(children.find("vrf-recurse-routes") == children.end())
    {
        if(vrf_recurse_routes != nullptr)
        {
            children["vrf-recurse-routes"] = vrf_recurse_routes;
        }
    }

    if(children.find("vrf-route") == children.end())
    {
        if(vrf_route != nullptr)
        {
            children["vrf-route"] = vrf_route;
        }
    }

    if(children.find("vrf-seg-route") == children.end())
    {
        if(vrf_seg_route != nullptr)
        {
            children["vrf-seg-route"] = vrf_seg_route;
        }
    }

    return children;
}

void RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "prefix")
    {
        prefix = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfRoute()
    :
    vrf_next_hop_table(std::make_shared<RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable>())
{
    vrf_next_hop_table->parent = this;
    children["vrf-next-hop-table"] = vrf_next_hop_table;

    yang_name = "vrf-route"; yang_parent_name = "vrf-prefix-topology";
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::~VrfRoute()
{
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::has_data() const
{
    return (vrf_next_hop_table !=  nullptr && vrf_next_hop_table->has_data());
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::has_operation() const
{
    return is_set(operation)
	|| (vrf_next_hop_table !=  nullptr && vrf_next_hop_table->has_operation());
}

std::string RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-route";

    return path_buffer.str();

}

EntityPath RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VrfRoute' in Cisco_IOS_XR_ip_static_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "vrf-next-hop-table")
    {
        if(vrf_next_hop_table != nullptr)
        {
            children["vrf-next-hop-table"] = vrf_next_hop_table;
        }
        else
        {
            vrf_next_hop_table = std::make_shared<RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable>();
            vrf_next_hop_table->parent = this;
            children["vrf-next-hop-table"] = vrf_next_hop_table;
        }
        return children.at("vrf-next-hop-table");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::get_children()
{
    if(children.find("vrf-next-hop-table") == children.end())
    {
        if(vrf_next_hop_table != nullptr)
        {
            children["vrf-next-hop-table"] = vrf_next_hop_table;
        }
    }

    return children;
}

void RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::set_value(const std::string & value_path, std::string value)
{
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopTable()
{
    yang_name = "vrf-next-hop-table"; yang_parent_name = "vrf-route";
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::~VrfNextHopTable()
{
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::has_data() const
{
    for (std::size_t index=0; index<vrf_next_hop_explicit_path_name.size(); index++)
    {
        if(vrf_next_hop_explicit_path_name[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_interface_name.size(); index++)
    {
        if(vrf_next_hop_interface_name[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_interface_name_next_hop_address.size(); index++)
    {
        if(vrf_next_hop_interface_name_next_hop_address[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_next_hop_address.size(); index++)
    {
        if(vrf_next_hop_next_hop_address[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_next_hop_address_explicit_path_name.size(); index++)
    {
        if(vrf_next_hop_next_hop_address_explicit_path_name[index]->has_data())
            return true;
    }
    return false;
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::has_operation() const
{
    for (std::size_t index=0; index<vrf_next_hop_explicit_path_name.size(); index++)
    {
        if(vrf_next_hop_explicit_path_name[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_interface_name.size(); index++)
    {
        if(vrf_next_hop_interface_name[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_interface_name_next_hop_address.size(); index++)
    {
        if(vrf_next_hop_interface_name_next_hop_address[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_next_hop_address.size(); index++)
    {
        if(vrf_next_hop_next_hop_address[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_next_hop_address_explicit_path_name.size(); index++)
    {
        if(vrf_next_hop_next_hop_address_explicit_path_name[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-next-hop-table";

    return path_buffer.str();

}

EntityPath RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VrfNextHopTable' in Cisco_IOS_XR_ip_static_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "vrf-next-hop-explicit-path-name")
    {
        for(auto const & c : vrf_next_hop_explicit_path_name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopExplicitPathName>();
        c->parent = this;
        vrf_next_hop_explicit_path_name.push_back(std::move(c));
        children[segment_path] = vrf_next_hop_explicit_path_name.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "vrf-next-hop-interface-name")
    {
        for(auto const & c : vrf_next_hop_interface_name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceName>();
        c->parent = this;
        vrf_next_hop_interface_name.push_back(std::move(c));
        children[segment_path] = vrf_next_hop_interface_name.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "vrf-next-hop-interface-name-next-hop-address")
    {
        for(auto const & c : vrf_next_hop_interface_name_next_hop_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceNameNextHopAddress>();
        c->parent = this;
        vrf_next_hop_interface_name_next_hop_address.push_back(std::move(c));
        children[segment_path] = vrf_next_hop_interface_name_next_hop_address.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "vrf-next-hop-next-hop-address")
    {
        for(auto const & c : vrf_next_hop_next_hop_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddress>();
        c->parent = this;
        vrf_next_hop_next_hop_address.push_back(std::move(c));
        children[segment_path] = vrf_next_hop_next_hop_address.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "vrf-next-hop-next-hop-address-explicit-path-name")
    {
        for(auto const & c : vrf_next_hop_next_hop_address_explicit_path_name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddressExplicitPathName>();
        c->parent = this;
        vrf_next_hop_next_hop_address_explicit_path_name.push_back(std::move(c));
        children[segment_path] = vrf_next_hop_next_hop_address_explicit_path_name.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::get_children()
{
    for (auto const & c : vrf_next_hop_explicit_path_name)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : vrf_next_hop_interface_name)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : vrf_next_hop_interface_name_next_hop_address)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : vrf_next_hop_next_hop_address)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : vrf_next_hop_next_hop_address_explicit_path_name)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::set_value(const std::string & value_path, std::string value)
{
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceName::VrfNextHopInterfaceName()
    :
    interface_name{YType::str, "interface-name"},
    bfd_fast_detect{YType::boolean, "bfd-fast-detect"},
    description{YType::str, "description"},
    detect_multiplier{YType::uint32, "detect-multiplier"},
    index_{YType::str, "index"},
    load_metric{YType::uint32, "load-metric"},
    metric{YType::uint32, "metric"},
    minimum_interval{YType::uint32, "minimum-interval"},
    object_name{YType::str, "object-name"},
    permanent{YType::boolean, "permanent"},
    tag{YType::uint32, "tag"},
    tunnel_id{YType::uint32, "tunnel-id"},
    vrf_lable{YType::uint32, "vrf-lable"}
{
    yang_name = "vrf-next-hop-interface-name"; yang_parent_name = "vrf-next-hop-table";
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceName::~VrfNextHopInterfaceName()
{
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceName::has_data() const
{
    return interface_name.is_set
	|| bfd_fast_detect.is_set
	|| description.is_set
	|| detect_multiplier.is_set
	|| index_.is_set
	|| load_metric.is_set
	|| metric.is_set
	|| minimum_interval.is_set
	|| object_name.is_set
	|| permanent.is_set
	|| tag.is_set
	|| tunnel_id.is_set
	|| vrf_lable.is_set;
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceName::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(bfd_fast_detect.operation)
	|| is_set(description.operation)
	|| is_set(detect_multiplier.operation)
	|| is_set(index_.operation)
	|| is_set(load_metric.operation)
	|| is_set(metric.operation)
	|| is_set(minimum_interval.operation)
	|| is_set(object_name.operation)
	|| is_set(permanent.operation)
	|| is_set(tag.operation)
	|| is_set(tunnel_id.operation)
	|| is_set(vrf_lable.operation);
}

std::string RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-next-hop-interface-name" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

EntityPath RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceName::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VrfNextHopInterfaceName' in Cisco_IOS_XR_ip_static_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (bfd_fast_detect.is_set || is_set(bfd_fast_detect.operation)) leaf_name_data.push_back(bfd_fast_detect.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (detect_multiplier.is_set || is_set(detect_multiplier.operation)) leaf_name_data.push_back(detect_multiplier.get_name_leafdata());
    if (index_.is_set || is_set(index_.operation)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.operation)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (minimum_interval.is_set || is_set(minimum_interval.operation)) leaf_name_data.push_back(minimum_interval.get_name_leafdata());
    if (object_name.is_set || is_set(object_name.operation)) leaf_name_data.push_back(object_name.get_name_leafdata());
    if (permanent.is_set || is_set(permanent.operation)) leaf_name_data.push_back(permanent.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (vrf_lable.is_set || is_set(vrf_lable.operation)) leaf_name_data.push_back(vrf_lable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceName::get_children()
{
    return children;
}

void RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceName::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "bfd-fast-detect")
    {
        bfd_fast_detect = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier = value;
    }
    if(value_path == "index")
    {
        index_ = value;
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "minimum-interval")
    {
        minimum_interval = value;
    }
    if(value_path == "object-name")
    {
        object_name = value;
    }
    if(value_path == "permanent")
    {
        permanent = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable = value;
    }
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceNameNextHopAddress::VrfNextHopInterfaceNameNextHopAddress()
    :
    interface_name{YType::str, "interface-name"},
    next_hop_address{YType::str, "next-hop-address"},
    bfd_fast_detect{YType::boolean, "bfd-fast-detect"},
    description{YType::str, "description"},
    detect_multiplier{YType::uint32, "detect-multiplier"},
    index_{YType::str, "index"},
    load_metric{YType::uint32, "load-metric"},
    metric{YType::uint32, "metric"},
    minimum_interval{YType::uint32, "minimum-interval"},
    object_name{YType::str, "object-name"},
    permanent{YType::boolean, "permanent"},
    tag{YType::uint32, "tag"},
    tunnel_id{YType::uint32, "tunnel-id"},
    vrf_lable{YType::uint32, "vrf-lable"}
{
    yang_name = "vrf-next-hop-interface-name-next-hop-address"; yang_parent_name = "vrf-next-hop-table";
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceNameNextHopAddress::~VrfNextHopInterfaceNameNextHopAddress()
{
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceNameNextHopAddress::has_data() const
{
    return interface_name.is_set
	|| next_hop_address.is_set
	|| bfd_fast_detect.is_set
	|| description.is_set
	|| detect_multiplier.is_set
	|| index_.is_set
	|| load_metric.is_set
	|| metric.is_set
	|| minimum_interval.is_set
	|| object_name.is_set
	|| permanent.is_set
	|| tag.is_set
	|| tunnel_id.is_set
	|| vrf_lable.is_set;
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceNameNextHopAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(next_hop_address.operation)
	|| is_set(bfd_fast_detect.operation)
	|| is_set(description.operation)
	|| is_set(detect_multiplier.operation)
	|| is_set(index_.operation)
	|| is_set(load_metric.operation)
	|| is_set(metric.operation)
	|| is_set(minimum_interval.operation)
	|| is_set(object_name.operation)
	|| is_set(permanent.operation)
	|| is_set(tag.operation)
	|| is_set(tunnel_id.operation)
	|| is_set(vrf_lable.operation);
}

std::string RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceNameNextHopAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-next-hop-interface-name-next-hop-address" <<"[interface-name='" <<interface_name <<"']" <<"[next-hop-address='" <<next_hop_address <<"']";

    return path_buffer.str();

}

EntityPath RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceNameNextHopAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VrfNextHopInterfaceNameNextHopAddress' in Cisco_IOS_XR_ip_static_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.operation)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (bfd_fast_detect.is_set || is_set(bfd_fast_detect.operation)) leaf_name_data.push_back(bfd_fast_detect.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (detect_multiplier.is_set || is_set(detect_multiplier.operation)) leaf_name_data.push_back(detect_multiplier.get_name_leafdata());
    if (index_.is_set || is_set(index_.operation)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.operation)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (minimum_interval.is_set || is_set(minimum_interval.operation)) leaf_name_data.push_back(minimum_interval.get_name_leafdata());
    if (object_name.is_set || is_set(object_name.operation)) leaf_name_data.push_back(object_name.get_name_leafdata());
    if (permanent.is_set || is_set(permanent.operation)) leaf_name_data.push_back(permanent.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (vrf_lable.is_set || is_set(vrf_lable.operation)) leaf_name_data.push_back(vrf_lable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceNameNextHopAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceNameNextHopAddress::get_children()
{
    return children;
}

void RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceNameNextHopAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
    }
    if(value_path == "bfd-fast-detect")
    {
        bfd_fast_detect = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier = value;
    }
    if(value_path == "index")
    {
        index_ = value;
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "minimum-interval")
    {
        minimum_interval = value;
    }
    if(value_path == "object-name")
    {
        object_name = value;
    }
    if(value_path == "permanent")
    {
        permanent = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable = value;
    }
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddress::VrfNextHopNextHopAddress()
    :
    next_hop_address{YType::str, "next-hop-address"},
    bfd_fast_detect{YType::boolean, "bfd-fast-detect"},
    description{YType::str, "description"},
    detect_multiplier{YType::uint32, "detect-multiplier"},
    index_{YType::str, "index"},
    load_metric{YType::uint32, "load-metric"},
    metric{YType::uint32, "metric"},
    minimum_interval{YType::uint32, "minimum-interval"},
    object_name{YType::str, "object-name"},
    permanent{YType::boolean, "permanent"},
    tag{YType::uint32, "tag"},
    tunnel_id{YType::uint32, "tunnel-id"},
    vrf_lable{YType::uint32, "vrf-lable"}
{
    yang_name = "vrf-next-hop-next-hop-address"; yang_parent_name = "vrf-next-hop-table";
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddress::~VrfNextHopNextHopAddress()
{
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddress::has_data() const
{
    return next_hop_address.is_set
	|| bfd_fast_detect.is_set
	|| description.is_set
	|| detect_multiplier.is_set
	|| index_.is_set
	|| load_metric.is_set
	|| metric.is_set
	|| minimum_interval.is_set
	|| object_name.is_set
	|| permanent.is_set
	|| tag.is_set
	|| tunnel_id.is_set
	|| vrf_lable.is_set;
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(next_hop_address.operation)
	|| is_set(bfd_fast_detect.operation)
	|| is_set(description.operation)
	|| is_set(detect_multiplier.operation)
	|| is_set(index_.operation)
	|| is_set(load_metric.operation)
	|| is_set(metric.operation)
	|| is_set(minimum_interval.operation)
	|| is_set(object_name.operation)
	|| is_set(permanent.operation)
	|| is_set(tag.operation)
	|| is_set(tunnel_id.operation)
	|| is_set(vrf_lable.operation);
}

std::string RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-next-hop-next-hop-address" <<"[next-hop-address='" <<next_hop_address <<"']";

    return path_buffer.str();

}

EntityPath RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VrfNextHopNextHopAddress' in Cisco_IOS_XR_ip_static_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop_address.is_set || is_set(next_hop_address.operation)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (bfd_fast_detect.is_set || is_set(bfd_fast_detect.operation)) leaf_name_data.push_back(bfd_fast_detect.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (detect_multiplier.is_set || is_set(detect_multiplier.operation)) leaf_name_data.push_back(detect_multiplier.get_name_leafdata());
    if (index_.is_set || is_set(index_.operation)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.operation)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (minimum_interval.is_set || is_set(minimum_interval.operation)) leaf_name_data.push_back(minimum_interval.get_name_leafdata());
    if (object_name.is_set || is_set(object_name.operation)) leaf_name_data.push_back(object_name.get_name_leafdata());
    if (permanent.is_set || is_set(permanent.operation)) leaf_name_data.push_back(permanent.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (vrf_lable.is_set || is_set(vrf_lable.operation)) leaf_name_data.push_back(vrf_lable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddress::get_children()
{
    return children;
}

void RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
    }
    if(value_path == "bfd-fast-detect")
    {
        bfd_fast_detect = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier = value;
    }
    if(value_path == "index")
    {
        index_ = value;
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "minimum-interval")
    {
        minimum_interval = value;
    }
    if(value_path == "object-name")
    {
        object_name = value;
    }
    if(value_path == "permanent")
    {
        permanent = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable = value;
    }
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddressExplicitPathName::VrfNextHopNextHopAddressExplicitPathName()
    :
    explicit_path_name{YType::str, "explicit-path-name"},
    next_hop_address{YType::str, "next-hop-address"},
    bfd_fast_detect{YType::boolean, "bfd-fast-detect"},
    description{YType::str, "description"},
    detect_multiplier{YType::uint32, "detect-multiplier"},
    index_{YType::str, "index"},
    load_metric{YType::uint32, "load-metric"},
    metric{YType::uint32, "metric"},
    minimum_interval{YType::uint32, "minimum-interval"},
    object_name{YType::str, "object-name"},
    permanent{YType::boolean, "permanent"},
    tag{YType::uint32, "tag"},
    tunnel_id{YType::uint32, "tunnel-id"},
    vrf_lable{YType::uint32, "vrf-lable"}
{
    yang_name = "vrf-next-hop-next-hop-address-explicit-path-name"; yang_parent_name = "vrf-next-hop-table";
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddressExplicitPathName::~VrfNextHopNextHopAddressExplicitPathName()
{
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddressExplicitPathName::has_data() const
{
    return explicit_path_name.is_set
	|| next_hop_address.is_set
	|| bfd_fast_detect.is_set
	|| description.is_set
	|| detect_multiplier.is_set
	|| index_.is_set
	|| load_metric.is_set
	|| metric.is_set
	|| minimum_interval.is_set
	|| object_name.is_set
	|| permanent.is_set
	|| tag.is_set
	|| tunnel_id.is_set
	|| vrf_lable.is_set;
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddressExplicitPathName::has_operation() const
{
    return is_set(operation)
	|| is_set(explicit_path_name.operation)
	|| is_set(next_hop_address.operation)
	|| is_set(bfd_fast_detect.operation)
	|| is_set(description.operation)
	|| is_set(detect_multiplier.operation)
	|| is_set(index_.operation)
	|| is_set(load_metric.operation)
	|| is_set(metric.operation)
	|| is_set(minimum_interval.operation)
	|| is_set(object_name.operation)
	|| is_set(permanent.operation)
	|| is_set(tag.operation)
	|| is_set(tunnel_id.operation)
	|| is_set(vrf_lable.operation);
}

std::string RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddressExplicitPathName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-next-hop-next-hop-address-explicit-path-name" <<"[explicit-path-name='" <<explicit_path_name <<"']" <<"[next-hop-address='" <<next_hop_address <<"']";

    return path_buffer.str();

}

EntityPath RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddressExplicitPathName::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VrfNextHopNextHopAddressExplicitPathName' in Cisco_IOS_XR_ip_static_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (explicit_path_name.is_set || is_set(explicit_path_name.operation)) leaf_name_data.push_back(explicit_path_name.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.operation)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (bfd_fast_detect.is_set || is_set(bfd_fast_detect.operation)) leaf_name_data.push_back(bfd_fast_detect.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (detect_multiplier.is_set || is_set(detect_multiplier.operation)) leaf_name_data.push_back(detect_multiplier.get_name_leafdata());
    if (index_.is_set || is_set(index_.operation)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.operation)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (minimum_interval.is_set || is_set(minimum_interval.operation)) leaf_name_data.push_back(minimum_interval.get_name_leafdata());
    if (object_name.is_set || is_set(object_name.operation)) leaf_name_data.push_back(object_name.get_name_leafdata());
    if (permanent.is_set || is_set(permanent.operation)) leaf_name_data.push_back(permanent.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (vrf_lable.is_set || is_set(vrf_lable.operation)) leaf_name_data.push_back(vrf_lable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddressExplicitPathName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddressExplicitPathName::get_children()
{
    return children;
}

void RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddressExplicitPathName::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "explicit-path-name")
    {
        explicit_path_name = value;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
    }
    if(value_path == "bfd-fast-detect")
    {
        bfd_fast_detect = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier = value;
    }
    if(value_path == "index")
    {
        index_ = value;
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "minimum-interval")
    {
        minimum_interval = value;
    }
    if(value_path == "object-name")
    {
        object_name = value;
    }
    if(value_path == "permanent")
    {
        permanent = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable = value;
    }
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopExplicitPathName::VrfNextHopExplicitPathName()
    :
    explicit_path_name{YType::str, "explicit-path-name"},
    bfd_fast_detect{YType::boolean, "bfd-fast-detect"},
    description{YType::str, "description"},
    detect_multiplier{YType::uint32, "detect-multiplier"},
    index_{YType::str, "index"},
    load_metric{YType::uint32, "load-metric"},
    metric{YType::uint32, "metric"},
    minimum_interval{YType::uint32, "minimum-interval"},
    object_name{YType::str, "object-name"},
    permanent{YType::boolean, "permanent"},
    tag{YType::uint32, "tag"},
    tunnel_id{YType::uint32, "tunnel-id"},
    vrf_lable{YType::uint32, "vrf-lable"}
{
    yang_name = "vrf-next-hop-explicit-path-name"; yang_parent_name = "vrf-next-hop-table";
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopExplicitPathName::~VrfNextHopExplicitPathName()
{
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopExplicitPathName::has_data() const
{
    return explicit_path_name.is_set
	|| bfd_fast_detect.is_set
	|| description.is_set
	|| detect_multiplier.is_set
	|| index_.is_set
	|| load_metric.is_set
	|| metric.is_set
	|| minimum_interval.is_set
	|| object_name.is_set
	|| permanent.is_set
	|| tag.is_set
	|| tunnel_id.is_set
	|| vrf_lable.is_set;
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopExplicitPathName::has_operation() const
{
    return is_set(operation)
	|| is_set(explicit_path_name.operation)
	|| is_set(bfd_fast_detect.operation)
	|| is_set(description.operation)
	|| is_set(detect_multiplier.operation)
	|| is_set(index_.operation)
	|| is_set(load_metric.operation)
	|| is_set(metric.operation)
	|| is_set(minimum_interval.operation)
	|| is_set(object_name.operation)
	|| is_set(permanent.operation)
	|| is_set(tag.operation)
	|| is_set(tunnel_id.operation)
	|| is_set(vrf_lable.operation);
}

std::string RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopExplicitPathName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-next-hop-explicit-path-name" <<"[explicit-path-name='" <<explicit_path_name <<"']";

    return path_buffer.str();

}

EntityPath RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopExplicitPathName::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VrfNextHopExplicitPathName' in Cisco_IOS_XR_ip_static_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (explicit_path_name.is_set || is_set(explicit_path_name.operation)) leaf_name_data.push_back(explicit_path_name.get_name_leafdata());
    if (bfd_fast_detect.is_set || is_set(bfd_fast_detect.operation)) leaf_name_data.push_back(bfd_fast_detect.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (detect_multiplier.is_set || is_set(detect_multiplier.operation)) leaf_name_data.push_back(detect_multiplier.get_name_leafdata());
    if (index_.is_set || is_set(index_.operation)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.operation)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (minimum_interval.is_set || is_set(minimum_interval.operation)) leaf_name_data.push_back(minimum_interval.get_name_leafdata());
    if (object_name.is_set || is_set(object_name.operation)) leaf_name_data.push_back(object_name.get_name_leafdata());
    if (permanent.is_set || is_set(permanent.operation)) leaf_name_data.push_back(permanent.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (vrf_lable.is_set || is_set(vrf_lable.operation)) leaf_name_data.push_back(vrf_lable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopExplicitPathName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopExplicitPathName::get_children()
{
    return children;
}

void RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopExplicitPathName::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "explicit-path-name")
    {
        explicit_path_name = value;
    }
    if(value_path == "bfd-fast-detect")
    {
        bfd_fast_detect = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier = value;
    }
    if(value_path == "index")
    {
        index_ = value;
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "minimum-interval")
    {
        minimum_interval = value;
    }
    if(value_path == "object-name")
    {
        object_name = value;
    }
    if(value_path == "permanent")
    {
        permanent = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable = value;
    }
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoutes()
{
    yang_name = "vrf-recurse-routes"; yang_parent_name = "vrf-prefix-topology";
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::~VrfRecurseRoutes()
{
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::has_data() const
{
    for (std::size_t index=0; index<vrf_recurse_route.size(); index++)
    {
        if(vrf_recurse_route[index]->has_data())
            return true;
    }
    return false;
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::has_operation() const
{
    for (std::size_t index=0; index<vrf_recurse_route.size(); index++)
    {
        if(vrf_recurse_route[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-recurse-routes";

    return path_buffer.str();

}

EntityPath RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VrfRecurseRoutes' in Cisco_IOS_XR_ip_static_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "vrf-recurse-route")
    {
        for(auto const & c : vrf_recurse_route)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute>();
        c->parent = this;
        vrf_recurse_route.push_back(std::move(c));
        children[segment_path] = vrf_recurse_route.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::get_children()
{
    for (auto const & c : vrf_recurse_route)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::set_value(const std::string & value_path, std::string value)
{
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecurseRoute()
    :
    vrf_name{YType::str, "vrf-name"}
    	,
    vrf_recursive_next_hop_table(std::make_shared<RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable>())
{
    vrf_recursive_next_hop_table->parent = this;
    children["vrf-recursive-next-hop-table"] = vrf_recursive_next_hop_table;

    yang_name = "vrf-recurse-route"; yang_parent_name = "vrf-recurse-routes";
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::~VrfRecurseRoute()
{
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::has_data() const
{
    return vrf_name.is_set
	|| (vrf_recursive_next_hop_table !=  nullptr && vrf_recursive_next_hop_table->has_data());
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::has_operation() const
{
    return is_set(operation)
	|| is_set(vrf_name.operation)
	|| (vrf_recursive_next_hop_table !=  nullptr && vrf_recursive_next_hop_table->has_operation());
}

std::string RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-recurse-route" <<"[vrf-name='" <<vrf_name <<"']";

    return path_buffer.str();

}

EntityPath RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VrfRecurseRoute' in Cisco_IOS_XR_ip_static_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "vrf-recursive-next-hop-table")
    {
        if(vrf_recursive_next_hop_table != nullptr)
        {
            children["vrf-recursive-next-hop-table"] = vrf_recursive_next_hop_table;
        }
        else
        {
            vrf_recursive_next_hop_table = std::make_shared<RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable>();
            vrf_recursive_next_hop_table->parent = this;
            children["vrf-recursive-next-hop-table"] = vrf_recursive_next_hop_table;
        }
        return children.at("vrf-recursive-next-hop-table");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::get_children()
{
    if(children.find("vrf-recursive-next-hop-table") == children.end())
    {
        if(vrf_recursive_next_hop_table != nullptr)
        {
            children["vrf-recursive-next-hop-table"] = vrf_recursive_next_hop_table;
        }
    }

    return children;
}

void RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfRecursiveNextHopTable()
{
    yang_name = "vrf-recursive-next-hop-table"; yang_parent_name = "vrf-recurse-route";
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::~VrfRecursiveNextHopTable()
{
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::has_data() const
{
    for (std::size_t index=0; index<vrf_next_hop_explicit_path_name.size(); index++)
    {
        if(vrf_next_hop_explicit_path_name[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_interface_name.size(); index++)
    {
        if(vrf_next_hop_interface_name[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_interface_name_next_hop_address.size(); index++)
    {
        if(vrf_next_hop_interface_name_next_hop_address[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_next_hop_address.size(); index++)
    {
        if(vrf_next_hop_next_hop_address[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_next_hop_address_explicit_path_name.size(); index++)
    {
        if(vrf_next_hop_next_hop_address_explicit_path_name[index]->has_data())
            return true;
    }
    return false;
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::has_operation() const
{
    for (std::size_t index=0; index<vrf_next_hop_explicit_path_name.size(); index++)
    {
        if(vrf_next_hop_explicit_path_name[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_interface_name.size(); index++)
    {
        if(vrf_next_hop_interface_name[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_interface_name_next_hop_address.size(); index++)
    {
        if(vrf_next_hop_interface_name_next_hop_address[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_next_hop_address.size(); index++)
    {
        if(vrf_next_hop_next_hop_address[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_next_hop_address_explicit_path_name.size(); index++)
    {
        if(vrf_next_hop_next_hop_address_explicit_path_name[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-recursive-next-hop-table";

    return path_buffer.str();

}

EntityPath RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VrfRecursiveNextHopTable' in Cisco_IOS_XR_ip_static_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "vrf-next-hop-explicit-path-name")
    {
        for(auto const & c : vrf_next_hop_explicit_path_name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopExplicitPathName>();
        c->parent = this;
        vrf_next_hop_explicit_path_name.push_back(std::move(c));
        children[segment_path] = vrf_next_hop_explicit_path_name.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "vrf-next-hop-interface-name")
    {
        for(auto const & c : vrf_next_hop_interface_name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceName>();
        c->parent = this;
        vrf_next_hop_interface_name.push_back(std::move(c));
        children[segment_path] = vrf_next_hop_interface_name.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "vrf-next-hop-interface-name-next-hop-address")
    {
        for(auto const & c : vrf_next_hop_interface_name_next_hop_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceNameNextHopAddress>();
        c->parent = this;
        vrf_next_hop_interface_name_next_hop_address.push_back(std::move(c));
        children[segment_path] = vrf_next_hop_interface_name_next_hop_address.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "vrf-next-hop-next-hop-address")
    {
        for(auto const & c : vrf_next_hop_next_hop_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddress>();
        c->parent = this;
        vrf_next_hop_next_hop_address.push_back(std::move(c));
        children[segment_path] = vrf_next_hop_next_hop_address.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "vrf-next-hop-next-hop-address-explicit-path-name")
    {
        for(auto const & c : vrf_next_hop_next_hop_address_explicit_path_name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddressExplicitPathName>();
        c->parent = this;
        vrf_next_hop_next_hop_address_explicit_path_name.push_back(std::move(c));
        children[segment_path] = vrf_next_hop_next_hop_address_explicit_path_name.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::get_children()
{
    for (auto const & c : vrf_next_hop_explicit_path_name)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : vrf_next_hop_interface_name)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : vrf_next_hop_interface_name_next_hop_address)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : vrf_next_hop_next_hop_address)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : vrf_next_hop_next_hop_address_explicit_path_name)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::set_value(const std::string & value_path, std::string value)
{
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceName::VrfNextHopInterfaceName()
    :
    interface_name{YType::str, "interface-name"},
    bfd_fast_detect{YType::boolean, "bfd-fast-detect"},
    description{YType::str, "description"},
    detect_multiplier{YType::uint32, "detect-multiplier"},
    index_{YType::str, "index"},
    load_metric{YType::uint32, "load-metric"},
    metric{YType::uint32, "metric"},
    minimum_interval{YType::uint32, "minimum-interval"},
    object_name{YType::str, "object-name"},
    permanent{YType::boolean, "permanent"},
    tag{YType::uint32, "tag"},
    tunnel_id{YType::uint32, "tunnel-id"},
    vrf_lable{YType::uint32, "vrf-lable"}
{
    yang_name = "vrf-next-hop-interface-name"; yang_parent_name = "vrf-recursive-next-hop-table";
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceName::~VrfNextHopInterfaceName()
{
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceName::has_data() const
{
    return interface_name.is_set
	|| bfd_fast_detect.is_set
	|| description.is_set
	|| detect_multiplier.is_set
	|| index_.is_set
	|| load_metric.is_set
	|| metric.is_set
	|| minimum_interval.is_set
	|| object_name.is_set
	|| permanent.is_set
	|| tag.is_set
	|| tunnel_id.is_set
	|| vrf_lable.is_set;
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceName::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(bfd_fast_detect.operation)
	|| is_set(description.operation)
	|| is_set(detect_multiplier.operation)
	|| is_set(index_.operation)
	|| is_set(load_metric.operation)
	|| is_set(metric.operation)
	|| is_set(minimum_interval.operation)
	|| is_set(object_name.operation)
	|| is_set(permanent.operation)
	|| is_set(tag.operation)
	|| is_set(tunnel_id.operation)
	|| is_set(vrf_lable.operation);
}

std::string RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-next-hop-interface-name" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

EntityPath RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceName::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VrfNextHopInterfaceName' in Cisco_IOS_XR_ip_static_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (bfd_fast_detect.is_set || is_set(bfd_fast_detect.operation)) leaf_name_data.push_back(bfd_fast_detect.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (detect_multiplier.is_set || is_set(detect_multiplier.operation)) leaf_name_data.push_back(detect_multiplier.get_name_leafdata());
    if (index_.is_set || is_set(index_.operation)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.operation)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (minimum_interval.is_set || is_set(minimum_interval.operation)) leaf_name_data.push_back(minimum_interval.get_name_leafdata());
    if (object_name.is_set || is_set(object_name.operation)) leaf_name_data.push_back(object_name.get_name_leafdata());
    if (permanent.is_set || is_set(permanent.operation)) leaf_name_data.push_back(permanent.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (vrf_lable.is_set || is_set(vrf_lable.operation)) leaf_name_data.push_back(vrf_lable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceName::get_children()
{
    return children;
}

void RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceName::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "bfd-fast-detect")
    {
        bfd_fast_detect = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier = value;
    }
    if(value_path == "index")
    {
        index_ = value;
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "minimum-interval")
    {
        minimum_interval = value;
    }
    if(value_path == "object-name")
    {
        object_name = value;
    }
    if(value_path == "permanent")
    {
        permanent = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable = value;
    }
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceNameNextHopAddress::VrfNextHopInterfaceNameNextHopAddress()
    :
    interface_name{YType::str, "interface-name"},
    next_hop_address{YType::str, "next-hop-address"},
    bfd_fast_detect{YType::boolean, "bfd-fast-detect"},
    description{YType::str, "description"},
    detect_multiplier{YType::uint32, "detect-multiplier"},
    index_{YType::str, "index"},
    load_metric{YType::uint32, "load-metric"},
    metric{YType::uint32, "metric"},
    minimum_interval{YType::uint32, "minimum-interval"},
    object_name{YType::str, "object-name"},
    permanent{YType::boolean, "permanent"},
    tag{YType::uint32, "tag"},
    tunnel_id{YType::uint32, "tunnel-id"},
    vrf_lable{YType::uint32, "vrf-lable"}
{
    yang_name = "vrf-next-hop-interface-name-next-hop-address"; yang_parent_name = "vrf-recursive-next-hop-table";
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceNameNextHopAddress::~VrfNextHopInterfaceNameNextHopAddress()
{
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceNameNextHopAddress::has_data() const
{
    return interface_name.is_set
	|| next_hop_address.is_set
	|| bfd_fast_detect.is_set
	|| description.is_set
	|| detect_multiplier.is_set
	|| index_.is_set
	|| load_metric.is_set
	|| metric.is_set
	|| minimum_interval.is_set
	|| object_name.is_set
	|| permanent.is_set
	|| tag.is_set
	|| tunnel_id.is_set
	|| vrf_lable.is_set;
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceNameNextHopAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(next_hop_address.operation)
	|| is_set(bfd_fast_detect.operation)
	|| is_set(description.operation)
	|| is_set(detect_multiplier.operation)
	|| is_set(index_.operation)
	|| is_set(load_metric.operation)
	|| is_set(metric.operation)
	|| is_set(minimum_interval.operation)
	|| is_set(object_name.operation)
	|| is_set(permanent.operation)
	|| is_set(tag.operation)
	|| is_set(tunnel_id.operation)
	|| is_set(vrf_lable.operation);
}

std::string RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceNameNextHopAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-next-hop-interface-name-next-hop-address" <<"[interface-name='" <<interface_name <<"']" <<"[next-hop-address='" <<next_hop_address <<"']";

    return path_buffer.str();

}

EntityPath RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceNameNextHopAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VrfNextHopInterfaceNameNextHopAddress' in Cisco_IOS_XR_ip_static_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.operation)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (bfd_fast_detect.is_set || is_set(bfd_fast_detect.operation)) leaf_name_data.push_back(bfd_fast_detect.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (detect_multiplier.is_set || is_set(detect_multiplier.operation)) leaf_name_data.push_back(detect_multiplier.get_name_leafdata());
    if (index_.is_set || is_set(index_.operation)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.operation)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (minimum_interval.is_set || is_set(minimum_interval.operation)) leaf_name_data.push_back(minimum_interval.get_name_leafdata());
    if (object_name.is_set || is_set(object_name.operation)) leaf_name_data.push_back(object_name.get_name_leafdata());
    if (permanent.is_set || is_set(permanent.operation)) leaf_name_data.push_back(permanent.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (vrf_lable.is_set || is_set(vrf_lable.operation)) leaf_name_data.push_back(vrf_lable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceNameNextHopAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceNameNextHopAddress::get_children()
{
    return children;
}

void RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceNameNextHopAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
    }
    if(value_path == "bfd-fast-detect")
    {
        bfd_fast_detect = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier = value;
    }
    if(value_path == "index")
    {
        index_ = value;
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "minimum-interval")
    {
        minimum_interval = value;
    }
    if(value_path == "object-name")
    {
        object_name = value;
    }
    if(value_path == "permanent")
    {
        permanent = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable = value;
    }
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddress::VrfNextHopNextHopAddress()
    :
    next_hop_address{YType::str, "next-hop-address"},
    bfd_fast_detect{YType::boolean, "bfd-fast-detect"},
    description{YType::str, "description"},
    detect_multiplier{YType::uint32, "detect-multiplier"},
    index_{YType::str, "index"},
    load_metric{YType::uint32, "load-metric"},
    metric{YType::uint32, "metric"},
    minimum_interval{YType::uint32, "minimum-interval"},
    object_name{YType::str, "object-name"},
    permanent{YType::boolean, "permanent"},
    tag{YType::uint32, "tag"},
    tunnel_id{YType::uint32, "tunnel-id"},
    vrf_lable{YType::uint32, "vrf-lable"}
{
    yang_name = "vrf-next-hop-next-hop-address"; yang_parent_name = "vrf-recursive-next-hop-table";
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddress::~VrfNextHopNextHopAddress()
{
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddress::has_data() const
{
    return next_hop_address.is_set
	|| bfd_fast_detect.is_set
	|| description.is_set
	|| detect_multiplier.is_set
	|| index_.is_set
	|| load_metric.is_set
	|| metric.is_set
	|| minimum_interval.is_set
	|| object_name.is_set
	|| permanent.is_set
	|| tag.is_set
	|| tunnel_id.is_set
	|| vrf_lable.is_set;
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(next_hop_address.operation)
	|| is_set(bfd_fast_detect.operation)
	|| is_set(description.operation)
	|| is_set(detect_multiplier.operation)
	|| is_set(index_.operation)
	|| is_set(load_metric.operation)
	|| is_set(metric.operation)
	|| is_set(minimum_interval.operation)
	|| is_set(object_name.operation)
	|| is_set(permanent.operation)
	|| is_set(tag.operation)
	|| is_set(tunnel_id.operation)
	|| is_set(vrf_lable.operation);
}

std::string RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-next-hop-next-hop-address" <<"[next-hop-address='" <<next_hop_address <<"']";

    return path_buffer.str();

}

EntityPath RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VrfNextHopNextHopAddress' in Cisco_IOS_XR_ip_static_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop_address.is_set || is_set(next_hop_address.operation)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (bfd_fast_detect.is_set || is_set(bfd_fast_detect.operation)) leaf_name_data.push_back(bfd_fast_detect.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (detect_multiplier.is_set || is_set(detect_multiplier.operation)) leaf_name_data.push_back(detect_multiplier.get_name_leafdata());
    if (index_.is_set || is_set(index_.operation)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.operation)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (minimum_interval.is_set || is_set(minimum_interval.operation)) leaf_name_data.push_back(minimum_interval.get_name_leafdata());
    if (object_name.is_set || is_set(object_name.operation)) leaf_name_data.push_back(object_name.get_name_leafdata());
    if (permanent.is_set || is_set(permanent.operation)) leaf_name_data.push_back(permanent.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (vrf_lable.is_set || is_set(vrf_lable.operation)) leaf_name_data.push_back(vrf_lable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddress::get_children()
{
    return children;
}

void RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
    }
    if(value_path == "bfd-fast-detect")
    {
        bfd_fast_detect = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier = value;
    }
    if(value_path == "index")
    {
        index_ = value;
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "minimum-interval")
    {
        minimum_interval = value;
    }
    if(value_path == "object-name")
    {
        object_name = value;
    }
    if(value_path == "permanent")
    {
        permanent = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable = value;
    }
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddressExplicitPathName::VrfNextHopNextHopAddressExplicitPathName()
    :
    explicit_path_name{YType::str, "explicit-path-name"},
    next_hop_address{YType::str, "next-hop-address"},
    bfd_fast_detect{YType::boolean, "bfd-fast-detect"},
    description{YType::str, "description"},
    detect_multiplier{YType::uint32, "detect-multiplier"},
    index_{YType::str, "index"},
    load_metric{YType::uint32, "load-metric"},
    metric{YType::uint32, "metric"},
    minimum_interval{YType::uint32, "minimum-interval"},
    object_name{YType::str, "object-name"},
    permanent{YType::boolean, "permanent"},
    tag{YType::uint32, "tag"},
    tunnel_id{YType::uint32, "tunnel-id"},
    vrf_lable{YType::uint32, "vrf-lable"}
{
    yang_name = "vrf-next-hop-next-hop-address-explicit-path-name"; yang_parent_name = "vrf-recursive-next-hop-table";
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddressExplicitPathName::~VrfNextHopNextHopAddressExplicitPathName()
{
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddressExplicitPathName::has_data() const
{
    return explicit_path_name.is_set
	|| next_hop_address.is_set
	|| bfd_fast_detect.is_set
	|| description.is_set
	|| detect_multiplier.is_set
	|| index_.is_set
	|| load_metric.is_set
	|| metric.is_set
	|| minimum_interval.is_set
	|| object_name.is_set
	|| permanent.is_set
	|| tag.is_set
	|| tunnel_id.is_set
	|| vrf_lable.is_set;
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddressExplicitPathName::has_operation() const
{
    return is_set(operation)
	|| is_set(explicit_path_name.operation)
	|| is_set(next_hop_address.operation)
	|| is_set(bfd_fast_detect.operation)
	|| is_set(description.operation)
	|| is_set(detect_multiplier.operation)
	|| is_set(index_.operation)
	|| is_set(load_metric.operation)
	|| is_set(metric.operation)
	|| is_set(minimum_interval.operation)
	|| is_set(object_name.operation)
	|| is_set(permanent.operation)
	|| is_set(tag.operation)
	|| is_set(tunnel_id.operation)
	|| is_set(vrf_lable.operation);
}

std::string RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddressExplicitPathName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-next-hop-next-hop-address-explicit-path-name" <<"[explicit-path-name='" <<explicit_path_name <<"']" <<"[next-hop-address='" <<next_hop_address <<"']";

    return path_buffer.str();

}

EntityPath RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddressExplicitPathName::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VrfNextHopNextHopAddressExplicitPathName' in Cisco_IOS_XR_ip_static_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (explicit_path_name.is_set || is_set(explicit_path_name.operation)) leaf_name_data.push_back(explicit_path_name.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.operation)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (bfd_fast_detect.is_set || is_set(bfd_fast_detect.operation)) leaf_name_data.push_back(bfd_fast_detect.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (detect_multiplier.is_set || is_set(detect_multiplier.operation)) leaf_name_data.push_back(detect_multiplier.get_name_leafdata());
    if (index_.is_set || is_set(index_.operation)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.operation)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (minimum_interval.is_set || is_set(minimum_interval.operation)) leaf_name_data.push_back(minimum_interval.get_name_leafdata());
    if (object_name.is_set || is_set(object_name.operation)) leaf_name_data.push_back(object_name.get_name_leafdata());
    if (permanent.is_set || is_set(permanent.operation)) leaf_name_data.push_back(permanent.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (vrf_lable.is_set || is_set(vrf_lable.operation)) leaf_name_data.push_back(vrf_lable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddressExplicitPathName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddressExplicitPathName::get_children()
{
    return children;
}

void RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddressExplicitPathName::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "explicit-path-name")
    {
        explicit_path_name = value;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
    }
    if(value_path == "bfd-fast-detect")
    {
        bfd_fast_detect = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier = value;
    }
    if(value_path == "index")
    {
        index_ = value;
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "minimum-interval")
    {
        minimum_interval = value;
    }
    if(value_path == "object-name")
    {
        object_name = value;
    }
    if(value_path == "permanent")
    {
        permanent = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable = value;
    }
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopExplicitPathName::VrfNextHopExplicitPathName()
    :
    explicit_path_name{YType::str, "explicit-path-name"},
    bfd_fast_detect{YType::boolean, "bfd-fast-detect"},
    description{YType::str, "description"},
    detect_multiplier{YType::uint32, "detect-multiplier"},
    index_{YType::str, "index"},
    load_metric{YType::uint32, "load-metric"},
    metric{YType::uint32, "metric"},
    minimum_interval{YType::uint32, "minimum-interval"},
    object_name{YType::str, "object-name"},
    permanent{YType::boolean, "permanent"},
    tag{YType::uint32, "tag"},
    tunnel_id{YType::uint32, "tunnel-id"},
    vrf_lable{YType::uint32, "vrf-lable"}
{
    yang_name = "vrf-next-hop-explicit-path-name"; yang_parent_name = "vrf-recursive-next-hop-table";
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopExplicitPathName::~VrfNextHopExplicitPathName()
{
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopExplicitPathName::has_data() const
{
    return explicit_path_name.is_set
	|| bfd_fast_detect.is_set
	|| description.is_set
	|| detect_multiplier.is_set
	|| index_.is_set
	|| load_metric.is_set
	|| metric.is_set
	|| minimum_interval.is_set
	|| object_name.is_set
	|| permanent.is_set
	|| tag.is_set
	|| tunnel_id.is_set
	|| vrf_lable.is_set;
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopExplicitPathName::has_operation() const
{
    return is_set(operation)
	|| is_set(explicit_path_name.operation)
	|| is_set(bfd_fast_detect.operation)
	|| is_set(description.operation)
	|| is_set(detect_multiplier.operation)
	|| is_set(index_.operation)
	|| is_set(load_metric.operation)
	|| is_set(metric.operation)
	|| is_set(minimum_interval.operation)
	|| is_set(object_name.operation)
	|| is_set(permanent.operation)
	|| is_set(tag.operation)
	|| is_set(tunnel_id.operation)
	|| is_set(vrf_lable.operation);
}

std::string RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopExplicitPathName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-next-hop-explicit-path-name" <<"[explicit-path-name='" <<explicit_path_name <<"']";

    return path_buffer.str();

}

EntityPath RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopExplicitPathName::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VrfNextHopExplicitPathName' in Cisco_IOS_XR_ip_static_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (explicit_path_name.is_set || is_set(explicit_path_name.operation)) leaf_name_data.push_back(explicit_path_name.get_name_leafdata());
    if (bfd_fast_detect.is_set || is_set(bfd_fast_detect.operation)) leaf_name_data.push_back(bfd_fast_detect.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (detect_multiplier.is_set || is_set(detect_multiplier.operation)) leaf_name_data.push_back(detect_multiplier.get_name_leafdata());
    if (index_.is_set || is_set(index_.operation)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.operation)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (minimum_interval.is_set || is_set(minimum_interval.operation)) leaf_name_data.push_back(minimum_interval.get_name_leafdata());
    if (object_name.is_set || is_set(object_name.operation)) leaf_name_data.push_back(object_name.get_name_leafdata());
    if (permanent.is_set || is_set(permanent.operation)) leaf_name_data.push_back(permanent.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (vrf_lable.is_set || is_set(vrf_lable.operation)) leaf_name_data.push_back(vrf_lable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopExplicitPathName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopExplicitPathName::get_children()
{
    return children;
}

void RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopExplicitPathName::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "explicit-path-name")
    {
        explicit_path_name = value;
    }
    if(value_path == "bfd-fast-detect")
    {
        bfd_fast_detect = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier = value;
    }
    if(value_path == "index")
    {
        index_ = value;
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "minimum-interval")
    {
        minimum_interval = value;
    }
    if(value_path == "object-name")
    {
        object_name = value;
    }
    if(value_path == "permanent")
    {
        permanent = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable = value;
    }
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::VrfSegRoute()
    :
    segment_route_next_hop_table(std::make_shared<RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable>())
{
    segment_route_next_hop_table->parent = this;
    children["segment-route-next-hop-table"] = segment_route_next_hop_table;

    yang_name = "vrf-seg-route"; yang_parent_name = "vrf-prefix-topology";
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::~VrfSegRoute()
{
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::has_data() const
{
    return (segment_route_next_hop_table !=  nullptr && segment_route_next_hop_table->has_data());
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::has_operation() const
{
    return is_set(operation)
	|| (segment_route_next_hop_table !=  nullptr && segment_route_next_hop_table->has_operation());
}

std::string RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-seg-route";

    return path_buffer.str();

}

EntityPath RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VrfSegRoute' in Cisco_IOS_XR_ip_static_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "segment-route-next-hop-table")
    {
        if(segment_route_next_hop_table != nullptr)
        {
            children["segment-route-next-hop-table"] = segment_route_next_hop_table;
        }
        else
        {
            segment_route_next_hop_table = std::make_shared<RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable>();
            segment_route_next_hop_table->parent = this;
            children["segment-route-next-hop-table"] = segment_route_next_hop_table;
        }
        return children.at("segment-route-next-hop-table");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::get_children()
{
    if(children.find("segment-route-next-hop-table") == children.end())
    {
        if(segment_route_next_hop_table != nullptr)
        {
            children["segment-route-next-hop-table"] = segment_route_next_hop_table;
        }
    }

    return children;
}

void RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::set_value(const std::string & value_path, std::string value)
{
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::SegmentRouteNextHopTable()
{
    yang_name = "segment-route-next-hop-table"; yang_parent_name = "vrf-seg-route";
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::~SegmentRouteNextHopTable()
{
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::has_data() const
{
    for (std::size_t index=0; index<vrf_next_hop_explicit_path_name.size(); index++)
    {
        if(vrf_next_hop_explicit_path_name[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_interface_name.size(); index++)
    {
        if(vrf_next_hop_interface_name[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_interface_name_next_hop_address.size(); index++)
    {
        if(vrf_next_hop_interface_name_next_hop_address[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_next_hop_address.size(); index++)
    {
        if(vrf_next_hop_next_hop_address[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_next_hop_address_explicit_path_name.size(); index++)
    {
        if(vrf_next_hop_next_hop_address_explicit_path_name[index]->has_data())
            return true;
    }
    return false;
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::has_operation() const
{
    for (std::size_t index=0; index<vrf_next_hop_explicit_path_name.size(); index++)
    {
        if(vrf_next_hop_explicit_path_name[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_interface_name.size(); index++)
    {
        if(vrf_next_hop_interface_name[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_interface_name_next_hop_address.size(); index++)
    {
        if(vrf_next_hop_interface_name_next_hop_address[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_next_hop_address.size(); index++)
    {
        if(vrf_next_hop_next_hop_address[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_next_hop_address_explicit_path_name.size(); index++)
    {
        if(vrf_next_hop_next_hop_address_explicit_path_name[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "segment-route-next-hop-table";

    return path_buffer.str();

}

EntityPath RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SegmentRouteNextHopTable' in Cisco_IOS_XR_ip_static_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "vrf-next-hop-explicit-path-name")
    {
        for(auto const & c : vrf_next_hop_explicit_path_name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopExplicitPathName>();
        c->parent = this;
        vrf_next_hop_explicit_path_name.push_back(std::move(c));
        children[segment_path] = vrf_next_hop_explicit_path_name.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "vrf-next-hop-interface-name")
    {
        for(auto const & c : vrf_next_hop_interface_name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceName>();
        c->parent = this;
        vrf_next_hop_interface_name.push_back(std::move(c));
        children[segment_path] = vrf_next_hop_interface_name.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "vrf-next-hop-interface-name-next-hop-address")
    {
        for(auto const & c : vrf_next_hop_interface_name_next_hop_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceNameNextHopAddress>();
        c->parent = this;
        vrf_next_hop_interface_name_next_hop_address.push_back(std::move(c));
        children[segment_path] = vrf_next_hop_interface_name_next_hop_address.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "vrf-next-hop-next-hop-address")
    {
        for(auto const & c : vrf_next_hop_next_hop_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddress>();
        c->parent = this;
        vrf_next_hop_next_hop_address.push_back(std::move(c));
        children[segment_path] = vrf_next_hop_next_hop_address.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "vrf-next-hop-next-hop-address-explicit-path-name")
    {
        for(auto const & c : vrf_next_hop_next_hop_address_explicit_path_name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddressExplicitPathName>();
        c->parent = this;
        vrf_next_hop_next_hop_address_explicit_path_name.push_back(std::move(c));
        children[segment_path] = vrf_next_hop_next_hop_address_explicit_path_name.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::get_children()
{
    for (auto const & c : vrf_next_hop_explicit_path_name)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : vrf_next_hop_interface_name)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : vrf_next_hop_interface_name_next_hop_address)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : vrf_next_hop_next_hop_address)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : vrf_next_hop_next_hop_address_explicit_path_name)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::set_value(const std::string & value_path, std::string value)
{
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceName::VrfNextHopInterfaceName()
    :
    interface_name{YType::str, "interface-name"},
    bfd_fast_detect{YType::boolean, "bfd-fast-detect"},
    description{YType::str, "description"},
    detect_multiplier{YType::uint32, "detect-multiplier"},
    index_{YType::str, "index"},
    load_metric{YType::uint32, "load-metric"},
    metric{YType::uint32, "metric"},
    minimum_interval{YType::uint32, "minimum-interval"},
    object_name{YType::str, "object-name"},
    permanent{YType::boolean, "permanent"},
    tag{YType::uint32, "tag"},
    tunnel_id{YType::uint32, "tunnel-id"},
    vrf_lable{YType::uint32, "vrf-lable"}
{
    yang_name = "vrf-next-hop-interface-name"; yang_parent_name = "segment-route-next-hop-table";
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceName::~VrfNextHopInterfaceName()
{
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceName::has_data() const
{
    return interface_name.is_set
	|| bfd_fast_detect.is_set
	|| description.is_set
	|| detect_multiplier.is_set
	|| index_.is_set
	|| load_metric.is_set
	|| metric.is_set
	|| minimum_interval.is_set
	|| object_name.is_set
	|| permanent.is_set
	|| tag.is_set
	|| tunnel_id.is_set
	|| vrf_lable.is_set;
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceName::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(bfd_fast_detect.operation)
	|| is_set(description.operation)
	|| is_set(detect_multiplier.operation)
	|| is_set(index_.operation)
	|| is_set(load_metric.operation)
	|| is_set(metric.operation)
	|| is_set(minimum_interval.operation)
	|| is_set(object_name.operation)
	|| is_set(permanent.operation)
	|| is_set(tag.operation)
	|| is_set(tunnel_id.operation)
	|| is_set(vrf_lable.operation);
}

std::string RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-next-hop-interface-name" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

EntityPath RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceName::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VrfNextHopInterfaceName' in Cisco_IOS_XR_ip_static_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (bfd_fast_detect.is_set || is_set(bfd_fast_detect.operation)) leaf_name_data.push_back(bfd_fast_detect.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (detect_multiplier.is_set || is_set(detect_multiplier.operation)) leaf_name_data.push_back(detect_multiplier.get_name_leafdata());
    if (index_.is_set || is_set(index_.operation)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.operation)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (minimum_interval.is_set || is_set(minimum_interval.operation)) leaf_name_data.push_back(minimum_interval.get_name_leafdata());
    if (object_name.is_set || is_set(object_name.operation)) leaf_name_data.push_back(object_name.get_name_leafdata());
    if (permanent.is_set || is_set(permanent.operation)) leaf_name_data.push_back(permanent.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (vrf_lable.is_set || is_set(vrf_lable.operation)) leaf_name_data.push_back(vrf_lable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceName::get_children()
{
    return children;
}

void RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceName::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "bfd-fast-detect")
    {
        bfd_fast_detect = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier = value;
    }
    if(value_path == "index")
    {
        index_ = value;
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "minimum-interval")
    {
        minimum_interval = value;
    }
    if(value_path == "object-name")
    {
        object_name = value;
    }
    if(value_path == "permanent")
    {
        permanent = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable = value;
    }
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceNameNextHopAddress::VrfNextHopInterfaceNameNextHopAddress()
    :
    interface_name{YType::str, "interface-name"},
    next_hop_address{YType::str, "next-hop-address"},
    bfd_fast_detect{YType::boolean, "bfd-fast-detect"},
    description{YType::str, "description"},
    detect_multiplier{YType::uint32, "detect-multiplier"},
    index_{YType::str, "index"},
    load_metric{YType::uint32, "load-metric"},
    metric{YType::uint32, "metric"},
    minimum_interval{YType::uint32, "minimum-interval"},
    object_name{YType::str, "object-name"},
    permanent{YType::boolean, "permanent"},
    tag{YType::uint32, "tag"},
    tunnel_id{YType::uint32, "tunnel-id"},
    vrf_lable{YType::uint32, "vrf-lable"}
{
    yang_name = "vrf-next-hop-interface-name-next-hop-address"; yang_parent_name = "segment-route-next-hop-table";
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceNameNextHopAddress::~VrfNextHopInterfaceNameNextHopAddress()
{
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceNameNextHopAddress::has_data() const
{
    return interface_name.is_set
	|| next_hop_address.is_set
	|| bfd_fast_detect.is_set
	|| description.is_set
	|| detect_multiplier.is_set
	|| index_.is_set
	|| load_metric.is_set
	|| metric.is_set
	|| minimum_interval.is_set
	|| object_name.is_set
	|| permanent.is_set
	|| tag.is_set
	|| tunnel_id.is_set
	|| vrf_lable.is_set;
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceNameNextHopAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(next_hop_address.operation)
	|| is_set(bfd_fast_detect.operation)
	|| is_set(description.operation)
	|| is_set(detect_multiplier.operation)
	|| is_set(index_.operation)
	|| is_set(load_metric.operation)
	|| is_set(metric.operation)
	|| is_set(minimum_interval.operation)
	|| is_set(object_name.operation)
	|| is_set(permanent.operation)
	|| is_set(tag.operation)
	|| is_set(tunnel_id.operation)
	|| is_set(vrf_lable.operation);
}

std::string RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceNameNextHopAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-next-hop-interface-name-next-hop-address" <<"[interface-name='" <<interface_name <<"']" <<"[next-hop-address='" <<next_hop_address <<"']";

    return path_buffer.str();

}

EntityPath RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceNameNextHopAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VrfNextHopInterfaceNameNextHopAddress' in Cisco_IOS_XR_ip_static_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.operation)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (bfd_fast_detect.is_set || is_set(bfd_fast_detect.operation)) leaf_name_data.push_back(bfd_fast_detect.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (detect_multiplier.is_set || is_set(detect_multiplier.operation)) leaf_name_data.push_back(detect_multiplier.get_name_leafdata());
    if (index_.is_set || is_set(index_.operation)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.operation)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (minimum_interval.is_set || is_set(minimum_interval.operation)) leaf_name_data.push_back(minimum_interval.get_name_leafdata());
    if (object_name.is_set || is_set(object_name.operation)) leaf_name_data.push_back(object_name.get_name_leafdata());
    if (permanent.is_set || is_set(permanent.operation)) leaf_name_data.push_back(permanent.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (vrf_lable.is_set || is_set(vrf_lable.operation)) leaf_name_data.push_back(vrf_lable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceNameNextHopAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceNameNextHopAddress::get_children()
{
    return children;
}

void RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceNameNextHopAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
    }
    if(value_path == "bfd-fast-detect")
    {
        bfd_fast_detect = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier = value;
    }
    if(value_path == "index")
    {
        index_ = value;
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "minimum-interval")
    {
        minimum_interval = value;
    }
    if(value_path == "object-name")
    {
        object_name = value;
    }
    if(value_path == "permanent")
    {
        permanent = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable = value;
    }
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddress::VrfNextHopNextHopAddress()
    :
    next_hop_address{YType::str, "next-hop-address"},
    bfd_fast_detect{YType::boolean, "bfd-fast-detect"},
    description{YType::str, "description"},
    detect_multiplier{YType::uint32, "detect-multiplier"},
    index_{YType::str, "index"},
    load_metric{YType::uint32, "load-metric"},
    metric{YType::uint32, "metric"},
    minimum_interval{YType::uint32, "minimum-interval"},
    object_name{YType::str, "object-name"},
    permanent{YType::boolean, "permanent"},
    tag{YType::uint32, "tag"},
    tunnel_id{YType::uint32, "tunnel-id"},
    vrf_lable{YType::uint32, "vrf-lable"}
{
    yang_name = "vrf-next-hop-next-hop-address"; yang_parent_name = "segment-route-next-hop-table";
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddress::~VrfNextHopNextHopAddress()
{
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddress::has_data() const
{
    return next_hop_address.is_set
	|| bfd_fast_detect.is_set
	|| description.is_set
	|| detect_multiplier.is_set
	|| index_.is_set
	|| load_metric.is_set
	|| metric.is_set
	|| minimum_interval.is_set
	|| object_name.is_set
	|| permanent.is_set
	|| tag.is_set
	|| tunnel_id.is_set
	|| vrf_lable.is_set;
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(next_hop_address.operation)
	|| is_set(bfd_fast_detect.operation)
	|| is_set(description.operation)
	|| is_set(detect_multiplier.operation)
	|| is_set(index_.operation)
	|| is_set(load_metric.operation)
	|| is_set(metric.operation)
	|| is_set(minimum_interval.operation)
	|| is_set(object_name.operation)
	|| is_set(permanent.operation)
	|| is_set(tag.operation)
	|| is_set(tunnel_id.operation)
	|| is_set(vrf_lable.operation);
}

std::string RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-next-hop-next-hop-address" <<"[next-hop-address='" <<next_hop_address <<"']";

    return path_buffer.str();

}

EntityPath RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VrfNextHopNextHopAddress' in Cisco_IOS_XR_ip_static_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop_address.is_set || is_set(next_hop_address.operation)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (bfd_fast_detect.is_set || is_set(bfd_fast_detect.operation)) leaf_name_data.push_back(bfd_fast_detect.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (detect_multiplier.is_set || is_set(detect_multiplier.operation)) leaf_name_data.push_back(detect_multiplier.get_name_leafdata());
    if (index_.is_set || is_set(index_.operation)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.operation)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (minimum_interval.is_set || is_set(minimum_interval.operation)) leaf_name_data.push_back(minimum_interval.get_name_leafdata());
    if (object_name.is_set || is_set(object_name.operation)) leaf_name_data.push_back(object_name.get_name_leafdata());
    if (permanent.is_set || is_set(permanent.operation)) leaf_name_data.push_back(permanent.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (vrf_lable.is_set || is_set(vrf_lable.operation)) leaf_name_data.push_back(vrf_lable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddress::get_children()
{
    return children;
}

void RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
    }
    if(value_path == "bfd-fast-detect")
    {
        bfd_fast_detect = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier = value;
    }
    if(value_path == "index")
    {
        index_ = value;
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "minimum-interval")
    {
        minimum_interval = value;
    }
    if(value_path == "object-name")
    {
        object_name = value;
    }
    if(value_path == "permanent")
    {
        permanent = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable = value;
    }
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddressExplicitPathName::VrfNextHopNextHopAddressExplicitPathName()
    :
    explicit_path_name{YType::str, "explicit-path-name"},
    next_hop_address{YType::str, "next-hop-address"},
    bfd_fast_detect{YType::boolean, "bfd-fast-detect"},
    description{YType::str, "description"},
    detect_multiplier{YType::uint32, "detect-multiplier"},
    index_{YType::str, "index"},
    load_metric{YType::uint32, "load-metric"},
    metric{YType::uint32, "metric"},
    minimum_interval{YType::uint32, "minimum-interval"},
    object_name{YType::str, "object-name"},
    permanent{YType::boolean, "permanent"},
    tag{YType::uint32, "tag"},
    tunnel_id{YType::uint32, "tunnel-id"},
    vrf_lable{YType::uint32, "vrf-lable"}
{
    yang_name = "vrf-next-hop-next-hop-address-explicit-path-name"; yang_parent_name = "segment-route-next-hop-table";
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddressExplicitPathName::~VrfNextHopNextHopAddressExplicitPathName()
{
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddressExplicitPathName::has_data() const
{
    return explicit_path_name.is_set
	|| next_hop_address.is_set
	|| bfd_fast_detect.is_set
	|| description.is_set
	|| detect_multiplier.is_set
	|| index_.is_set
	|| load_metric.is_set
	|| metric.is_set
	|| minimum_interval.is_set
	|| object_name.is_set
	|| permanent.is_set
	|| tag.is_set
	|| tunnel_id.is_set
	|| vrf_lable.is_set;
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddressExplicitPathName::has_operation() const
{
    return is_set(operation)
	|| is_set(explicit_path_name.operation)
	|| is_set(next_hop_address.operation)
	|| is_set(bfd_fast_detect.operation)
	|| is_set(description.operation)
	|| is_set(detect_multiplier.operation)
	|| is_set(index_.operation)
	|| is_set(load_metric.operation)
	|| is_set(metric.operation)
	|| is_set(minimum_interval.operation)
	|| is_set(object_name.operation)
	|| is_set(permanent.operation)
	|| is_set(tag.operation)
	|| is_set(tunnel_id.operation)
	|| is_set(vrf_lable.operation);
}

std::string RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddressExplicitPathName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-next-hop-next-hop-address-explicit-path-name" <<"[explicit-path-name='" <<explicit_path_name <<"']" <<"[next-hop-address='" <<next_hop_address <<"']";

    return path_buffer.str();

}

EntityPath RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddressExplicitPathName::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VrfNextHopNextHopAddressExplicitPathName' in Cisco_IOS_XR_ip_static_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (explicit_path_name.is_set || is_set(explicit_path_name.operation)) leaf_name_data.push_back(explicit_path_name.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.operation)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (bfd_fast_detect.is_set || is_set(bfd_fast_detect.operation)) leaf_name_data.push_back(bfd_fast_detect.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (detect_multiplier.is_set || is_set(detect_multiplier.operation)) leaf_name_data.push_back(detect_multiplier.get_name_leafdata());
    if (index_.is_set || is_set(index_.operation)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.operation)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (minimum_interval.is_set || is_set(minimum_interval.operation)) leaf_name_data.push_back(minimum_interval.get_name_leafdata());
    if (object_name.is_set || is_set(object_name.operation)) leaf_name_data.push_back(object_name.get_name_leafdata());
    if (permanent.is_set || is_set(permanent.operation)) leaf_name_data.push_back(permanent.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (vrf_lable.is_set || is_set(vrf_lable.operation)) leaf_name_data.push_back(vrf_lable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddressExplicitPathName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddressExplicitPathName::get_children()
{
    return children;
}

void RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddressExplicitPathName::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "explicit-path-name")
    {
        explicit_path_name = value;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
    }
    if(value_path == "bfd-fast-detect")
    {
        bfd_fast_detect = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier = value;
    }
    if(value_path == "index")
    {
        index_ = value;
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "minimum-interval")
    {
        minimum_interval = value;
    }
    if(value_path == "object-name")
    {
        object_name = value;
    }
    if(value_path == "permanent")
    {
        permanent = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable = value;
    }
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopExplicitPathName::VrfNextHopExplicitPathName()
    :
    explicit_path_name{YType::str, "explicit-path-name"},
    bfd_fast_detect{YType::boolean, "bfd-fast-detect"},
    description{YType::str, "description"},
    detect_multiplier{YType::uint32, "detect-multiplier"},
    index_{YType::str, "index"},
    load_metric{YType::uint32, "load-metric"},
    metric{YType::uint32, "metric"},
    minimum_interval{YType::uint32, "minimum-interval"},
    object_name{YType::str, "object-name"},
    permanent{YType::boolean, "permanent"},
    tag{YType::uint32, "tag"},
    tunnel_id{YType::uint32, "tunnel-id"},
    vrf_lable{YType::uint32, "vrf-lable"}
{
    yang_name = "vrf-next-hop-explicit-path-name"; yang_parent_name = "segment-route-next-hop-table";
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopExplicitPathName::~VrfNextHopExplicitPathName()
{
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopExplicitPathName::has_data() const
{
    return explicit_path_name.is_set
	|| bfd_fast_detect.is_set
	|| description.is_set
	|| detect_multiplier.is_set
	|| index_.is_set
	|| load_metric.is_set
	|| metric.is_set
	|| minimum_interval.is_set
	|| object_name.is_set
	|| permanent.is_set
	|| tag.is_set
	|| tunnel_id.is_set
	|| vrf_lable.is_set;
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopExplicitPathName::has_operation() const
{
    return is_set(operation)
	|| is_set(explicit_path_name.operation)
	|| is_set(bfd_fast_detect.operation)
	|| is_set(description.operation)
	|| is_set(detect_multiplier.operation)
	|| is_set(index_.operation)
	|| is_set(load_metric.operation)
	|| is_set(metric.operation)
	|| is_set(minimum_interval.operation)
	|| is_set(object_name.operation)
	|| is_set(permanent.operation)
	|| is_set(tag.operation)
	|| is_set(tunnel_id.operation)
	|| is_set(vrf_lable.operation);
}

std::string RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopExplicitPathName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-next-hop-explicit-path-name" <<"[explicit-path-name='" <<explicit_path_name <<"']";

    return path_buffer.str();

}

EntityPath RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopExplicitPathName::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VrfNextHopExplicitPathName' in Cisco_IOS_XR_ip_static_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (explicit_path_name.is_set || is_set(explicit_path_name.operation)) leaf_name_data.push_back(explicit_path_name.get_name_leafdata());
    if (bfd_fast_detect.is_set || is_set(bfd_fast_detect.operation)) leaf_name_data.push_back(bfd_fast_detect.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (detect_multiplier.is_set || is_set(detect_multiplier.operation)) leaf_name_data.push_back(detect_multiplier.get_name_leafdata());
    if (index_.is_set || is_set(index_.operation)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.operation)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (minimum_interval.is_set || is_set(minimum_interval.operation)) leaf_name_data.push_back(minimum_interval.get_name_leafdata());
    if (object_name.is_set || is_set(object_name.operation)) leaf_name_data.push_back(object_name.get_name_leafdata());
    if (permanent.is_set || is_set(permanent.operation)) leaf_name_data.push_back(permanent.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (vrf_lable.is_set || is_set(vrf_lable.operation)) leaf_name_data.push_back(vrf_lable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopExplicitPathName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopExplicitPathName::get_children()
{
    return children;
}

void RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopExplicitPathName::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "explicit-path-name")
    {
        explicit_path_name = value;
    }
    if(value_path == "bfd-fast-detect")
    {
        bfd_fast_detect = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier = value;
    }
    if(value_path == "index")
    {
        index_ = value;
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "minimum-interval")
    {
        minimum_interval = value;
    }
    if(value_path == "object-name")
    {
        object_name = value;
    }
    if(value_path == "permanent")
    {
        permanent = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable = value;
    }
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefixes()
{
    yang_name = "vrf-prefixes"; yang_parent_name = "vrf-multicast";
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::~VrfPrefixes()
{
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::has_data() const
{
    for (std::size_t index=0; index<vrf_prefix.size(); index++)
    {
        if(vrf_prefix[index]->has_data())
            return true;
    }
    return false;
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::has_operation() const
{
    for (std::size_t index=0; index<vrf_prefix.size(); index++)
    {
        if(vrf_prefix[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-prefixes";

    return path_buffer.str();

}

EntityPath RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VrfPrefixes' in Cisco_IOS_XR_ip_static_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "vrf-prefix")
    {
        for(auto const & c : vrf_prefix)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix>();
        c->parent = this;
        vrf_prefix.push_back(std::move(c));
        children[segment_path] = vrf_prefix.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::get_children()
{
    for (auto const & c : vrf_prefix)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::set_value(const std::string & value_path, std::string value)
{
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfPrefix()
    :
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint32, "prefix-length"}
    	,
    vrf_recurse_routes(std::make_shared<RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes>())
	,vrf_route(std::make_shared<RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRoute>())
	,vrf_seg_route(std::make_shared<RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfSegRoute>())
{
    vrf_recurse_routes->parent = this;
    children["vrf-recurse-routes"] = vrf_recurse_routes;

    vrf_route->parent = this;
    children["vrf-route"] = vrf_route;

    vrf_seg_route->parent = this;
    children["vrf-seg-route"] = vrf_seg_route;

    yang_name = "vrf-prefix"; yang_parent_name = "vrf-prefixes";
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::~VrfPrefix()
{
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::has_data() const
{
    return prefix.is_set
	|| prefix_length.is_set
	|| (vrf_recurse_routes !=  nullptr && vrf_recurse_routes->has_data())
	|| (vrf_route !=  nullptr && vrf_route->has_data())
	|| (vrf_seg_route !=  nullptr && vrf_seg_route->has_data());
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::has_operation() const
{
    return is_set(operation)
	|| is_set(prefix.operation)
	|| is_set(prefix_length.operation)
	|| (vrf_recurse_routes !=  nullptr && vrf_recurse_routes->has_operation())
	|| (vrf_route !=  nullptr && vrf_route->has_operation())
	|| (vrf_seg_route !=  nullptr && vrf_seg_route->has_operation());
}

std::string RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-prefix" <<"[prefix='" <<prefix <<"']" <<"[prefix-length='" <<prefix_length <<"']";

    return path_buffer.str();

}

EntityPath RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VrfPrefix' in Cisco_IOS_XR_ip_static_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "vrf-recurse-routes")
    {
        if(vrf_recurse_routes != nullptr)
        {
            children["vrf-recurse-routes"] = vrf_recurse_routes;
        }
        else
        {
            vrf_recurse_routes = std::make_shared<RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes>();
            vrf_recurse_routes->parent = this;
            children["vrf-recurse-routes"] = vrf_recurse_routes;
        }
        return children.at("vrf-recurse-routes");
    }

    if(child_yang_name == "vrf-route")
    {
        if(vrf_route != nullptr)
        {
            children["vrf-route"] = vrf_route;
        }
        else
        {
            vrf_route = std::make_shared<RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRoute>();
            vrf_route->parent = this;
            children["vrf-route"] = vrf_route;
        }
        return children.at("vrf-route");
    }

    if(child_yang_name == "vrf-seg-route")
    {
        if(vrf_seg_route != nullptr)
        {
            children["vrf-seg-route"] = vrf_seg_route;
        }
        else
        {
            vrf_seg_route = std::make_shared<RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfSegRoute>();
            vrf_seg_route->parent = this;
            children["vrf-seg-route"] = vrf_seg_route;
        }
        return children.at("vrf-seg-route");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::get_children()
{
    if(children.find("vrf-recurse-routes") == children.end())
    {
        if(vrf_recurse_routes != nullptr)
        {
            children["vrf-recurse-routes"] = vrf_recurse_routes;
        }
    }

    if(children.find("vrf-route") == children.end())
    {
        if(vrf_route != nullptr)
        {
            children["vrf-route"] = vrf_route;
        }
    }

    if(children.find("vrf-seg-route") == children.end())
    {
        if(vrf_seg_route != nullptr)
        {
            children["vrf-seg-route"] = vrf_seg_route;
        }
    }

    return children;
}

void RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "prefix")
    {
        prefix = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRoute::VrfRoute()
    :
    vrf_next_hop_table(std::make_shared<RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable>())
{
    vrf_next_hop_table->parent = this;
    children["vrf-next-hop-table"] = vrf_next_hop_table;

    yang_name = "vrf-route"; yang_parent_name = "vrf-prefix";
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRoute::~VrfRoute()
{
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRoute::has_data() const
{
    return (vrf_next_hop_table !=  nullptr && vrf_next_hop_table->has_data());
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRoute::has_operation() const
{
    return is_set(operation)
	|| (vrf_next_hop_table !=  nullptr && vrf_next_hop_table->has_operation());
}

std::string RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-route";

    return path_buffer.str();

}

EntityPath RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRoute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VrfRoute' in Cisco_IOS_XR_ip_static_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "vrf-next-hop-table")
    {
        if(vrf_next_hop_table != nullptr)
        {
            children["vrf-next-hop-table"] = vrf_next_hop_table;
        }
        else
        {
            vrf_next_hop_table = std::make_shared<RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable>();
            vrf_next_hop_table->parent = this;
            children["vrf-next-hop-table"] = vrf_next_hop_table;
        }
        return children.at("vrf-next-hop-table");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRoute::get_children()
{
    if(children.find("vrf-next-hop-table") == children.end())
    {
        if(vrf_next_hop_table != nullptr)
        {
            children["vrf-next-hop-table"] = vrf_next_hop_table;
        }
    }

    return children;
}

void RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRoute::set_value(const std::string & value_path, std::string value)
{
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopTable()
{
    yang_name = "vrf-next-hop-table"; yang_parent_name = "vrf-route";
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::~VrfNextHopTable()
{
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::has_data() const
{
    for (std::size_t index=0; index<vrf_next_hop_explicit_path_name.size(); index++)
    {
        if(vrf_next_hop_explicit_path_name[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_interface_name.size(); index++)
    {
        if(vrf_next_hop_interface_name[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_interface_name_next_hop_address.size(); index++)
    {
        if(vrf_next_hop_interface_name_next_hop_address[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_next_hop_address.size(); index++)
    {
        if(vrf_next_hop_next_hop_address[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_next_hop_address_explicit_path_name.size(); index++)
    {
        if(vrf_next_hop_next_hop_address_explicit_path_name[index]->has_data())
            return true;
    }
    return false;
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::has_operation() const
{
    for (std::size_t index=0; index<vrf_next_hop_explicit_path_name.size(); index++)
    {
        if(vrf_next_hop_explicit_path_name[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_interface_name.size(); index++)
    {
        if(vrf_next_hop_interface_name[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_interface_name_next_hop_address.size(); index++)
    {
        if(vrf_next_hop_interface_name_next_hop_address[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_next_hop_address.size(); index++)
    {
        if(vrf_next_hop_next_hop_address[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_next_hop_address_explicit_path_name.size(); index++)
    {
        if(vrf_next_hop_next_hop_address_explicit_path_name[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-next-hop-table";

    return path_buffer.str();

}

EntityPath RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VrfNextHopTable' in Cisco_IOS_XR_ip_static_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "vrf-next-hop-explicit-path-name")
    {
        for(auto const & c : vrf_next_hop_explicit_path_name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopExplicitPathName>();
        c->parent = this;
        vrf_next_hop_explicit_path_name.push_back(std::move(c));
        children[segment_path] = vrf_next_hop_explicit_path_name.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "vrf-next-hop-interface-name")
    {
        for(auto const & c : vrf_next_hop_interface_name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceName>();
        c->parent = this;
        vrf_next_hop_interface_name.push_back(std::move(c));
        children[segment_path] = vrf_next_hop_interface_name.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "vrf-next-hop-interface-name-next-hop-address")
    {
        for(auto const & c : vrf_next_hop_interface_name_next_hop_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceNameNextHopAddress>();
        c->parent = this;
        vrf_next_hop_interface_name_next_hop_address.push_back(std::move(c));
        children[segment_path] = vrf_next_hop_interface_name_next_hop_address.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "vrf-next-hop-next-hop-address")
    {
        for(auto const & c : vrf_next_hop_next_hop_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddress>();
        c->parent = this;
        vrf_next_hop_next_hop_address.push_back(std::move(c));
        children[segment_path] = vrf_next_hop_next_hop_address.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "vrf-next-hop-next-hop-address-explicit-path-name")
    {
        for(auto const & c : vrf_next_hop_next_hop_address_explicit_path_name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddressExplicitPathName>();
        c->parent = this;
        vrf_next_hop_next_hop_address_explicit_path_name.push_back(std::move(c));
        children[segment_path] = vrf_next_hop_next_hop_address_explicit_path_name.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::get_children()
{
    for (auto const & c : vrf_next_hop_explicit_path_name)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : vrf_next_hop_interface_name)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : vrf_next_hop_interface_name_next_hop_address)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : vrf_next_hop_next_hop_address)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : vrf_next_hop_next_hop_address_explicit_path_name)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::set_value(const std::string & value_path, std::string value)
{
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceName::VrfNextHopInterfaceName()
    :
    interface_name{YType::str, "interface-name"},
    bfd_fast_detect{YType::boolean, "bfd-fast-detect"},
    description{YType::str, "description"},
    detect_multiplier{YType::uint32, "detect-multiplier"},
    index_{YType::str, "index"},
    load_metric{YType::uint32, "load-metric"},
    metric{YType::uint32, "metric"},
    minimum_interval{YType::uint32, "minimum-interval"},
    object_name{YType::str, "object-name"},
    permanent{YType::boolean, "permanent"},
    tag{YType::uint32, "tag"},
    tunnel_id{YType::uint32, "tunnel-id"},
    vrf_lable{YType::uint32, "vrf-lable"}
{
    yang_name = "vrf-next-hop-interface-name"; yang_parent_name = "vrf-next-hop-table";
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceName::~VrfNextHopInterfaceName()
{
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceName::has_data() const
{
    return interface_name.is_set
	|| bfd_fast_detect.is_set
	|| description.is_set
	|| detect_multiplier.is_set
	|| index_.is_set
	|| load_metric.is_set
	|| metric.is_set
	|| minimum_interval.is_set
	|| object_name.is_set
	|| permanent.is_set
	|| tag.is_set
	|| tunnel_id.is_set
	|| vrf_lable.is_set;
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceName::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(bfd_fast_detect.operation)
	|| is_set(description.operation)
	|| is_set(detect_multiplier.operation)
	|| is_set(index_.operation)
	|| is_set(load_metric.operation)
	|| is_set(metric.operation)
	|| is_set(minimum_interval.operation)
	|| is_set(object_name.operation)
	|| is_set(permanent.operation)
	|| is_set(tag.operation)
	|| is_set(tunnel_id.operation)
	|| is_set(vrf_lable.operation);
}

std::string RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-next-hop-interface-name" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

EntityPath RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceName::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VrfNextHopInterfaceName' in Cisco_IOS_XR_ip_static_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (bfd_fast_detect.is_set || is_set(bfd_fast_detect.operation)) leaf_name_data.push_back(bfd_fast_detect.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (detect_multiplier.is_set || is_set(detect_multiplier.operation)) leaf_name_data.push_back(detect_multiplier.get_name_leafdata());
    if (index_.is_set || is_set(index_.operation)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.operation)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (minimum_interval.is_set || is_set(minimum_interval.operation)) leaf_name_data.push_back(minimum_interval.get_name_leafdata());
    if (object_name.is_set || is_set(object_name.operation)) leaf_name_data.push_back(object_name.get_name_leafdata());
    if (permanent.is_set || is_set(permanent.operation)) leaf_name_data.push_back(permanent.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (vrf_lable.is_set || is_set(vrf_lable.operation)) leaf_name_data.push_back(vrf_lable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceName::get_children()
{
    return children;
}

void RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceName::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "bfd-fast-detect")
    {
        bfd_fast_detect = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier = value;
    }
    if(value_path == "index")
    {
        index_ = value;
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "minimum-interval")
    {
        minimum_interval = value;
    }
    if(value_path == "object-name")
    {
        object_name = value;
    }
    if(value_path == "permanent")
    {
        permanent = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable = value;
    }
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceNameNextHopAddress::VrfNextHopInterfaceNameNextHopAddress()
    :
    interface_name{YType::str, "interface-name"},
    next_hop_address{YType::str, "next-hop-address"},
    bfd_fast_detect{YType::boolean, "bfd-fast-detect"},
    description{YType::str, "description"},
    detect_multiplier{YType::uint32, "detect-multiplier"},
    index_{YType::str, "index"},
    load_metric{YType::uint32, "load-metric"},
    metric{YType::uint32, "metric"},
    minimum_interval{YType::uint32, "minimum-interval"},
    object_name{YType::str, "object-name"},
    permanent{YType::boolean, "permanent"},
    tag{YType::uint32, "tag"},
    tunnel_id{YType::uint32, "tunnel-id"},
    vrf_lable{YType::uint32, "vrf-lable"}
{
    yang_name = "vrf-next-hop-interface-name-next-hop-address"; yang_parent_name = "vrf-next-hop-table";
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceNameNextHopAddress::~VrfNextHopInterfaceNameNextHopAddress()
{
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceNameNextHopAddress::has_data() const
{
    return interface_name.is_set
	|| next_hop_address.is_set
	|| bfd_fast_detect.is_set
	|| description.is_set
	|| detect_multiplier.is_set
	|| index_.is_set
	|| load_metric.is_set
	|| metric.is_set
	|| minimum_interval.is_set
	|| object_name.is_set
	|| permanent.is_set
	|| tag.is_set
	|| tunnel_id.is_set
	|| vrf_lable.is_set;
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceNameNextHopAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(next_hop_address.operation)
	|| is_set(bfd_fast_detect.operation)
	|| is_set(description.operation)
	|| is_set(detect_multiplier.operation)
	|| is_set(index_.operation)
	|| is_set(load_metric.operation)
	|| is_set(metric.operation)
	|| is_set(minimum_interval.operation)
	|| is_set(object_name.operation)
	|| is_set(permanent.operation)
	|| is_set(tag.operation)
	|| is_set(tunnel_id.operation)
	|| is_set(vrf_lable.operation);
}

std::string RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceNameNextHopAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-next-hop-interface-name-next-hop-address" <<"[interface-name='" <<interface_name <<"']" <<"[next-hop-address='" <<next_hop_address <<"']";

    return path_buffer.str();

}

EntityPath RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceNameNextHopAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VrfNextHopInterfaceNameNextHopAddress' in Cisco_IOS_XR_ip_static_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.operation)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (bfd_fast_detect.is_set || is_set(bfd_fast_detect.operation)) leaf_name_data.push_back(bfd_fast_detect.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (detect_multiplier.is_set || is_set(detect_multiplier.operation)) leaf_name_data.push_back(detect_multiplier.get_name_leafdata());
    if (index_.is_set || is_set(index_.operation)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.operation)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (minimum_interval.is_set || is_set(minimum_interval.operation)) leaf_name_data.push_back(minimum_interval.get_name_leafdata());
    if (object_name.is_set || is_set(object_name.operation)) leaf_name_data.push_back(object_name.get_name_leafdata());
    if (permanent.is_set || is_set(permanent.operation)) leaf_name_data.push_back(permanent.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (vrf_lable.is_set || is_set(vrf_lable.operation)) leaf_name_data.push_back(vrf_lable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceNameNextHopAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceNameNextHopAddress::get_children()
{
    return children;
}

void RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceNameNextHopAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
    }
    if(value_path == "bfd-fast-detect")
    {
        bfd_fast_detect = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier = value;
    }
    if(value_path == "index")
    {
        index_ = value;
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "minimum-interval")
    {
        minimum_interval = value;
    }
    if(value_path == "object-name")
    {
        object_name = value;
    }
    if(value_path == "permanent")
    {
        permanent = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable = value;
    }
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddress::VrfNextHopNextHopAddress()
    :
    next_hop_address{YType::str, "next-hop-address"},
    bfd_fast_detect{YType::boolean, "bfd-fast-detect"},
    description{YType::str, "description"},
    detect_multiplier{YType::uint32, "detect-multiplier"},
    index_{YType::str, "index"},
    load_metric{YType::uint32, "load-metric"},
    metric{YType::uint32, "metric"},
    minimum_interval{YType::uint32, "minimum-interval"},
    object_name{YType::str, "object-name"},
    permanent{YType::boolean, "permanent"},
    tag{YType::uint32, "tag"},
    tunnel_id{YType::uint32, "tunnel-id"},
    vrf_lable{YType::uint32, "vrf-lable"}
{
    yang_name = "vrf-next-hop-next-hop-address"; yang_parent_name = "vrf-next-hop-table";
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddress::~VrfNextHopNextHopAddress()
{
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddress::has_data() const
{
    return next_hop_address.is_set
	|| bfd_fast_detect.is_set
	|| description.is_set
	|| detect_multiplier.is_set
	|| index_.is_set
	|| load_metric.is_set
	|| metric.is_set
	|| minimum_interval.is_set
	|| object_name.is_set
	|| permanent.is_set
	|| tag.is_set
	|| tunnel_id.is_set
	|| vrf_lable.is_set;
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(next_hop_address.operation)
	|| is_set(bfd_fast_detect.operation)
	|| is_set(description.operation)
	|| is_set(detect_multiplier.operation)
	|| is_set(index_.operation)
	|| is_set(load_metric.operation)
	|| is_set(metric.operation)
	|| is_set(minimum_interval.operation)
	|| is_set(object_name.operation)
	|| is_set(permanent.operation)
	|| is_set(tag.operation)
	|| is_set(tunnel_id.operation)
	|| is_set(vrf_lable.operation);
}

std::string RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-next-hop-next-hop-address" <<"[next-hop-address='" <<next_hop_address <<"']";

    return path_buffer.str();

}

EntityPath RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VrfNextHopNextHopAddress' in Cisco_IOS_XR_ip_static_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop_address.is_set || is_set(next_hop_address.operation)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (bfd_fast_detect.is_set || is_set(bfd_fast_detect.operation)) leaf_name_data.push_back(bfd_fast_detect.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (detect_multiplier.is_set || is_set(detect_multiplier.operation)) leaf_name_data.push_back(detect_multiplier.get_name_leafdata());
    if (index_.is_set || is_set(index_.operation)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.operation)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (minimum_interval.is_set || is_set(minimum_interval.operation)) leaf_name_data.push_back(minimum_interval.get_name_leafdata());
    if (object_name.is_set || is_set(object_name.operation)) leaf_name_data.push_back(object_name.get_name_leafdata());
    if (permanent.is_set || is_set(permanent.operation)) leaf_name_data.push_back(permanent.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (vrf_lable.is_set || is_set(vrf_lable.operation)) leaf_name_data.push_back(vrf_lable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddress::get_children()
{
    return children;
}

void RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
    }
    if(value_path == "bfd-fast-detect")
    {
        bfd_fast_detect = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier = value;
    }
    if(value_path == "index")
    {
        index_ = value;
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "minimum-interval")
    {
        minimum_interval = value;
    }
    if(value_path == "object-name")
    {
        object_name = value;
    }
    if(value_path == "permanent")
    {
        permanent = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable = value;
    }
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddressExplicitPathName::VrfNextHopNextHopAddressExplicitPathName()
    :
    explicit_path_name{YType::str, "explicit-path-name"},
    next_hop_address{YType::str, "next-hop-address"},
    bfd_fast_detect{YType::boolean, "bfd-fast-detect"},
    description{YType::str, "description"},
    detect_multiplier{YType::uint32, "detect-multiplier"},
    index_{YType::str, "index"},
    load_metric{YType::uint32, "load-metric"},
    metric{YType::uint32, "metric"},
    minimum_interval{YType::uint32, "minimum-interval"},
    object_name{YType::str, "object-name"},
    permanent{YType::boolean, "permanent"},
    tag{YType::uint32, "tag"},
    tunnel_id{YType::uint32, "tunnel-id"},
    vrf_lable{YType::uint32, "vrf-lable"}
{
    yang_name = "vrf-next-hop-next-hop-address-explicit-path-name"; yang_parent_name = "vrf-next-hop-table";
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddressExplicitPathName::~VrfNextHopNextHopAddressExplicitPathName()
{
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddressExplicitPathName::has_data() const
{
    return explicit_path_name.is_set
	|| next_hop_address.is_set
	|| bfd_fast_detect.is_set
	|| description.is_set
	|| detect_multiplier.is_set
	|| index_.is_set
	|| load_metric.is_set
	|| metric.is_set
	|| minimum_interval.is_set
	|| object_name.is_set
	|| permanent.is_set
	|| tag.is_set
	|| tunnel_id.is_set
	|| vrf_lable.is_set;
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddressExplicitPathName::has_operation() const
{
    return is_set(operation)
	|| is_set(explicit_path_name.operation)
	|| is_set(next_hop_address.operation)
	|| is_set(bfd_fast_detect.operation)
	|| is_set(description.operation)
	|| is_set(detect_multiplier.operation)
	|| is_set(index_.operation)
	|| is_set(load_metric.operation)
	|| is_set(metric.operation)
	|| is_set(minimum_interval.operation)
	|| is_set(object_name.operation)
	|| is_set(permanent.operation)
	|| is_set(tag.operation)
	|| is_set(tunnel_id.operation)
	|| is_set(vrf_lable.operation);
}

std::string RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddressExplicitPathName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-next-hop-next-hop-address-explicit-path-name" <<"[explicit-path-name='" <<explicit_path_name <<"']" <<"[next-hop-address='" <<next_hop_address <<"']";

    return path_buffer.str();

}

EntityPath RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddressExplicitPathName::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VrfNextHopNextHopAddressExplicitPathName' in Cisco_IOS_XR_ip_static_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (explicit_path_name.is_set || is_set(explicit_path_name.operation)) leaf_name_data.push_back(explicit_path_name.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.operation)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (bfd_fast_detect.is_set || is_set(bfd_fast_detect.operation)) leaf_name_data.push_back(bfd_fast_detect.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (detect_multiplier.is_set || is_set(detect_multiplier.operation)) leaf_name_data.push_back(detect_multiplier.get_name_leafdata());
    if (index_.is_set || is_set(index_.operation)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.operation)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (minimum_interval.is_set || is_set(minimum_interval.operation)) leaf_name_data.push_back(minimum_interval.get_name_leafdata());
    if (object_name.is_set || is_set(object_name.operation)) leaf_name_data.push_back(object_name.get_name_leafdata());
    if (permanent.is_set || is_set(permanent.operation)) leaf_name_data.push_back(permanent.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (vrf_lable.is_set || is_set(vrf_lable.operation)) leaf_name_data.push_back(vrf_lable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddressExplicitPathName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddressExplicitPathName::get_children()
{
    return children;
}

void RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddressExplicitPathName::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "explicit-path-name")
    {
        explicit_path_name = value;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
    }
    if(value_path == "bfd-fast-detect")
    {
        bfd_fast_detect = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier = value;
    }
    if(value_path == "index")
    {
        index_ = value;
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "minimum-interval")
    {
        minimum_interval = value;
    }
    if(value_path == "object-name")
    {
        object_name = value;
    }
    if(value_path == "permanent")
    {
        permanent = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable = value;
    }
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopExplicitPathName::VrfNextHopExplicitPathName()
    :
    explicit_path_name{YType::str, "explicit-path-name"},
    bfd_fast_detect{YType::boolean, "bfd-fast-detect"},
    description{YType::str, "description"},
    detect_multiplier{YType::uint32, "detect-multiplier"},
    index_{YType::str, "index"},
    load_metric{YType::uint32, "load-metric"},
    metric{YType::uint32, "metric"},
    minimum_interval{YType::uint32, "minimum-interval"},
    object_name{YType::str, "object-name"},
    permanent{YType::boolean, "permanent"},
    tag{YType::uint32, "tag"},
    tunnel_id{YType::uint32, "tunnel-id"},
    vrf_lable{YType::uint32, "vrf-lable"}
{
    yang_name = "vrf-next-hop-explicit-path-name"; yang_parent_name = "vrf-next-hop-table";
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopExplicitPathName::~VrfNextHopExplicitPathName()
{
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopExplicitPathName::has_data() const
{
    return explicit_path_name.is_set
	|| bfd_fast_detect.is_set
	|| description.is_set
	|| detect_multiplier.is_set
	|| index_.is_set
	|| load_metric.is_set
	|| metric.is_set
	|| minimum_interval.is_set
	|| object_name.is_set
	|| permanent.is_set
	|| tag.is_set
	|| tunnel_id.is_set
	|| vrf_lable.is_set;
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopExplicitPathName::has_operation() const
{
    return is_set(operation)
	|| is_set(explicit_path_name.operation)
	|| is_set(bfd_fast_detect.operation)
	|| is_set(description.operation)
	|| is_set(detect_multiplier.operation)
	|| is_set(index_.operation)
	|| is_set(load_metric.operation)
	|| is_set(metric.operation)
	|| is_set(minimum_interval.operation)
	|| is_set(object_name.operation)
	|| is_set(permanent.operation)
	|| is_set(tag.operation)
	|| is_set(tunnel_id.operation)
	|| is_set(vrf_lable.operation);
}

std::string RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopExplicitPathName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-next-hop-explicit-path-name" <<"[explicit-path-name='" <<explicit_path_name <<"']";

    return path_buffer.str();

}

EntityPath RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopExplicitPathName::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VrfNextHopExplicitPathName' in Cisco_IOS_XR_ip_static_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (explicit_path_name.is_set || is_set(explicit_path_name.operation)) leaf_name_data.push_back(explicit_path_name.get_name_leafdata());
    if (bfd_fast_detect.is_set || is_set(bfd_fast_detect.operation)) leaf_name_data.push_back(bfd_fast_detect.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (detect_multiplier.is_set || is_set(detect_multiplier.operation)) leaf_name_data.push_back(detect_multiplier.get_name_leafdata());
    if (index_.is_set || is_set(index_.operation)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.operation)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (minimum_interval.is_set || is_set(minimum_interval.operation)) leaf_name_data.push_back(minimum_interval.get_name_leafdata());
    if (object_name.is_set || is_set(object_name.operation)) leaf_name_data.push_back(object_name.get_name_leafdata());
    if (permanent.is_set || is_set(permanent.operation)) leaf_name_data.push_back(permanent.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (vrf_lable.is_set || is_set(vrf_lable.operation)) leaf_name_data.push_back(vrf_lable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopExplicitPathName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopExplicitPathName::get_children()
{
    return children;
}

void RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopExplicitPathName::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "explicit-path-name")
    {
        explicit_path_name = value;
    }
    if(value_path == "bfd-fast-detect")
    {
        bfd_fast_detect = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier = value;
    }
    if(value_path == "index")
    {
        index_ = value;
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "minimum-interval")
    {
        minimum_interval = value;
    }
    if(value_path == "object-name")
    {
        object_name = value;
    }
    if(value_path == "permanent")
    {
        permanent = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable = value;
    }
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoutes()
{
    yang_name = "vrf-recurse-routes"; yang_parent_name = "vrf-prefix";
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::~VrfRecurseRoutes()
{
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::has_data() const
{
    for (std::size_t index=0; index<vrf_recurse_route.size(); index++)
    {
        if(vrf_recurse_route[index]->has_data())
            return true;
    }
    return false;
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::has_operation() const
{
    for (std::size_t index=0; index<vrf_recurse_route.size(); index++)
    {
        if(vrf_recurse_route[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-recurse-routes";

    return path_buffer.str();

}

EntityPath RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VrfRecurseRoutes' in Cisco_IOS_XR_ip_static_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "vrf-recurse-route")
    {
        for(auto const & c : vrf_recurse_route)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute>();
        c->parent = this;
        vrf_recurse_route.push_back(std::move(c));
        children[segment_path] = vrf_recurse_route.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::get_children()
{
    for (auto const & c : vrf_recurse_route)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::set_value(const std::string & value_path, std::string value)
{
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecurseRoute()
    :
    vrf_name{YType::str, "vrf-name"}
    	,
    vrf_recursive_next_hop_table(std::make_shared<RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable>())
{
    vrf_recursive_next_hop_table->parent = this;
    children["vrf-recursive-next-hop-table"] = vrf_recursive_next_hop_table;

    yang_name = "vrf-recurse-route"; yang_parent_name = "vrf-recurse-routes";
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::~VrfRecurseRoute()
{
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::has_data() const
{
    return vrf_name.is_set
	|| (vrf_recursive_next_hop_table !=  nullptr && vrf_recursive_next_hop_table->has_data());
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::has_operation() const
{
    return is_set(operation)
	|| is_set(vrf_name.operation)
	|| (vrf_recursive_next_hop_table !=  nullptr && vrf_recursive_next_hop_table->has_operation());
}

std::string RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-recurse-route" <<"[vrf-name='" <<vrf_name <<"']";

    return path_buffer.str();

}

EntityPath RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VrfRecurseRoute' in Cisco_IOS_XR_ip_static_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "vrf-recursive-next-hop-table")
    {
        if(vrf_recursive_next_hop_table != nullptr)
        {
            children["vrf-recursive-next-hop-table"] = vrf_recursive_next_hop_table;
        }
        else
        {
            vrf_recursive_next_hop_table = std::make_shared<RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable>();
            vrf_recursive_next_hop_table->parent = this;
            children["vrf-recursive-next-hop-table"] = vrf_recursive_next_hop_table;
        }
        return children.at("vrf-recursive-next-hop-table");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::get_children()
{
    if(children.find("vrf-recursive-next-hop-table") == children.end())
    {
        if(vrf_recursive_next_hop_table != nullptr)
        {
            children["vrf-recursive-next-hop-table"] = vrf_recursive_next_hop_table;
        }
    }

    return children;
}

void RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfRecursiveNextHopTable()
{
    yang_name = "vrf-recursive-next-hop-table"; yang_parent_name = "vrf-recurse-route";
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::~VrfRecursiveNextHopTable()
{
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::has_data() const
{
    for (std::size_t index=0; index<vrf_next_hop_explicit_path_name.size(); index++)
    {
        if(vrf_next_hop_explicit_path_name[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_interface_name.size(); index++)
    {
        if(vrf_next_hop_interface_name[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_interface_name_next_hop_address.size(); index++)
    {
        if(vrf_next_hop_interface_name_next_hop_address[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_next_hop_address.size(); index++)
    {
        if(vrf_next_hop_next_hop_address[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_next_hop_address_explicit_path_name.size(); index++)
    {
        if(vrf_next_hop_next_hop_address_explicit_path_name[index]->has_data())
            return true;
    }
    return false;
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::has_operation() const
{
    for (std::size_t index=0; index<vrf_next_hop_explicit_path_name.size(); index++)
    {
        if(vrf_next_hop_explicit_path_name[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_interface_name.size(); index++)
    {
        if(vrf_next_hop_interface_name[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_interface_name_next_hop_address.size(); index++)
    {
        if(vrf_next_hop_interface_name_next_hop_address[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_next_hop_address.size(); index++)
    {
        if(vrf_next_hop_next_hop_address[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_next_hop_address_explicit_path_name.size(); index++)
    {
        if(vrf_next_hop_next_hop_address_explicit_path_name[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-recursive-next-hop-table";

    return path_buffer.str();

}

EntityPath RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VrfRecursiveNextHopTable' in Cisco_IOS_XR_ip_static_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "vrf-next-hop-explicit-path-name")
    {
        for(auto const & c : vrf_next_hop_explicit_path_name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopExplicitPathName>();
        c->parent = this;
        vrf_next_hop_explicit_path_name.push_back(std::move(c));
        children[segment_path] = vrf_next_hop_explicit_path_name.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "vrf-next-hop-interface-name")
    {
        for(auto const & c : vrf_next_hop_interface_name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceName>();
        c->parent = this;
        vrf_next_hop_interface_name.push_back(std::move(c));
        children[segment_path] = vrf_next_hop_interface_name.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "vrf-next-hop-interface-name-next-hop-address")
    {
        for(auto const & c : vrf_next_hop_interface_name_next_hop_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceNameNextHopAddress>();
        c->parent = this;
        vrf_next_hop_interface_name_next_hop_address.push_back(std::move(c));
        children[segment_path] = vrf_next_hop_interface_name_next_hop_address.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "vrf-next-hop-next-hop-address")
    {
        for(auto const & c : vrf_next_hop_next_hop_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddress>();
        c->parent = this;
        vrf_next_hop_next_hop_address.push_back(std::move(c));
        children[segment_path] = vrf_next_hop_next_hop_address.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "vrf-next-hop-next-hop-address-explicit-path-name")
    {
        for(auto const & c : vrf_next_hop_next_hop_address_explicit_path_name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddressExplicitPathName>();
        c->parent = this;
        vrf_next_hop_next_hop_address_explicit_path_name.push_back(std::move(c));
        children[segment_path] = vrf_next_hop_next_hop_address_explicit_path_name.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::get_children()
{
    for (auto const & c : vrf_next_hop_explicit_path_name)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : vrf_next_hop_interface_name)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : vrf_next_hop_interface_name_next_hop_address)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : vrf_next_hop_next_hop_address)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : vrf_next_hop_next_hop_address_explicit_path_name)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::set_value(const std::string & value_path, std::string value)
{
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceName::VrfNextHopInterfaceName()
    :
    interface_name{YType::str, "interface-name"},
    bfd_fast_detect{YType::boolean, "bfd-fast-detect"},
    description{YType::str, "description"},
    detect_multiplier{YType::uint32, "detect-multiplier"},
    index_{YType::str, "index"},
    load_metric{YType::uint32, "load-metric"},
    metric{YType::uint32, "metric"},
    minimum_interval{YType::uint32, "minimum-interval"},
    object_name{YType::str, "object-name"},
    permanent{YType::boolean, "permanent"},
    tag{YType::uint32, "tag"},
    tunnel_id{YType::uint32, "tunnel-id"},
    vrf_lable{YType::uint32, "vrf-lable"}
{
    yang_name = "vrf-next-hop-interface-name"; yang_parent_name = "vrf-recursive-next-hop-table";
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceName::~VrfNextHopInterfaceName()
{
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceName::has_data() const
{
    return interface_name.is_set
	|| bfd_fast_detect.is_set
	|| description.is_set
	|| detect_multiplier.is_set
	|| index_.is_set
	|| load_metric.is_set
	|| metric.is_set
	|| minimum_interval.is_set
	|| object_name.is_set
	|| permanent.is_set
	|| tag.is_set
	|| tunnel_id.is_set
	|| vrf_lable.is_set;
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceName::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(bfd_fast_detect.operation)
	|| is_set(description.operation)
	|| is_set(detect_multiplier.operation)
	|| is_set(index_.operation)
	|| is_set(load_metric.operation)
	|| is_set(metric.operation)
	|| is_set(minimum_interval.operation)
	|| is_set(object_name.operation)
	|| is_set(permanent.operation)
	|| is_set(tag.operation)
	|| is_set(tunnel_id.operation)
	|| is_set(vrf_lable.operation);
}

std::string RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-next-hop-interface-name" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

EntityPath RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceName::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VrfNextHopInterfaceName' in Cisco_IOS_XR_ip_static_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (bfd_fast_detect.is_set || is_set(bfd_fast_detect.operation)) leaf_name_data.push_back(bfd_fast_detect.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (detect_multiplier.is_set || is_set(detect_multiplier.operation)) leaf_name_data.push_back(detect_multiplier.get_name_leafdata());
    if (index_.is_set || is_set(index_.operation)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.operation)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (minimum_interval.is_set || is_set(minimum_interval.operation)) leaf_name_data.push_back(minimum_interval.get_name_leafdata());
    if (object_name.is_set || is_set(object_name.operation)) leaf_name_data.push_back(object_name.get_name_leafdata());
    if (permanent.is_set || is_set(permanent.operation)) leaf_name_data.push_back(permanent.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (vrf_lable.is_set || is_set(vrf_lable.operation)) leaf_name_data.push_back(vrf_lable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceName::get_children()
{
    return children;
}

void RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceName::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "bfd-fast-detect")
    {
        bfd_fast_detect = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier = value;
    }
    if(value_path == "index")
    {
        index_ = value;
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "minimum-interval")
    {
        minimum_interval = value;
    }
    if(value_path == "object-name")
    {
        object_name = value;
    }
    if(value_path == "permanent")
    {
        permanent = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable = value;
    }
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceNameNextHopAddress::VrfNextHopInterfaceNameNextHopAddress()
    :
    interface_name{YType::str, "interface-name"},
    next_hop_address{YType::str, "next-hop-address"},
    bfd_fast_detect{YType::boolean, "bfd-fast-detect"},
    description{YType::str, "description"},
    detect_multiplier{YType::uint32, "detect-multiplier"},
    index_{YType::str, "index"},
    load_metric{YType::uint32, "load-metric"},
    metric{YType::uint32, "metric"},
    minimum_interval{YType::uint32, "minimum-interval"},
    object_name{YType::str, "object-name"},
    permanent{YType::boolean, "permanent"},
    tag{YType::uint32, "tag"},
    tunnel_id{YType::uint32, "tunnel-id"},
    vrf_lable{YType::uint32, "vrf-lable"}
{
    yang_name = "vrf-next-hop-interface-name-next-hop-address"; yang_parent_name = "vrf-recursive-next-hop-table";
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceNameNextHopAddress::~VrfNextHopInterfaceNameNextHopAddress()
{
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceNameNextHopAddress::has_data() const
{
    return interface_name.is_set
	|| next_hop_address.is_set
	|| bfd_fast_detect.is_set
	|| description.is_set
	|| detect_multiplier.is_set
	|| index_.is_set
	|| load_metric.is_set
	|| metric.is_set
	|| minimum_interval.is_set
	|| object_name.is_set
	|| permanent.is_set
	|| tag.is_set
	|| tunnel_id.is_set
	|| vrf_lable.is_set;
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceNameNextHopAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(next_hop_address.operation)
	|| is_set(bfd_fast_detect.operation)
	|| is_set(description.operation)
	|| is_set(detect_multiplier.operation)
	|| is_set(index_.operation)
	|| is_set(load_metric.operation)
	|| is_set(metric.operation)
	|| is_set(minimum_interval.operation)
	|| is_set(object_name.operation)
	|| is_set(permanent.operation)
	|| is_set(tag.operation)
	|| is_set(tunnel_id.operation)
	|| is_set(vrf_lable.operation);
}

std::string RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceNameNextHopAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-next-hop-interface-name-next-hop-address" <<"[interface-name='" <<interface_name <<"']" <<"[next-hop-address='" <<next_hop_address <<"']";

    return path_buffer.str();

}

EntityPath RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceNameNextHopAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VrfNextHopInterfaceNameNextHopAddress' in Cisco_IOS_XR_ip_static_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.operation)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (bfd_fast_detect.is_set || is_set(bfd_fast_detect.operation)) leaf_name_data.push_back(bfd_fast_detect.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (detect_multiplier.is_set || is_set(detect_multiplier.operation)) leaf_name_data.push_back(detect_multiplier.get_name_leafdata());
    if (index_.is_set || is_set(index_.operation)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.operation)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (minimum_interval.is_set || is_set(minimum_interval.operation)) leaf_name_data.push_back(minimum_interval.get_name_leafdata());
    if (object_name.is_set || is_set(object_name.operation)) leaf_name_data.push_back(object_name.get_name_leafdata());
    if (permanent.is_set || is_set(permanent.operation)) leaf_name_data.push_back(permanent.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (vrf_lable.is_set || is_set(vrf_lable.operation)) leaf_name_data.push_back(vrf_lable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceNameNextHopAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceNameNextHopAddress::get_children()
{
    return children;
}

void RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceNameNextHopAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
    }
    if(value_path == "bfd-fast-detect")
    {
        bfd_fast_detect = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier = value;
    }
    if(value_path == "index")
    {
        index_ = value;
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "minimum-interval")
    {
        minimum_interval = value;
    }
    if(value_path == "object-name")
    {
        object_name = value;
    }
    if(value_path == "permanent")
    {
        permanent = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable = value;
    }
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddress::VrfNextHopNextHopAddress()
    :
    next_hop_address{YType::str, "next-hop-address"},
    bfd_fast_detect{YType::boolean, "bfd-fast-detect"},
    description{YType::str, "description"},
    detect_multiplier{YType::uint32, "detect-multiplier"},
    index_{YType::str, "index"},
    load_metric{YType::uint32, "load-metric"},
    metric{YType::uint32, "metric"},
    minimum_interval{YType::uint32, "minimum-interval"},
    object_name{YType::str, "object-name"},
    permanent{YType::boolean, "permanent"},
    tag{YType::uint32, "tag"},
    tunnel_id{YType::uint32, "tunnel-id"},
    vrf_lable{YType::uint32, "vrf-lable"}
{
    yang_name = "vrf-next-hop-next-hop-address"; yang_parent_name = "vrf-recursive-next-hop-table";
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddress::~VrfNextHopNextHopAddress()
{
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddress::has_data() const
{
    return next_hop_address.is_set
	|| bfd_fast_detect.is_set
	|| description.is_set
	|| detect_multiplier.is_set
	|| index_.is_set
	|| load_metric.is_set
	|| metric.is_set
	|| minimum_interval.is_set
	|| object_name.is_set
	|| permanent.is_set
	|| tag.is_set
	|| tunnel_id.is_set
	|| vrf_lable.is_set;
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(next_hop_address.operation)
	|| is_set(bfd_fast_detect.operation)
	|| is_set(description.operation)
	|| is_set(detect_multiplier.operation)
	|| is_set(index_.operation)
	|| is_set(load_metric.operation)
	|| is_set(metric.operation)
	|| is_set(minimum_interval.operation)
	|| is_set(object_name.operation)
	|| is_set(permanent.operation)
	|| is_set(tag.operation)
	|| is_set(tunnel_id.operation)
	|| is_set(vrf_lable.operation);
}

std::string RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-next-hop-next-hop-address" <<"[next-hop-address='" <<next_hop_address <<"']";

    return path_buffer.str();

}

EntityPath RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VrfNextHopNextHopAddress' in Cisco_IOS_XR_ip_static_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop_address.is_set || is_set(next_hop_address.operation)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (bfd_fast_detect.is_set || is_set(bfd_fast_detect.operation)) leaf_name_data.push_back(bfd_fast_detect.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (detect_multiplier.is_set || is_set(detect_multiplier.operation)) leaf_name_data.push_back(detect_multiplier.get_name_leafdata());
    if (index_.is_set || is_set(index_.operation)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.operation)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (minimum_interval.is_set || is_set(minimum_interval.operation)) leaf_name_data.push_back(minimum_interval.get_name_leafdata());
    if (object_name.is_set || is_set(object_name.operation)) leaf_name_data.push_back(object_name.get_name_leafdata());
    if (permanent.is_set || is_set(permanent.operation)) leaf_name_data.push_back(permanent.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (vrf_lable.is_set || is_set(vrf_lable.operation)) leaf_name_data.push_back(vrf_lable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddress::get_children()
{
    return children;
}

void RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
    }
    if(value_path == "bfd-fast-detect")
    {
        bfd_fast_detect = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier = value;
    }
    if(value_path == "index")
    {
        index_ = value;
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "minimum-interval")
    {
        minimum_interval = value;
    }
    if(value_path == "object-name")
    {
        object_name = value;
    }
    if(value_path == "permanent")
    {
        permanent = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable = value;
    }
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddressExplicitPathName::VrfNextHopNextHopAddressExplicitPathName()
    :
    explicit_path_name{YType::str, "explicit-path-name"},
    next_hop_address{YType::str, "next-hop-address"},
    bfd_fast_detect{YType::boolean, "bfd-fast-detect"},
    description{YType::str, "description"},
    detect_multiplier{YType::uint32, "detect-multiplier"},
    index_{YType::str, "index"},
    load_metric{YType::uint32, "load-metric"},
    metric{YType::uint32, "metric"},
    minimum_interval{YType::uint32, "minimum-interval"},
    object_name{YType::str, "object-name"},
    permanent{YType::boolean, "permanent"},
    tag{YType::uint32, "tag"},
    tunnel_id{YType::uint32, "tunnel-id"},
    vrf_lable{YType::uint32, "vrf-lable"}
{
    yang_name = "vrf-next-hop-next-hop-address-explicit-path-name"; yang_parent_name = "vrf-recursive-next-hop-table";
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddressExplicitPathName::~VrfNextHopNextHopAddressExplicitPathName()
{
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddressExplicitPathName::has_data() const
{
    return explicit_path_name.is_set
	|| next_hop_address.is_set
	|| bfd_fast_detect.is_set
	|| description.is_set
	|| detect_multiplier.is_set
	|| index_.is_set
	|| load_metric.is_set
	|| metric.is_set
	|| minimum_interval.is_set
	|| object_name.is_set
	|| permanent.is_set
	|| tag.is_set
	|| tunnel_id.is_set
	|| vrf_lable.is_set;
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddressExplicitPathName::has_operation() const
{
    return is_set(operation)
	|| is_set(explicit_path_name.operation)
	|| is_set(next_hop_address.operation)
	|| is_set(bfd_fast_detect.operation)
	|| is_set(description.operation)
	|| is_set(detect_multiplier.operation)
	|| is_set(index_.operation)
	|| is_set(load_metric.operation)
	|| is_set(metric.operation)
	|| is_set(minimum_interval.operation)
	|| is_set(object_name.operation)
	|| is_set(permanent.operation)
	|| is_set(tag.operation)
	|| is_set(tunnel_id.operation)
	|| is_set(vrf_lable.operation);
}

std::string RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddressExplicitPathName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-next-hop-next-hop-address-explicit-path-name" <<"[explicit-path-name='" <<explicit_path_name <<"']" <<"[next-hop-address='" <<next_hop_address <<"']";

    return path_buffer.str();

}

EntityPath RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddressExplicitPathName::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VrfNextHopNextHopAddressExplicitPathName' in Cisco_IOS_XR_ip_static_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (explicit_path_name.is_set || is_set(explicit_path_name.operation)) leaf_name_data.push_back(explicit_path_name.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.operation)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (bfd_fast_detect.is_set || is_set(bfd_fast_detect.operation)) leaf_name_data.push_back(bfd_fast_detect.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (detect_multiplier.is_set || is_set(detect_multiplier.operation)) leaf_name_data.push_back(detect_multiplier.get_name_leafdata());
    if (index_.is_set || is_set(index_.operation)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.operation)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (minimum_interval.is_set || is_set(minimum_interval.operation)) leaf_name_data.push_back(minimum_interval.get_name_leafdata());
    if (object_name.is_set || is_set(object_name.operation)) leaf_name_data.push_back(object_name.get_name_leafdata());
    if (permanent.is_set || is_set(permanent.operation)) leaf_name_data.push_back(permanent.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (vrf_lable.is_set || is_set(vrf_lable.operation)) leaf_name_data.push_back(vrf_lable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddressExplicitPathName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddressExplicitPathName::get_children()
{
    return children;
}

void RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddressExplicitPathName::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "explicit-path-name")
    {
        explicit_path_name = value;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
    }
    if(value_path == "bfd-fast-detect")
    {
        bfd_fast_detect = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier = value;
    }
    if(value_path == "index")
    {
        index_ = value;
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "minimum-interval")
    {
        minimum_interval = value;
    }
    if(value_path == "object-name")
    {
        object_name = value;
    }
    if(value_path == "permanent")
    {
        permanent = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable = value;
    }
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopExplicitPathName::VrfNextHopExplicitPathName()
    :
    explicit_path_name{YType::str, "explicit-path-name"},
    bfd_fast_detect{YType::boolean, "bfd-fast-detect"},
    description{YType::str, "description"},
    detect_multiplier{YType::uint32, "detect-multiplier"},
    index_{YType::str, "index"},
    load_metric{YType::uint32, "load-metric"},
    metric{YType::uint32, "metric"},
    minimum_interval{YType::uint32, "minimum-interval"},
    object_name{YType::str, "object-name"},
    permanent{YType::boolean, "permanent"},
    tag{YType::uint32, "tag"},
    tunnel_id{YType::uint32, "tunnel-id"},
    vrf_lable{YType::uint32, "vrf-lable"}
{
    yang_name = "vrf-next-hop-explicit-path-name"; yang_parent_name = "vrf-recursive-next-hop-table";
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopExplicitPathName::~VrfNextHopExplicitPathName()
{
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopExplicitPathName::has_data() const
{
    return explicit_path_name.is_set
	|| bfd_fast_detect.is_set
	|| description.is_set
	|| detect_multiplier.is_set
	|| index_.is_set
	|| load_metric.is_set
	|| metric.is_set
	|| minimum_interval.is_set
	|| object_name.is_set
	|| permanent.is_set
	|| tag.is_set
	|| tunnel_id.is_set
	|| vrf_lable.is_set;
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopExplicitPathName::has_operation() const
{
    return is_set(operation)
	|| is_set(explicit_path_name.operation)
	|| is_set(bfd_fast_detect.operation)
	|| is_set(description.operation)
	|| is_set(detect_multiplier.operation)
	|| is_set(index_.operation)
	|| is_set(load_metric.operation)
	|| is_set(metric.operation)
	|| is_set(minimum_interval.operation)
	|| is_set(object_name.operation)
	|| is_set(permanent.operation)
	|| is_set(tag.operation)
	|| is_set(tunnel_id.operation)
	|| is_set(vrf_lable.operation);
}

std::string RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopExplicitPathName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-next-hop-explicit-path-name" <<"[explicit-path-name='" <<explicit_path_name <<"']";

    return path_buffer.str();

}

EntityPath RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopExplicitPathName::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VrfNextHopExplicitPathName' in Cisco_IOS_XR_ip_static_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (explicit_path_name.is_set || is_set(explicit_path_name.operation)) leaf_name_data.push_back(explicit_path_name.get_name_leafdata());
    if (bfd_fast_detect.is_set || is_set(bfd_fast_detect.operation)) leaf_name_data.push_back(bfd_fast_detect.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (detect_multiplier.is_set || is_set(detect_multiplier.operation)) leaf_name_data.push_back(detect_multiplier.get_name_leafdata());
    if (index_.is_set || is_set(index_.operation)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.operation)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (minimum_interval.is_set || is_set(minimum_interval.operation)) leaf_name_data.push_back(minimum_interval.get_name_leafdata());
    if (object_name.is_set || is_set(object_name.operation)) leaf_name_data.push_back(object_name.get_name_leafdata());
    if (permanent.is_set || is_set(permanent.operation)) leaf_name_data.push_back(permanent.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (vrf_lable.is_set || is_set(vrf_lable.operation)) leaf_name_data.push_back(vrf_lable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopExplicitPathName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopExplicitPathName::get_children()
{
    return children;
}

void RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopExplicitPathName::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "explicit-path-name")
    {
        explicit_path_name = value;
    }
    if(value_path == "bfd-fast-detect")
    {
        bfd_fast_detect = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier = value;
    }
    if(value_path == "index")
    {
        index_ = value;
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "minimum-interval")
    {
        minimum_interval = value;
    }
    if(value_path == "object-name")
    {
        object_name = value;
    }
    if(value_path == "permanent")
    {
        permanent = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable = value;
    }
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfSegRoute::VrfSegRoute()
    :
    segment_route_next_hop_table(std::make_shared<RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable>())
{
    segment_route_next_hop_table->parent = this;
    children["segment-route-next-hop-table"] = segment_route_next_hop_table;

    yang_name = "vrf-seg-route"; yang_parent_name = "vrf-prefix";
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfSegRoute::~VrfSegRoute()
{
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfSegRoute::has_data() const
{
    return (segment_route_next_hop_table !=  nullptr && segment_route_next_hop_table->has_data());
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfSegRoute::has_operation() const
{
    return is_set(operation)
	|| (segment_route_next_hop_table !=  nullptr && segment_route_next_hop_table->has_operation());
}

std::string RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfSegRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-seg-route";

    return path_buffer.str();

}

EntityPath RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfSegRoute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VrfSegRoute' in Cisco_IOS_XR_ip_static_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfSegRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "segment-route-next-hop-table")
    {
        if(segment_route_next_hop_table != nullptr)
        {
            children["segment-route-next-hop-table"] = segment_route_next_hop_table;
        }
        else
        {
            segment_route_next_hop_table = std::make_shared<RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable>();
            segment_route_next_hop_table->parent = this;
            children["segment-route-next-hop-table"] = segment_route_next_hop_table;
        }
        return children.at("segment-route-next-hop-table");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfSegRoute::get_children()
{
    if(children.find("segment-route-next-hop-table") == children.end())
    {
        if(segment_route_next_hop_table != nullptr)
        {
            children["segment-route-next-hop-table"] = segment_route_next_hop_table;
        }
    }

    return children;
}

void RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfSegRoute::set_value(const std::string & value_path, std::string value)
{
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::SegmentRouteNextHopTable()
{
    yang_name = "segment-route-next-hop-table"; yang_parent_name = "vrf-seg-route";
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::~SegmentRouteNextHopTable()
{
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::has_data() const
{
    for (std::size_t index=0; index<vrf_next_hop_explicit_path_name.size(); index++)
    {
        if(vrf_next_hop_explicit_path_name[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_interface_name.size(); index++)
    {
        if(vrf_next_hop_interface_name[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_interface_name_next_hop_address.size(); index++)
    {
        if(vrf_next_hop_interface_name_next_hop_address[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_next_hop_address.size(); index++)
    {
        if(vrf_next_hop_next_hop_address[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_next_hop_address_explicit_path_name.size(); index++)
    {
        if(vrf_next_hop_next_hop_address_explicit_path_name[index]->has_data())
            return true;
    }
    return false;
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::has_operation() const
{
    for (std::size_t index=0; index<vrf_next_hop_explicit_path_name.size(); index++)
    {
        if(vrf_next_hop_explicit_path_name[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_interface_name.size(); index++)
    {
        if(vrf_next_hop_interface_name[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_interface_name_next_hop_address.size(); index++)
    {
        if(vrf_next_hop_interface_name_next_hop_address[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_next_hop_address.size(); index++)
    {
        if(vrf_next_hop_next_hop_address[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_next_hop_address_explicit_path_name.size(); index++)
    {
        if(vrf_next_hop_next_hop_address_explicit_path_name[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "segment-route-next-hop-table";

    return path_buffer.str();

}

EntityPath RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SegmentRouteNextHopTable' in Cisco_IOS_XR_ip_static_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "vrf-next-hop-explicit-path-name")
    {
        for(auto const & c : vrf_next_hop_explicit_path_name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopExplicitPathName>();
        c->parent = this;
        vrf_next_hop_explicit_path_name.push_back(std::move(c));
        children[segment_path] = vrf_next_hop_explicit_path_name.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "vrf-next-hop-interface-name")
    {
        for(auto const & c : vrf_next_hop_interface_name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceName>();
        c->parent = this;
        vrf_next_hop_interface_name.push_back(std::move(c));
        children[segment_path] = vrf_next_hop_interface_name.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "vrf-next-hop-interface-name-next-hop-address")
    {
        for(auto const & c : vrf_next_hop_interface_name_next_hop_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceNameNextHopAddress>();
        c->parent = this;
        vrf_next_hop_interface_name_next_hop_address.push_back(std::move(c));
        children[segment_path] = vrf_next_hop_interface_name_next_hop_address.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "vrf-next-hop-next-hop-address")
    {
        for(auto const & c : vrf_next_hop_next_hop_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddress>();
        c->parent = this;
        vrf_next_hop_next_hop_address.push_back(std::move(c));
        children[segment_path] = vrf_next_hop_next_hop_address.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "vrf-next-hop-next-hop-address-explicit-path-name")
    {
        for(auto const & c : vrf_next_hop_next_hop_address_explicit_path_name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddressExplicitPathName>();
        c->parent = this;
        vrf_next_hop_next_hop_address_explicit_path_name.push_back(std::move(c));
        children[segment_path] = vrf_next_hop_next_hop_address_explicit_path_name.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::get_children()
{
    for (auto const & c : vrf_next_hop_explicit_path_name)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : vrf_next_hop_interface_name)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : vrf_next_hop_interface_name_next_hop_address)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : vrf_next_hop_next_hop_address)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : vrf_next_hop_next_hop_address_explicit_path_name)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::set_value(const std::string & value_path, std::string value)
{
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceName::VrfNextHopInterfaceName()
    :
    interface_name{YType::str, "interface-name"},
    bfd_fast_detect{YType::boolean, "bfd-fast-detect"},
    description{YType::str, "description"},
    detect_multiplier{YType::uint32, "detect-multiplier"},
    index_{YType::str, "index"},
    load_metric{YType::uint32, "load-metric"},
    metric{YType::uint32, "metric"},
    minimum_interval{YType::uint32, "minimum-interval"},
    object_name{YType::str, "object-name"},
    permanent{YType::boolean, "permanent"},
    tag{YType::uint32, "tag"},
    tunnel_id{YType::uint32, "tunnel-id"},
    vrf_lable{YType::uint32, "vrf-lable"}
{
    yang_name = "vrf-next-hop-interface-name"; yang_parent_name = "segment-route-next-hop-table";
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceName::~VrfNextHopInterfaceName()
{
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceName::has_data() const
{
    return interface_name.is_set
	|| bfd_fast_detect.is_set
	|| description.is_set
	|| detect_multiplier.is_set
	|| index_.is_set
	|| load_metric.is_set
	|| metric.is_set
	|| minimum_interval.is_set
	|| object_name.is_set
	|| permanent.is_set
	|| tag.is_set
	|| tunnel_id.is_set
	|| vrf_lable.is_set;
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceName::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(bfd_fast_detect.operation)
	|| is_set(description.operation)
	|| is_set(detect_multiplier.operation)
	|| is_set(index_.operation)
	|| is_set(load_metric.operation)
	|| is_set(metric.operation)
	|| is_set(minimum_interval.operation)
	|| is_set(object_name.operation)
	|| is_set(permanent.operation)
	|| is_set(tag.operation)
	|| is_set(tunnel_id.operation)
	|| is_set(vrf_lable.operation);
}

std::string RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-next-hop-interface-name" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

EntityPath RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceName::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VrfNextHopInterfaceName' in Cisco_IOS_XR_ip_static_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (bfd_fast_detect.is_set || is_set(bfd_fast_detect.operation)) leaf_name_data.push_back(bfd_fast_detect.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (detect_multiplier.is_set || is_set(detect_multiplier.operation)) leaf_name_data.push_back(detect_multiplier.get_name_leafdata());
    if (index_.is_set || is_set(index_.operation)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.operation)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (minimum_interval.is_set || is_set(minimum_interval.operation)) leaf_name_data.push_back(minimum_interval.get_name_leafdata());
    if (object_name.is_set || is_set(object_name.operation)) leaf_name_data.push_back(object_name.get_name_leafdata());
    if (permanent.is_set || is_set(permanent.operation)) leaf_name_data.push_back(permanent.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (vrf_lable.is_set || is_set(vrf_lable.operation)) leaf_name_data.push_back(vrf_lable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceName::get_children()
{
    return children;
}

void RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceName::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "bfd-fast-detect")
    {
        bfd_fast_detect = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier = value;
    }
    if(value_path == "index")
    {
        index_ = value;
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "minimum-interval")
    {
        minimum_interval = value;
    }
    if(value_path == "object-name")
    {
        object_name = value;
    }
    if(value_path == "permanent")
    {
        permanent = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable = value;
    }
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceNameNextHopAddress::VrfNextHopInterfaceNameNextHopAddress()
    :
    interface_name{YType::str, "interface-name"},
    next_hop_address{YType::str, "next-hop-address"},
    bfd_fast_detect{YType::boolean, "bfd-fast-detect"},
    description{YType::str, "description"},
    detect_multiplier{YType::uint32, "detect-multiplier"},
    index_{YType::str, "index"},
    load_metric{YType::uint32, "load-metric"},
    metric{YType::uint32, "metric"},
    minimum_interval{YType::uint32, "minimum-interval"},
    object_name{YType::str, "object-name"},
    permanent{YType::boolean, "permanent"},
    tag{YType::uint32, "tag"},
    tunnel_id{YType::uint32, "tunnel-id"},
    vrf_lable{YType::uint32, "vrf-lable"}
{
    yang_name = "vrf-next-hop-interface-name-next-hop-address"; yang_parent_name = "segment-route-next-hop-table";
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceNameNextHopAddress::~VrfNextHopInterfaceNameNextHopAddress()
{
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceNameNextHopAddress::has_data() const
{
    return interface_name.is_set
	|| next_hop_address.is_set
	|| bfd_fast_detect.is_set
	|| description.is_set
	|| detect_multiplier.is_set
	|| index_.is_set
	|| load_metric.is_set
	|| metric.is_set
	|| minimum_interval.is_set
	|| object_name.is_set
	|| permanent.is_set
	|| tag.is_set
	|| tunnel_id.is_set
	|| vrf_lable.is_set;
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceNameNextHopAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(next_hop_address.operation)
	|| is_set(bfd_fast_detect.operation)
	|| is_set(description.operation)
	|| is_set(detect_multiplier.operation)
	|| is_set(index_.operation)
	|| is_set(load_metric.operation)
	|| is_set(metric.operation)
	|| is_set(minimum_interval.operation)
	|| is_set(object_name.operation)
	|| is_set(permanent.operation)
	|| is_set(tag.operation)
	|| is_set(tunnel_id.operation)
	|| is_set(vrf_lable.operation);
}

std::string RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceNameNextHopAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-next-hop-interface-name-next-hop-address" <<"[interface-name='" <<interface_name <<"']" <<"[next-hop-address='" <<next_hop_address <<"']";

    return path_buffer.str();

}

EntityPath RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceNameNextHopAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VrfNextHopInterfaceNameNextHopAddress' in Cisco_IOS_XR_ip_static_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.operation)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (bfd_fast_detect.is_set || is_set(bfd_fast_detect.operation)) leaf_name_data.push_back(bfd_fast_detect.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (detect_multiplier.is_set || is_set(detect_multiplier.operation)) leaf_name_data.push_back(detect_multiplier.get_name_leafdata());
    if (index_.is_set || is_set(index_.operation)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.operation)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (minimum_interval.is_set || is_set(minimum_interval.operation)) leaf_name_data.push_back(minimum_interval.get_name_leafdata());
    if (object_name.is_set || is_set(object_name.operation)) leaf_name_data.push_back(object_name.get_name_leafdata());
    if (permanent.is_set || is_set(permanent.operation)) leaf_name_data.push_back(permanent.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (vrf_lable.is_set || is_set(vrf_lable.operation)) leaf_name_data.push_back(vrf_lable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceNameNextHopAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceNameNextHopAddress::get_children()
{
    return children;
}

void RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceNameNextHopAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
    }
    if(value_path == "bfd-fast-detect")
    {
        bfd_fast_detect = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier = value;
    }
    if(value_path == "index")
    {
        index_ = value;
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "minimum-interval")
    {
        minimum_interval = value;
    }
    if(value_path == "object-name")
    {
        object_name = value;
    }
    if(value_path == "permanent")
    {
        permanent = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable = value;
    }
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddress::VrfNextHopNextHopAddress()
    :
    next_hop_address{YType::str, "next-hop-address"},
    bfd_fast_detect{YType::boolean, "bfd-fast-detect"},
    description{YType::str, "description"},
    detect_multiplier{YType::uint32, "detect-multiplier"},
    index_{YType::str, "index"},
    load_metric{YType::uint32, "load-metric"},
    metric{YType::uint32, "metric"},
    minimum_interval{YType::uint32, "minimum-interval"},
    object_name{YType::str, "object-name"},
    permanent{YType::boolean, "permanent"},
    tag{YType::uint32, "tag"},
    tunnel_id{YType::uint32, "tunnel-id"},
    vrf_lable{YType::uint32, "vrf-lable"}
{
    yang_name = "vrf-next-hop-next-hop-address"; yang_parent_name = "segment-route-next-hop-table";
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddress::~VrfNextHopNextHopAddress()
{
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddress::has_data() const
{
    return next_hop_address.is_set
	|| bfd_fast_detect.is_set
	|| description.is_set
	|| detect_multiplier.is_set
	|| index_.is_set
	|| load_metric.is_set
	|| metric.is_set
	|| minimum_interval.is_set
	|| object_name.is_set
	|| permanent.is_set
	|| tag.is_set
	|| tunnel_id.is_set
	|| vrf_lable.is_set;
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(next_hop_address.operation)
	|| is_set(bfd_fast_detect.operation)
	|| is_set(description.operation)
	|| is_set(detect_multiplier.operation)
	|| is_set(index_.operation)
	|| is_set(load_metric.operation)
	|| is_set(metric.operation)
	|| is_set(minimum_interval.operation)
	|| is_set(object_name.operation)
	|| is_set(permanent.operation)
	|| is_set(tag.operation)
	|| is_set(tunnel_id.operation)
	|| is_set(vrf_lable.operation);
}

std::string RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-next-hop-next-hop-address" <<"[next-hop-address='" <<next_hop_address <<"']";

    return path_buffer.str();

}

EntityPath RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VrfNextHopNextHopAddress' in Cisco_IOS_XR_ip_static_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop_address.is_set || is_set(next_hop_address.operation)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (bfd_fast_detect.is_set || is_set(bfd_fast_detect.operation)) leaf_name_data.push_back(bfd_fast_detect.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (detect_multiplier.is_set || is_set(detect_multiplier.operation)) leaf_name_data.push_back(detect_multiplier.get_name_leafdata());
    if (index_.is_set || is_set(index_.operation)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.operation)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (minimum_interval.is_set || is_set(minimum_interval.operation)) leaf_name_data.push_back(minimum_interval.get_name_leafdata());
    if (object_name.is_set || is_set(object_name.operation)) leaf_name_data.push_back(object_name.get_name_leafdata());
    if (permanent.is_set || is_set(permanent.operation)) leaf_name_data.push_back(permanent.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (vrf_lable.is_set || is_set(vrf_lable.operation)) leaf_name_data.push_back(vrf_lable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddress::get_children()
{
    return children;
}

void RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
    }
    if(value_path == "bfd-fast-detect")
    {
        bfd_fast_detect = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier = value;
    }
    if(value_path == "index")
    {
        index_ = value;
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "minimum-interval")
    {
        minimum_interval = value;
    }
    if(value_path == "object-name")
    {
        object_name = value;
    }
    if(value_path == "permanent")
    {
        permanent = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable = value;
    }
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddressExplicitPathName::VrfNextHopNextHopAddressExplicitPathName()
    :
    explicit_path_name{YType::str, "explicit-path-name"},
    next_hop_address{YType::str, "next-hop-address"},
    bfd_fast_detect{YType::boolean, "bfd-fast-detect"},
    description{YType::str, "description"},
    detect_multiplier{YType::uint32, "detect-multiplier"},
    index_{YType::str, "index"},
    load_metric{YType::uint32, "load-metric"},
    metric{YType::uint32, "metric"},
    minimum_interval{YType::uint32, "minimum-interval"},
    object_name{YType::str, "object-name"},
    permanent{YType::boolean, "permanent"},
    tag{YType::uint32, "tag"},
    tunnel_id{YType::uint32, "tunnel-id"},
    vrf_lable{YType::uint32, "vrf-lable"}
{
    yang_name = "vrf-next-hop-next-hop-address-explicit-path-name"; yang_parent_name = "segment-route-next-hop-table";
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddressExplicitPathName::~VrfNextHopNextHopAddressExplicitPathName()
{
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddressExplicitPathName::has_data() const
{
    return explicit_path_name.is_set
	|| next_hop_address.is_set
	|| bfd_fast_detect.is_set
	|| description.is_set
	|| detect_multiplier.is_set
	|| index_.is_set
	|| load_metric.is_set
	|| metric.is_set
	|| minimum_interval.is_set
	|| object_name.is_set
	|| permanent.is_set
	|| tag.is_set
	|| tunnel_id.is_set
	|| vrf_lable.is_set;
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddressExplicitPathName::has_operation() const
{
    return is_set(operation)
	|| is_set(explicit_path_name.operation)
	|| is_set(next_hop_address.operation)
	|| is_set(bfd_fast_detect.operation)
	|| is_set(description.operation)
	|| is_set(detect_multiplier.operation)
	|| is_set(index_.operation)
	|| is_set(load_metric.operation)
	|| is_set(metric.operation)
	|| is_set(minimum_interval.operation)
	|| is_set(object_name.operation)
	|| is_set(permanent.operation)
	|| is_set(tag.operation)
	|| is_set(tunnel_id.operation)
	|| is_set(vrf_lable.operation);
}

std::string RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddressExplicitPathName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-next-hop-next-hop-address-explicit-path-name" <<"[explicit-path-name='" <<explicit_path_name <<"']" <<"[next-hop-address='" <<next_hop_address <<"']";

    return path_buffer.str();

}

EntityPath RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddressExplicitPathName::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VrfNextHopNextHopAddressExplicitPathName' in Cisco_IOS_XR_ip_static_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (explicit_path_name.is_set || is_set(explicit_path_name.operation)) leaf_name_data.push_back(explicit_path_name.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.operation)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (bfd_fast_detect.is_set || is_set(bfd_fast_detect.operation)) leaf_name_data.push_back(bfd_fast_detect.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (detect_multiplier.is_set || is_set(detect_multiplier.operation)) leaf_name_data.push_back(detect_multiplier.get_name_leafdata());
    if (index_.is_set || is_set(index_.operation)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.operation)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (minimum_interval.is_set || is_set(minimum_interval.operation)) leaf_name_data.push_back(minimum_interval.get_name_leafdata());
    if (object_name.is_set || is_set(object_name.operation)) leaf_name_data.push_back(object_name.get_name_leafdata());
    if (permanent.is_set || is_set(permanent.operation)) leaf_name_data.push_back(permanent.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (vrf_lable.is_set || is_set(vrf_lable.operation)) leaf_name_data.push_back(vrf_lable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddressExplicitPathName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddressExplicitPathName::get_children()
{
    return children;
}

void RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddressExplicitPathName::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "explicit-path-name")
    {
        explicit_path_name = value;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
    }
    if(value_path == "bfd-fast-detect")
    {
        bfd_fast_detect = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier = value;
    }
    if(value_path == "index")
    {
        index_ = value;
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "minimum-interval")
    {
        minimum_interval = value;
    }
    if(value_path == "object-name")
    {
        object_name = value;
    }
    if(value_path == "permanent")
    {
        permanent = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable = value;
    }
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopExplicitPathName::VrfNextHopExplicitPathName()
    :
    explicit_path_name{YType::str, "explicit-path-name"},
    bfd_fast_detect{YType::boolean, "bfd-fast-detect"},
    description{YType::str, "description"},
    detect_multiplier{YType::uint32, "detect-multiplier"},
    index_{YType::str, "index"},
    load_metric{YType::uint32, "load-metric"},
    metric{YType::uint32, "metric"},
    minimum_interval{YType::uint32, "minimum-interval"},
    object_name{YType::str, "object-name"},
    permanent{YType::boolean, "permanent"},
    tag{YType::uint32, "tag"},
    tunnel_id{YType::uint32, "tunnel-id"},
    vrf_lable{YType::uint32, "vrf-lable"}
{
    yang_name = "vrf-next-hop-explicit-path-name"; yang_parent_name = "segment-route-next-hop-table";
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopExplicitPathName::~VrfNextHopExplicitPathName()
{
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopExplicitPathName::has_data() const
{
    return explicit_path_name.is_set
	|| bfd_fast_detect.is_set
	|| description.is_set
	|| detect_multiplier.is_set
	|| index_.is_set
	|| load_metric.is_set
	|| metric.is_set
	|| minimum_interval.is_set
	|| object_name.is_set
	|| permanent.is_set
	|| tag.is_set
	|| tunnel_id.is_set
	|| vrf_lable.is_set;
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopExplicitPathName::has_operation() const
{
    return is_set(operation)
	|| is_set(explicit_path_name.operation)
	|| is_set(bfd_fast_detect.operation)
	|| is_set(description.operation)
	|| is_set(detect_multiplier.operation)
	|| is_set(index_.operation)
	|| is_set(load_metric.operation)
	|| is_set(metric.operation)
	|| is_set(minimum_interval.operation)
	|| is_set(object_name.operation)
	|| is_set(permanent.operation)
	|| is_set(tag.operation)
	|| is_set(tunnel_id.operation)
	|| is_set(vrf_lable.operation);
}

std::string RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopExplicitPathName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-next-hop-explicit-path-name" <<"[explicit-path-name='" <<explicit_path_name <<"']";

    return path_buffer.str();

}

EntityPath RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopExplicitPathName::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VrfNextHopExplicitPathName' in Cisco_IOS_XR_ip_static_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (explicit_path_name.is_set || is_set(explicit_path_name.operation)) leaf_name_data.push_back(explicit_path_name.get_name_leafdata());
    if (bfd_fast_detect.is_set || is_set(bfd_fast_detect.operation)) leaf_name_data.push_back(bfd_fast_detect.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (detect_multiplier.is_set || is_set(detect_multiplier.operation)) leaf_name_data.push_back(detect_multiplier.get_name_leafdata());
    if (index_.is_set || is_set(index_.operation)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.operation)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (minimum_interval.is_set || is_set(minimum_interval.operation)) leaf_name_data.push_back(minimum_interval.get_name_leafdata());
    if (object_name.is_set || is_set(object_name.operation)) leaf_name_data.push_back(object_name.get_name_leafdata());
    if (permanent.is_set || is_set(permanent.operation)) leaf_name_data.push_back(permanent.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (vrf_lable.is_set || is_set(vrf_lable.operation)) leaf_name_data.push_back(vrf_lable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopExplicitPathName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopExplicitPathName::get_children()
{
    return children;
}

void RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopExplicitPathName::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "explicit-path-name")
    {
        explicit_path_name = value;
    }
    if(value_path == "bfd-fast-detect")
    {
        bfd_fast_detect = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier = value;
    }
    if(value_path == "index")
    {
        index_ = value;
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "minimum-interval")
    {
        minimum_interval = value;
    }
    if(value_path == "object-name")
    {
        object_name = value;
    }
    if(value_path == "permanent")
    {
        permanent = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable = value;
    }
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::DefaultTopology()
    :
    vrf_prefix_topologies(std::make_shared<RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::VrfPrefixTopologies>())
{
    vrf_prefix_topologies->parent = this;
    children["vrf-prefix-topologies"] = vrf_prefix_topologies;

    yang_name = "default-topology"; yang_parent_name = "vrf-multicast";
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::~DefaultTopology()
{
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::has_data() const
{
    return (vrf_prefix_topologies !=  nullptr && vrf_prefix_topologies->has_data());
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::has_operation() const
{
    return is_set(operation)
	|| (vrf_prefix_topologies !=  nullptr && vrf_prefix_topologies->has_operation());
}

std::string RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-topology";

    return path_buffer.str();

}

EntityPath RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DefaultTopology' in Cisco_IOS_XR_ip_static_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "vrf-prefix-topologies")
    {
        if(vrf_prefix_topologies != nullptr)
        {
            children["vrf-prefix-topologies"] = vrf_prefix_topologies;
        }
        else
        {
            vrf_prefix_topologies = std::make_shared<RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::VrfPrefixTopologies>();
            vrf_prefix_topologies->parent = this;
            children["vrf-prefix-topologies"] = vrf_prefix_topologies;
        }
        return children.at("vrf-prefix-topologies");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::get_children()
{
    if(children.find("vrf-prefix-topologies") == children.end())
    {
        if(vrf_prefix_topologies != nullptr)
        {
            children["vrf-prefix-topologies"] = vrf_prefix_topologies;
        }
    }

    return children;
}

void RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::set_value(const std::string & value_path, std::string value)
{
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopologies()
{
    yang_name = "vrf-prefix-topologies"; yang_parent_name = "default-topology";
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::VrfPrefixTopologies::~VrfPrefixTopologies()
{
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::VrfPrefixTopologies::has_data() const
{
    for (std::size_t index=0; index<vrf_prefix_topology.size(); index++)
    {
        if(vrf_prefix_topology[index]->has_data())
            return true;
    }
    return false;
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::VrfPrefixTopologies::has_operation() const
{
    for (std::size_t index=0; index<vrf_prefix_topology.size(); index++)
    {
        if(vrf_prefix_topology[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::VrfPrefixTopologies::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-prefix-topologies";

    return path_buffer.str();

}

EntityPath RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::VrfPrefixTopologies::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VrfPrefixTopologies' in Cisco_IOS_XR_ip_static_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::VrfPrefixTopologies::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "vrf-prefix-topology")
    {
        for(auto const & c : vrf_prefix_topology)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology>();
        c->parent = this;
        vrf_prefix_topology.push_back(std::move(c));
        children[segment_path] = vrf_prefix_topology.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::VrfPrefixTopologies::get_children()
{
    for (auto const & c : vrf_prefix_topology)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::VrfPrefixTopologies::set_value(const std::string & value_path, std::string value)
{
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfPrefixTopology()
    :
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint32, "prefix-length"}
    	,
    vrf_recurse_routes(std::make_shared<RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes>())
	,vrf_route(std::make_shared<RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute>())
	,vrf_seg_route(std::make_shared<RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute>())
{
    vrf_recurse_routes->parent = this;
    children["vrf-recurse-routes"] = vrf_recurse_routes;

    vrf_route->parent = this;
    children["vrf-route"] = vrf_route;

    vrf_seg_route->parent = this;
    children["vrf-seg-route"] = vrf_seg_route;

    yang_name = "vrf-prefix-topology"; yang_parent_name = "vrf-prefix-topologies";
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::~VrfPrefixTopology()
{
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::has_data() const
{
    return prefix.is_set
	|| prefix_length.is_set
	|| (vrf_recurse_routes !=  nullptr && vrf_recurse_routes->has_data())
	|| (vrf_route !=  nullptr && vrf_route->has_data())
	|| (vrf_seg_route !=  nullptr && vrf_seg_route->has_data());
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::has_operation() const
{
    return is_set(operation)
	|| is_set(prefix.operation)
	|| is_set(prefix_length.operation)
	|| (vrf_recurse_routes !=  nullptr && vrf_recurse_routes->has_operation())
	|| (vrf_route !=  nullptr && vrf_route->has_operation())
	|| (vrf_seg_route !=  nullptr && vrf_seg_route->has_operation());
}

std::string RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-prefix-topology" <<"[prefix='" <<prefix <<"']" <<"[prefix-length='" <<prefix_length <<"']";

    return path_buffer.str();

}

EntityPath RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VrfPrefixTopology' in Cisco_IOS_XR_ip_static_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "vrf-recurse-routes")
    {
        if(vrf_recurse_routes != nullptr)
        {
            children["vrf-recurse-routes"] = vrf_recurse_routes;
        }
        else
        {
            vrf_recurse_routes = std::make_shared<RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes>();
            vrf_recurse_routes->parent = this;
            children["vrf-recurse-routes"] = vrf_recurse_routes;
        }
        return children.at("vrf-recurse-routes");
    }

    if(child_yang_name == "vrf-route")
    {
        if(vrf_route != nullptr)
        {
            children["vrf-route"] = vrf_route;
        }
        else
        {
            vrf_route = std::make_shared<RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute>();
            vrf_route->parent = this;
            children["vrf-route"] = vrf_route;
        }
        return children.at("vrf-route");
    }

    if(child_yang_name == "vrf-seg-route")
    {
        if(vrf_seg_route != nullptr)
        {
            children["vrf-seg-route"] = vrf_seg_route;
        }
        else
        {
            vrf_seg_route = std::make_shared<RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute>();
            vrf_seg_route->parent = this;
            children["vrf-seg-route"] = vrf_seg_route;
        }
        return children.at("vrf-seg-route");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::get_children()
{
    if(children.find("vrf-recurse-routes") == children.end())
    {
        if(vrf_recurse_routes != nullptr)
        {
            children["vrf-recurse-routes"] = vrf_recurse_routes;
        }
    }

    if(children.find("vrf-route") == children.end())
    {
        if(vrf_route != nullptr)
        {
            children["vrf-route"] = vrf_route;
        }
    }

    if(children.find("vrf-seg-route") == children.end())
    {
        if(vrf_seg_route != nullptr)
        {
            children["vrf-seg-route"] = vrf_seg_route;
        }
    }

    return children;
}

void RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "prefix")
    {
        prefix = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfRoute()
    :
    vrf_next_hop_table(std::make_shared<RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable>())
{
    vrf_next_hop_table->parent = this;
    children["vrf-next-hop-table"] = vrf_next_hop_table;

    yang_name = "vrf-route"; yang_parent_name = "vrf-prefix-topology";
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::~VrfRoute()
{
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::has_data() const
{
    return (vrf_next_hop_table !=  nullptr && vrf_next_hop_table->has_data());
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::has_operation() const
{
    return is_set(operation)
	|| (vrf_next_hop_table !=  nullptr && vrf_next_hop_table->has_operation());
}

std::string RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-route";

    return path_buffer.str();

}

EntityPath RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VrfRoute' in Cisco_IOS_XR_ip_static_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "vrf-next-hop-table")
    {
        if(vrf_next_hop_table != nullptr)
        {
            children["vrf-next-hop-table"] = vrf_next_hop_table;
        }
        else
        {
            vrf_next_hop_table = std::make_shared<RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable>();
            vrf_next_hop_table->parent = this;
            children["vrf-next-hop-table"] = vrf_next_hop_table;
        }
        return children.at("vrf-next-hop-table");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::get_children()
{
    if(children.find("vrf-next-hop-table") == children.end())
    {
        if(vrf_next_hop_table != nullptr)
        {
            children["vrf-next-hop-table"] = vrf_next_hop_table;
        }
    }

    return children;
}

void RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::set_value(const std::string & value_path, std::string value)
{
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopTable()
{
    yang_name = "vrf-next-hop-table"; yang_parent_name = "vrf-route";
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::~VrfNextHopTable()
{
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::has_data() const
{
    for (std::size_t index=0; index<vrf_next_hop_explicit_path_name.size(); index++)
    {
        if(vrf_next_hop_explicit_path_name[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_interface_name.size(); index++)
    {
        if(vrf_next_hop_interface_name[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_interface_name_next_hop_address.size(); index++)
    {
        if(vrf_next_hop_interface_name_next_hop_address[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_next_hop_address.size(); index++)
    {
        if(vrf_next_hop_next_hop_address[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_next_hop_address_explicit_path_name.size(); index++)
    {
        if(vrf_next_hop_next_hop_address_explicit_path_name[index]->has_data())
            return true;
    }
    return false;
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::has_operation() const
{
    for (std::size_t index=0; index<vrf_next_hop_explicit_path_name.size(); index++)
    {
        if(vrf_next_hop_explicit_path_name[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_interface_name.size(); index++)
    {
        if(vrf_next_hop_interface_name[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_interface_name_next_hop_address.size(); index++)
    {
        if(vrf_next_hop_interface_name_next_hop_address[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_next_hop_address.size(); index++)
    {
        if(vrf_next_hop_next_hop_address[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_next_hop_address_explicit_path_name.size(); index++)
    {
        if(vrf_next_hop_next_hop_address_explicit_path_name[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-next-hop-table";

    return path_buffer.str();

}

EntityPath RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VrfNextHopTable' in Cisco_IOS_XR_ip_static_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "vrf-next-hop-explicit-path-name")
    {
        for(auto const & c : vrf_next_hop_explicit_path_name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopExplicitPathName>();
        c->parent = this;
        vrf_next_hop_explicit_path_name.push_back(std::move(c));
        children[segment_path] = vrf_next_hop_explicit_path_name.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "vrf-next-hop-interface-name")
    {
        for(auto const & c : vrf_next_hop_interface_name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceName>();
        c->parent = this;
        vrf_next_hop_interface_name.push_back(std::move(c));
        children[segment_path] = vrf_next_hop_interface_name.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "vrf-next-hop-interface-name-next-hop-address")
    {
        for(auto const & c : vrf_next_hop_interface_name_next_hop_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceNameNextHopAddress>();
        c->parent = this;
        vrf_next_hop_interface_name_next_hop_address.push_back(std::move(c));
        children[segment_path] = vrf_next_hop_interface_name_next_hop_address.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "vrf-next-hop-next-hop-address")
    {
        for(auto const & c : vrf_next_hop_next_hop_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddress>();
        c->parent = this;
        vrf_next_hop_next_hop_address.push_back(std::move(c));
        children[segment_path] = vrf_next_hop_next_hop_address.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "vrf-next-hop-next-hop-address-explicit-path-name")
    {
        for(auto const & c : vrf_next_hop_next_hop_address_explicit_path_name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddressExplicitPathName>();
        c->parent = this;
        vrf_next_hop_next_hop_address_explicit_path_name.push_back(std::move(c));
        children[segment_path] = vrf_next_hop_next_hop_address_explicit_path_name.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::get_children()
{
    for (auto const & c : vrf_next_hop_explicit_path_name)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : vrf_next_hop_interface_name)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : vrf_next_hop_interface_name_next_hop_address)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : vrf_next_hop_next_hop_address)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : vrf_next_hop_next_hop_address_explicit_path_name)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::set_value(const std::string & value_path, std::string value)
{
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceName::VrfNextHopInterfaceName()
    :
    interface_name{YType::str, "interface-name"},
    bfd_fast_detect{YType::boolean, "bfd-fast-detect"},
    description{YType::str, "description"},
    detect_multiplier{YType::uint32, "detect-multiplier"},
    index_{YType::str, "index"},
    load_metric{YType::uint32, "load-metric"},
    metric{YType::uint32, "metric"},
    minimum_interval{YType::uint32, "minimum-interval"},
    object_name{YType::str, "object-name"},
    permanent{YType::boolean, "permanent"},
    tag{YType::uint32, "tag"},
    tunnel_id{YType::uint32, "tunnel-id"},
    vrf_lable{YType::uint32, "vrf-lable"}
{
    yang_name = "vrf-next-hop-interface-name"; yang_parent_name = "vrf-next-hop-table";
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceName::~VrfNextHopInterfaceName()
{
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceName::has_data() const
{
    return interface_name.is_set
	|| bfd_fast_detect.is_set
	|| description.is_set
	|| detect_multiplier.is_set
	|| index_.is_set
	|| load_metric.is_set
	|| metric.is_set
	|| minimum_interval.is_set
	|| object_name.is_set
	|| permanent.is_set
	|| tag.is_set
	|| tunnel_id.is_set
	|| vrf_lable.is_set;
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceName::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(bfd_fast_detect.operation)
	|| is_set(description.operation)
	|| is_set(detect_multiplier.operation)
	|| is_set(index_.operation)
	|| is_set(load_metric.operation)
	|| is_set(metric.operation)
	|| is_set(minimum_interval.operation)
	|| is_set(object_name.operation)
	|| is_set(permanent.operation)
	|| is_set(tag.operation)
	|| is_set(tunnel_id.operation)
	|| is_set(vrf_lable.operation);
}

std::string RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-next-hop-interface-name" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

EntityPath RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceName::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VrfNextHopInterfaceName' in Cisco_IOS_XR_ip_static_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (bfd_fast_detect.is_set || is_set(bfd_fast_detect.operation)) leaf_name_data.push_back(bfd_fast_detect.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (detect_multiplier.is_set || is_set(detect_multiplier.operation)) leaf_name_data.push_back(detect_multiplier.get_name_leafdata());
    if (index_.is_set || is_set(index_.operation)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.operation)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (minimum_interval.is_set || is_set(minimum_interval.operation)) leaf_name_data.push_back(minimum_interval.get_name_leafdata());
    if (object_name.is_set || is_set(object_name.operation)) leaf_name_data.push_back(object_name.get_name_leafdata());
    if (permanent.is_set || is_set(permanent.operation)) leaf_name_data.push_back(permanent.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (vrf_lable.is_set || is_set(vrf_lable.operation)) leaf_name_data.push_back(vrf_lable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceName::get_children()
{
    return children;
}

void RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceName::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "bfd-fast-detect")
    {
        bfd_fast_detect = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier = value;
    }
    if(value_path == "index")
    {
        index_ = value;
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "minimum-interval")
    {
        minimum_interval = value;
    }
    if(value_path == "object-name")
    {
        object_name = value;
    }
    if(value_path == "permanent")
    {
        permanent = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable = value;
    }
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceNameNextHopAddress::VrfNextHopInterfaceNameNextHopAddress()
    :
    interface_name{YType::str, "interface-name"},
    next_hop_address{YType::str, "next-hop-address"},
    bfd_fast_detect{YType::boolean, "bfd-fast-detect"},
    description{YType::str, "description"},
    detect_multiplier{YType::uint32, "detect-multiplier"},
    index_{YType::str, "index"},
    load_metric{YType::uint32, "load-metric"},
    metric{YType::uint32, "metric"},
    minimum_interval{YType::uint32, "minimum-interval"},
    object_name{YType::str, "object-name"},
    permanent{YType::boolean, "permanent"},
    tag{YType::uint32, "tag"},
    tunnel_id{YType::uint32, "tunnel-id"},
    vrf_lable{YType::uint32, "vrf-lable"}
{
    yang_name = "vrf-next-hop-interface-name-next-hop-address"; yang_parent_name = "vrf-next-hop-table";
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceNameNextHopAddress::~VrfNextHopInterfaceNameNextHopAddress()
{
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceNameNextHopAddress::has_data() const
{
    return interface_name.is_set
	|| next_hop_address.is_set
	|| bfd_fast_detect.is_set
	|| description.is_set
	|| detect_multiplier.is_set
	|| index_.is_set
	|| load_metric.is_set
	|| metric.is_set
	|| minimum_interval.is_set
	|| object_name.is_set
	|| permanent.is_set
	|| tag.is_set
	|| tunnel_id.is_set
	|| vrf_lable.is_set;
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceNameNextHopAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(next_hop_address.operation)
	|| is_set(bfd_fast_detect.operation)
	|| is_set(description.operation)
	|| is_set(detect_multiplier.operation)
	|| is_set(index_.operation)
	|| is_set(load_metric.operation)
	|| is_set(metric.operation)
	|| is_set(minimum_interval.operation)
	|| is_set(object_name.operation)
	|| is_set(permanent.operation)
	|| is_set(tag.operation)
	|| is_set(tunnel_id.operation)
	|| is_set(vrf_lable.operation);
}

std::string RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceNameNextHopAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-next-hop-interface-name-next-hop-address" <<"[interface-name='" <<interface_name <<"']" <<"[next-hop-address='" <<next_hop_address <<"']";

    return path_buffer.str();

}

EntityPath RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceNameNextHopAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VrfNextHopInterfaceNameNextHopAddress' in Cisco_IOS_XR_ip_static_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.operation)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (bfd_fast_detect.is_set || is_set(bfd_fast_detect.operation)) leaf_name_data.push_back(bfd_fast_detect.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (detect_multiplier.is_set || is_set(detect_multiplier.operation)) leaf_name_data.push_back(detect_multiplier.get_name_leafdata());
    if (index_.is_set || is_set(index_.operation)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.operation)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (minimum_interval.is_set || is_set(minimum_interval.operation)) leaf_name_data.push_back(minimum_interval.get_name_leafdata());
    if (object_name.is_set || is_set(object_name.operation)) leaf_name_data.push_back(object_name.get_name_leafdata());
    if (permanent.is_set || is_set(permanent.operation)) leaf_name_data.push_back(permanent.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (vrf_lable.is_set || is_set(vrf_lable.operation)) leaf_name_data.push_back(vrf_lable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceNameNextHopAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceNameNextHopAddress::get_children()
{
    return children;
}

void RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceNameNextHopAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
    }
    if(value_path == "bfd-fast-detect")
    {
        bfd_fast_detect = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier = value;
    }
    if(value_path == "index")
    {
        index_ = value;
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "minimum-interval")
    {
        minimum_interval = value;
    }
    if(value_path == "object-name")
    {
        object_name = value;
    }
    if(value_path == "permanent")
    {
        permanent = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable = value;
    }
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddress::VrfNextHopNextHopAddress()
    :
    next_hop_address{YType::str, "next-hop-address"},
    bfd_fast_detect{YType::boolean, "bfd-fast-detect"},
    description{YType::str, "description"},
    detect_multiplier{YType::uint32, "detect-multiplier"},
    index_{YType::str, "index"},
    load_metric{YType::uint32, "load-metric"},
    metric{YType::uint32, "metric"},
    minimum_interval{YType::uint32, "minimum-interval"},
    object_name{YType::str, "object-name"},
    permanent{YType::boolean, "permanent"},
    tag{YType::uint32, "tag"},
    tunnel_id{YType::uint32, "tunnel-id"},
    vrf_lable{YType::uint32, "vrf-lable"}
{
    yang_name = "vrf-next-hop-next-hop-address"; yang_parent_name = "vrf-next-hop-table";
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddress::~VrfNextHopNextHopAddress()
{
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddress::has_data() const
{
    return next_hop_address.is_set
	|| bfd_fast_detect.is_set
	|| description.is_set
	|| detect_multiplier.is_set
	|| index_.is_set
	|| load_metric.is_set
	|| metric.is_set
	|| minimum_interval.is_set
	|| object_name.is_set
	|| permanent.is_set
	|| tag.is_set
	|| tunnel_id.is_set
	|| vrf_lable.is_set;
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(next_hop_address.operation)
	|| is_set(bfd_fast_detect.operation)
	|| is_set(description.operation)
	|| is_set(detect_multiplier.operation)
	|| is_set(index_.operation)
	|| is_set(load_metric.operation)
	|| is_set(metric.operation)
	|| is_set(minimum_interval.operation)
	|| is_set(object_name.operation)
	|| is_set(permanent.operation)
	|| is_set(tag.operation)
	|| is_set(tunnel_id.operation)
	|| is_set(vrf_lable.operation);
}

std::string RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-next-hop-next-hop-address" <<"[next-hop-address='" <<next_hop_address <<"']";

    return path_buffer.str();

}

EntityPath RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VrfNextHopNextHopAddress' in Cisco_IOS_XR_ip_static_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop_address.is_set || is_set(next_hop_address.operation)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (bfd_fast_detect.is_set || is_set(bfd_fast_detect.operation)) leaf_name_data.push_back(bfd_fast_detect.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (detect_multiplier.is_set || is_set(detect_multiplier.operation)) leaf_name_data.push_back(detect_multiplier.get_name_leafdata());
    if (index_.is_set || is_set(index_.operation)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.operation)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (minimum_interval.is_set || is_set(minimum_interval.operation)) leaf_name_data.push_back(minimum_interval.get_name_leafdata());
    if (object_name.is_set || is_set(object_name.operation)) leaf_name_data.push_back(object_name.get_name_leafdata());
    if (permanent.is_set || is_set(permanent.operation)) leaf_name_data.push_back(permanent.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (vrf_lable.is_set || is_set(vrf_lable.operation)) leaf_name_data.push_back(vrf_lable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddress::get_children()
{
    return children;
}

void RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
    }
    if(value_path == "bfd-fast-detect")
    {
        bfd_fast_detect = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier = value;
    }
    if(value_path == "index")
    {
        index_ = value;
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "minimum-interval")
    {
        minimum_interval = value;
    }
    if(value_path == "object-name")
    {
        object_name = value;
    }
    if(value_path == "permanent")
    {
        permanent = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable = value;
    }
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddressExplicitPathName::VrfNextHopNextHopAddressExplicitPathName()
    :
    explicit_path_name{YType::str, "explicit-path-name"},
    next_hop_address{YType::str, "next-hop-address"},
    bfd_fast_detect{YType::boolean, "bfd-fast-detect"},
    description{YType::str, "description"},
    detect_multiplier{YType::uint32, "detect-multiplier"},
    index_{YType::str, "index"},
    load_metric{YType::uint32, "load-metric"},
    metric{YType::uint32, "metric"},
    minimum_interval{YType::uint32, "minimum-interval"},
    object_name{YType::str, "object-name"},
    permanent{YType::boolean, "permanent"},
    tag{YType::uint32, "tag"},
    tunnel_id{YType::uint32, "tunnel-id"},
    vrf_lable{YType::uint32, "vrf-lable"}
{
    yang_name = "vrf-next-hop-next-hop-address-explicit-path-name"; yang_parent_name = "vrf-next-hop-table";
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddressExplicitPathName::~VrfNextHopNextHopAddressExplicitPathName()
{
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddressExplicitPathName::has_data() const
{
    return explicit_path_name.is_set
	|| next_hop_address.is_set
	|| bfd_fast_detect.is_set
	|| description.is_set
	|| detect_multiplier.is_set
	|| index_.is_set
	|| load_metric.is_set
	|| metric.is_set
	|| minimum_interval.is_set
	|| object_name.is_set
	|| permanent.is_set
	|| tag.is_set
	|| tunnel_id.is_set
	|| vrf_lable.is_set;
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddressExplicitPathName::has_operation() const
{
    return is_set(operation)
	|| is_set(explicit_path_name.operation)
	|| is_set(next_hop_address.operation)
	|| is_set(bfd_fast_detect.operation)
	|| is_set(description.operation)
	|| is_set(detect_multiplier.operation)
	|| is_set(index_.operation)
	|| is_set(load_metric.operation)
	|| is_set(metric.operation)
	|| is_set(minimum_interval.operation)
	|| is_set(object_name.operation)
	|| is_set(permanent.operation)
	|| is_set(tag.operation)
	|| is_set(tunnel_id.operation)
	|| is_set(vrf_lable.operation);
}

std::string RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddressExplicitPathName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-next-hop-next-hop-address-explicit-path-name" <<"[explicit-path-name='" <<explicit_path_name <<"']" <<"[next-hop-address='" <<next_hop_address <<"']";

    return path_buffer.str();

}

EntityPath RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddressExplicitPathName::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VrfNextHopNextHopAddressExplicitPathName' in Cisco_IOS_XR_ip_static_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (explicit_path_name.is_set || is_set(explicit_path_name.operation)) leaf_name_data.push_back(explicit_path_name.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.operation)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (bfd_fast_detect.is_set || is_set(bfd_fast_detect.operation)) leaf_name_data.push_back(bfd_fast_detect.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (detect_multiplier.is_set || is_set(detect_multiplier.operation)) leaf_name_data.push_back(detect_multiplier.get_name_leafdata());
    if (index_.is_set || is_set(index_.operation)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.operation)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (minimum_interval.is_set || is_set(minimum_interval.operation)) leaf_name_data.push_back(minimum_interval.get_name_leafdata());
    if (object_name.is_set || is_set(object_name.operation)) leaf_name_data.push_back(object_name.get_name_leafdata());
    if (permanent.is_set || is_set(permanent.operation)) leaf_name_data.push_back(permanent.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (vrf_lable.is_set || is_set(vrf_lable.operation)) leaf_name_data.push_back(vrf_lable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddressExplicitPathName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddressExplicitPathName::get_children()
{
    return children;
}

void RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddressExplicitPathName::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "explicit-path-name")
    {
        explicit_path_name = value;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
    }
    if(value_path == "bfd-fast-detect")
    {
        bfd_fast_detect = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier = value;
    }
    if(value_path == "index")
    {
        index_ = value;
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "minimum-interval")
    {
        minimum_interval = value;
    }
    if(value_path == "object-name")
    {
        object_name = value;
    }
    if(value_path == "permanent")
    {
        permanent = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable = value;
    }
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopExplicitPathName::VrfNextHopExplicitPathName()
    :
    explicit_path_name{YType::str, "explicit-path-name"},
    bfd_fast_detect{YType::boolean, "bfd-fast-detect"},
    description{YType::str, "description"},
    detect_multiplier{YType::uint32, "detect-multiplier"},
    index_{YType::str, "index"},
    load_metric{YType::uint32, "load-metric"},
    metric{YType::uint32, "metric"},
    minimum_interval{YType::uint32, "minimum-interval"},
    object_name{YType::str, "object-name"},
    permanent{YType::boolean, "permanent"},
    tag{YType::uint32, "tag"},
    tunnel_id{YType::uint32, "tunnel-id"},
    vrf_lable{YType::uint32, "vrf-lable"}
{
    yang_name = "vrf-next-hop-explicit-path-name"; yang_parent_name = "vrf-next-hop-table";
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopExplicitPathName::~VrfNextHopExplicitPathName()
{
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopExplicitPathName::has_data() const
{
    return explicit_path_name.is_set
	|| bfd_fast_detect.is_set
	|| description.is_set
	|| detect_multiplier.is_set
	|| index_.is_set
	|| load_metric.is_set
	|| metric.is_set
	|| minimum_interval.is_set
	|| object_name.is_set
	|| permanent.is_set
	|| tag.is_set
	|| tunnel_id.is_set
	|| vrf_lable.is_set;
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopExplicitPathName::has_operation() const
{
    return is_set(operation)
	|| is_set(explicit_path_name.operation)
	|| is_set(bfd_fast_detect.operation)
	|| is_set(description.operation)
	|| is_set(detect_multiplier.operation)
	|| is_set(index_.operation)
	|| is_set(load_metric.operation)
	|| is_set(metric.operation)
	|| is_set(minimum_interval.operation)
	|| is_set(object_name.operation)
	|| is_set(permanent.operation)
	|| is_set(tag.operation)
	|| is_set(tunnel_id.operation)
	|| is_set(vrf_lable.operation);
}

std::string RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopExplicitPathName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-next-hop-explicit-path-name" <<"[explicit-path-name='" <<explicit_path_name <<"']";

    return path_buffer.str();

}

EntityPath RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopExplicitPathName::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VrfNextHopExplicitPathName' in Cisco_IOS_XR_ip_static_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (explicit_path_name.is_set || is_set(explicit_path_name.operation)) leaf_name_data.push_back(explicit_path_name.get_name_leafdata());
    if (bfd_fast_detect.is_set || is_set(bfd_fast_detect.operation)) leaf_name_data.push_back(bfd_fast_detect.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (detect_multiplier.is_set || is_set(detect_multiplier.operation)) leaf_name_data.push_back(detect_multiplier.get_name_leafdata());
    if (index_.is_set || is_set(index_.operation)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.operation)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (minimum_interval.is_set || is_set(minimum_interval.operation)) leaf_name_data.push_back(minimum_interval.get_name_leafdata());
    if (object_name.is_set || is_set(object_name.operation)) leaf_name_data.push_back(object_name.get_name_leafdata());
    if (permanent.is_set || is_set(permanent.operation)) leaf_name_data.push_back(permanent.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (vrf_lable.is_set || is_set(vrf_lable.operation)) leaf_name_data.push_back(vrf_lable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopExplicitPathName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopExplicitPathName::get_children()
{
    return children;
}

void RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopExplicitPathName::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "explicit-path-name")
    {
        explicit_path_name = value;
    }
    if(value_path == "bfd-fast-detect")
    {
        bfd_fast_detect = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier = value;
    }
    if(value_path == "index")
    {
        index_ = value;
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "minimum-interval")
    {
        minimum_interval = value;
    }
    if(value_path == "object-name")
    {
        object_name = value;
    }
    if(value_path == "permanent")
    {
        permanent = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable = value;
    }
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoutes()
{
    yang_name = "vrf-recurse-routes"; yang_parent_name = "vrf-prefix-topology";
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::~VrfRecurseRoutes()
{
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::has_data() const
{
    for (std::size_t index=0; index<vrf_recurse_route.size(); index++)
    {
        if(vrf_recurse_route[index]->has_data())
            return true;
    }
    return false;
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::has_operation() const
{
    for (std::size_t index=0; index<vrf_recurse_route.size(); index++)
    {
        if(vrf_recurse_route[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-recurse-routes";

    return path_buffer.str();

}

EntityPath RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VrfRecurseRoutes' in Cisco_IOS_XR_ip_static_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "vrf-recurse-route")
    {
        for(auto const & c : vrf_recurse_route)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute>();
        c->parent = this;
        vrf_recurse_route.push_back(std::move(c));
        children[segment_path] = vrf_recurse_route.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::get_children()
{
    for (auto const & c : vrf_recurse_route)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::set_value(const std::string & value_path, std::string value)
{
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecurseRoute()
    :
    vrf_name{YType::str, "vrf-name"}
    	,
    vrf_recursive_next_hop_table(std::make_shared<RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable>())
{
    vrf_recursive_next_hop_table->parent = this;
    children["vrf-recursive-next-hop-table"] = vrf_recursive_next_hop_table;

    yang_name = "vrf-recurse-route"; yang_parent_name = "vrf-recurse-routes";
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::~VrfRecurseRoute()
{
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::has_data() const
{
    return vrf_name.is_set
	|| (vrf_recursive_next_hop_table !=  nullptr && vrf_recursive_next_hop_table->has_data());
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::has_operation() const
{
    return is_set(operation)
	|| is_set(vrf_name.operation)
	|| (vrf_recursive_next_hop_table !=  nullptr && vrf_recursive_next_hop_table->has_operation());
}

std::string RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-recurse-route" <<"[vrf-name='" <<vrf_name <<"']";

    return path_buffer.str();

}

EntityPath RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VrfRecurseRoute' in Cisco_IOS_XR_ip_static_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "vrf-recursive-next-hop-table")
    {
        if(vrf_recursive_next_hop_table != nullptr)
        {
            children["vrf-recursive-next-hop-table"] = vrf_recursive_next_hop_table;
        }
        else
        {
            vrf_recursive_next_hop_table = std::make_shared<RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable>();
            vrf_recursive_next_hop_table->parent = this;
            children["vrf-recursive-next-hop-table"] = vrf_recursive_next_hop_table;
        }
        return children.at("vrf-recursive-next-hop-table");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::get_children()
{
    if(children.find("vrf-recursive-next-hop-table") == children.end())
    {
        if(vrf_recursive_next_hop_table != nullptr)
        {
            children["vrf-recursive-next-hop-table"] = vrf_recursive_next_hop_table;
        }
    }

    return children;
}

void RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfRecursiveNextHopTable()
{
    yang_name = "vrf-recursive-next-hop-table"; yang_parent_name = "vrf-recurse-route";
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::~VrfRecursiveNextHopTable()
{
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::has_data() const
{
    for (std::size_t index=0; index<vrf_next_hop_explicit_path_name.size(); index++)
    {
        if(vrf_next_hop_explicit_path_name[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_interface_name.size(); index++)
    {
        if(vrf_next_hop_interface_name[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_interface_name_next_hop_address.size(); index++)
    {
        if(vrf_next_hop_interface_name_next_hop_address[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_next_hop_address.size(); index++)
    {
        if(vrf_next_hop_next_hop_address[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_next_hop_address_explicit_path_name.size(); index++)
    {
        if(vrf_next_hop_next_hop_address_explicit_path_name[index]->has_data())
            return true;
    }
    return false;
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::has_operation() const
{
    for (std::size_t index=0; index<vrf_next_hop_explicit_path_name.size(); index++)
    {
        if(vrf_next_hop_explicit_path_name[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_interface_name.size(); index++)
    {
        if(vrf_next_hop_interface_name[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_interface_name_next_hop_address.size(); index++)
    {
        if(vrf_next_hop_interface_name_next_hop_address[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_next_hop_address.size(); index++)
    {
        if(vrf_next_hop_next_hop_address[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vrf_next_hop_next_hop_address_explicit_path_name.size(); index++)
    {
        if(vrf_next_hop_next_hop_address_explicit_path_name[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-recursive-next-hop-table";

    return path_buffer.str();

}

EntityPath RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VrfRecursiveNextHopTable' in Cisco_IOS_XR_ip_static_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "vrf-next-hop-explicit-path-name")
    {
        for(auto const & c : vrf_next_hop_explicit_path_name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopExplicitPathName>();
        c->parent = this;
        vrf_next_hop_explicit_path_name.push_back(std::move(c));
        children[segment_path] = vrf_next_hop_explicit_path_name.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "vrf-next-hop-interface-name")
    {
        for(auto const & c : vrf_next_hop_interface_name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceName>();
        c->parent = this;
        vrf_next_hop_interface_name.push_back(std::move(c));
        children[segment_path] = vrf_next_hop_interface_name.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "vrf-next-hop-interface-name-next-hop-address")
    {
        for(auto const & c : vrf_next_hop_interface_name_next_hop_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceNameNextHopAddress>();
        c->parent = this;
        vrf_next_hop_interface_name_next_hop_address.push_back(std::move(c));
        children[segment_path] = vrf_next_hop_interface_name_next_hop_address.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "vrf-next-hop-next-hop-address")
    {
        for(auto const & c : vrf_next_hop_next_hop_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddress>();
        c->parent = this;
        vrf_next_hop_next_hop_address.push_back(std::move(c));
        children[segment_path] = vrf_next_hop_next_hop_address.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "vrf-next-hop-next-hop-address-explicit-path-name")
    {
        for(auto const & c : vrf_next_hop_next_hop_address_explicit_path_name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddressExplicitPathName>();
        c->parent = this;
        vrf_next_hop_next_hop_address_explicit_path_name.push_back(std::move(c));
        children[segment_path] = vrf_next_hop_next_hop_address_explicit_path_name.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::get_children()
{
    for (auto const & c : vrf_next_hop_explicit_path_name)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : vrf_next_hop_interface_name)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : vrf_next_hop_interface_name_next_hop_address)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : vrf_next_hop_next_hop_address)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : vrf_next_hop_next_hop_address_explicit_path_name)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::set_value(const std::string & value_path, std::string value)
{
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceName::VrfNextHopInterfaceName()
    :
    interface_name{YType::str, "interface-name"},
    bfd_fast_detect{YType::boolean, "bfd-fast-detect"},
    description{YType::str, "description"},
    detect_multiplier{YType::uint32, "detect-multiplier"},
    index_{YType::str, "index"},
    load_metric{YType::uint32, "load-metric"},
    metric{YType::uint32, "metric"},
    minimum_interval{YType::uint32, "minimum-interval"},
    object_name{YType::str, "object-name"},
    permanent{YType::boolean, "permanent"},
    tag{YType::uint32, "tag"},
    tunnel_id{YType::uint32, "tunnel-id"},
    vrf_lable{YType::uint32, "vrf-lable"}
{
    yang_name = "vrf-next-hop-interface-name"; yang_parent_name = "vrf-recursive-next-hop-table";
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceName::~VrfNextHopInterfaceName()
{
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceName::has_data() const
{
    return interface_name.is_set
	|| bfd_fast_detect.is_set
	|| description.is_set
	|| detect_multiplier.is_set
	|| index_.is_set
	|| load_metric.is_set
	|| metric.is_set
	|| minimum_interval.is_set
	|| object_name.is_set
	|| permanent.is_set
	|| tag.is_set
	|| tunnel_id.is_set
	|| vrf_lable.is_set;
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceName::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(bfd_fast_detect.operation)
	|| is_set(description.operation)
	|| is_set(detect_multiplier.operation)
	|| is_set(index_.operation)
	|| is_set(load_metric.operation)
	|| is_set(metric.operation)
	|| is_set(minimum_interval.operation)
	|| is_set(object_name.operation)
	|| is_set(permanent.operation)
	|| is_set(tag.operation)
	|| is_set(tunnel_id.operation)
	|| is_set(vrf_lable.operation);
}

std::string RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-next-hop-interface-name" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

EntityPath RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceName::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VrfNextHopInterfaceName' in Cisco_IOS_XR_ip_static_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (bfd_fast_detect.is_set || is_set(bfd_fast_detect.operation)) leaf_name_data.push_back(bfd_fast_detect.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (detect_multiplier.is_set || is_set(detect_multiplier.operation)) leaf_name_data.push_back(detect_multiplier.get_name_leafdata());
    if (index_.is_set || is_set(index_.operation)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.operation)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (minimum_interval.is_set || is_set(minimum_interval.operation)) leaf_name_data.push_back(minimum_interval.get_name_leafdata());
    if (object_name.is_set || is_set(object_name.operation)) leaf_name_data.push_back(object_name.get_name_leafdata());
    if (permanent.is_set || is_set(permanent.operation)) leaf_name_data.push_back(permanent.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (vrf_lable.is_set || is_set(vrf_lable.operation)) leaf_name_data.push_back(vrf_lable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceName::get_children()
{
    return children;
}

void RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceName::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "bfd-fast-detect")
    {
        bfd_fast_detect = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier = value;
    }
    if(value_path == "index")
    {
        index_ = value;
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "minimum-interval")
    {
        minimum_interval = value;
    }
    if(value_path == "object-name")
    {
        object_name = value;
    }
    if(value_path == "permanent")
    {
        permanent = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable = value;
    }
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceNameNextHopAddress::VrfNextHopInterfaceNameNextHopAddress()
    :
    interface_name{YType::str, "interface-name"},
    next_hop_address{YType::str, "next-hop-address"},
    bfd_fast_detect{YType::boolean, "bfd-fast-detect"},
    description{YType::str, "description"},
    detect_multiplier{YType::uint32, "detect-multiplier"},
    index_{YType::str, "index"},
    load_metric{YType::uint32, "load-metric"},
    metric{YType::uint32, "metric"},
    minimum_interval{YType::uint32, "minimum-interval"},
    object_name{YType::str, "object-name"},
    permanent{YType::boolean, "permanent"},
    tag{YType::uint32, "tag"},
    tunnel_id{YType::uint32, "tunnel-id"},
    vrf_lable{YType::uint32, "vrf-lable"}
{
    yang_name = "vrf-next-hop-interface-name-next-hop-address"; yang_parent_name = "vrf-recursive-next-hop-table";
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceNameNextHopAddress::~VrfNextHopInterfaceNameNextHopAddress()
{
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceNameNextHopAddress::has_data() const
{
    return interface_name.is_set
	|| next_hop_address.is_set
	|| bfd_fast_detect.is_set
	|| description.is_set
	|| detect_multiplier.is_set
	|| index_.is_set
	|| load_metric.is_set
	|| metric.is_set
	|| minimum_interval.is_set
	|| object_name.is_set
	|| permanent.is_set
	|| tag.is_set
	|| tunnel_id.is_set
	|| vrf_lable.is_set;
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceNameNextHopAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(next_hop_address.operation)
	|| is_set(bfd_fast_detect.operation)
	|| is_set(description.operation)
	|| is_set(detect_multiplier.operation)
	|| is_set(index_.operation)
	|| is_set(load_metric.operation)
	|| is_set(metric.operation)
	|| is_set(minimum_interval.operation)
	|| is_set(object_name.operation)
	|| is_set(permanent.operation)
	|| is_set(tag.operation)
	|| is_set(tunnel_id.operation)
	|| is_set(vrf_lable.operation);
}

std::string RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceNameNextHopAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-next-hop-interface-name-next-hop-address" <<"[interface-name='" <<interface_name <<"']" <<"[next-hop-address='" <<next_hop_address <<"']";

    return path_buffer.str();

}

EntityPath RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceNameNextHopAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VrfNextHopInterfaceNameNextHopAddress' in Cisco_IOS_XR_ip_static_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.operation)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (bfd_fast_detect.is_set || is_set(bfd_fast_detect.operation)) leaf_name_data.push_back(bfd_fast_detect.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (detect_multiplier.is_set || is_set(detect_multiplier.operation)) leaf_name_data.push_back(detect_multiplier.get_name_leafdata());
    if (index_.is_set || is_set(index_.operation)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.operation)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (minimum_interval.is_set || is_set(minimum_interval.operation)) leaf_name_data.push_back(minimum_interval.get_name_leafdata());
    if (object_name.is_set || is_set(object_name.operation)) leaf_name_data.push_back(object_name.get_name_leafdata());
    if (permanent.is_set || is_set(permanent.operation)) leaf_name_data.push_back(permanent.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (vrf_lable.is_set || is_set(vrf_lable.operation)) leaf_name_data.push_back(vrf_lable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceNameNextHopAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceNameNextHopAddress::get_children()
{
    return children;
}

void RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceNameNextHopAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
    }
    if(value_path == "bfd-fast-detect")
    {
        bfd_fast_detect = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier = value;
    }
    if(value_path == "index")
    {
        index_ = value;
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "minimum-interval")
    {
        minimum_interval = value;
    }
    if(value_path == "object-name")
    {
        object_name = value;
    }
    if(value_path == "permanent")
    {
        permanent = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable = value;
    }
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddress::VrfNextHopNextHopAddress()
    :
    next_hop_address{YType::str, "next-hop-address"},
    bfd_fast_detect{YType::boolean, "bfd-fast-detect"},
    description{YType::str, "description"},
    detect_multiplier{YType::uint32, "detect-multiplier"},
    index_{YType::str, "index"},
    load_metric{YType::uint32, "load-metric"},
    metric{YType::uint32, "metric"},
    minimum_interval{YType::uint32, "minimum-interval"},
    object_name{YType::str, "object-name"},
    permanent{YType::boolean, "permanent"},
    tag{YType::uint32, "tag"},
    tunnel_id{YType::uint32, "tunnel-id"},
    vrf_lable{YType::uint32, "vrf-lable"}
{
    yang_name = "vrf-next-hop-next-hop-address"; yang_parent_name = "vrf-recursive-next-hop-table";
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddress::~VrfNextHopNextHopAddress()
{
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddress::has_data() const
{
    return next_hop_address.is_set
	|| bfd_fast_detect.is_set
	|| description.is_set
	|| detect_multiplier.is_set
	|| index_.is_set
	|| load_metric.is_set
	|| metric.is_set
	|| minimum_interval.is_set
	|| object_name.is_set
	|| permanent.is_set
	|| tag.is_set
	|| tunnel_id.is_set
	|| vrf_lable.is_set;
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(next_hop_address.operation)
	|| is_set(bfd_fast_detect.operation)
	|| is_set(description.operation)
	|| is_set(detect_multiplier.operation)
	|| is_set(index_.operation)
	|| is_set(load_metric.operation)
	|| is_set(metric.operation)
	|| is_set(minimum_interval.operation)
	|| is_set(object_name.operation)
	|| is_set(permanent.operation)
	|| is_set(tag.operation)
	|| is_set(tunnel_id.operation)
	|| is_set(vrf_lable.operation);
}

std::string RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-next-hop-next-hop-address" <<"[next-hop-address='" <<next_hop_address <<"']";

    return path_buffer.str();

}

EntityPath RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VrfNextHopNextHopAddress' in Cisco_IOS_XR_ip_static_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop_address.is_set || is_set(next_hop_address.operation)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (bfd_fast_detect.is_set || is_set(bfd_fast_detect.operation)) leaf_name_data.push_back(bfd_fast_detect.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (detect_multiplier.is_set || is_set(detect_multiplier.operation)) leaf_name_data.push_back(detect_multiplier.get_name_leafdata());
    if (index_.is_set || is_set(index_.operation)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.operation)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (minimum_interval.is_set || is_set(minimum_interval.operation)) leaf_name_data.push_back(minimum_interval.get_name_leafdata());
    if (object_name.is_set || is_set(object_name.operation)) leaf_name_data.push_back(object_name.get_name_leafdata());
    if (permanent.is_set || is_set(permanent.operation)) leaf_name_data.push_back(permanent.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (vrf_lable.is_set || is_set(vrf_lable.operation)) leaf_name_data.push_back(vrf_lable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddress::get_children()
{
    return children;
}

void RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
    }
    if(value_path == "bfd-fast-detect")
    {
        bfd_fast_detect = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier = value;
    }
    if(value_path == "index")
    {
        index_ = value;
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "minimum-interval")
    {
        minimum_interval = value;
    }
    if(value_path == "object-name")
    {
        object_name = value;
    }
    if(value_path == "permanent")
    {
        permanent = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable = value;
    }
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddressExplicitPathName::VrfNextHopNextHopAddressExplicitPathName()
    :
    explicit_path_name{YType::str, "explicit-path-name"},
    next_hop_address{YType::str, "next-hop-address"},
    bfd_fast_detect{YType::boolean, "bfd-fast-detect"},
    description{YType::str, "description"},
    detect_multiplier{YType::uint32, "detect-multiplier"},
    index_{YType::str, "index"},
    load_metric{YType::uint32, "load-metric"},
    metric{YType::uint32, "metric"},
    minimum_interval{YType::uint32, "minimum-interval"},
    object_name{YType::str, "object-name"},
    permanent{YType::boolean, "permanent"},
    tag{YType::uint32, "tag"},
    tunnel_id{YType::uint32, "tunnel-id"},
    vrf_lable{YType::uint32, "vrf-lable"}
{
    yang_name = "vrf-next-hop-next-hop-address-explicit-path-name"; yang_parent_name = "vrf-recursive-next-hop-table";
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddressExplicitPathName::~VrfNextHopNextHopAddressExplicitPathName()
{
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddressExplicitPathName::has_data() const
{
    return explicit_path_name.is_set
	|| next_hop_address.is_set
	|| bfd_fast_detect.is_set
	|| description.is_set
	|| detect_multiplier.is_set
	|| index_.is_set
	|| load_metric.is_set
	|| metric.is_set
	|| minimum_interval.is_set
	|| object_name.is_set
	|| permanent.is_set
	|| tag.is_set
	|| tunnel_id.is_set
	|| vrf_lable.is_set;
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddressExplicitPathName::has_operation() const
{
    return is_set(operation)
	|| is_set(explicit_path_name.operation)
	|| is_set(next_hop_address.operation)
	|| is_set(bfd_fast_detect.operation)
	|| is_set(description.operation)
	|| is_set(detect_multiplier.operation)
	|| is_set(index_.operation)
	|| is_set(load_metric.operation)
	|| is_set(metric.operation)
	|| is_set(minimum_interval.operation)
	|| is_set(object_name.operation)
	|| is_set(permanent.operation)
	|| is_set(tag.operation)
	|| is_set(tunnel_id.operation)
	|| is_set(vrf_lable.operation);
}

std::string RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddressExplicitPathName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-next-hop-next-hop-address-explicit-path-name" <<"[explicit-path-name='" <<explicit_path_name <<"']" <<"[next-hop-address='" <<next_hop_address <<"']";

    return path_buffer.str();

}

EntityPath RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddressExplicitPathName::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VrfNextHopNextHopAddressExplicitPathName' in Cisco_IOS_XR_ip_static_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (explicit_path_name.is_set || is_set(explicit_path_name.operation)) leaf_name_data.push_back(explicit_path_name.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.operation)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (bfd_fast_detect.is_set || is_set(bfd_fast_detect.operation)) leaf_name_data.push_back(bfd_fast_detect.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (detect_multiplier.is_set || is_set(detect_multiplier.operation)) leaf_name_data.push_back(detect_multiplier.get_name_leafdata());
    if (index_.is_set || is_set(index_.operation)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.operation)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (minimum_interval.is_set || is_set(minimum_interval.operation)) leaf_name_data.push_back(minimum_interval.get_name_leafdata());
    if (object_name.is_set || is_set(object_name.operation)) leaf_name_data.push_back(object_name.get_name_leafdata());
    if (permanent.is_set || is_set(permanent.operation)) leaf_name_data.push_back(permanent.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (vrf_lable.is_set || is_set(vrf_lable.operation)) leaf_name_data.push_back(vrf_lable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddressExplicitPathName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddressExplicitPathName::get_children()
{
    return children;
}

void RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddressExplicitPathName::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "explicit-path-name")
    {
        explicit_path_name = value;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
    }
    if(value_path == "bfd-fast-detect")
    {
        bfd_fast_detect = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier = value;
    }
    if(value_path == "index")
    {
        index_ = value;
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "minimum-interval")
    {
        minimum_interval = value;
    }
    if(value_path == "object-name")
    {
        object_name = value;
    }
    if(value_path == "permanent")
    {
        permanent = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable = value;
    }
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopExplicitPathName::VrfNextHopExplicitPathName()
    :
    explicit_path_name{YType::str, "explicit-path-name"},
    bfd_fast_detect{YType::boolean, "bfd-fast-detect"},
    description{YType::str, "description"},
    detect_multiplier{YType::uint32, "detect-multiplier"},
    index_{YType::str, "index"},
    load_metric{YType::uint32, "load-metric"},
    metric{YType::uint32, "metric"},
    minimum_interval{YType::uint32, "minimum-interval"},
    object_name{YType::str, "object-name"},
    permanent{YType::boolean, "permanent"},
    tag{YType::uint32, "tag"},
    tunnel_id{YType::uint32, "tunnel-id"},
    vrf_lable{YType::uint32, "vrf-lable"}
{
    yang_name = "vrf-next-hop-explicit-path-name"; yang_parent_name = "vrf-recursive-next-hop-table";
}

RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopExplicitPathName::~VrfNextHopExplicitPathName()
{
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopExplicitPathName::has_data() const
{
    return explicit_path_name.is_set
	|| bfd_fast_detect.is_set
	|| description.is_set
	|| detect_multiplier.is_set
	|| index_.is_set
	|| load_metric.is_set
	|| metric.is_set
	|| minimum_interval.is_set
	|| object_name.is_set
	|| permanent.is_set
	|| tag.is_set
	|| tunnel_id.is_set
	|| vrf_lable.is_set;
}

bool RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopExplicitPathName::has_operation() const
{
    return is_set(operation)
	|| is_set(explicit_path_name.operation)
	|| is_set(bfd_fast_detect.operation)
	|| is_set(description.operation)
	|| is_set(detect_multiplier.operation)
	|| is_set(index_.operation)
	|| is_set(load_metric.operation)
	|| is_set(metric.operation)
	|| is_set(minimum_interval.operation)
	|| is_set(object_name.operation)
	|| is_set(permanent.operation)
	|| is_set(tag.operation)
	|| is_set(tunnel_id.operation)
	|| is_set(vrf_lable.operation);
}

std::string RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopExplicitPathName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-next-hop-explicit-path-name" <<"[explicit-path-name='" <<explicit_path_name <<"']";

    return path_buffer.str();

}

EntityPath RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopExplicitPathName::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VrfNextHopExplicitPathName' in Cisco_IOS_XR_ip_static_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (explicit_path_name.is_set || is_set(explicit_path_name.operation)) leaf_name_data.push_back(explicit_path_name.get_name_leafdata());
    if (bfd_fast_detect.is_set || is_set(bfd_fast_detect.operation)) leaf_name_data.push_back(bfd_fast_detect.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (detect_multiplier.is_set || is_set(detect_multiplier.operation)) leaf_name_data.push_back(detect_multiplier.get_name_leafdata());
    if (index_.is_set || is_set(index_.operation)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.operation)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (minimum_interval.is_set || is_set(minimum_interval.operation)) leaf_name_data.push_back(minimum_interval.get_name_leafdata());
    if (object_name.is_set || is_set(object_name.operation)) leaf_name_data.push_back(object_name.get_name_leafdata());
    if (permanent.is_set || is_set(permanent.operation)) leaf_name_data.push_back(permanent.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (vrf_lable.is_set || is_set(vrf_lable.operation)) leaf_name_data.push_back(vrf_lable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopExplicitPathName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopExplicitPathName::get_children()
{
    return children;
}

void RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopExplicitPathName::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "explicit-path-name")
    {
        explicit_path_name = value;
    }
    if(value_path == "bfd-fast-detect")
    {
        bfd_fast_detect = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "detect-multiplier")
    {
        detect_multiplier = value;
    }
    if(value_path == "index")
    {
        index_ = value;
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "minimum-interval")
    {
        minimum_interval = value;
    }
    if(value_path == "object-name")
    {
        object_name = value;
    }
    if(value_path == "permanent")
    {
        permanent = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
    if(value_path == "vrf-lable")
    {
        vrf_lable = value;
    }
}


}
}
