
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_infra_xtc_cfg.hpp"

namespace ydk {
namespace Cisco_IOS_XR_infra_xtc_cfg {

Pce::Pce()
    :
    enable{YType::empty, "enable"},
    password{YType::str, "password"},
    server_address{YType::str, "server-address"}
    	,
    backoff(std::make_shared<Pce::Backoff>())
	,disjoint_path(std::make_shared<Pce::DisjointPath>())
	,explicit_paths(std::make_shared<Pce::ExplicitPaths>())
	,logging(std::make_shared<Pce::Logging>())
	,netconf(std::make_shared<Pce::Netconf>())
	,pcc_addresses(std::make_shared<Pce::PccAddresses>())
	,segment_routing(std::make_shared<Pce::SegmentRouting>())
	,state_syncs(std::make_shared<Pce::StateSyncs>())
	,timers(std::make_shared<Pce::Timers>())
{
    backoff->parent = this;
    children["backoff"] = backoff;

    disjoint_path->parent = this;
    children["disjoint-path"] = disjoint_path;

    explicit_paths->parent = this;
    children["explicit-paths"] = explicit_paths;

    logging->parent = this;
    children["logging"] = logging;

    netconf->parent = this;
    children["netconf"] = netconf;

    pcc_addresses->parent = this;
    children["pcc-addresses"] = pcc_addresses;

    segment_routing->parent = this;
    children["segment-routing"] = segment_routing;

    state_syncs->parent = this;
    children["state-syncs"] = state_syncs;

    timers->parent = this;
    children["timers"] = timers;

    yang_name = "pce"; yang_parent_name = "Cisco-IOS-XR-infra-xtc-cfg";
}

Pce::~Pce()
{
}

bool Pce::has_data() const
{
    return enable.is_set
	|| password.is_set
	|| server_address.is_set
	|| (backoff !=  nullptr && backoff->has_data())
	|| (disjoint_path !=  nullptr && disjoint_path->has_data())
	|| (explicit_paths !=  nullptr && explicit_paths->has_data())
	|| (logging !=  nullptr && logging->has_data())
	|| (netconf !=  nullptr && netconf->has_data())
	|| (pcc_addresses !=  nullptr && pcc_addresses->has_data())
	|| (segment_routing !=  nullptr && segment_routing->has_data())
	|| (state_syncs !=  nullptr && state_syncs->has_data())
	|| (timers !=  nullptr && timers->has_data());
}

bool Pce::has_operation() const
{
    return is_set(operation)
	|| is_set(enable.operation)
	|| is_set(password.operation)
	|| is_set(server_address.operation)
	|| (backoff !=  nullptr && backoff->has_operation())
	|| (disjoint_path !=  nullptr && disjoint_path->has_operation())
	|| (explicit_paths !=  nullptr && explicit_paths->has_operation())
	|| (logging !=  nullptr && logging->has_operation())
	|| (netconf !=  nullptr && netconf->has_operation())
	|| (pcc_addresses !=  nullptr && pcc_addresses->has_operation())
	|| (segment_routing !=  nullptr && segment_routing->has_operation())
	|| (state_syncs !=  nullptr && state_syncs->has_operation())
	|| (timers !=  nullptr && timers->has_operation());
}

std::string Pce::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-xtc-cfg:pce";

    return path_buffer.str();

}

EntityPath Pce::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (password.is_set || is_set(password.operation)) leaf_name_data.push_back(password.get_name_leafdata());
    if (server_address.is_set || is_set(server_address.operation)) leaf_name_data.push_back(server_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pce::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "backoff")
    {
        if(backoff != nullptr)
        {
            children["backoff"] = backoff;
        }
        else
        {
            backoff = std::make_shared<Pce::Backoff>();
            backoff->parent = this;
            children["backoff"] = backoff;
        }
        return children.at("backoff");
    }

    if(child_yang_name == "disjoint-path")
    {
        if(disjoint_path != nullptr)
        {
            children["disjoint-path"] = disjoint_path;
        }
        else
        {
            disjoint_path = std::make_shared<Pce::DisjointPath>();
            disjoint_path->parent = this;
            children["disjoint-path"] = disjoint_path;
        }
        return children.at("disjoint-path");
    }

    if(child_yang_name == "explicit-paths")
    {
        if(explicit_paths != nullptr)
        {
            children["explicit-paths"] = explicit_paths;
        }
        else
        {
            explicit_paths = std::make_shared<Pce::ExplicitPaths>();
            explicit_paths->parent = this;
            children["explicit-paths"] = explicit_paths;
        }
        return children.at("explicit-paths");
    }

    if(child_yang_name == "logging")
    {
        if(logging != nullptr)
        {
            children["logging"] = logging;
        }
        else
        {
            logging = std::make_shared<Pce::Logging>();
            logging->parent = this;
            children["logging"] = logging;
        }
        return children.at("logging");
    }

    if(child_yang_name == "netconf")
    {
        if(netconf != nullptr)
        {
            children["netconf"] = netconf;
        }
        else
        {
            netconf = std::make_shared<Pce::Netconf>();
            netconf->parent = this;
            children["netconf"] = netconf;
        }
        return children.at("netconf");
    }

    if(child_yang_name == "pcc-addresses")
    {
        if(pcc_addresses != nullptr)
        {
            children["pcc-addresses"] = pcc_addresses;
        }
        else
        {
            pcc_addresses = std::make_shared<Pce::PccAddresses>();
            pcc_addresses->parent = this;
            children["pcc-addresses"] = pcc_addresses;
        }
        return children.at("pcc-addresses");
    }

    if(child_yang_name == "segment-routing")
    {
        if(segment_routing != nullptr)
        {
            children["segment-routing"] = segment_routing;
        }
        else
        {
            segment_routing = std::make_shared<Pce::SegmentRouting>();
            segment_routing->parent = this;
            children["segment-routing"] = segment_routing;
        }
        return children.at("segment-routing");
    }

    if(child_yang_name == "state-syncs")
    {
        if(state_syncs != nullptr)
        {
            children["state-syncs"] = state_syncs;
        }
        else
        {
            state_syncs = std::make_shared<Pce::StateSyncs>();
            state_syncs->parent = this;
            children["state-syncs"] = state_syncs;
        }
        return children.at("state-syncs");
    }

    if(child_yang_name == "timers")
    {
        if(timers != nullptr)
        {
            children["timers"] = timers;
        }
        else
        {
            timers = std::make_shared<Pce::Timers>();
            timers->parent = this;
            children["timers"] = timers;
        }
        return children.at("timers");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pce::get_children()
{
    if(children.find("backoff") == children.end())
    {
        if(backoff != nullptr)
        {
            children["backoff"] = backoff;
        }
    }

    if(children.find("disjoint-path") == children.end())
    {
        if(disjoint_path != nullptr)
        {
            children["disjoint-path"] = disjoint_path;
        }
    }

    if(children.find("explicit-paths") == children.end())
    {
        if(explicit_paths != nullptr)
        {
            children["explicit-paths"] = explicit_paths;
        }
    }

    if(children.find("logging") == children.end())
    {
        if(logging != nullptr)
        {
            children["logging"] = logging;
        }
    }

    if(children.find("netconf") == children.end())
    {
        if(netconf != nullptr)
        {
            children["netconf"] = netconf;
        }
    }

    if(children.find("pcc-addresses") == children.end())
    {
        if(pcc_addresses != nullptr)
        {
            children["pcc-addresses"] = pcc_addresses;
        }
    }

    if(children.find("segment-routing") == children.end())
    {
        if(segment_routing != nullptr)
        {
            children["segment-routing"] = segment_routing;
        }
    }

    if(children.find("state-syncs") == children.end())
    {
        if(state_syncs != nullptr)
        {
            children["state-syncs"] = state_syncs;
        }
    }

    if(children.find("timers") == children.end())
    {
        if(timers != nullptr)
        {
            children["timers"] = timers;
        }
    }

    return children;
}

void Pce::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "password")
    {
        password = value;
    }
    if(value_path == "server-address")
    {
        server_address = value;
    }
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

Pce::PccAddresses::PccAddresses()
{
    yang_name = "pcc-addresses"; yang_parent_name = "pce";
}

Pce::PccAddresses::~PccAddresses()
{
}

bool Pce::PccAddresses::has_data() const
{
    for (std::size_t index=0; index<pcc_address.size(); index++)
    {
        if(pcc_address[index]->has_data())
            return true;
    }
    return false;
}

bool Pce::PccAddresses::has_operation() const
{
    for (std::size_t index=0; index<pcc_address.size(); index++)
    {
        if(pcc_address[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Pce::PccAddresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pcc-addresses";

    return path_buffer.str();

}

EntityPath Pce::PccAddresses::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-xtc-cfg:pce/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pce::PccAddresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "pcc-address")
    {
        for(auto const & c : pcc_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Pce::PccAddresses::PccAddress>();
        c->parent = this;
        pcc_address.push_back(std::move(c));
        children[segment_path] = pcc_address.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pce::PccAddresses::get_children()
{
    for (auto const & c : pcc_address)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Pce::PccAddresses::set_value(const std::string & value_path, std::string value)
{
}

Pce::PccAddresses::PccAddress::PccAddress()
    :
    address{YType::str, "address"},
    enable{YType::empty, "enable"}
    	,
    lsp_names(std::make_shared<Pce::PccAddresses::PccAddress::LspNames>())
{
    lsp_names->parent = this;
    children["lsp-names"] = lsp_names;

    yang_name = "pcc-address"; yang_parent_name = "pcc-addresses";
}

Pce::PccAddresses::PccAddress::~PccAddress()
{
}

bool Pce::PccAddresses::PccAddress::has_data() const
{
    return address.is_set
	|| enable.is_set
	|| (lsp_names !=  nullptr && lsp_names->has_data());
}

bool Pce::PccAddresses::PccAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(enable.operation)
	|| (lsp_names !=  nullptr && lsp_names->has_operation());
}

std::string Pce::PccAddresses::PccAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pcc-address" <<"[address='" <<address <<"']";

    return path_buffer.str();

}

EntityPath Pce::PccAddresses::PccAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-xtc-cfg:pce/pcc-addresses/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pce::PccAddresses::PccAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "lsp-names")
    {
        if(lsp_names != nullptr)
        {
            children["lsp-names"] = lsp_names;
        }
        else
        {
            lsp_names = std::make_shared<Pce::PccAddresses::PccAddress::LspNames>();
            lsp_names->parent = this;
            children["lsp-names"] = lsp_names;
        }
        return children.at("lsp-names");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pce::PccAddresses::PccAddress::get_children()
{
    if(children.find("lsp-names") == children.end())
    {
        if(lsp_names != nullptr)
        {
            children["lsp-names"] = lsp_names;
        }
    }

    return children;
}

void Pce::PccAddresses::PccAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
}

Pce::PccAddresses::PccAddress::LspNames::LspNames()
{
    yang_name = "lsp-names"; yang_parent_name = "pcc-address";
}

Pce::PccAddresses::PccAddress::LspNames::~LspNames()
{
}

bool Pce::PccAddresses::PccAddress::LspNames::has_data() const
{
    for (std::size_t index=0; index<lsp_name.size(); index++)
    {
        if(lsp_name[index]->has_data())
            return true;
    }
    return false;
}

bool Pce::PccAddresses::PccAddress::LspNames::has_operation() const
{
    for (std::size_t index=0; index<lsp_name.size(); index++)
    {
        if(lsp_name[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Pce::PccAddresses::PccAddress::LspNames::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-names";

    return path_buffer.str();

}

EntityPath Pce::PccAddresses::PccAddress::LspNames::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LspNames' in Cisco_IOS_XR_infra_xtc_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pce::PccAddresses::PccAddress::LspNames::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "lsp-name")
    {
        for(auto const & c : lsp_name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Pce::PccAddresses::PccAddress::LspNames::LspName>();
        c->parent = this;
        lsp_name.push_back(std::move(c));
        children[segment_path] = lsp_name.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pce::PccAddresses::PccAddress::LspNames::get_children()
{
    for (auto const & c : lsp_name)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Pce::PccAddresses::PccAddress::LspNames::set_value(const std::string & value_path, std::string value)
{
}

Pce::PccAddresses::PccAddress::LspNames::LspName::LspName()
    :
    name{YType::str, "name"},
    enable{YType::empty, "enable"},
    explicit_path_name{YType::str, "explicit-path-name"},
    undelegate{YType::empty, "undelegate"}
    	,
    rsvp_te(std::make_shared<Pce::PccAddresses::PccAddress::LspNames::LspName::RsvpTe>())
{
    rsvp_te->parent = this;
    children["rsvp-te"] = rsvp_te;

    yang_name = "lsp-name"; yang_parent_name = "lsp-names";
}

Pce::PccAddresses::PccAddress::LspNames::LspName::~LspName()
{
}

bool Pce::PccAddresses::PccAddress::LspNames::LspName::has_data() const
{
    return name.is_set
	|| enable.is_set
	|| explicit_path_name.is_set
	|| undelegate.is_set
	|| (rsvp_te !=  nullptr && rsvp_te->has_data());
}

bool Pce::PccAddresses::PccAddress::LspNames::LspName::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| is_set(enable.operation)
	|| is_set(explicit_path_name.operation)
	|| is_set(undelegate.operation)
	|| (rsvp_te !=  nullptr && rsvp_te->has_operation());
}

std::string Pce::PccAddresses::PccAddress::LspNames::LspName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-name" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

EntityPath Pce::PccAddresses::PccAddress::LspNames::LspName::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LspName' in Cisco_IOS_XR_infra_xtc_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (explicit_path_name.is_set || is_set(explicit_path_name.operation)) leaf_name_data.push_back(explicit_path_name.get_name_leafdata());
    if (undelegate.is_set || is_set(undelegate.operation)) leaf_name_data.push_back(undelegate.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pce::PccAddresses::PccAddress::LspNames::LspName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "rsvp-te")
    {
        if(rsvp_te != nullptr)
        {
            children["rsvp-te"] = rsvp_te;
        }
        else
        {
            rsvp_te = std::make_shared<Pce::PccAddresses::PccAddress::LspNames::LspName::RsvpTe>();
            rsvp_te->parent = this;
            children["rsvp-te"] = rsvp_te;
        }
        return children.at("rsvp-te");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pce::PccAddresses::PccAddress::LspNames::LspName::get_children()
{
    if(children.find("rsvp-te") == children.end())
    {
        if(rsvp_te != nullptr)
        {
            children["rsvp-te"] = rsvp_te;
        }
    }

    return children;
}

void Pce::PccAddresses::PccAddress::LspNames::LspName::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "explicit-path-name")
    {
        explicit_path_name = value;
    }
    if(value_path == "undelegate")
    {
        undelegate = value;
    }
}

Pce::PccAddresses::PccAddress::LspNames::LspName::RsvpTe::RsvpTe()
    :
    bandwidth{YType::int32, "bandwidth"},
    enable{YType::empty, "enable"},
    fast_protect{YType::empty, "fast-protect"}
    	,
    affinity(std::make_shared<Pce::PccAddresses::PccAddress::LspNames::LspName::RsvpTe::Affinity>())
	,priority(nullptr) // presence node
{
    affinity->parent = this;
    children["affinity"] = affinity;

    yang_name = "rsvp-te"; yang_parent_name = "lsp-name";
}

Pce::PccAddresses::PccAddress::LspNames::LspName::RsvpTe::~RsvpTe()
{
}

bool Pce::PccAddresses::PccAddress::LspNames::LspName::RsvpTe::has_data() const
{
    return bandwidth.is_set
	|| enable.is_set
	|| fast_protect.is_set
	|| (affinity !=  nullptr && affinity->has_data())
	|| (priority !=  nullptr && priority->has_data());
}

bool Pce::PccAddresses::PccAddress::LspNames::LspName::RsvpTe::has_operation() const
{
    return is_set(operation)
	|| is_set(bandwidth.operation)
	|| is_set(enable.operation)
	|| is_set(fast_protect.operation)
	|| (affinity !=  nullptr && affinity->has_operation())
	|| (priority !=  nullptr && priority->has_operation());
}

std::string Pce::PccAddresses::PccAddress::LspNames::LspName::RsvpTe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsvp-te";

    return path_buffer.str();

}

EntityPath Pce::PccAddresses::PccAddress::LspNames::LspName::RsvpTe::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RsvpTe' in Cisco_IOS_XR_infra_xtc_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bandwidth.is_set || is_set(bandwidth.operation)) leaf_name_data.push_back(bandwidth.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (fast_protect.is_set || is_set(fast_protect.operation)) leaf_name_data.push_back(fast_protect.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pce::PccAddresses::PccAddress::LspNames::LspName::RsvpTe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "affinity")
    {
        if(affinity != nullptr)
        {
            children["affinity"] = affinity;
        }
        else
        {
            affinity = std::make_shared<Pce::PccAddresses::PccAddress::LspNames::LspName::RsvpTe::Affinity>();
            affinity->parent = this;
            children["affinity"] = affinity;
        }
        return children.at("affinity");
    }

    if(child_yang_name == "priority")
    {
        if(priority != nullptr)
        {
            children["priority"] = priority;
        }
        else
        {
            priority = std::make_shared<Pce::PccAddresses::PccAddress::LspNames::LspName::RsvpTe::Priority>();
            priority->parent = this;
            children["priority"] = priority;
        }
        return children.at("priority");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pce::PccAddresses::PccAddress::LspNames::LspName::RsvpTe::get_children()
{
    if(children.find("affinity") == children.end())
    {
        if(affinity != nullptr)
        {
            children["affinity"] = affinity;
        }
    }

    if(children.find("priority") == children.end())
    {
        if(priority != nullptr)
        {
            children["priority"] = priority;
        }
    }

    return children;
}

void Pce::PccAddresses::PccAddress::LspNames::LspName::RsvpTe::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bandwidth")
    {
        bandwidth = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "fast-protect")
    {
        fast_protect = value;
    }
}

Pce::PccAddresses::PccAddress::LspNames::LspName::RsvpTe::Affinity::Affinity()
    :
    exclude_any{YType::str, "exclude-any"},
    include_all{YType::str, "include-all"},
    include_any{YType::str, "include-any"}
{
    yang_name = "affinity"; yang_parent_name = "rsvp-te";
}

Pce::PccAddresses::PccAddress::LspNames::LspName::RsvpTe::Affinity::~Affinity()
{
}

bool Pce::PccAddresses::PccAddress::LspNames::LspName::RsvpTe::Affinity::has_data() const
{
    return exclude_any.is_set
	|| include_all.is_set
	|| include_any.is_set;
}

bool Pce::PccAddresses::PccAddress::LspNames::LspName::RsvpTe::Affinity::has_operation() const
{
    return is_set(operation)
	|| is_set(exclude_any.operation)
	|| is_set(include_all.operation)
	|| is_set(include_any.operation);
}

std::string Pce::PccAddresses::PccAddress::LspNames::LspName::RsvpTe::Affinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "affinity";

    return path_buffer.str();

}

EntityPath Pce::PccAddresses::PccAddress::LspNames::LspName::RsvpTe::Affinity::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Affinity' in Cisco_IOS_XR_infra_xtc_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (exclude_any.is_set || is_set(exclude_any.operation)) leaf_name_data.push_back(exclude_any.get_name_leafdata());
    if (include_all.is_set || is_set(include_all.operation)) leaf_name_data.push_back(include_all.get_name_leafdata());
    if (include_any.is_set || is_set(include_any.operation)) leaf_name_data.push_back(include_any.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pce::PccAddresses::PccAddress::LspNames::LspName::RsvpTe::Affinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Pce::PccAddresses::PccAddress::LspNames::LspName::RsvpTe::Affinity::get_children()
{
    return children;
}

void Pce::PccAddresses::PccAddress::LspNames::LspName::RsvpTe::Affinity::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "exclude-any")
    {
        exclude_any = value;
    }
    if(value_path == "include-all")
    {
        include_all = value;
    }
    if(value_path == "include-any")
    {
        include_any = value;
    }
}

Pce::PccAddresses::PccAddress::LspNames::LspName::RsvpTe::Priority::Priority()
    :
    hold_priority{YType::uint32, "hold-priority"},
    setup_priority{YType::uint32, "setup-priority"}
{
    yang_name = "priority"; yang_parent_name = "rsvp-te";
}

Pce::PccAddresses::PccAddress::LspNames::LspName::RsvpTe::Priority::~Priority()
{
}

bool Pce::PccAddresses::PccAddress::LspNames::LspName::RsvpTe::Priority::has_data() const
{
    return hold_priority.is_set
	|| setup_priority.is_set;
}

bool Pce::PccAddresses::PccAddress::LspNames::LspName::RsvpTe::Priority::has_operation() const
{
    return is_set(operation)
	|| is_set(hold_priority.operation)
	|| is_set(setup_priority.operation);
}

std::string Pce::PccAddresses::PccAddress::LspNames::LspName::RsvpTe::Priority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority";

    return path_buffer.str();

}

EntityPath Pce::PccAddresses::PccAddress::LspNames::LspName::RsvpTe::Priority::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Priority' in Cisco_IOS_XR_infra_xtc_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hold_priority.is_set || is_set(hold_priority.operation)) leaf_name_data.push_back(hold_priority.get_name_leafdata());
    if (setup_priority.is_set || is_set(setup_priority.operation)) leaf_name_data.push_back(setup_priority.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pce::PccAddresses::PccAddress::LspNames::LspName::RsvpTe::Priority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Pce::PccAddresses::PccAddress::LspNames::LspName::RsvpTe::Priority::get_children()
{
    return children;
}

void Pce::PccAddresses::PccAddress::LspNames::LspName::RsvpTe::Priority::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "hold-priority")
    {
        hold_priority = value;
    }
    if(value_path == "setup-priority")
    {
        setup_priority = value;
    }
}

Pce::Logging::Logging()
    :
    fallback{YType::empty, "fallback"},
    no_path{YType::empty, "no-path"}
{
    yang_name = "logging"; yang_parent_name = "pce";
}

Pce::Logging::~Logging()
{
}

bool Pce::Logging::has_data() const
{
    return fallback.is_set
	|| no_path.is_set;
}

bool Pce::Logging::has_operation() const
{
    return is_set(operation)
	|| is_set(fallback.operation)
	|| is_set(no_path.operation);
}

std::string Pce::Logging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logging";

    return path_buffer.str();

}

EntityPath Pce::Logging::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-xtc-cfg:pce/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fallback.is_set || is_set(fallback.operation)) leaf_name_data.push_back(fallback.get_name_leafdata());
    if (no_path.is_set || is_set(no_path.operation)) leaf_name_data.push_back(no_path.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pce::Logging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Pce::Logging::get_children()
{
    return children;
}

void Pce::Logging::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "fallback")
    {
        fallback = value;
    }
    if(value_path == "no-path")
    {
        no_path = value;
    }
}

Pce::Backoff::Backoff()
    :
    difference{YType::uint32, "difference"},
    ratio{YType::uint32, "ratio"},
    threshold{YType::uint32, "threshold"}
{
    yang_name = "backoff"; yang_parent_name = "pce";
}

Pce::Backoff::~Backoff()
{
}

bool Pce::Backoff::has_data() const
{
    return difference.is_set
	|| ratio.is_set
	|| threshold.is_set;
}

bool Pce::Backoff::has_operation() const
{
    return is_set(operation)
	|| is_set(difference.operation)
	|| is_set(ratio.operation)
	|| is_set(threshold.operation);
}

std::string Pce::Backoff::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backoff";

    return path_buffer.str();

}

EntityPath Pce::Backoff::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-xtc-cfg:pce/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (difference.is_set || is_set(difference.operation)) leaf_name_data.push_back(difference.get_name_leafdata());
    if (ratio.is_set || is_set(ratio.operation)) leaf_name_data.push_back(ratio.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pce::Backoff::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Pce::Backoff::get_children()
{
    return children;
}

void Pce::Backoff::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "difference")
    {
        difference = value;
    }
    if(value_path == "ratio")
    {
        ratio = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

Pce::StateSyncs::StateSyncs()
{
    yang_name = "state-syncs"; yang_parent_name = "pce";
}

Pce::StateSyncs::~StateSyncs()
{
}

bool Pce::StateSyncs::has_data() const
{
    for (std::size_t index=0; index<state_sync.size(); index++)
    {
        if(state_sync[index]->has_data())
            return true;
    }
    return false;
}

bool Pce::StateSyncs::has_operation() const
{
    for (std::size_t index=0; index<state_sync.size(); index++)
    {
        if(state_sync[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Pce::StateSyncs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state-syncs";

    return path_buffer.str();

}

EntityPath Pce::StateSyncs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-xtc-cfg:pce/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pce::StateSyncs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "state-sync")
    {
        for(auto const & c : state_sync)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Pce::StateSyncs::StateSync>();
        c->parent = this;
        state_sync.push_back(std::move(c));
        children[segment_path] = state_sync.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pce::StateSyncs::get_children()
{
    for (auto const & c : state_sync)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Pce::StateSyncs::set_value(const std::string & value_path, std::string value)
{
}

Pce::StateSyncs::StateSync::StateSync()
    :
    address{YType::str, "address"}
{
    yang_name = "state-sync"; yang_parent_name = "state-syncs";
}

Pce::StateSyncs::StateSync::~StateSync()
{
}

bool Pce::StateSyncs::StateSync::has_data() const
{
    return address.is_set;
}

bool Pce::StateSyncs::StateSync::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation);
}

std::string Pce::StateSyncs::StateSync::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state-sync" <<"[address='" <<address <<"']";

    return path_buffer.str();

}

EntityPath Pce::StateSyncs::StateSync::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-xtc-cfg:pce/state-syncs/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pce::StateSyncs::StateSync::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Pce::StateSyncs::StateSync::get_children()
{
    return children;
}

void Pce::StateSyncs::StateSync::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
}

Pce::SegmentRouting::SegmentRouting()
    :
    strict_sid_only{YType::empty, "strict-sid-only"},
    te_latency{YType::empty, "te-latency"}
{
    yang_name = "segment-routing"; yang_parent_name = "pce";
}

Pce::SegmentRouting::~SegmentRouting()
{
}

bool Pce::SegmentRouting::has_data() const
{
    return strict_sid_only.is_set
	|| te_latency.is_set;
}

bool Pce::SegmentRouting::has_operation() const
{
    return is_set(operation)
	|| is_set(strict_sid_only.operation)
	|| is_set(te_latency.operation);
}

std::string Pce::SegmentRouting::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "segment-routing";

    return path_buffer.str();

}

EntityPath Pce::SegmentRouting::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-xtc-cfg:pce/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (strict_sid_only.is_set || is_set(strict_sid_only.operation)) leaf_name_data.push_back(strict_sid_only.get_name_leafdata());
    if (te_latency.is_set || is_set(te_latency.operation)) leaf_name_data.push_back(te_latency.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pce::SegmentRouting::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Pce::SegmentRouting::get_children()
{
    return children;
}

void Pce::SegmentRouting::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "strict-sid-only")
    {
        strict_sid_only = value;
    }
    if(value_path == "te-latency")
    {
        te_latency = value;
    }
}

Pce::Timers::Timers()
    :
    keepalive{YType::uint32, "keepalive"},
    minimum_peer_keepalive{YType::uint32, "minimum-peer-keepalive"},
    reoptimization_timer{YType::uint32, "reoptimization-timer"}
{
    yang_name = "timers"; yang_parent_name = "pce";
}

Pce::Timers::~Timers()
{
}

bool Pce::Timers::has_data() const
{
    return keepalive.is_set
	|| minimum_peer_keepalive.is_set
	|| reoptimization_timer.is_set;
}

bool Pce::Timers::has_operation() const
{
    return is_set(operation)
	|| is_set(keepalive.operation)
	|| is_set(minimum_peer_keepalive.operation)
	|| is_set(reoptimization_timer.operation);
}

std::string Pce::Timers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timers";

    return path_buffer.str();

}

EntityPath Pce::Timers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-xtc-cfg:pce/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (keepalive.is_set || is_set(keepalive.operation)) leaf_name_data.push_back(keepalive.get_name_leafdata());
    if (minimum_peer_keepalive.is_set || is_set(minimum_peer_keepalive.operation)) leaf_name_data.push_back(minimum_peer_keepalive.get_name_leafdata());
    if (reoptimization_timer.is_set || is_set(reoptimization_timer.operation)) leaf_name_data.push_back(reoptimization_timer.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pce::Timers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Pce::Timers::get_children()
{
    return children;
}

void Pce::Timers::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "keepalive")
    {
        keepalive = value;
    }
    if(value_path == "minimum-peer-keepalive")
    {
        minimum_peer_keepalive = value;
    }
    if(value_path == "reoptimization-timer")
    {
        reoptimization_timer = value;
    }
}

Pce::Netconf::Netconf()
    :
    netconf_ssh(std::make_shared<Pce::Netconf::NetconfSsh>())
{
    netconf_ssh->parent = this;
    children["netconf-ssh"] = netconf_ssh;

    yang_name = "netconf"; yang_parent_name = "pce";
}

Pce::Netconf::~Netconf()
{
}

bool Pce::Netconf::has_data() const
{
    return (netconf_ssh !=  nullptr && netconf_ssh->has_data());
}

bool Pce::Netconf::has_operation() const
{
    return is_set(operation)
	|| (netconf_ssh !=  nullptr && netconf_ssh->has_operation());
}

std::string Pce::Netconf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "netconf";

    return path_buffer.str();

}

EntityPath Pce::Netconf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-xtc-cfg:pce/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pce::Netconf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "netconf-ssh")
    {
        if(netconf_ssh != nullptr)
        {
            children["netconf-ssh"] = netconf_ssh;
        }
        else
        {
            netconf_ssh = std::make_shared<Pce::Netconf::NetconfSsh>();
            netconf_ssh->parent = this;
            children["netconf-ssh"] = netconf_ssh;
        }
        return children.at("netconf-ssh");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pce::Netconf::get_children()
{
    if(children.find("netconf-ssh") == children.end())
    {
        if(netconf_ssh != nullptr)
        {
            children["netconf-ssh"] = netconf_ssh;
        }
    }

    return children;
}

void Pce::Netconf::set_value(const std::string & value_path, std::string value)
{
}

Pce::Netconf::NetconfSsh::NetconfSsh()
    :
    netconf_ssh_password{YType::str, "netconf-ssh-password"},
    netconf_ssh_user{YType::str, "netconf-ssh-user"}
{
    yang_name = "netconf-ssh"; yang_parent_name = "netconf";
}

Pce::Netconf::NetconfSsh::~NetconfSsh()
{
}

bool Pce::Netconf::NetconfSsh::has_data() const
{
    return netconf_ssh_password.is_set
	|| netconf_ssh_user.is_set;
}

bool Pce::Netconf::NetconfSsh::has_operation() const
{
    return is_set(operation)
	|| is_set(netconf_ssh_password.operation)
	|| is_set(netconf_ssh_user.operation);
}

std::string Pce::Netconf::NetconfSsh::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "netconf-ssh";

    return path_buffer.str();

}

EntityPath Pce::Netconf::NetconfSsh::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-xtc-cfg:pce/netconf/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (netconf_ssh_password.is_set || is_set(netconf_ssh_password.operation)) leaf_name_data.push_back(netconf_ssh_password.get_name_leafdata());
    if (netconf_ssh_user.is_set || is_set(netconf_ssh_user.operation)) leaf_name_data.push_back(netconf_ssh_user.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pce::Netconf::NetconfSsh::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Pce::Netconf::NetconfSsh::get_children()
{
    return children;
}

void Pce::Netconf::NetconfSsh::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "netconf-ssh-password")
    {
        netconf_ssh_password = value;
    }
    if(value_path == "netconf-ssh-user")
    {
        netconf_ssh_user = value;
    }
}

Pce::DisjointPath::DisjointPath()
    :
    groups(std::make_shared<Pce::DisjointPath::Groups>())
{
    groups->parent = this;
    children["groups"] = groups;

    yang_name = "disjoint-path"; yang_parent_name = "pce";
}

Pce::DisjointPath::~DisjointPath()
{
}

bool Pce::DisjointPath::has_data() const
{
    return (groups !=  nullptr && groups->has_data());
}

bool Pce::DisjointPath::has_operation() const
{
    return is_set(operation)
	|| (groups !=  nullptr && groups->has_operation());
}

std::string Pce::DisjointPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disjoint-path";

    return path_buffer.str();

}

EntityPath Pce::DisjointPath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-xtc-cfg:pce/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pce::DisjointPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "groups")
    {
        if(groups != nullptr)
        {
            children["groups"] = groups;
        }
        else
        {
            groups = std::make_shared<Pce::DisjointPath::Groups>();
            groups->parent = this;
            children["groups"] = groups;
        }
        return children.at("groups");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pce::DisjointPath::get_children()
{
    if(children.find("groups") == children.end())
    {
        if(groups != nullptr)
        {
            children["groups"] = groups;
        }
    }

    return children;
}

void Pce::DisjointPath::set_value(const std::string & value_path, std::string value)
{
}

Pce::DisjointPath::Groups::Groups()
{
    yang_name = "groups"; yang_parent_name = "disjoint-path";
}

Pce::DisjointPath::Groups::~Groups()
{
}

bool Pce::DisjointPath::Groups::has_data() const
{
    for (std::size_t index=0; index<group.size(); index++)
    {
        if(group[index]->has_data())
            return true;
    }
    return false;
}

bool Pce::DisjointPath::Groups::has_operation() const
{
    for (std::size_t index=0; index<group.size(); index++)
    {
        if(group[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Pce::DisjointPath::Groups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "groups";

    return path_buffer.str();

}

EntityPath Pce::DisjointPath::Groups::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-xtc-cfg:pce/disjoint-path/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pce::DisjointPath::Groups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "group")
    {
        for(auto const & c : group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Pce::DisjointPath::Groups::Group>();
        c->parent = this;
        group.push_back(std::move(c));
        children[segment_path] = group.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pce::DisjointPath::Groups::get_children()
{
    for (auto const & c : group)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Pce::DisjointPath::Groups::set_value(const std::string & value_path, std::string value)
{
}

Pce::DisjointPath::Groups::Group::Group()
    :
    dp_type{YType::enumeration, "dp-type"},
    group_id{YType::uint32, "group-id"},
    sub_id{YType::uint32, "sub-id"},
    strict{YType::empty, "strict"}
{
    yang_name = "group"; yang_parent_name = "groups";
}

Pce::DisjointPath::Groups::Group::~Group()
{
}

bool Pce::DisjointPath::Groups::Group::has_data() const
{
    return dp_type.is_set
	|| group_id.is_set
	|| sub_id.is_set
	|| strict.is_set;
}

bool Pce::DisjointPath::Groups::Group::has_operation() const
{
    return is_set(operation)
	|| is_set(dp_type.operation)
	|| is_set(group_id.operation)
	|| is_set(sub_id.operation)
	|| is_set(strict.operation);
}

std::string Pce::DisjointPath::Groups::Group::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group" <<"[dp-type='" <<dp_type <<"']" <<"[group-id='" <<group_id <<"']" <<"[sub-id='" <<sub_id <<"']";

    return path_buffer.str();

}

EntityPath Pce::DisjointPath::Groups::Group::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-xtc-cfg:pce/disjoint-path/groups/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dp_type.is_set || is_set(dp_type.operation)) leaf_name_data.push_back(dp_type.get_name_leafdata());
    if (group_id.is_set || is_set(group_id.operation)) leaf_name_data.push_back(group_id.get_name_leafdata());
    if (sub_id.is_set || is_set(sub_id.operation)) leaf_name_data.push_back(sub_id.get_name_leafdata());
    if (strict.is_set || is_set(strict.operation)) leaf_name_data.push_back(strict.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pce::DisjointPath::Groups::Group::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Pce::DisjointPath::Groups::Group::get_children()
{
    return children;
}

void Pce::DisjointPath::Groups::Group::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dp-type")
    {
        dp_type = value;
    }
    if(value_path == "group-id")
    {
        group_id = value;
    }
    if(value_path == "sub-id")
    {
        sub_id = value;
    }
    if(value_path == "strict")
    {
        strict = value;
    }
}

Pce::ExplicitPaths::ExplicitPaths()
{
    yang_name = "explicit-paths"; yang_parent_name = "pce";
}

Pce::ExplicitPaths::~ExplicitPaths()
{
}

bool Pce::ExplicitPaths::has_data() const
{
    for (std::size_t index=0; index<explicit_path.size(); index++)
    {
        if(explicit_path[index]->has_data())
            return true;
    }
    return false;
}

bool Pce::ExplicitPaths::has_operation() const
{
    for (std::size_t index=0; index<explicit_path.size(); index++)
    {
        if(explicit_path[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Pce::ExplicitPaths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "explicit-paths";

    return path_buffer.str();

}

EntityPath Pce::ExplicitPaths::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-xtc-cfg:pce/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pce::ExplicitPaths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "explicit-path")
    {
        for(auto const & c : explicit_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Pce::ExplicitPaths::ExplicitPath>();
        c->parent = this;
        explicit_path.push_back(std::move(c));
        children[segment_path] = explicit_path.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pce::ExplicitPaths::get_children()
{
    for (auto const & c : explicit_path)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Pce::ExplicitPaths::set_value(const std::string & value_path, std::string value)
{
}

Pce::ExplicitPaths::ExplicitPath::ExplicitPath()
    :
    name{YType::str, "name"},
    enable{YType::empty, "enable"}
    	,
    path_hops(std::make_shared<Pce::ExplicitPaths::ExplicitPath::PathHops>())
{
    path_hops->parent = this;
    children["path-hops"] = path_hops;

    yang_name = "explicit-path"; yang_parent_name = "explicit-paths";
}

Pce::ExplicitPaths::ExplicitPath::~ExplicitPath()
{
}

bool Pce::ExplicitPaths::ExplicitPath::has_data() const
{
    return name.is_set
	|| enable.is_set
	|| (path_hops !=  nullptr && path_hops->has_data());
}

bool Pce::ExplicitPaths::ExplicitPath::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| is_set(enable.operation)
	|| (path_hops !=  nullptr && path_hops->has_operation());
}

std::string Pce::ExplicitPaths::ExplicitPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "explicit-path" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

EntityPath Pce::ExplicitPaths::ExplicitPath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-xtc-cfg:pce/explicit-paths/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pce::ExplicitPaths::ExplicitPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "path-hops")
    {
        if(path_hops != nullptr)
        {
            children["path-hops"] = path_hops;
        }
        else
        {
            path_hops = std::make_shared<Pce::ExplicitPaths::ExplicitPath::PathHops>();
            path_hops->parent = this;
            children["path-hops"] = path_hops;
        }
        return children.at("path-hops");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pce::ExplicitPaths::ExplicitPath::get_children()
{
    if(children.find("path-hops") == children.end())
    {
        if(path_hops != nullptr)
        {
            children["path-hops"] = path_hops;
        }
    }

    return children;
}

void Pce::ExplicitPaths::ExplicitPath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
}

Pce::ExplicitPaths::ExplicitPath::PathHops::PathHops()
{
    yang_name = "path-hops"; yang_parent_name = "explicit-path";
}

Pce::ExplicitPaths::ExplicitPath::PathHops::~PathHops()
{
}

bool Pce::ExplicitPaths::ExplicitPath::PathHops::has_data() const
{
    for (std::size_t index=0; index<path_hop.size(); index++)
    {
        if(path_hop[index]->has_data())
            return true;
    }
    return false;
}

bool Pce::ExplicitPaths::ExplicitPath::PathHops::has_operation() const
{
    for (std::size_t index=0; index<path_hop.size(); index++)
    {
        if(path_hop[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Pce::ExplicitPaths::ExplicitPath::PathHops::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-hops";

    return path_buffer.str();

}

EntityPath Pce::ExplicitPaths::ExplicitPath::PathHops::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PathHops' in Cisco_IOS_XR_infra_xtc_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pce::ExplicitPaths::ExplicitPath::PathHops::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "path-hop")
    {
        for(auto const & c : path_hop)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Pce::ExplicitPaths::ExplicitPath::PathHops::PathHop>();
        c->parent = this;
        path_hop.push_back(std::move(c));
        children[segment_path] = path_hop.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pce::ExplicitPaths::ExplicitPath::PathHops::get_children()
{
    for (auto const & c : path_hop)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Pce::ExplicitPaths::ExplicitPath::PathHops::set_value(const std::string & value_path, std::string value)
{
}

Pce::ExplicitPaths::ExplicitPath::PathHops::PathHop::PathHop()
    :
    index_{YType::uint32, "index"},
    address{YType::str, "address"},
    hop_type{YType::enumeration, "hop-type"},
    mpls_label{YType::uint32, "mpls-label"},
    remote_address{YType::str, "remote-address"}
{
    yang_name = "path-hop"; yang_parent_name = "path-hops";
}

Pce::ExplicitPaths::ExplicitPath::PathHops::PathHop::~PathHop()
{
}

bool Pce::ExplicitPaths::ExplicitPath::PathHops::PathHop::has_data() const
{
    return index_.is_set
	|| address.is_set
	|| hop_type.is_set
	|| mpls_label.is_set
	|| remote_address.is_set;
}

bool Pce::ExplicitPaths::ExplicitPath::PathHops::PathHop::has_operation() const
{
    return is_set(operation)
	|| is_set(index_.operation)
	|| is_set(address.operation)
	|| is_set(hop_type.operation)
	|| is_set(mpls_label.operation)
	|| is_set(remote_address.operation);
}

std::string Pce::ExplicitPaths::ExplicitPath::PathHops::PathHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-hop" <<"[index='" <<index_ <<"']";

    return path_buffer.str();

}

EntityPath Pce::ExplicitPaths::ExplicitPath::PathHops::PathHop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PathHop' in Cisco_IOS_XR_infra_xtc_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (index_.is_set || is_set(index_.operation)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (hop_type.is_set || is_set(hop_type.operation)) leaf_name_data.push_back(hop_type.get_name_leafdata());
    if (mpls_label.is_set || is_set(mpls_label.operation)) leaf_name_data.push_back(mpls_label.get_name_leafdata());
    if (remote_address.is_set || is_set(remote_address.operation)) leaf_name_data.push_back(remote_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pce::ExplicitPaths::ExplicitPath::PathHops::PathHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Pce::ExplicitPaths::ExplicitPath::PathHops::PathHop::get_children()
{
    return children;
}

void Pce::ExplicitPaths::ExplicitPath::PathHops::PathHop::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "index")
    {
        index_ = value;
    }
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "hop-type")
    {
        hop_type = value;
    }
    if(value_path == "mpls-label")
    {
        mpls_label = value;
    }
    if(value_path == "remote-address")
    {
        remote_address = value;
    }
}

const Enum::YLeaf PceExplicitPathHopEnum::address {1, "address"};
const Enum::YLeaf PceExplicitPathHopEnum::sid_node {2, "sid-node"};
const Enum::YLeaf PceExplicitPathHopEnum::sid_adjancency {3, "sid-adjancency"};
const Enum::YLeaf PceExplicitPathHopEnum::binding_sid {4, "binding-sid"};

const Enum::YLeaf PceDisjointPathEnum::link {1, "link"};
const Enum::YLeaf PceDisjointPathEnum::node {2, "node"};
const Enum::YLeaf PceDisjointPathEnum::srlg {3, "srlg"};


}
}
